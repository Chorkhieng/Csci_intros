/*
    CSCI 1101
	Password checker
	
	Input: a possible password
	Output:ok password, or what is wrong with it
	
	Must have 
	
	1. at least one special character
	2. at least one upper case
	3. at least one digit
	4. at least one lower case
	5. minimum length 8 characters
	6. maximum length 25 characters


*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MIN_LENGTH 8
#define MAX_LENGTH 25



char containsUpperCase(char theString[]);
char containsLowerCase(char theString[]);
char containsSpecialChar(char theString[], char specialString[]);
char containsDigit(char theString[], char digitCharacters[]);

int main()
{
	char password[255];
	int length;
	char okSoFar = 1;
	char specialCharacters[80]= "!@#$%^&*{}():?;~+-";
	char digitCharacters[10] = "0123456789";
	
	printf("Please enter a possible password.\n");
	scanf("%s", password);
	printf("%s\n", password);
	
	length = strlen(password);
	if (length < MIN_LENGTH){
		printf("The password must have at least %d characters\n", MIN_LENGTH);
		okSoFar = 0; //false
	}else if (length > MAX_LENGTH){
		printf("The password is too long; you won't remember it!\n");
		okSoFar = 0;
	}
	
	if (okSoFar){
		if (!containsUpperCase(password)){
			printf("Your password must contain at least one upper case letter.\n");
			okSoFar = 0;
		}
	}
	
	if (okSoFar){
		if (!containsLowerCase(password)){
			printf("Your password must contain at least one lower case letter.\n");
			okSoFar = 0;
		}
	}
	
	if (okSoFar){
		if (!containsSpecialChar(password, specialCharacters)){
			printf("Your password must contain at least one special character.\n");
			okSoFar = 0;
		}
	}
	
	if (okSoFar){
		if (!containsDigit(password, digitCharacters)){
			printf("Your password must contain at least one number.\n");
			okSoFar = 0;
		}
	}
		
		printf("You have good password!");
	
	return 0;
}

char containsUpperCase(char theString[])
{
	int i, length;
	char found = 0;
	
	length = strlen(theString);
	
	for(i = 0; i <length; ++i ){
		if (isupper(theString[i])){
			found = 1;
			break; //this will break out of the for
		}
	}//for i
	return found;
}

char containsLowerCase(char theString[])
{
	int i, length;
	char found = 0;
	
	length = strlen(theString);
	
	for(i = 0; i <length; ++i ){
		if (theString[i] >= 'a' && theString[i] <= 'z'){
			found = 1;
			break; //this will break out of the for
		}
	}//for i
	return found;
}

char containsSpecialChar(char theString[], char specialString[])
{
	int i,j, length, sp_length;
	char found = 0;
	
	length = strlen(theString);
	sp_length = strlen(specialString);
	for(i = 0; i < sp_length; ++i){
	
		for(j = 0; j <length; ++j ){
			if (theString[j] == specialString[i]){
				found = 1;
				break; //this will break out of the for
			}
		}//for j
		if(found){
			break;
		}
	}//for i
	
	return found;
	
	
}

char  containsDigit(char theString[], char digitCharacters[])
{
	int i,j, length, sp_length;
	char found = 0;
	
	length = strlen(theString);
	sp_length = strlen(digitCharacters);
	for(i = 0; i < sp_length; ++i){
	
		for(j = 0; j <length; ++j ){
			if (theString[j] == digitCharacters[i]){
				found = 1;
				break; //this will break out of the for
			}
		}//for j
		if(found){
			break;
		}
	}//for i
	
	return found;
	
}



