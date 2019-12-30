#ifndef DELETE_STUDENT_H
#define DELETE_STUDENT_H

#include "add_student.h"
#include "linklist.h"

struct student_node *delete_student(struct student_node *head);
struct student_node *delete_node_student(
struct student_node *head, struct student_data student_new);

#endif
