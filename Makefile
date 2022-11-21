CC = gcc
AR=ar
FLAGS = -Wall -fPIC -g

basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c

loops: libclassloops.a

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	$(AR) -rcs  libclassloops.a basicClassification.o advancedClassificationLoop.o

recursives: libclassrec.a

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	$(AR) -rcs  libclassrec.a basicClassification.o advancedClassificationRecursion.o

recursived: libclassrec.so

libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	$(CC) $(FLAGS) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o

loopd: libclassloops.so

libclassloops.so: basicClassification.o advancedClassificationLoop.o
	$(CC) $(FLAGS) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o

mains: main.o  recursives
	$(CC) $(FLAGS) -o mains main.o  libclassrec.a -lm

maindloop: main.o loopd
	$(CC) $(FLAGS) -o maindloop main.o  ./libclassloops.so -lm

maindrec: main.o recursived
	$(CC) $(FLAGS) -o maindrec main.o  ./libclassrec.so -lm

all: loops recursives recursived loopd mains maindloop maindrec

clean:
	rm -f libclassloops.a libclassrec.a libclassrec.so libclassloops.so mains maindloop maindrec *.o


.PHONY: clean all loops recursives recursived loopd