#ifndef LINKLIST_H
#define LINKLIST_H

#include "add_student.h"

struct student_node {
	struct student_data student_new;
	struct student_node *next;
};

struct student_node *create_node(struct student_data student_new);
struct student_node *add_node(
struct student_node *head, struct student_data student_new);

#endif
