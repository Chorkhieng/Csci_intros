/*

	Test average
	
*/
#include <stdio.h>

int main(){
	int score;
	int sum = 0;
	int count = 0;
	float average;
	int tests[100]; //keep a list of scores
	
	do{
		printf("Enter a score or -1 to end\n");
		scanf("%d", &score);
		sum += score;
		tests[count] = score; //keep the score
		count++;
		
	}while (score != -1);
	
	average = (float) sum/count;
	printf("Average = %.2f", average);
}
