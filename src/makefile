CC = gcc
RM = rm -rf
OBJECTS =  main.o add_student.o list_student.o delete_student.o search_student.o linklist.o

main : $(OBJECTS)
	$(CC) $(OBJECTS) -g -o run_program

main.o: main.c main.h
	$(CC) main.c -g -c
	
add_student.o: add_student.c add_student.h
	$(CC) add_student.c -g -c

delete_student.o: delete_student.c delete_student.h
	$(CC) delete_student.c -g -c

list_student.o : list_student.c list_student.h
	$(CC) list_student.c -g -c

search_student.o : search_student.c search_student.h
	$(CC) search_student.c -g -c

linklist.o: linklist.c linklist.h
	$(CC) linklist.c -g -c

clean:
	@echo "Cleaning..."
	$(RM) run_program
	$(RM) *.o