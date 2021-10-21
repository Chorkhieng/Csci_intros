/*
a menu-driven program that inputs two numbers,
and at the user's option, find their sum, difference, product, or quotion.
*/

#include <stdio.h>

int main (){
	
	int first_num, second_num;
	int sum, difference, product;
	float quotient;
	int user_ans;
	
	//get input from the user
	printf("Enter the first number:\n");
	scanf("%d", &first_num);
	printf("Enter the second number:\n");
	scanf("%d", &second_num);
	
	sum = first_num + second_num;
	difference = first_num - second_num;
	product = first_num * second_num;
	quotient = (float)first_num / second_num;
	
	//give the user options to choose
	printf("Put 1 for the sum.\n");
	printf("Put 2 for the difference.\n");
	printf("Put 3 for the product.\n");
	printf("Put 4 for the quotient.\n");
	scanf("%d", &user_ans);
	
	if (user_ans == 1)
	{
		printf("%d + %d = %d\n", first_num, second_num, sum);
	}else if (user_ans == 2){
		printf("%d - %d = %d\n", first_num, second_num, difference);
	}else if (user_ans == 3){
		printf("%d * %d = %d\n", first_num, second_num, product);
	}else if (user_ans == 4){
		printf("%d / %d = %f\n", first_num, second_num, quotient);
	}else
		printf("You didn't enter the correct option.\nTry again later.");
	
	return 0;
}
