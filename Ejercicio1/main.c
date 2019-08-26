/* pedir nombre, sexo (f o m) y nota (0-10).
mientras el usuario quiera.
informar: nombre y sexo mayor nota y menor.
promedio de notas totales.
promedio de notas de mujeres.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int nota;
    int notaMay;
    int notaMin;
    int acum = 0;
    int contF = 0;
    int acumF = 0;
    int cont = 0;
    char sexo;
    char nombre[20];
    char resp;
    char nombreMay[20];
    char sexoMay;
    char nombreMin[20];
    char sexoMin;




    do {

        cont ++;


        printf ("Ingrese un nombre: ");
        fflush (stdin);
        gets (nombre);

        do{


            printf ("Ingrese el sexo (f/m): ");
            fflush (stdin);
            scanf ("%c", &sexo);


        }while (sexo != 'm' && sexo !='f');


        do {

            printf ("Ingrese una nota (0-10): ");
            fflush (stdin);
            scanf ("%d", &nota);

            acum += nota;

             if (sexo == 'f'){

                contF ++;
                acumF += nota;

            }

            if (cont == 1){

                notaMay = nota;
                notaMin = nota;
                strcpy(nombreMay, nombre);
                strcpy(nombreMin, nombre);
                sexoMay = sexo;
                sexoMin = sexo;
            }

            if ( nota > notaMay){

                notaMay = nota;
                sexoMay = sexo;
                strcpy(nombreMay, nombre);
            }

            if (nota < notaMin){

                notaMin = nota;
                sexoMin = sexo;
                strcpy(nombreMin, nombre);
            }


        }while (nota <0 || nota >10);



        printf ("Desea seguir introduciendo datos? (s/n): ");
        fflush(stdin);
        scanf ("%c", &resp);


    }while (resp != 'n');

    //system("cls");
    printf("La nota mayor es %d , el nombre es %s y el sexo es %c.\n", notaMay, nombreMay, sexoMay);
    printf("La nota menor es %d ,  el nombre es %s, y el sexo es %c.\n", notaMin, nombreMin, sexoMin);
    printf ("El promedio de notas totales es: %.2f\n", (float) acum / cont);
    printf ("El promedio de notas de mujeres es: %.2f\n", (float) acumF / contF);





    return 0;
}
