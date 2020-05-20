OBJS = phoneBookMain.o register.o allprint.o personalprint.o
pb : $(OBJS)
	gcc -o pb $(OBJS)
phoneBookMain.o : phoneBookMain.c
	gcc -c -o phoneBookMain.o phoneBookMain.c
register.o : register.c
	gcc -c -o register.o register.c
allprint.o : allprint.c
	gcc -c -o allprint.o allprint.c
personalprint.o : personalprint.c
	gcc -c -o personalprint.o personalprint.c
clean :
	rm *.o pb
