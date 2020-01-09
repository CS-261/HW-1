/* CS261- HW1 - Program2.c*/
/* Name: Austin Chayka
 * Date: 1.8.2020
 * Solution description:
 */
 
#include <stdio.h>
#include<stdlib.h>
#include<math.h>

#define NUM_STUDENTS 10

struct student{
	char initials[2];
	int score;
};

struct student* allocate(){
     /*Allocate memory for ten students*/
     /*return the pointer*/
    return (struct student*)malloc(NUM_STUDENTS * sizeof(struct student));;
}

void generate(struct student* students){
     /*Generate random initials and scores for ten students.
	The two initial letters must be capital and must be between A and Z. 
	The scores must be between 0 and 100*/
    int i;
    for(i = 0; i < NUM_STUDENTS; i++) {
        students[i].initials[0] = (char)(rand() % 26 + 65);
        students[i].initials[1] = (char)(rand() % 26 + 65);
        students[i].score = rand() % 101;
    }
}

void output(struct student* students){
     /*Output information about the ten students in the format:
              1. Initials  Score
              2. Initials  Score
              ...
              10. Initials Score*/
    int i;
    for(i = 0; i < NUM_STUDENTS; i++) printf("%i. %c%c %i\n", i, students[i].initials[0], students[i].initials[1], students[i].score);
}

void summary(struct student* students){
     /*Compute and print the minimum, maximum and average scores of the ten students*/
     
}

void deallocate(struct student* stud){
     /*Deallocate memory from stud*/
    free(stud);
}

int main(){
    struct student* stud = NULL;
    /*call allocate*/
    stud = allocate();
    /*call generate*/
    generate(stud);
    /*call output*/
    output(stud);
    /*call summary*/
    
    /*call deallocate*/
    deallocate(stud);

    return 0;
}
