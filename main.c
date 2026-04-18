#include <stdio.h>
#include <stdlib.h>

void tamaño_cadena(void);
void contar_vocales(char cadena[]);

int main()
{
    int cadena[20];
    tamaño_cadena();
    contar_vocales(cadena);
    return 0;
}

void tamaño_cadena(void)
{
    do{
    printf("Introduzca la cadena menor a 20 caracteres: ");
    gets(cadena);
    }while(strlen(cadena)>20)
}

void contar_vocales(char cadena[])
{
    int t=0;
    for (int j=0; j<20; j++)
    {
        switch(cadena[j])
        {
        case 'A':
        t++;
        break;
        case 'E':
        t++;
        break;
        case 'I':
        t++;
        break;
        case 'O':
        t++;
        break;
        case 'U':
        t++;
        break;
        case 'a':
        t++;
        break;
        case 'e':
        t++;
        break;
        case 'i':
        t++;
        break;
        case 'o':
        t++;
        break;
        case 'u':
        t++;
        break;
        default:
        break;
        }
    }
    printf("\nEn esta cadena hay %d vocales\n", t);
}
