#include<stdio.h>

int main(int argc, char *argv[]) {
    /*
     * argc: Es el numero de argumentos que recibe nuestro programa
     *       cuando es llamado desde la linea de comandos (y desde
     *       cualquier otro lado).
     *
     *       EL primer argumento es el nombre del ejecutable, por
     *       lo cual, si no le pasamos argumentos al programa,
     *       imprimira 1.
     *
     * argv: Contiene los valores de los argumentos ingresados por
     *       linea de comandos (y desde cualquier otro lado).
     *
     *       Los argumentos ingresados son separados por espacios
     *       siempre y cuando estos no esten entre comillas o no
     *       sean escapados ("\<espacio>")
     *
     *       Los argumentos son ordenados en una lista de la
     *       siguiente forma
     *       argv[0] : <el-nombre-del-programa>
     *       argv[1] : argumento-1
     *       argv[2] : argumento-2
     *       argv[3] : argumento-3
     *       ...     : ...
     *
     * NOTAS:
     *       Lasexpresiones como "%d", "%i", "%s" son especificadores de
     *       formato (format especifiers).
     *
     *       Las expresiones como "\t" o "\n" se conocen como secuencias
     *       de escape.
     *
     *       Las expresiones como:
     *       int i = 1;
     *       int argc;
     *       char *argv[];
     *       Son declaraciones de varaibles:
     *
     *       [modificador] <tipo> <nombre_de_var> [= <valor_de_la_variable>];
     */

    for(int i = 1; i < argc; i++) {
        // printf("%i\t", i);
        printf("%s ", argv[i]);
    }
    printf("%s\n", "");
}
