#include "blocks.h"

typedef struct hfs_superblock {
	unsigned int s_block_size;		/* Block size in bytes */
	unsigned int s_blocks_count;	/* Total blocks */
	unsigned int s_inodes_count;	/* Total inodes */
	unsigned int s_free_blocks_count;
	unsigned int s_free_inodes_count;
	unsigned int s_first_bitmap_block;
	unsigned int s_first_inode_array_block;
	unsigned int s_first_data_block;
	unsigned int s_root_inode;		/* Inode for the root dir */
	unsigned int s_first_inode;		/* First _free_ inode */

};

typedef struct hfs_inode { // I'm sure it's called iNode on the real hfs xD
	unsigned char i_mode;
	unsigned char i_perms;
	unsigned char i_uid;
	unsigned char i_gid;
	unsigned int i_links;
	unsigned int i_size;
	unsigned int i_blocks;
	unsigned int i_block[12];
	time_t i_atime;		/* Access time */
	time_t i_ctime;		/* Creation time */
	time_t i_mtime;		/* Modification time */
	time_t i_dtime;		/* Deletion time */
};
