#define NOMBRE_LENGTH 30
#define PASS_LENGTH 10
#define CantUsuario 10
#include <ctype.h>

typedef struct
{
	char nombre [NOMBRE_LENGTH];
	char password [PASS_LENGTH];
	int idUsuario;
	int status;
	float promCalif;
} eUsuario;

void  menuUsuario (eUsuario [], int);
void indiceUsuarios (eUsuario [], int);
void userABM(int, eUsuario[]);

void listarUsers(eUsuario[], int);

void altaUsuario(eUsuario[], int);
void bajaUsuario(eUsuario[]);
void modUsuario(eUsuario[]);

int primerIndiceLibreUser(eUsuario[], int);
int existeIDUser(eUsuario[], int);
