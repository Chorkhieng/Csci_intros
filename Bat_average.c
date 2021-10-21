/* computing and displaying the batting average
*/

#include <stdio.h>

 int main (){
	
	int hits, atBats;
	float batAvg;
	
	printf ("How many hits do you make?\n");
	scanf ("%d", &hits);
	printf ("How many at-bat do you make?\n");
	scanf ("%d", &atBats);
	
	batAvg = (float)hits/atBats;
	printf ("Your batting average is: %f", batAvg);
	return 0;
}

