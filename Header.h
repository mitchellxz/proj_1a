#pragma once
typedef struct student {
    char* lastName;
    char* firstName;
    long idNum;
    char* studentYear;
    int gradYear;
    struct student* next;
    struct student* prev;

} student_t;

typedef struct node {
    student_t* val;
    struct node* next;
    struct node* prev;
} node_t;
