#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "delete_student.h"

struct student_node *delete_student(struct student_node *head)
{
	system("@cls||clear");
	printf("__SELECT_MODE_DELETE__\n");
	clean_stdin();
	struct student_data student_new;

	student_new.name = (char *)malloc(sizeof(char)*100);
	student_new.age = (char *)malloc(sizeof(char)*100);
	student_new.score = (char *)malloc(sizeof(char)*100);
	printf("enter name delete\n");
	fgets(student_new.name, 100, stdin);
	printf("enter age delete\n");
	fgets(student_new.age, 100, stdin);
	printf("enter score delete\n");
	fgets(student_new.score, 100, stdin);

	head = delete_node_student(head, student_new);

	return head;
}
struct student_node *delete_node_student(
struct student_node *head, struct student_data student_new)
{
	int result = 1;
	struct student_node *temp = head;

	result = strcmp(temp->student_new.name, student_new.name)
	* strcmp(temp->student_new.age, student_new.age)
	* strcmp(temp->student_new.score, student_new.score);
	if (result == 0) {
		head = temp->next;
		temp = NULL;
	} else {
		while (temp->next != NULL) {
			result = strcmp(
			temp->next->student_new.name, student_new.name)
			* strcmp(temp->next->student_new.age, student_new.age)
			* strcmp(temp->next->student_new.score
			, student_new.score);
			if (result == 0) {
				temp->next = temp->next->next;
				break;
			}
			temp = temp->next;
			}
	}
	return head;
}
