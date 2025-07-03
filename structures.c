#include <stdio.h>

struct student {
    int roll_no;
    char name[10];
    int age;

    struct student *next;
};
int main(){
    struct student s1, s2, s3;
    printf("Enter roll_no, name, and age for three students:\n");
    printf("Student 1: ");
    scanf("%d %s %d", &s1.roll_no, s1.name, &s1.age);
    printf("Student 2: ");
    scanf("%d %s %d", &s2.roll_no, s2.name, &s2.age);
    printf("Student 3: ");
    scanf("%d %s %d", &s3.roll_no, s3.name, &s3.age);
    struct student *head = &s1;
    s1.next = &s2;
    s2.next = &s3;
    s3.next = NULL;

    while (head != NULL) {
        printf("Roll No: %d, Name: %s, Age: %d\n", head->roll_no, head->name, head->age);
        head = head->next;
    }
    return 0;  
}