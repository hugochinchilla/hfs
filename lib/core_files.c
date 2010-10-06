#include "blocks.h"

typedef struct {
	int bitmap_end;
	int inodes_start;
	int data_start;
	int root_inode;
	int next_inode;
	int total_blocks;
	int total_inodes;
	int free_blocks;
	int free_inodes;
} SuperBlock;

typedef struct {
	
} iNode // this is HFS je je je
