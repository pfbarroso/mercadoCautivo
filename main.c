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
                              "\n--- Menu General---\n"
                              "\n1- Menu de Usuario "
                              "\n2- Menu de Productos"
                              "\n3- Comprar producto"
                              "\n4- Listar Publicaciones de Usuario "
                              "\n5- Listar Publicaciones "
                              "\n6- Listar usuarios"
                              "\n\n0- SALIR"
                              "\n\n\tIngrese la opcion deseada: "
                              );
        switch (opcion)
        {
        case 1:
            //menu Users
            break;
        case 2:
            //Menu Productos
            break;
        case 3:
            //Comprar
            break;
        case 4:
            //Listar Publicaciones de 1 User
            break;
        case 5:
            //Listar ALL Publ.
            break;
        case 6:
            //Listar Usuarios
            break;
        case 0:
            break;
        default:
            printf("\n\tERROR! No ha ingresado una opcion valida.\n");
            printf("\n");
            system("pause");
            system ("cls");
            break;
        }
    }
    while (opcion !=0);

    return 0;
}
