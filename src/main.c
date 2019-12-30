//SPDX-License-Identifier: (LGPL-3.0+ AND BSD-2-CLAUSE)”
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	int mode = 0;

	system("@cls||clear");
	/*load file data into linked list*/
	head = load_file(head);
	while (1) {
		printf("STUDENT INFO APP\n");
		printf("Select Mode:\n");
		printf("1. List Student Info\n");
		printf("2. Search Student Info\n");
		printf("3. Add Student Info\n");
		printf("4. Delete Student Info\n");
		printf("5. Exit & Save\n");
		printf("enter mode:");
		scanf("%d", &mode);
		switch (mode) {
		case 3:
			head = add_student(head);
			break;
		case 4:
			head = delete_student(head);
			break;
		case 1:
			list_student(head);
			break;
		case 2:
			search_student(head);
			break;
		case 5:
			exit_function(head);
			break;

		default:
	break;
	}
	if (mode == 5)
		break;
	}
	return 0;
	}
