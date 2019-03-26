#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int obtenerMaximo(int x, int y, int z);
int mostrarMenu();

int main()
{
    char seguir='s';

    do{
        switch(mostrarMenu()){
        case 1:
            printf("Opcion alta\n");
            break;
        case 2:
            printf("opcion baja");
            break;
        case 3:
            printf("Opcion alta\n");
            break;
        case 4:
            printf("Opcion alta\n");
            break;
        case 5:
            printf("Opcion alta\n");
            break;
        default:
            printf("opcion invalida");
        }

        system("pause");
    }while(seguir=='s');


    /*int num1;
    int num2;
    int num3;
    int rta;

    printf("Ingrese un numero: ");
    scanf("%d",&num1);

     printf("Ingrese segundo numero: ");
    scanf("%d",&num2);

     printf("Ingrese tercer numero: ");
    scanf("%d",&num3);

    rta= obtenerMaximo(num1,num2,num3);

    printf("El maximo es: %d",rta);

    return 0;*/
}

int mostrarMenu()
{
    int opcion;

    system("cls");
    printf("1_ Alta\n");
    printf("2_ Baja\n");
    printf("3_ Modificar\n");
    printf("4_ Informe\n");
    printf("5_ Salir\n");
    printf("Ingrese opcion: ");
    scanf("%d",&opcion);

}


