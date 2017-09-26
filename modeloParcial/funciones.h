typedef struct
{

    int codigoProducto;
    char descripcionProducto[50];
    float importe;
    int cantidad;
    int estado;

} eProducto;

typedef struct
{

    int codigoProveedor;
    //char descripcionProducto[50];
    char nombre[30];

} eProveedor;


typedef struct{

int codigoProducto;
int codigoProveedor;
int estado;



}eProductoProveedor;


char funcionMenu(char cadena[6]);

int funcionPosLibre(eProducto prod[],int cant);

int funcionPosLibrePP(eProductoProveedor productoProveedores[],int cant);


int funcionValidar(char cadena[]);


int funcionValidarNumeros(char validar[]);
