#ifndef SHELL_H
#define SHELL_H

/* ---The header files---*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>
#include <errno.h>

/* ---Our Global Variable--- */
extern char **environ;

/*---Macros---*/
#define BUFSIZE 256
#define FAIL (-1)
#define NEUTRAL (0)
#define PRINT(c) (write(STDOUT_FILENO, c, _strlen(c)))
#define PROMPT "$ "
#define SUCCESS (1)
#define TOKENSIZE 64

/*---Struct---*/

/**
 * struct sh_data - Is my Global Data Structure
 * @line: Is the Line Input
 * @args: Is the Arguments Token
 * @error_msg: Is the Global Path
 * @cmd: is the Parsed Command
 * @index: Is the Command Index
 * @oldpwd: Is the Old Path Visited
 * @env: Is the Environnment
 *
 * Description: A structure has all the variables needed to manage
 * the program, the memory and service accessability
 */
typedef struct sh_data
{
	char *line;
	char **args;
	char *cmd;
	char *error_msg;
	char *oldpwd;
	unsigned long int index;
	char *env;
} sh_t;
/**
 * struct builtin - Is for  manage the builtin functions
 * @cmd: is the command line on string form
 * @f: is the associated function
 *
 * Description: this struct made in a way to manage built ins cmd
 */
typedef struct builtin
{
	char *cmd;
	int (*f)(sh_t *data);
} blt_t;

/* --------The Process_Prototype---------*/
int parse_line(sh_t *);
int process_cmd(sh_t *);
int read_line(sh_t *);
int split_line(sh_t *);

/* ----------The String_Prototype----------*/
char *_strdup(char *str);
char *_strcat(char *first, char *second);
int _strlen(char *str);
char *_strchr(char *str, char c);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *source);

/* ---------The_Memory_Prototype----------*/

int free_data(sh_t *);
char *_memset(char *s, char byt, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/* --------The Tools_Prototype-----------*/
void *fill_an_array(void *a, int el, unsigned int len);
void signal_handler(int signo);
char *_getenv(char *path_name);
void index_cmd(sh_t *data);
void array_rev(char *arr, int len);
char *_itoa(unsigned int n);
int intlen(int num);
int _atoi(char *c);
int print_error(sh_t *data);
int write_history(sh_t *data);
int _isalpha(int c);

/* -----------The Built_ins-------------*/
int abort_prg(sh_t *data);
int change_dir(sh_t *data);
int display_help(sh_t *data);
int handle_builtin(sh_t *data);
int check_builtin(sh_t *data);

/* -----------The Parse---------------*/
int is_path_form(sh_t *data);
void is_short_form(sh_t *data);
int is_builtin(sh_t *data);

#endif /* SHELL_H */
