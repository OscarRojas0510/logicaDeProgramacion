#include <stdio.h>
#include <stdbool.h>
/*
 * Escribe un programa que muestre por consola (con un print) los
 * números de 1 a 100 (ambos incluidos y con un salto de línea entre
 * cada impresión), sustituyendo los siguientes:
 * - Múltiplos de 3 por la palabra "fizz".
 * - Múltiplos de 5 por la palabra "buzz".
 * - Múltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 */

int main()
{
    bool fizz;
    bool buzz;
    char *result;
    for (int i = 1; i <= 100; i++)
    {
        fizz = i % 3 == 0;
        buzz = i % 5 == 0;

        if (fizz || buzz)
        {
            result = (fizz && buzz) ? "fizzbuzz" : (fizz ? "fizz" : "buzz");
            printf("%d -> %s\n", i, result);
        }
    }

    return 0;
}
