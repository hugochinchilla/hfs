This project is an exercises for a subject in [my degree](http://eps.uib.es/est_estudi.php?idest=3)

ASO (Operating Systems)
=======================

**Original docs in spanish:**

 * [Enunciado](http://hugochinchilla.github.com/hfs/doc/enunciado.html)
 * [Paso a paso](http://hugochinchilla.github.com/hfs/doc/pasoapaso.html)


Writing a File System with inodes from zero
-------------------------------------------

### Introcution

This practice will implement a file system, the module for file management for the OS and the interaction with user processes.

<img src="/hugochinchilla/hfs/raw/master/doc/enunciado_files/esquema2009-en-small.png" alt="" width="380" />

### General structure

The practice is compound by the nextelements:

 *  Libraries, divided in levels, which bring the necessary primitives to access our File
    System and manage it.
 *  A mkfs program for creating, with the help of the previous libraries, the File System
    on the drive. The file system will be actually stored on a **drive.image** file in our
    SO, the structure is as follows:
    ![File System](/hugochinchilla/hfs/raw/master/doc/enunciado_files/sistema_ficheros-en.png)
 *  One program for showing the contents of a file on screen (**cat**), one to modify it's
    permissions (*chmod*), one to make hard links(**ln**), one to list directories (**ls**),
    one to delete files and directories (**rm**), and one to show the meta of a file or dir
    (**stat**).

    Those programs make use of the file system throught the library primitives.

    Its behavior is similar to the one of its respective programs _cat_, _chmod_, _ln_,
    _ls_, _rm/rmdir_, _stat_ from GNU/Linux.
 *  A simulator program which will create some test processes to handle files in a way
    that we can check the correct operation of the libraries.


### Requirements

The requirements are:

 *  The file sistem will be hierarchical, it has to be possible to create subdirectories.
 *  The file sistem has to be indexed (128 bytes inodes with 12 direct pointers, 1 first
    level indirect pointer, 1 second level indirect pointer, and 1 third level indirect
    pointer).
