#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    
    int main_board[9]={1,2,3,4,5,6,7,8,9}; // It defines the main board to store all the values from 1-9
    int game_board[9]; // It defines an array to form the actual game board with random numbers and hidden values
    int temp_board[9]; // It defines an array which is a copy of the game_board and will be displayed to the user and will be updated in each iteration
    int row_results[3]; // this is an array that stores the results of calculation of each row
    int column_results[3]; // this is an array that stores the results of calculation of each column
    char operators_array[12]; // this is an array that stores random operations
    int i,j; // these variables will be used for loop indexes
//    int rand_num,temp1; // rand_num will be used to store the result of random number generations, temp1 will be used as a temporary variable
    int level; // this variable stores the level of difficulty
    char check_game; // this is a flag variable to determine if the user solves the game correctly
    int play_again; // this is a flag variable to determine if the user wants to play again or not
    int missing_count = 0; // this is a variable that keep track of the number of missing values in the game board.
    
    srand(time(NULL));  // It generates a seed, using current time, for the random generator
 
    do{
        check_game=1;
        level=0;
        printf("Welcome to Nine-Gaps game!...\n");
	    printf("*****************************\n");
	    printf("      *****************      \n");
	    printf("            *****            \n");
	    printf("              *              \n");
	
        // get the level of difficulty from the user
        do{
		    puts("Choose the level of difficulty (1-Beginner, 2-Intermediate, 3-Advanced, 4-Expert):");
		    scanf("%d",&level);
		    if ((level < 1) || (level > 4))
			    puts("The entered value is not valid");
		    else{
		        switch (level){
		            case 1:
		                puts("You have chosen the Beginner level");
				missing_count = 3;
		                break;
		            case 2:
		                puts("You have chosen the Intermediate level");
				missing_count = 5;
		                break;
		            case 3:
		                puts("You have chosen the Advanced level");
				missing_count = 7;
		                break;
		            case 4:
		                puts("You have chosen the Expert level");
				missing_count = 9;
		                break;
		        }
		        break;
		    }
	    } while (1);
        //////////////////////////////////////////////////
    
        // 1- generate a random main board by shuffling the main_board      (COMPLETE THIS PART)

	int count;

	for (count = 0; count <= 75; count++) {

		int save, x, y;

		x = rand()%9;
		y = rand()%9;

		save = main_board[y];
		main_board[y] = main_board[x];
		main_board[x] = save;

	}

//	for (int spot = 0; spot < 9; spot++) {
//		printf("%d  ", main_board[spot]);
//	}

        /////////////////////////////////////////////////
    

        // 2- generate random operators ( + , - , x )      (COMPLETE THIS PART)
    
	for (int oper = 0; oper < 12; oper ++) {
			
		int o = rand()%3;			
			
		if (o == 0) {
			operators_array[oper] = '+';
		}
		if (o == 1) {
			operators_array[oper] = '-';
		}
		if (o == 2) {
			operators_array[oper] = '*';
		}
//		printf("%c   ", operators_array[oper]);
	}

        /////////////////////////////////////////////////
        
        // 3- Calculate the results in columns and rows      (COMPLETE THIS PART)

	row_results[0] = main_board[0];

	row_results[1] = main_board[3];

	row_results[2] = main_board[6];

	int new = 0;

	int rres;

	int opercount = 0;

	for (rres = 0; rres <= 7; rres++) {

		if (operators_array[opercount] == '+') {
			row_results[new] = row_results[new] + main_board[rres+1];
		}
		else if (operators_array[opercount] == '-') {
			row_results[new] = row_results[new] - main_board[rres+1];
		}
		else {
			row_results[new] = row_results[new] * main_board[rres+1];
		}

		opercount++;

		if (opercount == 2 || opercount == 4) {
			new++;
			rres++;
		}
		
		if (opercount == 6) {
			break;
		}
		
	}

	column_results[0] = main_board[0];

	column_results[1] = main_board[1];

	column_results[2] = main_board[2];

	opercount = 6;

	int index = 0;

	int loc = 3;

	int change = 6;

	while (opercount < 12) {

		if (operators_array[change] == '+') {
			column_results[index] = column_results[index] + main_board[loc];
		}
		else if (operators_array[change] == '-') {
			column_results[index] = column_results[index] - main_board[loc];
		}
		else {
			column_results[index] = column_results[index] * main_board[loc];
		}
		
		loc = loc + 3;

		opercount++;

		change = change + 3;

		if (opercount == 8) {
			index++;
			loc = 4;
			change = 7;
		}

		if (opercount == 10) {
			index++;
			loc = 5;
			change = 8;		
		}	

		if (opercount == 12) {
			break;
		}
	}

        ////////////////////////////////////////////////////////
    
        // 4- initializing missing array to 0      (COMPLETE THIS PART)

	int missing_array[9] = {0};        
        
        ////////////////////////////////////////////////////////
        
        
        // 5- copy the main_board into game_board      (COMPLETE THIS PART)
    
	for (int count = 0; count < 9; count++) {
		game_board[count] = main_board[count];
	}
    
        /////////////////////////////////////////////////////////
    
    
        // Based on the selected level, 3 or 5 or 7 board values will be hidden.
    
        i=0; // initializing i to 0
    
        while (i < level*2+1){								
		    int r = rand() % 3;
		    int c = rand() % 3;
		    if (game_board[3*r+c]!='?'){ 
			    missing_array[game_board[3*r+c]-1]= game_board[3*r+c]; // the hidden values will be added to the set of missing values
		        game_board[3*r+c] = '?';
			    i++;
		    } // end of if
	    } // end of while
	    ////////////////////////////////////////////////////////
	
        // 6- Copy the game board into a temporary board      (COMPLETE THIS PART)

	for (int inc = 0; inc < 9; inc++) {
		temp_board[inc] = game_board[inc];
	}
        
        ///////////////////////////////////////////////////////
    
        // the inner loop to get values from the user
        do{
        
            // Display the game board after each update
            
            printf("Game Board:\n");
	        printf("---------------------------------------------------\n");
            for (i=0;i<3;i++){
                if (i>0){                   // show the column operators
                    for (j=0;j<3;j++){
                        printf(" %c\t\t", operators_array[3*(i+1)+ j]);
                    }
                    printf("\n");
                }
                
                for (j=0;j<3;j++){          // show the rows
                    if (game_board[(i*3)+j]!='?')
                        printf(" %d\t ", temp_board[(i*3)+j]);
                    else if (game_board[(i*3)+j]!=temp_board[(i*3)+j]){
                        printf(" %d?\t ", temp_board[(i*3)+j]);
                    }
                    else
                        printf(" ?\t ");
                
                    if (j<2)
                        printf(" %c\t", operators_array[(i*2) + j]);
                    else
                        printf("= %d", row_results[i]);       // show the rows results
                }
                printf("\n");
                if (i==2)
                    printf (" =\t\t =\t\t =\n");    
            }
            for (i=0;i<3;i++)               // show the columnar results
                printf(" %d\t\t", column_results[i]);
            printf("\n---------------------------------------------------\n");
        
        ////////////////////////////////////////////////////////
        
        // 7- Display the missing values and update the missing_count variable      (COMPLETE THIS PART)

	printf("List of missing values: ");

	for (int missing_list = 0; missing_list <= 8; missing_list++) {
		if (missing_array[missing_list] != 0) {
			printf("%d   ", missing_array[missing_list]);
		}
	}

	printf("\n\n");
        
        /////////////////////////////////////////////////////////
        
            // 8- break if the missing values are empty      (COMPLETE THIS PART)
            
	if (missing_count == 0)
		break;

	/////////////////////////////////////////////////////
			
        // Get user's guess (location and value) and check inputs' validity

	        printf("Enter a row number (1-3), column(1-3), value(One of the missing values):\n");
	        int r, c, v; 
	        scanf("%d %d %d", &r, &c, &v);
	        if (r==0 || c==0 || v==0)
	            break;
	        
	        if (r < 1 || r > 3 || c < 1 || c > 3){
	            puts("Invalid row and/or column numbers. Try again.");
	            continue;
	        }
	        
	        if (v < 1 || v > 9) {
	            puts("Invalid cell value. Try again.");
	            continue;
	        }
	
		if (missing_array[v-1]<1) {
			puts("This value is already there. Try Again.");
			continue;
		}

		int del;

		if (r == 1) {
			if (c == 1 && temp_board[0] == '?') { 
				temp_board[0] = v;
			}
			else if (c == 2 && temp_board[1] == '?') {
				temp_board[1] = v;
			}
			else if (c == 3 && temp_board[2] == '?') {
				temp_board[2] = v;
			}
			else {
				printf("Cell is not changeable.\n");
				continue;
			}
			for (del = 0; del <= 8; del++) {
				if (missing_array[del] == v) {
					missing_array[del] = 0;
				}
			}
			missing_count--;
		}
		if (r == 2) {
			if (c == 1 && temp_board[3] == '?') { 
				temp_board[3] = v;
			}
			else if (c == 2 && temp_board[4] == '?') {
				temp_board[4] = v;
			}
			else if (c == 3 && temp_board[5] == '?') {
				temp_board[5] = v;
			}
			else {
				printf("Cell is not changeable.\n");
				continue;
			}
			for (del = 0; del <= 8; del++) {
				if (missing_array[del] == v) {
					missing_array[del] = 0;
				}
			}
			missing_count--;
		}
		if (r == 3) {
			if (c == 1 && temp_board[6] == '?') { 
				temp_board[6] = v;
			}
			else if (c == 2 && temp_board[7] == '?') {
				temp_board[7] = v;
			}
			else if (c == 3 && temp_board[8] == '?') {
				temp_board[8] = v;
			}
			else {
				printf("Cell is not changeable.\n");
				continue;
			}
			for (del = 0; del <= 8; del++) {
				if (missing_array[del] == v) {
					missing_array[del] = 0;
				}
			}
			missing_count--;
		}

		// 9- if the selected cell is changeable, add the value into the cell and remove it from the missing values, in other case show an error and repeat the inner loop.
		//       (COMPLETE THIS PART)
		
			
			
			//////////////////////////////////////////////////////
			
        } while (1); // end of the inner loop
		
		//////////////////////////////////////////////////////////
		
		// 10- check the results      (COMPLETE THIS PART)

		check_game = 1;

		for (int endgame = 0; endgame < 9; endgame++) {
			if (temp_board[endgame] != main_board[endgame]) {
				check_game = 0;
				break;
			}
		}
				



		//////////////////////////////////////////////////////
        
        if (check_game == 1)             // display Wining/Losing Message
            printf ("**** Congratulations!!!****\n ***You Won!!!!*** \n");
        else
            printf (":( Sorry it is not correct :( \n");
        
        printf("#######################################\n");
        printf ("   Do you want to play again? (Yes:1, No:0)\n"); // ask the user to play again
        printf("#######################################\n");
        scanf ("%d", &play_again);
        
        if (!play_again){
            printf("Bye!\n");
            break;
        }
    } while (1); // end of the outer loop

}


