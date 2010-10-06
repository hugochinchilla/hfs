#include <stdio.h>
#include <stdlib.h>

#include "../lib/blocks.h"


int main(int argc, char **argv)
{
	if (argc != 3) {
		printf("\nusage: mkfs [imge_file] [blocks]\n");
		exit(EXIT_FAILURE);
	}
	
	return EXIT_SUCCESS;
}
