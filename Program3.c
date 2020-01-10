/* CS261- HW1 - Program3.c*/
/* Name: Austin Chayka
 * Date: 1.9.2020
 * Solution description: Homework #1, Program #3
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int* a, int* b) {

    int temp = *a;
    *a = *b;
    *b = temp;

}

void sort(int* number, int n){

    if(n <= 1) return;

     /*Sort the array of integeres of length n*/
    bool swapped;
    int i, j;
    for(i = 0; i < n - 1; i++) {
        swapped = false;
        for(j = 0; j < n - i - 1; j++) 
            if(number[j] > number[j + 1]) {
                swapped = true;
                swap(&(number[j]), &(number[j + 1]));
            }
        if(!swapped) break;
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
    sort(arr, n);
    /*Print the contents of the array.*/ 
    for(i = 0; i < n; i++) printf("%i ", arr[i]);

    free(arr);

    return 0;

}