

typedef struct{

char nombre[31];
int edad;
long int dni;

}S_persona;


int loadPerson(S_persona* person);
void getString(char message[],char errorMensaje[],char eMessage[],S_persona *person, int lowLimit, int hiLimit);
int functionValidString(char mensaje[],char str[]);
void getInt(char message[],char errorMensaje[],char eMessage[],S_persona *person, int lowLimit, int hiLimit);
int funcionValidarNumeros(char mensaje[],char validar[]);
