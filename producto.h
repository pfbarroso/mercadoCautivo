#define NOMBRE_LENGTH 30

typedef struct
{
    char nombre [NOMBRE_LENGTH];
    float precio;
    int idProducto;
    int stock;
    int ventas;
    int status;

}eProducto;

void  menuProducto (eProducto product[], int tamanio);
