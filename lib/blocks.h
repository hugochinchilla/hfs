#define _USE_BSD
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BLOCK_SIZE 4096

int bmount(const char *path);
int bumount();
int bwrite(unsigned int block, const void *buf);
int bread(unsigned int block, void *buf);
