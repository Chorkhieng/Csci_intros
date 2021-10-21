/* displaying full name
with first name, initial, and last name
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	char firstName[20];
	char initial[20];
	char lastName[20];
	printf ("Enter you first name:");
	scanf ("%s", &firstName);
	printf ("Enter you initial:");
	scanf ("%s", &initial);
	printf ("Enter you last name:");
	scanf ("%s", &lastName);
	
	printf ("Your full name is: %s %s. %s", firstName, initial, lastName);
	
	return 0;
}
