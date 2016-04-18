all: hello

hello: hello.o
	gcc -o hello Hello.o

hello.o: hello.c
	gcc -c hello.c

clean:
	rm hello.o hello
