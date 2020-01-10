/* CS261- HW1 - Program4.c*/
/* Name: Austin Chayka
 * Date: 1.9.2020
 * Solution description: Homework #1, Program #4
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct student{
	char initials[2];
	int score;
};

void swap(struct student* s1, struct student* s2) {

    struct student temp = *s1;
    *s1 = *s2;
    *s2 = temp;

}

void sort(struct student* students, int n){

    if(n <= 1) return;

     /*Sort n students based on their initials*/   
    bool swapped;
    int i, j;
    for(i = 0; i < n - 1; i++) {
        swapped = false;
        for(j = 0; j < n - i - 1; j++) {
            if(students[j].initials[0] == students[j + 1].initials[0]) {
                if(students[j].initials[1] > students[j + 1].initials[1]) {
                    swapped = true;
                    swap(&students[j], &students[j + 1]);
                }
            } else if(students[j].initials[0] > students[j + 1].initials[0]) {
                swapped = true;
                swap(&students[j], &students[j + 1]);
            }
        }
        if(!swapped) break;
    }
}

int main(){
    /*Declare an integer n and assign it a value.*/
    int n = 12;
    /*Allocate memory for n students using malloc.*/
    struct student* arr = (struct student*)malloc(n * sizeof(struct student));
    /*Generate random IDs and scores for the n students, using rand().*/
    int i;
    for(i = 0; i < n; i++) {
        arr[i].initials[0] = (char)(rand() % 26 + 65);
        arr[i].initials[1] = (char)(rand() % 26 + 65);
        arr[i].score = rand() % 101;
    }
    /*Print the contents of the array of n students.*/
    for(i = 0; i < n; i++) 
        printf("%i. %c%c %i\n", i + 1, arr[i].initials[0], arr[i].initials[1], arr[i].score);
    printf("\n");
    /*Pass this array along with n to the sort() function*/
    sort(arr, n);
    /*Print the contents of the array of n students.*/
    for(i = 0; i < n; i++) 
        printf("%i. %c%c %i\n", i + 1, arr[i].initials[0], arr[i].initials[1], arr[i].score);

    free(arr);

    return 0;
}
