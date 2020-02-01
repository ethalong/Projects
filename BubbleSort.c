//Ethan Long's Bubble Sort
//CSCI24000
//Andy Harris

#include <stdio.h>
#define MAX 9

//function prototypes


//To Print
void printValues();

//Sort
void sort();

//Pointers
void swap(int*, int*);

//Values given (Array)
int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};


//Main Function
//DONT CHANGE///////
int main(){
    printf("Before: \n");
    printValues();
        sort();
    printf("After: \n");
    printValues();
//DONT CHANGE///////
            return(0);
} // end main

void printValues()
{
        int i;
    printf("[");
            for(i=0; i<MAX; i++)
{
    printf( "%d", values[i]);
}
    printf("]\n");

}

void sort()
{
int i,j;
            for(i=0; i<MAX-1; i++)
{
            for(j=0; j<MAX-1; j++)
{
                if(values[j] > values[j+1])
{
                    swap(&values[j], &values[j+1]);
    printValues();
}
            }
                    }
                            }

void swap(int *x, int *y)
{

int number = *x;
        *x = *y;
        *y = number;
}