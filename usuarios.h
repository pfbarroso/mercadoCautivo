
typedef struct
{
    char nombre [30];
    char password [12];
    int idUsuario;
    int status;
    float promCalif;
} eUsuario;

void  menuUsuario (eUsuario [], int);
void indiceUsuarios (eUsuario [], int);
