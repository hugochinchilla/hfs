all: mkfs

#agent: lib/lectores_escritores.o lib/server.o lib/client.o lib/writer.o
#	gcc -Wall lib/lectores_escritores.o lib/client.o lib/server.o agent.c lib/writer.o -o agent

mkfs: lib/blocks.o
	gcc -Wall lib/blocks.o src/mkfs.c -o bin/mkfs

block:
	gcc -Wall lib/blocks.c


.PHONY: clean remake run
clean:
	rm -f src/mkfs lib/*.o src/*.o

remake:
	make clean; make;

run:
	./bin/mkfs
