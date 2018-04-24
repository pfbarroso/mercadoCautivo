#include "producto.h"

int displayMenuABM (char texto[])
{
    int opcion;

    printf("%s", texto);
    scanf("%d", &opcion);

    switch (opcion)
    {
        case 1:
            opcion=1;
            break;
        case 2:
            opcion=2;
            break;
        case 3:
            opcion=3;
            break;
        case 4:
            opcion=4;
            break;
        case 5:
            opcion=5;
            break;
        case 6:
            opcion =6;
            break;
         case 7:
            opcion =7;
            break;
        case 8:
            opcion =8;
            break;
        case 9:
            opcion =9;
            break;
         case 10:
            opcion =10;
            break;
        case 0:
            opcion=0;
            break;

        default:
            printf("\n\tERROR! No ha ingresado una opcion valida.\n");
            printf("\n");
            system("pause");
            system ("cls");
            break;

    }
    return opcion;
}
