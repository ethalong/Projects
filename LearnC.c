//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

//function prototypes
void printValues(int list[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", list[i]);
    printf("\n");
}
void sort(int list[], int n)
{
 int i, j;
 for i in list - 1
  for j in list - 1
   if list[j] > list[j + 1]
    swap list[j] and list[j+1]
}
void swap(int*, int*);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main(){
  printf("Before: \n");
  printValues(list, n);
  sort(list, n);
  printf("After: \n");
  printValues(list, n);

  return(0);
} // end main