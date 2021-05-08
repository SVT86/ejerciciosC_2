CC=g++

main.exe:	main.o implementa.o
			${CC} main.o implementa.o -o main.exe

main.o:		main.c
			${CC} -c main.c -o main.o

implementa:	implementa.c
			${CC} -c implementa.c -o implementa.o

clean:		
			rm *.o *.exe