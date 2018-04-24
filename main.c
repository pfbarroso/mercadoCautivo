#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#define CantUsuario 10
#define CantProduct 100


int main()
{
    int opcion;
    eUsuario users[CantUsuario];
    eUsuario oneUser;
    eRelaciones relaciones[CantProduct*CantUsuario];

/*---------------------------------------------------*/

    indiceUsuarios(users, CantUsuario); //Inicializar a cero
    do
    {
        opcion=displayMenuABM(
                              "\n--- Menu General---\n\n"
                              " 1-  Menu de Usuario "
                              "\n 2-  Menu de Productos"
                              "\n 3-  Comprar producto"
                              "\n 4-  Listar Publicaciones de Usuario "
                              "\n 5-  Listar Publicaciones "
                              "\n 6- Listar usuarios\n \n 0-  SALIR!"
                              "\t \t Ingrese la opcion deseaba:\t"
                              );
        switch (opcion)
        {
        case 1:
            //menu
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 0:
            opcion=0;
            break;
        default:
            printf("no ha ingresado una opcion valida");
            printf("\n");
            system ("cls");
            break;
        }
    }
    while (opcion !=0);
    printf("\n CHAU\n");
    return 0;
}
