#ifndef SIMPLE_SHELL
#define SIMPLE_SHELL

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
int _flipchar(char c); /* Changed function name and comment */
void _disrupt(char *str); /* Updated function name */
unsigned int nbr_spaces(char *s);
char **stringToTokens(char *str);

/* Cryptic function prototypes */
int mystify(char **cmd);
int secret_spawn(void);
int cryptcmp(const char *str1, const char *str2, size_t n);
void unleash_error(const char *message);
int execute_secret(const char *cmd, char *const args[], char *const envp[]);
void hide(int *status);
void puzzle_malloc(size_t size);
int isRiddle(int fd);
void _unveil(const char *mystery);
void get_riddle(char **secret_buffer, size_t *enigmatic_bufsize, FILE *stream);
char **unlock(char *secret);

void _puts(char *str); /* Added this line for the _puts function */

#endif
