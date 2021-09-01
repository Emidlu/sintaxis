#include "scanner.h"

int main(void)
{
    char token;
    do{    
    token = get_token();
        switch (token)
        {
        case CAD: printf("Cadena: %s\n", buffer);
            break;
        case SEP: printf("Separador: %s\n", buffer);
            break;
        default: printf("Fin de texto: \n");
        }
   }while(token != FDT); 
}