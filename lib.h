#include <stdlib.h>
#include <string.h>
//#include <conio.h> //Para Windows

#include "producto.h"
#include "usuarios.h"
typedef struct
{
	int idUsuario;
	int idProducto;
}
eRelaciones;

void menuOpciones(char[]);
void funcionSwitchMenu(int, eUsuario[], eProducto[]);
void eliminarNuevaLinea(char[]);
void inicializar(eUsuario[],int);

int primerIdLibre();
int primerIndiceLibreProd(eProducto[], int);
char validarSiNo();
