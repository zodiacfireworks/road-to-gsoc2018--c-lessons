#include<stdlib.h>
#include<stdio.h>

/*
 * stdlib.h: Contiene las varaibles para los valores de retorno:
 *           EXIT_SUCCESS  0
 *           EXIT_FAILURE  1
 *
 * NOTAS:
 *  Para cadenas de texto las siguientes representaciones son
 *  equivalentes
 *
 *  "hola" <> {'h', 'o', 'l', 'a', '\0'}
 */

int main(void) {
    /* Variables */
    int i;

    char x = 'x';

    char y1[] = "hola";
    char y2[] = {'h', 'o', 'l', 'a', '\0'};

    char *py1;
    py1 = &(y1[0]);

    // & se llama Ampersand
    // &<var_name> Retorna la dirección de memoria de la variable
    //             [A]mpersand = [A]ddress (Dirección)
    // *<var_name> Variable que recibirá una dirección de memoria

    char *z = &x;

    /* Cuerpo del programa */
    printf("Variable 'x'\n");
    printf("* Valor    : '%c'\n", x);
    printf("* Direccion: '%x'\n", &x);

    printf("Variable 'y1'\n");
    printf("* Valor    : '%c'\n", y1);
    printf("* Direccion: '%x'\n", &y1);

    printf("Variable 'y2'\n");
    printf("* Valor    : '%c'\n", y2);
    printf("* Direccion: '%x'\n", &y2);

    // char *z = &x;
    // z  : La direccion de x (&x)
    // *z : El valor de x (x)
    //
    // Esto:
    //   char *z = &x;
    // Es equivalente a:
    //   char *z;
    //   z = &x;

    printf("Variable 'z'\n");
    printf("* Valor    : '%c'\n", *z);
    printf("* Direccion: '%x'\n", z);

    //
    // char y1[] = "hola";
    // char y2[] = {'h', 'o', 'l', 'a', '\0'};

    printf("En la variable 'y1':\n");
    for(i = 0; i<5; i++) {
        printf(
            "Caracter [%i]: {Val: '%c' Dir: '%x'}\n",
            i,
            y1[i],
            &(y1[i])
        );
    }

    printf("Variable 'py1'\n");
    printf("* Valor    : '%c'\n", *py1);
    printf("* Direccion: '%x'\n", py1);

    /*
        Si i es mayor de 5 entonces tomaremos
        direcciones de memoria de otro lado
        (Fallo de seguridad)
    */
    printf("Sumando valores a py1\n");
    for(i = 0; i < 20; i++) {
        printf(
            "py1 + [%i]: {Val: '%c', Dir: '%x'}\n",
            i,
            *(py1 + i),
            (py1 + i)
        );
    }

    /* Valor de retorno */
    return EXIT_SUCCESS;
}
