#include "lib.h"
void menuOpciones(char cadena[])
{
	printf(cadena);
}

void inicializar(eUsuario arrayUsers[],int qty)
{
	int i;
	for(i=0; i<qty; i++)
		{
			arrayUsers[i].status= 0;
		}
	/* for(i=0; i<qtyU; i++)
	 {
	     viewers[i].idUser = 0;
	     viewers[i].estado = 0;
	 }*/

}

void funcionSwitchMenu(int primeraOpcion, eUsuario users[], eProducto items[])
{
	int opcionMenu2;
	switch(primeraOpcion)
		{
		case 1:
			do
				{
					menuOpciones(
					    "\n\tMenu: USUARIOS\n"
					    "\n==============================\n"
					    "1. ALTA\n"
					    "2. BAJA\n"
					    "3. MODIFICACION\n"
					    "9. SALIR\n"
					    "Elija una opcion: ");

					scanf("%d",&opcionMenu2);
					printf("==============================\n");
					userABM(opcionMenu2, users);
				}
			while(opcionMenu2 != 9);
			break;

		case 2:
			do
				{
					menuOpciones(
					    "\n\tMenu: PRODUCTOS\n"
					    "\n==============================\n"
					    "1. ALTA\n"
					    "2. BAJA\n"
					    "3. MODIFICACION\n"
					    "9. SALIR\n"
					    "Elija una opcion: ");

					scanf("%d",&opcionMenu2);
					printf("==============================\n");
					productoABM(opcionMenu2, items);
				}
			while(opcionMenu2 != 9);
			break;
		case 3:

			break;
		}

}

void eliminarNuevaLinea(char cadena[])
{
	int i;
	for(i=0; i<=strlen(cadena); i++)
		{

			if(cadena[i] == '\n')
				{
					cadena[i] = '\0';
				}

		}
}

char validarSiNo()
{
char choice;
getchar();
scanf("%c",&choice);
choice = tolower(choice);

while(choice != 'n' && choice != 's')
{
printf("ERROR! No reconocido. Reintente: ");
getchar();
scanf("%c",&choice);
choice = tolower(choice);
}
return choice;
}
