/*

    CSCI 1101 

    sorting example


    Assignment 

    Implement another sorting algorithm like the 

    insert sort or selection sort. Compare the time

    taken by your new algorithm versus the bubble sort


*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX_N 200000

void printArray(const int p[], int n);
void fillArrayRandom(int p[], int n);
int getRandomNum(int first, int last);
void bubbleSort(int a[], int n);
void mySort(int a[], int n);
int myIntCompare(const void *a, const void *b);
int *allocateArray(int n);



int main()
{
   int int_list[MAX_N] = { 0};

 //  int *int_list = NULL;
    int n = 10;

    int start, end;

    float seconds;
    int junk;
  
  do{
    do{
       printf("Please enter the size (10 to %d) of the array ,11 to quit\n", MAX_N);
       scanf("%d", &n);
     }while (n < 10);
  
 /*   
     int_list = (int*) malloc( n * sizeof(int));
     if (int_list == NULL){
         printf("unable to allocate the memory\n");
         system("pause");
         return 1;         
     }
 */  

      fillArrayRandom(int_list,  n);
     printArray(int_list, 10);
      printf("Please enter 1 to start the sort\n");
      scanf("%d", &junk);
      start = clock();
       //bubbleSort(int_list, n);
       // mySort(int_list, n);
       qsort(int_list, n, sizeof(int), myIntCompare);
       end = clock();
       seconds = (end - start)/(float) CLOCKS_PER_SEC;
      printArray(int_list, 10);
       printf("Time to sort %d items = %.2f\n",n, seconds);

      //be a good citizen
     // free(int_list);
      }while(n != 11);
    system("pause");


    return 0;

}


//used to dynamically allocate the array
int *allocateArray(int n)
{
    //try to allocate the memory dynamically

  int    *p = (int *) malloc(MAX_N  * sizeof(int));
    if (p == NULL)
    {
          printf("not enough memory\n");
          system("pause");      
     }

   return p;  
}



void printArray(const int p[MAX_N], int n)
{
   int i;

   for(i = 0; i < n; ++i){

      printf("%4d", p[i]); 

  }

  putchar('\n');

}


void fillArrayRandom(int p[MAX_N], int n)
{
    int i;
    for(i = 0; i < n; ++i)
        p[i] = getRandomNum(1,1000);

}


 
/*
        This function will return a random
        integer from first to last, inclusive.
        
        requires 
        #include <time.h>
 */
int getRandomNum(int first, int last)
{
    int r;
   static char first_time = 1;
   if(first_time){
        srand(time(NULL));
        first_time = 0;
   }
    r = rand()% ( last - first + 1);
    r += first;
    return r; 

}

void mySort(int a[], int n)
{

     //implement a sort here!

     //I would suggest a insert sort

     //or a selection sort

}



void bubbleSort(int a[], int n)
{
     int i, j, temp;
     
     for(i = 0; i < n-1; ++i){
	 
     for( j = 0; j < n - 1; ++j)
     {
     	if(a[j] > a[j+1]){
     		//swap the values
     		temp = a[j];
			 a[j] = a[j+1];
			 a[j+1] = temp;
		 }//if
	 }//for j
	 //printArray(a, n);
	}//for i
}



int myIntCompare(const void *a, const void *b)
{
    
//    printf("a = %d, b = %d\n", *(int *)a, *(int *)b);
    if( *(int *) a > *(int *) b)
       return 1;
    else
       return -1;
}

