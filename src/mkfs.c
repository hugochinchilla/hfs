#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../lib/blocks.h"


int main(int argc, char **argv)
{
	unsigned int blocks;
	unsigned char buf[BLOCK_SIZE];

	if (argc != 3) {
		printf("\nusage: mkfs [imge_file] [blocks]\n");
		exit(EXIT_FAILURE);
	}

	blocks = atol(argv[2]);
	
	bmount(argv[1]);
	
	// test code
	memset(buf, 1, BLOCK_SIZE);
	bwrite(0,buf);
	bwrite(1,buf);
	memset(buf, 'a', BLOCK_SIZE);
	bwrite(2,buf);
	// end test code
	bumount();

	return EXIT_SUCCESS;
}
