#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "add_student.h"
#include "linklist.h"
/* reverse:  reverse string s in place */
void reverse(char s[])
{
	int i, j;
	char c;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
/* itoa:  convert n to characters in s */
void itoa(int n, char s[])
{
	int i, sign;

	sign = n;

	if (sign < 0)
		n = -n;
	i = 0;

	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}
void clean_stdin(void)
{
	int c;

	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}
struct student_node *load_file(struct student_node *head)
{
	int i = 0;
	char *number_of_student = (char *)malloc(sizeof(char)*100);
	struct student_data student_new;

	student_new.name = (char *)malloc(sizeof(char)*100);
	student_new.age = (char *)malloc(sizeof(char)*100);
	student_new.score = (char *)malloc(sizeof(char)*100);

	FILE *fp = fopen("data_base.txt", "r");

	fgets(number_of_student, 100, fp);
	i = atoi(number_of_student);
	while (i) {
		fgets(student_new.name, 100, fp);
		fgets(student_new.age, 100, fp);
		fgets(student_new.score, 100, fp);
		head = add_node(head, student_new);
		printf("loading...\n");
		i--;
	}
	fclose(fp);
	return head;
}
char *merge_string(struct student_data *student_new)
{
	char *result = (char *)malloc(sizeof(char)*100);

	memset(result, 0, 100);
	strcat(result, student_new->name);
	strcat(result, student_new->age);
	strcat(result, student_new->score);
	return result;
}
struct student_node *add_student(struct student_node *head)
{
	system("@cls||clear");
	struct student_data student_new;

	student_new.name = (char *)malloc(sizeof(char)*100);
	student_new.score = (char *)malloc(sizeof(char)*100);
	student_new.age = (char *)malloc(sizeof(char)*100);
	/*clear buffer*/
	//fflush(stdin);
	clean_stdin();

	printf("enter name student: ");
	fgets(student_new.name, 20, stdin);
	printf("enter age student: ");
	fgets(student_new.age, 20, stdin);
	printf("enter score student: ");
	fgets(student_new.score, 20, stdin);
	head = add_node(head, student_new);
	printf("add student successful\n");
	return head;
}
void exit_function(struct student_node *head)
{
	int number_of_student = 0;
	char *str = (char *)malloc(sizeof(char)*100);
	FILE *fp = fopen("data_base.txt", "w");
	struct student_node *temp = head;

	while (temp->next != NULL) {
		temp = temp->next;
		number_of_student++;
	}
	number_of_student++;
	itoa(number_of_student, str);
	fprintf(fp, "%s", str);
	fprintf(fp, "%s", "\n");
	temp = head;
	while (temp != NULL) {
		fprintf(fp, "%s", temp->student_new.name);
		fprintf(fp, "%s", temp->student_new.age);
		fprintf(fp, "%s", temp->student_new.score);
		temp = temp->next;
	}
	fprintf(fp, "%s", "STORE_END");
	fclose(fp);
}
