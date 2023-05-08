#ifndef MAIN_H
#define MAIN_H

/*
 * Desc: Header file contains prototypes of all functions
 *       written in 0x14-file_io directory.
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int create_file(const char *filename, char *text_content);
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
