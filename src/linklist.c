#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linklist.h"

struct student_node *create_node(struct student_data student_new)
{
	struct student_node *student_temp = (
	struct student_node *)malloc(sizeof(struct student_node));

	student_temp->student_new.name = (char *)malloc(sizeof(char)*100);
	student_temp->student_new.age = (char *)malloc(sizeof(char)*100);
	student_temp->student_new.score = (char *)malloc(sizeof(char)*100);
	strcpy(student_temp->student_new.name, student_new.name);
	strcpy(student_temp->student_new.age, student_new.age);
	strcpy(student_temp->student_new.score, student_new.score);
	student_temp->next = NULL;
	return student_temp;
}

struct student_node *add_node(
struct student_node *head, struct student_data student_new)
{
	struct student_node *student_new_node = create_node(student_new);
	struct student_node *temp = head;

	if (head == NULL)
		head = student_new_node;
	else {
		/* code */
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = student_new_node;
	}
	return head;
}
