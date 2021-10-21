/*
	random fun
*/

#include <stdio.h>
#include <stdlib.h> //rand, srand;
#include <time.h>

int getRand(int first, int last);

int main()
{
	int i;
	int r;
	
	srand(time(NULL));//one shot deal, see the random number generator
	
	for(i = 1; i <= 100; ++i){
		r = rand();//0 to 32767
		printf("%5d ", r);
		if (i % 10 == 0){
			printf("\n");
		}
	}
	
	return 0; 
}

