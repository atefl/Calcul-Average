#include <stdio.h>
#include <cs50.h>
// global variable declaration
int length;
int i = 0;
// function to return average of numbers inputed by user
float average(int n[length])
{
 int x = 0;
 for (i = 0; i < length; i++)
 {
     x = x + n[i];
 }
    return(x / (float) length); // return average
}

int main()
{
    length = get_int("length: "); // length inputed by user to index of array numbers
    int nums[length]; // declaration of array
    for (i = 0; i < length; i++) // for loop stop if i is less the length
    {
        nums[i] = get_int("Number %i: ", i + 1); // print the numbers inputed by user
    }
    float x = average(nums); // declaration x is the average function
    
    
    printf("average: %.2f",x); // printf the average
}
