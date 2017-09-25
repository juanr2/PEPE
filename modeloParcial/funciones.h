typedef struct
{

    int codigoProducto;
    int codigoProveedor;
    char descripcionProducto[50];
    float importe;
    int cantidad;

} eProducto;

typedef struct
{

    int codigoProveedor;
    char descripcionProducto[50];

} eProveedor;


typedef struct{

int codigoProducto;
int codigoProveedor;


}eProductoProveedor;


char funcionMenu(char cadena[6]);
