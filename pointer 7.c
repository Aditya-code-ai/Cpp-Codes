#include <stdio.h>
#include <stdlib.h>

void main() {
    struct student {
        int roll;
        struct student *next;
    };

    struct student *p1, *p2, *p3, *temp;
    
    p1 = (struct student*)malloc(sizeof(struct student));
    p2 = (struct student*)malloc(sizeof(struct student));
    p3 = (struct student*)malloc(sizeof(struct student));
    
    p1->roll = 1;
    p2->roll = 2;
    p3->roll = 3;
    

    p1->next = p2;
    p2->next = p3;
    p3->next = NULL;  
    
    temp = p1;

    while (temp != NULL) {
        printf("%d\n", temp->roll);
        temp = temp->next;
    }

    free(p1);
    free(p2);
    free(p3);
}
