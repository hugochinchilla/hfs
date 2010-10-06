#define _USE_BSD
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BLOCK_SIZE 4096;

int bmount(const char *path);
