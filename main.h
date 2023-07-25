#ifndef MAIN_H
#define MAIN_H
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/*
 * =======

>>>>>>> 8d1fc3d45fdb3ac67d06a08bc4155b45addcb7a9
*/
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str);
extern char **environ;
char *get_line(void);
char **split_line(char *string);
int exe(char **tonks);
int is_execute(char **tonks);
char *get_location(char *cmd);
char *_getenv(char *wanted);
int real_execute(char *path, char **tonks);
int real_exe(char *cmd, char **tonks);
int _print_str(char *str);
int _write_char(char c);
/*
*char **strtow(char *str, char *d);
*ssize_t input_buf(info_t *info, char **buf, size_t *len);
*ssize_t get_input(info_t *info);
*ssize_t read_buf(info_t *info, char *buf, size_t *i);
*/
int check_for_op(char *string);
int non_interactive(void);
int exe_col(char *string);
char **split_on(char *str, char *delim);
#endif
