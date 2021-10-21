/*
		More about string functions
			strcmp -- compare two strings
			strcat -- concatenate two strings
			strcpy -- copy source string into 
			
			puts
			gets


*/

#include <stdio.h>
#include <string.h>

int main()
{
	char name1[80];
	char name2[80];
	
	char fullName[80];
	
	printf("enter name 1\n");
	gets(name1);
	
	printf("enter name 2\n");
	gets(name2);
	
	if (strcmp(name1, name2) > 0) {
		printf("%s > %s\n", name1, name2);
	}else{
		printf("%s <= %s\n", name1, name2);
	}
	
	strcpy(fullName, name1);
	strcat(fullName, " ");
    strcat(fullName, name2);
	puts(fullName);

	return 0;
	
}
