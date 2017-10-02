
typedef struct{

int idProduct;
char name[50];
char description[50];
int quantity;
float price;
int status;

}eProduct;


typedef struct{

int idProvider;
char name[50];
int status;

}eProvider;

typedef struct{

int idProduct;
int idProvider;
int status;

}eProductProvider;


int getInt(char message[],char errorMensaje[],char eMessage[], int lowLimit, int hiLimit);
int funcionValidarNumeros(char mensaje[],char validar[]);
int obtenerEspacioLibre(eProduct [],int );
int obtenerEspacioLibrePP(eProductProvider [],int );
float getFloat(char message[],char errorMensaje[],char eMessage[], int lowLimit, int hiLimit);
int functionValidString(char mensaje[],char str[]);
