typedef struct
{
    char nombre [30];
    float precio;
    int idProducto;
    int stock;
    int ventas;
    int status;

}eProducto;


void  menuProducto (eProducto product[], int tamanio);
