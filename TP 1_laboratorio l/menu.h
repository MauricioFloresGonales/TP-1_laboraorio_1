
/** \brief sirve para poder ingresar un numero y guardarlo
 *
 * \param int variable donde se va a guardar el numero ingresado
 * \return int numero ingresado
 *
 */
int ingresarNumero(int);

//---------------------------------------------------------------------------------------------------------------------------------------------

/** \brief muestra las distintas cuentas que puede hacer la calculadora
 *
 * \param int numero ingresado A
 * \param int numero ingresado B
 * \return int estado de la funcion 1 si se pudo
 *
 */
int mostrarCaluculos(int,int);

//---------------------------------------------------------------------------------------------------------------------------------------------

/** \brief muestra las distintas respuestas de toda la calcualdora
 *
 * \param int numero ingresado A
 * \param int numero ingresado B
 * \param int respuesta de la suma
 * \param int respuesta de la resta
 * \param float respuesta de la division
 * \param int respuesta de la multiplicacion
 * \param int respueesta de la factorizacion del numero ingresado A
 * \param int respueesta de la factorizacion del numero ingresado B
 * \param int estado del programa
 * \return int 1 si se pudo o un mensaje deciendo: "FALTA CALCULAR LAS CUENTAS"
 *
 */
int mostrarRespuestas(int,int,int,int,float,int,int,int,int );


