#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

#define T(...) do { \
    fflush(stdout); \
    printf("[printf   ] "); \
    r1 = printf(__VA_ARGS__); \
    printf(" -> %d\n", r1); \
    printf("[ft_printf] "); \
    fflush(stdout); \
    r2 = ft_printf(__VA_ARGS__); \
    printf(" -> %d\n", r2); \
    printf("%s\n\n", (r1 == r2) ? "retour OK" : "retour KO <<<<<"); \
} while (0)

int main(void)
{
    int     r1;
    int     r2;
    int     x = 42;
    char    *str = "salut";

    /* texte seul et %% */
    T("Bonjour");
    T("100%%");
    T("%%%%");

    /* %c */
    T("[%c]", 'A');
    T("[%c%c%c]", 'a', 'b', 'c');
    T("[%c]", '\0');

    /* %s */
    T("[%s]", str);
    T("[%s]", "");
    T("[%s]", (char *)NULL);

    /* %d et %i */
    T("[%d] [%i]", 0, 0);
    T("[%d] [%i]", 42, -42);
    T("[%d]", INT_MAX);
    T("[%d]", INT_MIN);

    /* %u */
    T("[%u]", 0);
    T("[%u]", 42);
    T("[%u]", UINT_MAX);
    T("[%u]", -1);

    /* %x et %X */
    T("[%x] [%X]", 0, 0);
    T("[%x] [%X]", 255, 255);
    T("[%x]", -1);
    T("[%x] [%X]", INT_MIN, INT_MIN);
    T("[%x]", UINT_MAX);
    T("[%x]", 0xabcdef);

    /* %p */
    T("[%p]", &x);
    T("[%p]", str);
    T("[%p]", (void *)0x1);
    T("[%p]", (void *)-1);
    T("[%p]", (void *)NULL);

    /* mélange : vérifie que les va_arg ne se décalent pas */
    T("%s a %d ans, adresse %p, hexa %x, char %c", "Bob", 25, &x, 255, 'z');
    T("%d%s%c%u%x%X%%", 1, "a", 'b', 2, 3, 4);
    T("%c%c%c", 'x', '\0', 'y');

    return (0);
}
