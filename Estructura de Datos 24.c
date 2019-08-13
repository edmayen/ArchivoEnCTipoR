#include<stdio.h>
#include<stdlib.h>
#define T 50
void Abrir(FILE**);
void Lectura(FILE*);

int main()
{
    system("color F0");
    FILE *ap=NULL;
    Abrir(&ap);
    Lectura(ap);
    getchar();
    getchar();
}

void Abrir(FILE **ap)
{
    char nom[T];
    printf("\n\t\t\t\tArchivo de Tipo Lectura.\n");
    do
    {
            printf("\n\nIngresa el Nombre del Archivo a Leer: ");
            gets(nom);
            *ap=fopen(nom,"r");
            if(*ap==NULL)
            {
                printf("Error. Archivo no Encontrado.");
            }
    }while(*ap==NULL);
}

void Lectura(FILE *ap)
{
    char cad[T];
    printf("\n\nLa Informacion Ingresada en el Archivo es:\n\n");
    fgets(cad,T,ap);
    while(!feof(ap))
    {
        puts(cad);
        fgets(cad,T,ap);
    }
}
