// Ethan Long's Bubble Sort Blackbelt in C++
// CSCI 24000
// Andy Harris
#include <iostream>


const int ASIZE = 10;
    void bSort(double ar[]);
int main()

{
        double nums[ASIZE];
        for(int i =0; i < ASIZE; i++)

{
        cout << "Enter the number " << i+1 << " of " << ASIZE << " to be sorted: ";
        cin >> nums[i];
        cout << endl;

}
        cout << endl << endl << "Sorting the numbers you entered...." << endl << endl;
            bSort(nums);
        cout << "These are the values you entered from the highest to lowest: ";
        
        for(int i = 0; i < ASIZE; i++)

{
        cout << endl << nums[i];

}
        cout << endl << endl;
            return 0;
}
    void bSort(double ar[])
{
double temp = 0;
bool flag = false;

  do

{

flag = false; 
    for(int i = 0; i < ASIZE - 1; i++) 
{
    if(ar[i] < ar[i+1])
{
temp = ar[i];
ar[i] = ar[i+1];
ar[i+1] = temp;

flag = true;

}
}

}while(flag == true);

}
