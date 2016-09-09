
/** \brief Se suman dos operadores, ingresado por el usuario
 *
 * \param operador a sumar.
 * \param segundo operador a sumar.
 * \return se retorna el resultado de la suma.
 *
 */

float sumar(float numero1, float numero2)
{
    float suma;
    suma= numero1+numero2;
    return suma;

}
/** \brief Se restan dos operadores, ingresando por el usuario.
 *
 * \param Operador a restar.
 * \param Segundo operador a restar.
 * \return Se retorna el resulado de la resta.
 *
 */

float restar( float numero1, float numero2)
{
    float resta;
    resta= numero1-numero2;
    return resta;
}
/** \brief Se dividen dos operadores, ingresado por usuario.
 *
 * \param Operador al cual se va a dividir.
 * \param segundo operador, el que divide al primer operador.
 * \return Se retorna el resultado de la division.
 *
 */

float dividir(float numero1, float numero2)
{
    float division;

      if(numero2==0)
      {
          printf("Error,reingrese numero ");
      }
       else
       {
        division=numero1/numero2;
       }
       return division;
}
/** \brief Se multiplican dos operadores, ingresado por el usuario.
 *
 * \param Operador a multiplicar.
 * \param Operador que multiplica al primero operando.
 * \return Se retorna el resultado de la mutiplicacion.
 *
 */

float multiplicar(float numero1, float numero2)
{
    float multiplicacion;
    multiplicacion= numero1* numero2;
    return multiplicacion;
}
/** \brief Se calcula el factorial de un operador.
 *
 * \param El operando al que se le va a calcular el factorial.
 * \param
 * \return Se retorna el resultado de la funcion.
 *
 */

 float factorial(float numero1)
 {
     int i,factoriales=numero1, resultado=numero1;
/** \brief Validacion si el operando es igual a 0.
 *
 * \param Si el numero es igual a 0.
 * \param
 * \return Se returna en 1.
 *
 */

     if(numero1==0)
     {
         return 1;
     }
     for(i=0; i<(numero1-1); i++)
     {
         resultado=resultado*(factoriales-1);
         factoriales--;
     }
     return resultado;
 }



