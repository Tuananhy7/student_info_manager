#ifndef ADD_STUDENT_H
#define ADD_STUDENT_H

struct student_data {
	char *name;
	char *age;
	char *score;
};

void reverse(char s[]);
void itoa(int n, char s[]);
void clean_stdin(void);
struct student_node *load_file(struct student_node *head);
char *merge_string(struct student_data *student_new);
struct student_node *add_student(struct student_node *head);
void exit_function(struct student_node *head);
#endif