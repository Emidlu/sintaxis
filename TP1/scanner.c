#include "scanner.h"

int get_token(){
    char caracter;
    int posicion = 0;
    
    do{ caracter = getchar();
    }while(isspace(caracter)); 
    
    switch (caracter){
    case EOF:
        return FDT;
        break;
    case ',':
        buffer[0] = caracter;
        buffer[1] = '\0';
        return SEP;
        break;
    default: while (caracter != EOF && caracter != ',' && !isspace(caracter))
    {
        buffer[posicion] = caracter;
        posicion++;
        caracter = getchar();
    }
        buffer[posicion] = '\0';
        ungetc(caracter, stdin);
        return CAD;  
    }
}

