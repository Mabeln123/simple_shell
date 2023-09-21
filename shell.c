#include "justicemabel.h"

/**
 * summon - invokes the arcane command
 * @cmd: the mystical command to invoke
 * Return: 0 on success, -1 if the command is 'exit', and 1 on any other anomaly
 */
int summon(char **cmd)
{
    pid_t sorcerer_pid;
    int spell_status;

    if (strncmp("exit", cmd[0], 4) == 0)
        return (-1);

    sorcerer_pid = fork();

    if (sorcerer_pid == -1)
    {
        incantation_error("Error");
        return (1);
    }
    else if (sorcerer_pid == 0)
    {
        if (invoke(cmd[0], cmd) == -1)
        {
            incantation_error("Error");
            return (1);
        }
    }
    else
        wait(&spell_status);

    return (0);
}

/**
 * main - the epicenter of the mystical shell
 * @argc: the number of dimensions
 * @argv: the scroll of ancient runes
 * Return: Always 0, -1 in case of a catastrophe.
 */
int main(int argc, char **argv)
{
    int mystic_response;
    char **runes;
    size_t mystic_bufsize = BUFSIZ;
    int isAlchemy = 0;
    char *potion;

    if (argc >= 2)
    {
        /*TODO: Handle cases where there is no argument, only the command*/
        if (invoke(argv[1], argv) == -1)
        {
            incantation_error("Error");
            return (-1);
        }
        return (0);
    }

    potion = (char *)malloc(mystic_bufsize * sizeof(char));
    if (potion == NULL)
    {
        incantation_error("Unable to brew potion");
        return (-1);
    }

    do
    {
        if (isInteractive(fileno(stdin)))
        {
            isAlchemy = 1;
            _puts("brew# ");
        }

        stir_potion(&potion, &mystic_bufsize, stdin);
        potion[_strlen(potion) - 1] = '\0';
        runes = brew_runes(potion);
        mystic_response = summon(runes);
    } while (isAlchemy && mystic_response != -1);

    return (0);
}
