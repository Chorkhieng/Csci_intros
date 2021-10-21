/*
displaying the an input year 
if it is a leap year or not
*/

#include <stdio.h>

int main(){
	
	int year;
	printf("Enter a year:\n");
	scanf("%d", &year);
	
	// leap years divided by 4 or 400, otherwise are not leap years
	
	if (year % 4 == 0 && year % 100 != 0)
	{
		printf("%d is a leap year.\n", year);
	}else if(year % 400 == 0){
		printf("%d is a leap year.\n", year);
	} else {
		printf("%d is not a leap year.", year);
	}
	
	
	return 0;
}
