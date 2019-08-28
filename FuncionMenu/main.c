#include <stdio.h>
#include <stdlib.h>

char menu();

int main()
{

    switch (menu()){

        case 'a':
            printf ("Opcion a.");
            break;

        case 'b':
            printf ("Opcion b.");
            break;

        case 'c':
            printf ("Opcion c.");
            break;

    }

    return 0;
}

char menu (){

    char opcion;

    printf ("a. Opcion 1.\n");
    printf ("b. Opcion 2.\n");
    printf ("c. Opcion 3.\n");

    scanf ("%c", &opcion);

    return opcion;
}
