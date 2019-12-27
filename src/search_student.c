#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "search_student.h"

void search_student(struct student_node *head)
{
    system("@cls||clear");
    printf("__SELECT_MODE_SEARCHING__\n");
    clean_stdin();
    struct student_data student_new;
    int mode=0;
    student_new.name=(char*)malloc(sizeof(char)*100);
    student_new.age=(char*)malloc(sizeof(char)*100);
    student_new.score=(char*)malloc(sizeof(char)*100);
    printf("1. Search name\n");
    printf("2. Search age\n");
    printf("3. Search score\n");
    printf("enter search mode:");
    scanf("%d", &mode);
    clean_stdin();
    switch (mode)
    {
        case 1:
            printf("enter name search\n");
            fgets(student_new.name, 100, stdin);
            break;

        case 2:
            printf("enter age search\n");
            fgets(student_new.age, 100, stdin);
            break;

        case 3:
            printf("enter score search\n");
            fgets(student_new.score, 100, stdin);
            break;
        
        default:
            break;
    }

    head=search_node_student(head, student_new, mode);
}

struct student_node *search_node_student(struct student_node *head, struct student_data student_new, int mode)
{
    printf("\n__OUTPUT_SEARCHING__\n");
    struct student_node *temp=head;
    switch (mode)
    {
    case 1:
        {
            while(temp != NULL)
            {
                int cmp=1;
                cmp=strcmp(temp->student_new.name, student_new.name);
                if(cmp == 0)
                {
                    /* jump here*/
                    out_student_info(temp->student_new);
                }
                temp=temp->next;
            }
            break;
        }

    case 2:
        {
            while(temp != NULL)
            {
                int cmp=1;
                cmp=strcmp(temp->student_new.age, student_new.age);
                if(cmp == 0)
                {
                    /* jump here*/
                    out_student_info(temp->student_new);
                }
                temp=temp->next;
            }
            break;
        }

    case 3:
        {
            while(temp != NULL)
            {
                int cmp=1;
                cmp=strcmp(temp->student_new.score, student_new.score);
                if(cmp == 0)
                {
                    /* jump here*/
                    out_student_info(temp->student_new);
                }
                temp=temp->next;
            }
            break;
        }
        
    
    default:
        break;
    }
    printf("__END_SEARCHING__\n\n");
}

void out_student_info(struct student_data student_new)
{
    char *out=(char*)malloc(sizeof(char)*100);
    memset(out, '\0', 100);
        concatenate_string(out, student_new.name);
        concatenate_string(out, student_new.age);
        concatenate_string(out, student_new.score);
        printf("student info: %s\n",out);
}