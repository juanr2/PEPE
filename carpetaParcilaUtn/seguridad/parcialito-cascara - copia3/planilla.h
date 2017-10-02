
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



void getString(char message[],char errorMensaje[],char eMessage[],char input[], int lowLimit, int hiLimit);

void getDescription(char message[],char eMessage[],char inputDescription[], int lowLimit, int hiLimit);

void setProduct(eProduct[],int,int ,char[],char[],int,float);

void setProductProvider(eProductProvider[],int,int ,int);

void setStatusProvider(eProvider[],int );

void setStatusProduct(eProduct[],int );


void   showProduct(eProduct [],int);

int flagDetector(int);


void cleanProduct(eProduct prod[],eProductProvider prodProvider[],int,int ,int);

int findProductByCode(eProduct[],int,int);

int findProductProviderByCode(eProductProvider[] ,int ,int auxCodeProduct);

