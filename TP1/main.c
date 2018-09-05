#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"
#include "Validador.h"

int mostrarResultado(int x, int y, int sum, int res, int prod, float div, int facx, int facy);

int main()
{
    int x;
    int y;
    int option;
    int isuma;
    int iresta;
    int iproducto;
    float fdivision;
    int ifactorialx;
    int ifactorialy;
    int flagprimeroperando=0;
    int flagsegundooperando=0;
    int flagcalcular=0;

    printf("==========================================\n");
    printf("==          Elija una opcion            ==\n");
    printf("==========================================\n");
    printf("|   1. Ingresar 1er operando (A=x)       |\n");
    printf("|   2. Ingresar 2do operando (B=y)       |\n");
    printf("|   3. Calcular todas las operaciones    |\n");
    printf("|   4. Informar resultados               |\n");
    printf("|   5. Salir                             |\n");
    printf("==========================================\n");

    do
    {
        printf("Ingrese una opcion \n\n");
        scanf("%d/n/n", &option);

        switch(option)
        {
        case 1:
            printf("Ingresar 1er operando (A=x): ");
            scanf("%d/n/n", &x);
            flagprimeroperando=1;
            break;

        case 2:
            printf("Ingresar 2do operando (B=y)): ");
            scanf("%d/n/n", &y);
            flagsegundooperando = 1;
            break;

        case 3:
            if(flagprimeroperando == 1 && flagsegundooperando == 1)
            {
                isuma = suma(x,y);
                iresta = resta(x, y);
                iproducto = multiplicar(x, y);
                fdivision = dividir(x, y);
                ifactorialx = factorial(x);
                ifactorialy = factorial(y);
                flagcalcular = 1;
            }
            else
            {
                printf("Debe ingresar primer y segundo operando \n\n");
            };
            break;
        case 4:
            if(flagcalcular == 1)
            {
                mostrarResultado(x, y, isuma, iresta, iproducto, fdivision, ifactorialx, ifactorialy);
            }
            else
            {
                printf("Debe calcular primero los resultados");
            };
            break;
        }
    }while(!(option == 5));

    return 0;
}


int mostrarResultado(int x, int y, int sum, int res, int prod, float div, int facx, int facy)
{

    printf("El valor del 1er operando A=%d \n\n", x);
    printf("El valor del 2do operando B=%d \n\n", y);

    //suma
    printf("El resultado de A+B es: %d \n\n",sum);

    //resta
    printf("El resultado de A-B es: %d \n\n",res);

    //division
    if(!(y==0))
    {
        printf("El resultado de A/B es: %.2f \n\n", div);
    }
    else
    {
        printf("No es posible dividir por cero\n\n");
    }

    //producto
    printf("El resultado de A*B es: %d\n\n", prod);

    //factorial
    printf("El factorial de A es: %d y El factorial de B es: %d\n\n", facx, facy);

    return 0;
}

