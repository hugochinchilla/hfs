#include "blocks.h"

static int fd;

int bmount(const char *path) {
	fd = open(path, O_CREAT|O_RDWR, 0666);

	if (fd < 0) {
		perror("bmount");
	}

	return fd;
}


