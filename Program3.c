/* CS261- HW1 - Program3.c*/
/* Name: Austin Chayka
 * Date: 1.9.2020
 * Solution description:
 */
 
#include <stdio.h>

void sort(int* number, int n){
     /*Sort the array of integeres of length n*/
    int i;
    for(i = 0; i < n - 1; i++) {

    }     
}

int main(){
    /*Declare an integer n and assign it a value of 20.*/
    int n = 20;
    /*Allocate memory for an array of n integers using malloc.*/
    int * arr = (int *)malloc(n * sizeof(int));
    /*Fill this array with random numbers, using rand().*/
    int i;
    for(i = 0; i < n; i++) arr[i] = rand();
    /*Print the contents of the array.*/
    for(i = 0; i < n; i++) printf("%i ", arr[i]);
    printf("\n");
    /*Pass this array along with n to the sort() function of part a.*/
    
    /*Print the contents of the array.*/ 

    return 0;
}