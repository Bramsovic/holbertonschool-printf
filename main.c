#include "_printf.h"
#include <stdio.h>
/**
 * main - Point d'entrée pour tester les spécificateurs %c, %s, %%
 *
 * Return: Toujours 0
 */
int main(void)
{
    int len1, len2;
/*Test du spécificateur %c*/
    len1 = _printf("Caractère : %c\n", 'A');
    len2 = printf("Caractère : %c\n", 'A');
    printf("Retour _printf: %d, Retour printf: %d\n\n", len1, len2);
/*Test du spécificateur %s*/
    len1 = _printf("Chaîne : %s\n", "Bonjour tout les humains!");
    len2 = printf("Chaîne : %s\n", "Bonjour tout le monde!");
    printf("Retour _printf: %d, Retour printf: %d\n\n", len1, len2);
/*Test du spécificateur %% */
    len1 = _printf("Pourcentage : %%\n");
    len2 = printf("Pourcentage : %%\n");
    printf("Retour _printf: %d, Retour printf: %d\n", len1, len2);
/*Test du spécificateur %d*/
    len1 = _printf("Entier (%%d) : %d\n", 123);
    len2 = printf("Entier (%%d) : %d\n", 123);
    printf("Retour _printf: %d, Retour printf: %d\n\n", len1, len2);
/*Test du spécificateur %i*/
    len1 = _printf("Entier (%%i) : %i\n", -456);
    len2 = printf("Entier (%%i) : %i\n", -456);
    printf("Retour _printf: %d, Retour printf: %d\n\n", len1, len2);
}
