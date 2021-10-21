
/* computing and displaying 15 percent tip
for meal price
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float mealPrice;
	float tip;
	float total;
	
	printf ("Enter your mear price here:\n");
	scanf ("%f", &mealPrice);
	
	tip = mealPrice*.15;
	printf ("\nYour 15 percent tip is: $%.2f", tip);
	total = mealPrice + tip;
	printf ("\nYour total charge is: $%.2f", total);
	
	return 0;

}
