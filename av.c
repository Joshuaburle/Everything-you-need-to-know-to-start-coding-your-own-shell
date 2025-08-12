#include <stdio.h>

/**
 * main - prints all arguments without using ac
 * @ac: argument count (not used)
 * @av: argument vector
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int i;

    /* We don't use ac, we iterate until we find NULL */
    (void)ac; /* This line avoids compiler warning about unused parameter */
    
    for (i = 0; av[i] != NULL; i++)
    {
        printf("%s\n", av[i]);
    }
    
    return (0);
}
