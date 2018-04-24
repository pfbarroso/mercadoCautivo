#define NOMBRE_LENGTH 30
#define PASS_LENGTH 10

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
