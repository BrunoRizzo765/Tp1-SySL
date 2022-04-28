#include <stdio.h>
#include <ctype.h>

//Bruno Rizzo

int main()
{
    char caracter;
    FILE* f;
    char nombreArchivo[50] = "texto.txt";

    if(f = fopen(nombreArchivo,"wb+"))
    {
        printf("Ingrese una cadena. \n");
        caracter = getchar();

        while(caracter != '\n' && caracter!=EOF)  
        {
            if(isalpha(caracter))
            {
                if(isupper(caracter))
                {
                    caracter = tolower(caracter);
                }else{
                    caracter = toupper(caracter);
                }
                fputc(caracter,f);

            }else if(!isdigit(caracter))
            {
                fputc(caracter,f);
            }
            caracter = getchar();    
        }
        fclose(f);
    }
    return 0;
}