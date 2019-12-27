#ifndef SEARCH_STUDENT
#define SEARCH_STUDENT

#include "add_student.h"
#include "linklist.h"
#include "list_student.h"

void search_student(struct student_node *head);
struct student_node *search_node_student(struct student_node *head, struct student_data student_new, int mode);
void out_student_info(struct student_data student_new);

#endif