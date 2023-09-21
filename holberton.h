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
int _putchar(char c);
void _puts(char *str);
unsigned int nbr_spaces(char *s);
char **stringToTokens(char *str);

/* Function prototypes for the missing functions */
int incantation_error(const char *message);
int invoke(const char *cmd, char *const args[]);
int isInteractive(int fd);
void stir_potion(char **potion, size_t *bufsize, FILE *stream);
char **brew_runes(char *potion);

#endif
