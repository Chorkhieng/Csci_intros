/*
		Char input output

*/


#include <stdio.h>
#include <ctype.h>

char isvowel(char ch);


int main()
{
	char ch;
	
	while ((ch = getchar()) != EOF){
		ch = tolower(ch);
		if (isvowel(ch)){
			ch = '*';
		}
		putchar(ch);
	}
	return 0;
}

char isvowel(char ch)
{
	ch = tolower(ch);
	if (ch == 'a' || ch == 'e' ||
	  ch == 'i'  || ch == 'o' || 
	  ch == 'u'){
	  	return 1; //true
	  } 
	  
    return 0; //false
}
