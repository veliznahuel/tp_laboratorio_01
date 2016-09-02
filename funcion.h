#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

float sumar(float,float);
float restar(float,float);            //FUNCION.H
float division(float,float);
float multiplicar(float,float);
float factorial(float);
float pedirNumero();

/** \brief Realiza operacion sumar
 * \param x primer operando a sumar
 * \param y segundo operando a sumar
 * \return retorna el resultado de la sumar
 *
 */

float sumar (float x,float y)
{
    int sumatoria;
    sumatoria=x+y;                                //FUNCION SUMAR
    return sumatoria;
}
/** \brief Realiza operacion restar
 * \param x primer operando a restar
 * \param y segundo operando a restar
 * \return retorna el resultado de la restar
 */
float restar(float x,float y)
{
    int restante;
    restante=x-y;                              //FUNCION RESTAR
    return restante;
}
/** \brief Realiza operacion divisiom
 * \param x primer operando a divisiom
 * \param y segundo operando a division
 * \return retorna el resultado de la divicion
 *
 */
float division(float x,float y)
{
    int divi;
    divi=x/y;                                   //FUNCION DIVISION
    return divi;
}
/** \brief Realiza operacion multiplicar
 * \param x primer operando a multiplicar
 * \param y segundo operando a multiplicar
 * \return retorna el resultado de la multiplicar
 *
 */
float multiplicar(float x,float y)
{
    int multi;
    multi=x*y;                                   //FUNCION MULTIPLICAR
    return multi;
}
/** \brief Realiza operacion factorial
 * \param x primer operando a factorial
 * \return retorna el resultado de la factorial
 *
 */
float factorial(float x)
{
    int facto=1,i;
    for(i=1;i<=x;i++)
    {                                            //FUNCION FACTORIAL
    facto=facto*i;
    }
    return facto;

}
/** \brief Realiza operacion pedirNumero
 * \return retorna el numero ingresado
 *
 */
float pedirNumero()
{
    float numeroIngresado;
    printf("Ingrese Numero\a: ");                 //FUNCION PEDIR NUMERO
    scanf("%f",&numeroIngresado);
    return numeroIngresado;
}

#endif // FUNCIONES_H_INCLUDED
