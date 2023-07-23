#ifndef MAIN_H
#define MAIN_H
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
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
#endif
