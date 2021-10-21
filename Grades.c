
/*
Comuputing the grades

*/


#include <stdio.h>
int main(){
	
	int score, possible_score;
	float percent;
	
	// input the score and possible score
	printf("Enter your score:\n");
	scanf("%d", &score);
	printf("Enter possible score:\n");
	scanf("%d", &possible_score);
	percent = (float)score/possible_score * 100.0;
	
	//using linear if/then/else to check the letter grades
	
	if (percent >= 90){
		printf("Your grade is: A\n");
	}else if (percent >= 80){
		printf("Your grade is: B\n");
	}else if (percent >= 70){	
		printf("Your grade is: C\n");
	}else if (percent >= 60){
		printf("Your grade is: D\n");
	}else{
		printf("You fail.");
	}
	  	
	return 0;
}
