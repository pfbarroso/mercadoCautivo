#include "usuarios.h"
#include <curses.h>  //Para Linux
#include <unistd.h>


void indiceUsuarios (eUsuario usuarios[], int tamanio)
{
	int i;
	for (i=0 ; i<tamanio; i++)
		{
			usuarios[i].status=0;
		}

}

void userABM(int segundaOpcion, eUsuario users[])
{
	int index;
	{
		switch(segundaOpcion)
			{
			case 1://ALTA
				index = primerIndiceLibreUser(users, CantUsuario);
				if(index != -1)
					{
						altaUsuario(users, index);
					}
				else
					{
						printf("ERROR! No hay más espacio.\n");
					}
				break;
			case 2:
				bajaUsuario(users);
				break;
			case 3:
				modUsuario(users);
				break;
			default:
				printf("OPCION NO RECONOCIDA. REINGRESE\n");
				break;

			}
	}

}

void altaUsuario(eUsuario users[], int indice)
{
	char pwd[PASS_LENGTH];

	users[indice].idUsuario = indice+1;
	printf("Usuario Nro.: %d\n",users[indice].idUsuario);

	printf("Ingrese nombre de usuario: ");
	getchar();
	fgets(users[indice].nombre,NOMBRE_LENGTH ,stdin);
	eliminarNuevaLinea(users[indice].nombre);

	strcpy(users[indice].password,getpass("Ingrese su password: \n"));
	strcpy(pwd,getpass("Verifique su password: \n"));
	//Verificar Password
	while(strcmp(users[indice].password,pwd)!=0)
		{
			printf("ERROR!\n");
			strcpy(users[indice].password,getpass("Ingrese su password: \n"));
			strcpy(pwd,getpass("Verifique su password: \n"));
		}

	users[indice].status=1;

	printf("\tALTA...OK\n");
}

void bajaUsuario(eUsuario users[])
{
	int nroID;
	int status;
	char choose;
	listarUsers(users, CantUsuario);
	printf("Ingrese ID de Usuario a dar de baja: ");
	scanf("%d", &nroID);
	status = existeIDUser(users, nroID);
	if(status != -1)
		{
			printf("¿Dar de baja user #%d? S/N ... ",nroID);

			choose = validarSiNo();
			if(choose == 's')
				{
					users[status].status = 0;

					printf("\tBAJA...OK\n");
				}
			else
				{
					printf("\tBAJA...CANCELADA\n");
				}

		}
	else
		{
			printf("\tERROR! No existe ese Nro. de ID.\n");
		}

}
void modUsuario(eUsuario users[])
{
	int nroID;
	int status;
	char choose;

	listarUsers(users, CantUsuario);
	printf("Ingrese ID de Usuario a modificar: ");
	scanf("%d", &nroID);
	status = existeIDUser(users, nroID);
	if(status != -1)
		{
			menuOpciones
			(
			    "MODIFICAR:\n"
			    "1. Nombre\n"
			    "2. Password\n"
			    "Elija una opcion: "
			);

			//printf("¿Dar de baja user #%d? S/N ... ",nroID);

			choose = validarSiNo();
			if(choose == 's')
				{


					printf("\tMODIFICACION...OK\n");
				}
			else
				{
					printf("\tMODIFICACION...CANCELADA\n");
				}
		}
	else
		{
			printf("\tERROR! No existe ese Nro. de ID.\n");
		}
}


int primerIndiceLibreUser(eUsuario users[], int qtyU)
{
	int i;
	int index = -1;
	for(i=0; i<qtyU; i++)
		{
			if(users[i].status == 0)
				{
					index = i;
					//printf("")
					break;
				}
		}
	return index;
}

int existeIDUser(eUsuario users[], int nroID)
{
	int i;
	int status = -1;
	for(i=0; i<CantUsuario; i++)
		{
			if(users[i].idUsuario == nroID && users[i].status != 0)
				{
					status = i;//Si existe el nroID, devuelve el índice de donde está
					break;
				}
		}
	return status;
}

void listarUsers(eUsuario users[], int qtyU)
{
	int i;
	for(i=0; i<qtyU; i++)
		{
			if(users[i].status != 0)
				printf(
				    "\tNro. ID = %d"
				    " \t Nombre de Usuario = %s\n",users[i].idUsuario);
		}
	printf("\n");

}
