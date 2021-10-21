/*
  CSCI 1101
  Example Program
  integer operators explained
  
  Assignment: complete the program so that it tests 
  the user on the five arithmetic operators 
  for integer: +, -, *, /, and %.
*/

#include <stdio.h>  //printf, scanf
#include <stdlib.h> //srand, rand
#include <time.h>  //time

/*function prototypes */
int getRand(int first, int last);
void testIntegerMultiplication(void);
void testIntegerDivision(void);
void testIntegerModulus(void);
void testIntegerAddition(void);
void testIntegerSubstraction(void);




int getOneIntegerInput(void);

int main()
{
    int choice;
    
    do{  
     printf("What would you like to be tested on?\n");
     printf("1 integer multiplication operator *\n");
     printf("2 integer division operator / \n");
     printf("3 integer modulus operator %%\n");
     printf("4 integer addition operator +\n");
     printf("5 integer substraction operator -\n");
 	 printf("0 to quit\n");
     //scanf("%d", &choice);
     choice = getOneIntegerInput();
     printf("\n\n");
     
     if(choice == 1){
       testIntegerMultiplication();
     }else if (choice == 2){
       testIntegerDivision();
     }else if (choice == 3){
     	testIntegerModulus();
	 }else if (choice == 4){
	 	testIntegerAddition();
	 }else if (choice == 5){
	 	testIntegerSubstraction();
	 }else if(choice == 0){
       printf("Goodbye!\n");
     }else{
       printf("Not a valid selection\n");
     } 
     
    }while(choice != 0);
    
    system("pause");
    return 0;
}//main

void testIntegerMultiplication(void)
{
   int operand1, operand2, answer;
   int num_correct, i, user_answer;
   
   num_correct = 0; /*keep track of the number of correct answers */
   
   for(i = 0; i < 10; ++i)
   {
       operand1 =   getRand(20, 69);
       operand2 =   getRand(2,25);
       answer = operand1 * operand2; //calculate the correct answer
      
	   printf("%d * %d = ? ", operand1, operand2); //present the problem to the user
      // scanf("%d", &user_answer); 
       user_answer = getOneIntegerInput();
       
       if (answer == user_answer){
                num_correct += 1;
                printf("Correct!\n\n");  
       }else{
             printf("Sorry, the correct answer = %d\n\n", answer);    
       }
	}/*for */
   printf("You scored %d out of 10\n", num_correct);
}/*testIntegerMultiplication */


void testIntegerDivision(void)
{
   int operand1, operand2, answer;
   int num_correct, i, user_answer;
   
   num_correct = 0; /*keep track of the number of correct answers */
   
   for(i = 0; i < 10;++i)
   {
       operand1 =   getRand(20, 69);
       operand2 =   getRand(2,25);
       answer = operand1 / operand2;
       printf("%d / %d = ? ", operand1, operand2);
       //scanf("%d", &user_answer);
       user_answer = getOneIntegerInput();
       
       if (answer == user_answer){
                num_correct = num_correct + 1;
                printf("Correct!\n\n");            
       }else{
             printf("Sorry, the correct answer = %d\n", answer);   
			 printf("Try harder!\n\n");
       } 
	 
    }/*for */
   printf("You scored %d out of 10\n", num_correct);
}/*testIntegerDivision*/

int getRand(int first, int last)
{
   static int firstTime = 1;
   int amountOfNumbers;
   if (firstTime == 1){
      /*first time in this function, seed the random number generator */
       firstTime = 0;
	   srand(time(NULL));
   }
   amountOfNumbers = last - first + 1;
   return(rand() % amountOfNumbers + first);
}

int getOneIntegerInput(void)
{
	int ans;
	int n;
	char ch;

	n = scanf("%d", &ans);
	
	while(n != 1){
		//the dummy can't type in an integer!
		//clear this line
		while((ch = getchar()) != '\n'){
			; // eat the rest of this line
		//	putchar(ch);
		}
		printf("enter an integer\n");
		n = scanf("%d", &ans);
	}
	
	//now make sure there is nothing left in the line buffer
	while((ch = getchar()) != '\n'){
			; // eat the rest of this line
		//	putchar(ch);
	}
	return ans;
}

void testIntegerModulus(void)
{
   int operand1, operand2, answer;
   int num_correct, i, user_answer;
   
   num_correct = 0; /*keep track of the number of correct answers */
   
   for(i = 0; i < 10; ++i)
   {
       operand1 =   getRand(20, 69);
       operand2 =   getRand(2,25);
       answer = operand1 % operand2; //calculate the correct answer
      
	   printf("%d %% %d = ? ", operand1, operand2); //present the problem to the user
      // scanf("%d", &user_answer); 
       user_answer = getOneIntegerInput();
       
       if (answer == user_answer){
                num_correct += 1;
                printf("Correct!\n\n");  
       }else{
             printf("Sorry, the correct answer = %d\n\n", answer);    
       }
	}/*for */
   printf("You scored %d out of 10\n", num_correct);
}/*testIntegerModulus */

void testIntegerAddition(void)
{
   int operand1, operand2, answer;
   int num_correct, i, user_answer;
   
   num_correct = 0; /*keep track of the number of correct answers */
   
   for(i = 0; i < 10; ++i)
   {
       operand1 =   getRand(20, 69);
       operand2 =   getRand(2,25);
       answer = operand1 + operand2; //calculate the correct answer
      
	   printf("%d + %d = ? ", operand1, operand2); //present the problem to the user
      // scanf("%d", &user_answer); 
       user_answer = getOneIntegerInput();
       
       if (answer == user_answer){
                num_correct += 1;
                printf("Correct!\n\n");  
       }else{
             printf("Sorry, the correct answer = %d\n\n", answer);    
       }
	}/*for */
   printf("You scored %d out of 10\n", num_correct);
}/*testIntegerAddition */

void testIntegerSubstraction(void)
{
   int operand1, operand2, answer;
   int num_correct, i, user_answer;
   
   num_correct = 0; /*keep track of the number of correct answers */
   
   for(i = 0; i < 10; ++i)
   {
       operand1 =   getRand(20, 69);
       operand2 =   getRand(2,25);
       answer = operand1 - operand2; //calculate the correct answer
      
	   printf("%d - %d = ? ", operand1, operand2); //present the problem to the user
      // scanf("%d", &user_answer); 
       user_answer = getOneIntegerInput();
       
       if (answer == user_answer){
                num_correct += 1;
                printf("Correct!\n\n");  
       }else{
             printf("Sorry, the correct answer = %d\n\n", answer);    
       }
	}/*for */
   printf("You scored %d out of 10\n", num_correct);
}/*testIntegerSubstraction */


