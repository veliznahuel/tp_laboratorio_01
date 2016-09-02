#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"


int main()
{
    float SumaResul,RestaResul,MultiResul,FactoResul,DivisionResul;
    float a,b;
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("||||||||||CALCULADORA||||||||||||\n");
        printf("1- Ingresar 1er operando (A=x)\n");       //**************************
        printf("2- Ingresar 2do operando (B=y)\n");       //**************************
        printf("3- Calcular la suma (A+B)\n");            //**************************
        printf("4- Calcular la resta (A-B)\n");           //**************************
        printf("5- Calcular la division (A/B)\n");        //***MENU**DE**CALCULADORA**
        printf("6- Calcular la multiplicacion (A*B)\n");  //**************************
        printf("7- Calcular el factorial (A!)\n");        //**************************
        printf("8- Calcular todas las operacione\n");     //**************************
        printf("9- Salir\n");                             //**************************

        printf("Ingrese Opcion= ");

        scanf("%d",&opcion);

        while(opcion==0 || opcion>=10)
            {
            printf("ERROR\n");
            printf("ingresar del 1 al 9\n");
            system("pause");
            system("cls");
            break;
            }

        switch(opcion)
        {


            case 1://PRIMER NUMERO
                a=pedirNumero();
                system("cls");
                break;

            case 2://SEGUNDO NUMERO

                b=pedirNumero();
                system("cls");

                printf("LOS NUMEROS INGRESADOS FUERON=");
                printf(" %.2f y %.2f \n",a,b);                 //MOSTRAR NUMERO
                printf("SI QUIERE CAMBIAR EL PRIMER Y SEGUNDO NUMERO\n");
                printf("VUELVE A PRECIONAR OPCION 1 / 2\n");
                printf("!!!QUE DECEA CALCULAR!!!\n");                //CALCULAR
                printf("\n");
                break;

            case 3://CALCULO SUMAR

                SumaResul=sumar(a,b);
                printf("LA SUMA ES= %.2f\n",SumaResul);
                system("pause");
                system("cls");
                break;
            case 4://CALCULO RESTAR
                RestaResul=restar(a,b);
                printf("LA RESTA ES= %.2f\n",RestaResul);
                system("pause");
                system("cls");
                break;
            case 5://CALCULO DIVISION
                while(a==0 || b==0)
                {



                    printf("\n!!ERROR!!\n");
                    printf("NO SE PUEDE DIVIDIR 0");       //
                    printf("\nINGRESE NUMEROS DE NUEVO\n");

                    break;

                }

                DivisionResul=division(a,b);
                printf("LA DIVISION ES= %.2f\n",DivisionResul);
                system("pause");
                system("cls");
                break;

            case 6://CALCULO MULTIPLICACION

                MultiResul=multiplicar(a,b);
                printf("LA MULTIPLICACION ES= %.2f\n",MultiResul);
                system("pause");
                system("cls");
                break;

            case 7://CALCULO FACTORIAL

                FactoResul=factorial(a);
                printf("EL FACTORIAL DE %.2f ES= %.2f\n",a,FactoResul);
                system("pause");
                system("cls");
                break;

            case 8://TODOS LOS CALCULOS
                printf("\nLOS NUMEROS INGRESADOS FUERON=");
                printf(" %.2f y %.2f \n",a,b);

                SumaResul=sumar(a,b);
                printf("LA SUMA ES= %.2f\n",SumaResul);

                RestaResul=restar(a,b);
                printf("LA RESTA ES= %.2f",RestaResul);

                while(a==0 || b==0)
                {


                    printf("\n!!ERROR!!\n");
                    printf("NO SE PUEDE DIVIDIR 0");       //
                    printf("\nINGRESE NUMEROS DE NUEVO");

                    break;


                }
                DivisionResul=division(a,b);
                printf("\nLA DIVISION ES= %.2f\n",DivisionResul);


                MultiResul=multiplicar(a,b);
                printf("LA MULTIPLICACION ES= %.2f\n",MultiResul);

                FactoResul=factorial(a);
                printf("EL FACTORIAL DE %.2f ES= %.2f\n",a,FactoResul);
                system("pause");
                system("cls");
                break;

            case 9:

                printf("ADIOS GRACIAS POR USAR NUESTRA CALCULADORA");
                scanf("%c",&seguir);
                break;
        }


    }
    return 0;
}
