/*
#include <stdio.h>
#include <stdlib.h>
*/
#include "lib.h"


int main()
{
	int opcionMenu1;
	eUsuario users[CantUsuario];
	eUsuario oneUser;
	eProducto items[CantProduct];
	eRelaciones relaciones[CantProduct*CantUsuario];


	indiceUsuarios(users, CantUsuario); //Inicializar a cero (quizás agregar procucto status=0

	/*---------------------------------------------------*/


	do
		{
			menuOpciones(
			    "\n==============================\n"
			    "\n\tMENU PRINCIPAL\n"
			    "\n==============================\n"
			    "\n1- Menu de USUARIOS"
			    "\n2- Menu de PRODUCTOS"
			    "\n3- Comprar producto"
			    "\n4- Listar Publicaciones de Usuario "
			    "\n5- Listar Publicaciones "
			    "\n6- Listar usuarios"

			    "\n\n"
			    "0- SALIR"
			    "\n\n"

			    "Elija una opcion: ");

			scanf("%d",&opcionMenu1);
            printf("==============================\n");

            funcionSwitchMenu(opcionMenu1,users, items);

		}
	while (opcionMenu1 !=0);

	return 0;
}
