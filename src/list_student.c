#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linklist.h"
#include "add_student.h"

void concatenate_string(char *original, const char *add)
{
   while(*original)
      original++;
   while(*add)
   {
      if(*add == '\n') break;
      *original = *add;
      original++;
      add++;
   }
   *original = '|';
   original++;
   *original = '|';
   original++;
   *original = '\0';
}

void list_student(struct student_node *head)
{
    system("@cls||clear");
    printf("__student_LIST__\n");
    printf("+++++++++++++++\n");
    struct student_node *temp=head;
    char *out=(char*)malloc(sizeof(char)*100);
    int number_of_students=0;
    memset(out, '\0', 100);
    while(temp != NULL)
    {
      number_of_students++;
      printf("Student Info: %d\n",number_of_students);
      printf("Name: %sAge: %sScore: %s\n",
      temp->student_new.name,
      temp->student_new.age,temp->student_new.score);
      memset(out, '\0', 100);
      temp=temp->next;
    }
    printf("+++++++++++++++\n");
}