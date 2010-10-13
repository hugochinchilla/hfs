#include "blocks.h"

static int fd;

int bmount(const char *path)
{
	fd = open(path, O_CREAT|O_RDWR, 0666);
	if (fd < 0) {
		perror("bmount");
	}
	return fd;
}

int bumount()
{
	int status = close(fd);
	if (status < 0) {
		perror("bumount");
	}
	return status;
}

int bwrite(unsigned int block, const void *buf)
{
	int status;

	if (lseek(fd, block*BLOCK_SIZE, SEEK_SET) < 0) {
		perror("bwrite lseek");
	}
	status = write(fd, buf, BLOCK_SIZE);
	if (status < 1) {
		perror("bwrite write");
	}
	return status;
}

int bread(unsigned int block, void *buf)
{
	int status;
	
	if (lseek(fd, block*BLOCK_SIZE, SEEK_SET) < 0) {
		perror("bread lseek");
	}
	status = write(fd, buf, BLOCK_SIZE);
	if (status < 0) {
		perror("bread read");
	}
	return status;
}
