/*
================================================================================
  INDICE GENERAL DE ACTIVIDADES - PROGRAMACION I
================================================================================
  Contiene:
    [1] Indice de actividades (que hace cada una)
    [2] Indice de elementos (en que actividades aparece cada concepto)
================================================================================


================================================================================
  [1] INDICE DE ACTIVIDADES
================================================================================

--- FUNCIONES / TP1 -----------------------------------------------------------

  Funcion.cpp    Ejemplo de funciones basicas con aritmetica y tipos de datos
                 (int, double, float, pow())

  Tp1P1.cpp      Calcula el cubo de un numero real (funcion con retorno double)

  Tp1P2.cpp      Cuantas veces cabe un numero en otro (division entera y modulo)

  Tp1P3.cpp      Devuelve el menor de dos numeros (if-else)

  Tp1P4.cpp      Indica si un numero es positivo, negativo o cero (if-else-if,
                 retorno string)

  Tp1P5.cpp      Calcula el total de una compra aplicando descuento porcentual

  Tp1P6.cpp      Calculadora: realiza +, -, *, / segun operador elegido
                 (switch-case)

  Tp1P7.cpp      Determina si un alumno queda regular/libre segun notas y
                 asistencia (if-else anidado, strings)

--- FUNCIONES / TP2 -----------------------------------------------------------

  Tp2P1.cpp      Retorna la suma de dos numeros

  Tp2P2.cpp      Retorna 'P', 'N' o 'C' segun si el numero es positivo,
                 negativo o cero (retorno char)

  Tp2P3.cpp      Retorna el mayor de dos numeros

  Tp2P4.cpp      Calcula el factorial de un numero (for, to_string())

  Tp2P5.cpp      Determina cual de dos mujeres es la madre segun la edad mayor
                 (strings, parametros)

  Tp2P6.cpp      Convierte tiempo arbitrario a formato HH:MM:SS
                 (parametros por referencia &, modulo)

  Tp2P7.cpp      Verifica si un numero es triangular (1+2+3+...+n)
                 (while, acumulador)

  Tp2P8.cpp      Invierte los digitos de un entero (while, modulo)

  Tp2P9.cpp      Verifica si un numero es palindromo (while, inversion de
                 digitos, comparacion)

  Tp2P10.cpp     Suma todos los digitos de un entero positivo
                 (while, modulo, acumulador, validacion de entrada)

  Tp2P11.cpp     Verifica si todos los digitos de un numero son pares
                 "numero hiperpar" (while, modulo, bool)

  Tp2P12.cpp     Simula el juego de dados craps con reglas de victoria/derrota
                 (rand(), srand(), cstdlib, ctime)

  Tp2P12.1.cpp   Version mejorada del craps con mejor interfaz
                 (void con referencia, multiples bucles, numeros aleatorios)

--- FUNCIONES / TP3 -----------------------------------------------------------

  Tp3P1.cpp      Muestra un mensaje con borde decorativo de asteriscos
                 (void, strings)

  Tp3P2.cpp      Dibuja un cuadrado de asteriscos de tamanio variable
                 (void, for anidados)

  Tp3P3.cpp      Dibuja un rectangulo de asteriscos
                 (void, for anidados)

  Tp3P4.cpp      Dibuja un triangulo que crece (for anidados)

  Tp3P5.cpp      Dibuja un triangulo que decrece (for anidados con decremento)

  Tp3P6.cpp      Dibuja un rombo/piramide: crece y luego decrece
                 (void, multiples for)

  Tp3P7.cpp      Dibuja un triangulo centrado con espacios
                 (for anidados, calculo de espacios)

  Tp3P8.cpp      Dibuja un reloj de arena (for anidados, calculo dinamico)

  Tp3P9.cpp      Dibuja un reloj de arena con patron de estrellas

  Tp3P10.cpp     Dibuja una X de tamanio variable
                 (for anidados, bucles inversos, posicionamiento simetrico)

--- GUIAS / G1 ----------------------------------------------------------------

  G1P1.cpp       Calcula la distancia recorrida (MRU: d = v * t)

  G1P2.cpp       Calcula el promedio de 4 notas

  G1P3.cpp       Calcula el puntaje de un examen con pesos distintos por parte

  G1P4.cpp       Calcula el puntaje de un equipo de futbol
                 (puntos por gol, penal, etc.)

  G1P5.cpp       Calcula el salario de un empleado

  G1P6.cpp       Calcula el area de un triangulo con la formula de Heron
                 (cmath, sqrt())

  G1P7.cpp       Sistema de alarma de temperatura (if-else, umbral)

  G1P8.cpp       Verifica si un contribuyente tiene beneficio impositivo
                 (strings, const, condicional)

  G1P9.cpp       Analiza produccion promedio de una fabrica
                 (arrays, for, acumulador, condicional)

  G1P10.cpp      Clasifica un triangulo: equilatero, isosceles o escaleno
                 (if-else, comparacion de igualdad)

  G1P11.cpp      Extrae las decenas y unidades de un numero
                 (division entera, modulo)

  G1P12.cpp      Determina si un numero es par o impar (modulo, condicional)

--- GUIAS / G2 ----------------------------------------------------------------

  G2P1.cpp       Calcula perimetro y area de un rectangulo con validacion
                 (while, do-while, validacion)

  G2P2.cpp       Calcula perimetro de un circulo con validacion de entrada
                 (do-while, terminacion condicional)

  G2P3.cpp       Suma numeros ingresados convirtiendolos a positivos si son
                 negativos (if, aritmetica)

  G2P4.cpp       Calcula el promedio de 10 edades (for, acumulador)

  G2P5.cpp       Calcula el promedio de N edades ingresadas por el usuario
                 (for, N dinamico, acumulador)

  G2P6.cpp       Muestra la tabla de multiplicar de un numero dado
                 (for, salida formateada)

  G2P7.cpp       Calcula el promedio de edades de mascotas por tipo
                 (multiples for, acumulacion condicional, casting)

  G2P8.cpp       Extrae los digitos de un numero de 4 cifras con switch
                 (for, switch-case, modulo)

  G2P9.cpp       Analiza el peso de contenedores en un puerto
                 (for, acumulador, conteo condicional, promedio)

  G2P10.cpp      Calcula la cuota de un socio de club segun categoria
                 (validacion de string, if-else anidado)

  G2P11.cpp      Control de calidad de fabricacion (1 maquina)
                 (for, conteo condicional, porcentaje)

  G2P12.cpp      Control de calidad de fabricacion (3 maquinas)
                 (multiples for, arreglos paralelos)

  G2P13.cpp      Menu de conversion de unidades (switch-case, double,
                 formulas de conversion)

--- GUIAS / G3 ----------------------------------------------------------------

  G3P1.cpp       Suma los enteros del 1 al 10 usando while

  G3P2.cpp       Suma gastos de un viaje hasta que se ingresa un valor negativo
                 (while con condicion de corte)

  G3P3.cpp       Calcula el promedio de notas hasta ingresar 0
                 (while, acumulador, contador)

  G3P4.cpp       Muestra la tabla de multiplicar hasta un limite dado por el
                 usuario (while, multiplicacion)

  G3P5.cpp       Suma los enteros del 1 al 10 usando do-while

  G3P6.cpp       Muestra los primeros 100 numeros pares (do-while, += 2)

  G3P7.cpp       Sistema de gestion de stock con alerta de minimo
                 (do-while, condicional, continue)

  G3P8.cpp       Suma los enteros del 1 al 10 usando for

  G3P9.cpp       Cuenta cuantos ceros hay entre 12 numeros ingresados
                 (for, contador condicional)

  G3P10.cpp      Encuentra el maximo y minimo entre 10 numeros
                 (for, comparacion, variables de seguimiento)

  G3P11.cpp      Cuenta ceros, positivos y negativos entre numeros ingresados
                 (for, multiples contadores)

  G3P12.cpp      Calcula el factorial usando for con validacion de entrada

  G3P13.cpp      Analiza notas: aprobados, reprobados y promedio
                 (for, condicional, multiples contadores)

  G3P14.cpp      Cuenta pares, impares y ceros entre numeros ingresados
                 (for, multiples condicionales)

  G3P15.cpp      Suma el total de sueldos de empleados de una empresa
                 (for, acumulador, N dinamico)

  G3P16.cpp      Verifica si un numero es primo usando bandera booleana
                 (for, bool, break)

  G3P17.cpp      Genera una serie con paso alternado (while, operador ternario)

--- GUIAS / G4 ----------------------------------------------------------------

  G4P1.cpp       Optimiza extraccion de billetes en un cajero automatico
                 (arreglos, for anidados, while, modulo)

  G4P2.cpp       Radar de velocidad: analiza velocidades y estadisticas
                 (while, cmath abs(), conteo/seguimiento condicional, porcentaje)

  G4P3.cpp       Genera patron grafico de reloj de arena con validacion
                 (do-while, for anidados, validacion)

  G4P4.cpp       Analiza si dos numeros son primos y si son amigos
                 (funciones, for anidados, bool, ternario, rango)

  G4P5.cpp       Sistema de comisiones por ventas con identificacion del mejor
                 vendedor (while, condicionales escalonados, porcentaje)


================================================================================
  [2] INDICE DE ELEMENTOS (concepto -> actividades donde aparece)
================================================================================

--- TIPOS DE DATOS ------------------------------------------------------------

  int            Funcion, Tp1P2, Tp1P4, Tp1P6, Tp1P7, Tp2P1..P12, Tp3P1..P10
                 G1P1..G1P12, G2P1..G2P13, G3P1..G3P17, G4P1..G4P5

  double         Funcion, Tp1P1, Tp1P5, G1P1..G1P6, G2P1..G2P2, G2P4..G2P9
                 G2P13, G4P2, G4P5

  float          Funcion, Tp1P5

  char           Tp2P2

  bool           Tp2P11, G3P16, G4P4

  string         Tp1P4, Tp1P7, Tp2P4, Tp2P5, Tp3P1, G1P8, G2P10

  const          G1P8

--- ENTRADA / SALIDA ----------------------------------------------------------

  cin / cout     Todas las actividades

  Salida         G2P6 (tabla de multiplicar formateada),
  formateada     Tp3P1..P10 (patrones graficos)

--- OPERADORES ----------------------------------------------------------------

  Aritmeticos    Todas las actividades
  (+, -, *, /)

  Modulo (%)     Tp1P2, Tp2P6, Tp2P8, Tp2P9, Tp2P10, Tp2P11, G1P11, G1P12
                 G2P8, G4P1

  Division       Tp1P2, G1P11, G2P8
  entera

  Comparacion    Tp1P3, Tp1P4, Tp1P7, Tp2P3, Tp2P5, Tp2P9, G1P7, G1P10
  (==, <, >, <=, G3P10, G3P16
  >=, !=)

  Logicos        Tp1P7, Tp2P11, G1P8, G1P9, G2P10, G3P11, G3P13, G3P14
  (&&, ||, !)    G4P4

  Ternario (?:)  G3P17, G4P4

--- CONDICIONALES -------------------------------------------------------------

  if / else      Tp1P3, Tp1P4, Tp1P5, Tp1P7, Tp2P2, Tp2P3, Tp2P5, G1P7
                 G1P8, G1P10, G1P12, G2P3, G2P7, G2P9, G2P10, G2P11, G3P2
                 G3P3, G3P7, G3P9, G3P10, G3P11, G3P13, G3P14, G4P2, G4P5

  if-else-if     Tp1P4, G1P7, G1P10, G2P10, G3P11, G3P13, G3P14, G4P5
  (cadena)

  if anidado     Tp1P7, G2P10

  switch-case    Tp1P6, G2P8, G2P13

--- BUCLES --------------------------------------------------------------------

  for            Tp2P4, Tp3P2..P10, G1P9, G2P4..G2P12, G3P8..G3P17
                 G4P1, G4P3

  for anidado    Tp3P2..P10 (patrones graficos), G4P1, G4P3, G4P4

  while          Tp2P7..P11, G2P1, G3P1..G3P4, G3P7, G4P2, G4P5

  do-while       G2P1, G2P2, G3P5..G3P7, G4P3

  break          G3P16 (primo), G3P7 (stock)

  continue       G3P7 (stock)

--- FUNCIONES -----------------------------------------------------------------

  Funcion con    Tp1P1..P7, Tp2P1..P5, Tp2P7..P12
  retorno

  Funcion void   Tp3P1..P10, Tp2P12.1
  (sin retorno)

  Prototipo de   Funcion, Tp1P1..P7, Tp2P1..P12, Tp3P1..P10
  funcion

  Parametros     Tp1P1..P7, Tp2P1..P12
  por valor

  Parametros     Tp2P6 (tiempo -> HH:MM:SS), Tp2P12.1
  por referencia
  (&)

  Multiples      Tp2P5, Tp2P6, Tp1P7
  parametros

  Retorno bool   Tp2P11, G4P4

  Retorno char   Tp2P2

  Retorno string Tp1P4, Tp2P5

--- PATRONES DE PROGRAMACION --------------------------------------------------

  Acumulador     Tp2P7, Tp2P10, G2P4, G2P5, G2P7, G2P9, G2P11, G2P12
                 G3P1..G3P3, G3P5, G3P8, G3P12, G3P13, G3P15, G4P5

  Contador       G2P9, G2P11, G3P9, G3P11, G3P13, G3P14, G4P2, G4P5

  Maximo/Minimo  G3P10, G4P2

  Bandera (flag) G3P16, G4P4
  con bool

  Validacion de  Tp2P10, G2P1, G2P2, G3P12, G4P3
  entrada

  Porcentaje     G2P11, G2P12, G4P2, G4P5

  Promedio       G1P2, G1P3, G1P9, G2P4, G2P5, G2P7, G2P9, G3P3, G3P13
                 G4P2

--- ARREGLOS (ARRAYS) ---------------------------------------------------------

  Array 1D       G1P9 (produccion), G4P1 (billetes), G2P12 (3 maquinas)

--- LIBRERIAS -----------------------------------------------------------------

  <iostream>     Todas las actividades

  <cmath>        Funcion (pow), G1P6 (sqrt, Heron), G4P2 (abs)

  <cstdlib>      Tp2P12, Tp2P12.1 (rand, srand)
  <ctime>        Tp2P12, Tp2P12.1 (time para semilla random)

  <string>       Tp1P4, Tp1P7, Tp2P4 (to_string), Tp2P5, Tp3P1, G1P8, G2P10

--- NUMERICAS / MATEMATICAS ---------------------------------------------------

  Factorial      Tp2P4 (while), G3P12 (for)

  Numero primo   G3P16, G4P4

  Palindromo     Tp2P9

  Numero         Tp2P7
  triangular

  Numero         Tp2P11
  hiperpar

  Numeros amigos G4P4

  Inversion de   Tp2P8, Tp2P9
  digitos

  Suma de        Tp2P10
  digitos

  Numeros        Tp2P12, Tp2P12.1
  aleatorios

  Serie/          G3P17 (paso alternado)
  Sucesion

--- PATRONES GRAFICOS (ASCII ART) ---------------------------------------------

  Cuadrado       Tp3P2

  Rectangulo     Tp3P3

  Triangulo      Tp3P4 (crece), Tp3P5 (decrece), Tp3P7 (centrado)

  Rombo/         Tp3P6
  Piramide

  Reloj de arena Tp3P8, Tp3P9, G4P3

  X / Cruz       Tp3P10

  Borde          Tp3P1

--- APLICACIONES PRACTICAS ----------------------------------------------------

  Calculadora    Tp1P6 (con switch)

  Descuento/     Tp1P5, G4P5 (comisiones por ventas)
  Comision

  Tiempo HH:MM   Tp2P6

  Dados/Azar     Tp2P12, Tp2P12.1

  Cajero (ATM)   G4P1

  Radar          G4P2

  Nomina/Salario G1P5, G3P15

  Control de     G2P11, G2P12
  calidad

  Conversion de  G2P13 (menu de unidades)
  unidades

  Stock/Inventar G3P7

  Notas/Promedio G1P2, G1P3, G3P3, G3P12, G3P13

  Geometria      G1P6 (Heron), G2P1 (rectangulo), G2P2 (circulo)

================================================================================
  [3] SINTAXIS RAPIDA - ESQUELETOS DE CODIGO
================================================================================

--- FUNCION CON RETORNO -------------------------------------------------------

  tipo nombreFuncion(tipo param1, tipo param2) {
      // cuerpo
      return valor;
  }

  // Ejemplo: retorna el mayor de dos enteros
  int mayor(int a, int b) {
      if (a > b) return a;
      else return b;
  }

--- FUNCION VOID (sin retorno) ------------------------------------------------

  void nombreFuncion(tipo param1) {
      // cuerpo (no lleva return)
  }

--- PROTOTIPO (va antes del main) ---------------------------------------------

  tipo nombreFuncion(tipo param1, tipo param2);   // solo declaracion

--- PARAMETRO POR REFERENCIA (&) ---------------------------------------------

  void modificar(int &x) {     // & hace que cambie el original
      x = x * 2;
  }

  // Llamada: modificar(variable);  -> variable queda modificada

--- FOR -----------------------------------------------------------------------

  for (int i = 0; i < n; i++) {
      // cuerpo
  }

  // For anidado (ej. patron grafico):
  for (int i = 1; i <= filas; i++) {
      for (int j = 1; j <= i; j++) {
          cout << "* ";
      }
      cout << endl;
  }

--- WHILE ---------------------------------------------------------------------

  while (condicion) {
      // cuerpo
      // (modificar variable de condicion para no quedar infinito)
  }

  // Patron: acumular hasta condicion de corte
  int n;
  cin >> n;
  while (n != 0) {
      suma += n;
      cin >> n;
  }

--- DO-WHILE (ejecuta AL MENOS una vez) ---------------------------------------

  do {
      // cuerpo
  } while (condicion);

  // Patron: validacion de entrada
  do {
      cout << "Ingrese un valor positivo: ";
      cin >> x;
  } while (x <= 0);

--- SWITCH-CASE ---------------------------------------------------------------

  switch (variable) {
      case 1:
          // codigo
          break;
      case 2:
          // codigo
          break;
      default:
          // si no coincide ninguno
  }

--- IF / ELSE-IF / ELSE -------------------------------------------------------

  if (condicion1) {
      // ...
  } else if (condicion2) {
      // ...
  } else {
      // ...
  }

--- ARRAY (arreglo) -----------------------------------------------------------

  int arr[5];                      // declaracion
  int arr[5] = {10, 20, 30, 40, 50}; // con inicializacion

  for (int i = 0; i < 5; i++) {
      cout << arr[i] << endl;      // acceso por indice
  }

--- NUMEROS ALEATORIOS --------------------------------------------------------

  #include <cstdlib>
  #include <ctime>

  srand(time(0));          // semilla (va una sola vez, antes del bucle)
  int dado = rand() % 6 + 1;  // numero entre 1 y 6

--- ACUMULADOR ----------------------------------------------------------------

  int suma = 0;            // inicializar ANTES del bucle
  for (int i = 1; i <= n; i++) {
      suma += i;           // suma = suma + i
  }

--- CONTADOR ------------------------------------------------------------------

  int cant = 0;            // inicializar ANTES del bucle
  for (...) {
      if (condicion) cant++;
  }

--- MAXIMO / MINIMO -----------------------------------------------------------

  int maximo = numeros[0];   // inicializar con el primero
  for (int i = 1; i < n; i++) {
      if (numeros[i] > maximo)
          maximo = numeros[i];
  }

--- PROMEDIO ------------------------------------------------------------------

  double promedio = (double)suma / cantidad;  // cast para no perder decimales

--- BANDERA (flag) ------------------------------------------------------------

  bool esPrimo = true;     // asumir verdadero
  for (int i = 2; i < n; i++) {
      if (n % i == 0) {
          esPrimo = false;
          break;           // no hace falta seguir
      }
  }

--- INVERSION DE DIGITOS ------------------------------------------------------

  int invertido = 0;
  while (n != 0) {
      invertido = invertido * 10 + n % 10;
      n /= 10;
  }

--- SUMA DE DIGITOS -----------------------------------------------------------

  int suma = 0;
  while (n != 0) {
      suma += n % 10;
      n /= 10;
  }

--- FACTORIAL -----------------------------------------------------------------

  // Con for:
  int fact = 1;
  for (int i = 1; i <= n; i++) fact *= i;

  // Con while:
  int fact = 1, i = 1;
  while (i <= n) { fact *= i; i++; }

--- OPERADOR TERNARIO ---------------------------------------------------------

  variable = (condicion) ? valor_si_verdadero : valor_si_falso;
  // Ejemplo:
  string res = (x > 0) ? "positivo" : "no positivo";

--- TO_STRING -----------------------------------------------------------------

  #include <string>
  string texto = to_string(numero);   // convierte int/double a string


================================================================================
  [4] ERRORES COMUNES A EVITAR
================================================================================

  = en vez de ==    | if (x = 5)   -> ASIGNA, no compara
                    | if (x == 5)  -> CORRECTO

  Sin & en ref.     | void f(int x)  -> no modifica el original
                    | void f(int &x) -> CORRECTO si queres modificarlo

  Acumulador no     | Declarar suma dentro del bucle lo resetea cada iteracion
  inicializado      | Inicializar SIEMPRE antes del for/while

  Division entera   | int a=5, b=2; double r = a/b; -> r vale 2.0 (no 2.5!)
                    | double r = (double)a / b;      -> CORRECTO: 2.5

  rand() sin        | Sin srand(time(0)) siempre genera la misma secuencia
  srand()           | Poner srand(time(0)) UNA SOLA VEZ antes de usar rand()

  do-while vs while | do-while ejecuta el cuerpo minimo 1 vez aunque la
                    | condicion sea falsa desde el inicio; while no lo hace

  Off-by-one        | for (i=1; i<=n; i++)  -> n iteraciones (correcto)
                    | for (i=0; i<n; i++)   -> n iteraciones (correcto)
                    | for (i=1; i<n; i++)   -> n-1 iteraciones (cuidado!)

  Modulo en         | Solo funciona bien con enteros. Para double usar fmod()
  doubles           |

  Break sin case    | En switch, sin break el codigo "cae" al siguiente case

  Array fuera de    | int arr[5]; arr[5] = 10; -> ERROR, indices van de 0 a 4
  rango             |

  Prototipo         | Si llamas a una funcion antes de definirla, necesitas
  faltante          | el prototipo arriba del main (tipo f(tipo);)


================================================================================
  [5] DIFERENCIAS CLAVE
================================================================================

  WHILE vs DO-WHILE
  -----------------
  while: evalua condicion ANTES  -> puede no ejecutarse nunca
  do-while: evalua condicion DESPUES -> ejecuta al menos 1 vez
  Usar do-while cuando: validar entrada, menu que debe mostrarse al menos 1 vez

  FOR vs WHILE
  ------------
  for: cuando se sabe cuantas veces iterar (contador conocido)
  while: cuando se itera hasta que pase algo (condicion de corte, centinela)

  PARAMETRO POR VALOR vs POR REFERENCIA
  --------------------------------------
  Por valor (int x):   la funcion recibe una COPIA, el original no cambia
  Por referencia (&x): la funcion trabaja sobre el ORIGINAL, lo puede cambiar
  Usar & cuando: la funcion debe devolver mas de un resultado

  INT vs DOUBLE en DIVISION
  -------------------------
  int / int = int  (trunca decimales)   5 / 2 = 2
  double / int = double                 5.0 / 2 = 2.5
  (double)int / int = double            (double)5 / 2 = 2.5

  RETURN vs VOID
  --------------
  Con retorno: la funcion produce un valor que se puede usar/guardar
  void: la funcion hace algo (imprime, modifica por referencia) pero no retorna
  Un void puede tener 'return;' (sin valor) para salir antes

  == vs = EN CONDICIONALES
  ------------------------
  if (x == 5)  -> compara x con 5 (lo que queremos)
  if (x = 5)   -> asigna 5 a x y siempre es verdadero (BUG clasico)


================================================================================
  [6] MAPA DE DEPENDENCIAS (si el ejercicio pide X, usa Y)
================================================================================

  Pide factorial              -> for o while + acumulador multiplicativo
                                 (fact = 1, fact *= i)

  Pide primo                  -> for hasta n-1 + bandera bool + break

  Pide palindromo             -> invertir digitos y comparar con original

  Pide suma/promedio de N     -> for + acumulador + dividir al final
  valores

  Pide maximo o minimo        -> inicializar con el primero, recorrer y comparar

  Pide validar entrada        -> do-while hasta que la entrada sea valida

  Pide menu repetitivo        -> do-while o while + switch-case dentro

  Pide patron grafico         -> for anidado (fila x columna), calcular
                                 espacios = filas - fila

  Pide modificar variable     -> parametro por referencia (&)
  dentro de funcion

  Pide resultado con decimal  -> usar double y castear en la division
                                 (double)suma / cantidad

  Pide numero aleatorio       -> srand(time(0)) + rand() % rango + base

  Pide extraer digitos        -> while (n != 0) { digito = n%10; n/=10; }

  Pide contar elementos con   -> contador inicializado en 0 + if dentro del
  cierta condicion            -> bucle + contador++

  Pide varios resultados en   -> void + parametros por referencia (&)
  una sola funcion

  Pide acumular hasta corte   -> while con condicion de corte o centinela
  (ej: hasta ingresar -1)     -> leer antes del while y al final del cuerpo

================================================================================
*/
