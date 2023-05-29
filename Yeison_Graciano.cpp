#include <iostream>
using namespace std;

void Opcion1()
{
    system("cls");
    int N1;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> N1;

    if (N1 > 0)
    {
        cout << "El numero " << N1 << " es mayor de 0" << endl;
    }

    else
    {
        cout << "El numero " << N1 << " es menor de 0" << endl;
    }
}

void Opcion2()
{
    system("cls");
    int n1;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> n1;

    if (n1 % 2 == 0)
    {
        cout << "El numero " << n1 << " es par" << endl;
    }

    else
    {
        cout << "El numero " << n1 << " no es par" << endl;
    }
}

void Opcion3()
{
    system("cls");

    for (int I = 100; I >= -2; I--) {
        cout << I << endl;
    }
}

void Opcion4()
{
    system("cls");

    for (int I = 2; I <= 100; I += 2) {
        cout << I << endl;
    }
}

void Opcion5()
{
    system("cls");

    float Nota1;
    float Nota2;
    float Nota3;
    float Total;
    float Prome;

    cout << "Porfavor ingrese la primer nota" << endl;
    cin >> Nota1;

    cout << "Porfavor ingrese la segunda nota" << endl;
    cin >> Nota2;

    cout << "Porfavor ingrese la tercer nota" << endl;
    cin >> Nota3;

    Total = Nota1 + Nota2 + Nota3;
    Prome = Total / 3;

    if (Prome > 0)
    {
        cout << "Su promedio fue de " << Prome << endl;
    }

    else
    {
        cout << "No se ingresaron notas" << endl;
    }
}

void Opcion6()
{
    system("cls");

    int Contador = 0;

    cout << "Multiplos de 2: ";
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            Contador++;
        }
    }

    cout << "La cantidad de multiplos de 2 es: " << Contador << endl;

    Contador = 0;

    cout << "Multiplos de 3: ";
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
            Contador++;
        }
    }

    cout << "La cantidad de multiplos de 3 es: " << Contador << endl;
}

void Opcion7()
{
    system("cls");

    float ¨1;
    float ¨2;

    cout << "Porafvor ingrese un numero " << endl;
    cin >> ¨1;

    cout << "Porafvor ingrese un numero " << endl;
    cin >> ¨2;

    if (¨1 > ¨2)
    {
        cout << "El numero " << ¨1 << " es mayor que  " << ¨2 << endl;
    }

    else
    {
        cout << "El numero " << ¨2 << " es mayor que " << ¨1 << endl;
    }
}

void Opcion8()
{
    system("cls");

    float long ¨3;
    float long ¨4;

    cout << "Porafvor ingrese un numero " << endl;
    cin >> ¨3;

    cout << "Porafvor ingrese un numero " << endl;
    cin >> ¨4;

    if (¨3 < ¨4)
    {
        cout << "El numero " << ¨3 << " es menor que  " << ¨4 << endl;
    }

    else
    {
        cout << "El numero " << ¨4 << " es menor que " << ¨3 << endl;
    }
}

void Opcion9()
{
    system("cls");

    int Suma = 0;

    for (int I = 20; I <= 50; I++) {
        Suma += I;
    }

    cout << "La suma de los numeros del 20 al 50 es: " << Suma << endl;
}

void Opcion10()
{
    system("cls");

    int L1, L2, L3, L4, L5, L6, L7, L8, L9, L10, L11, L12, L13, L14, L15;
    int Resultado;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L1;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L2;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L3;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L4;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L5;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L6;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L7;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L8;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L9;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L10;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L11;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L12;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L13;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L14;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> L15;

    Resultado = L1 + L2 + L3 + L4 + L5 + L6 + L7 + L8 + L9 + L10 + L11 + L12 + L13 + L14 + L15;

    cout << "La suma de los numeros que ingreso es: " << Resultado << endl;
}

void Opcion11()
{
    system("cls");

    int Year;
    int Total1;
    int Year_a;

    cout << "Escriba el año actual" << endl;
    cin >> Year_a;

    cout << "Escriba el año de su nacimiento" << endl;
    cin >> Year;

    Total1 = Year_a - Year;

    if (Total1 <= 17)
    {
        cout << "Usted no es mayor de edad y usted tiene: " << Total1 << " años." << endl;
    }

    else
    {
        cout << "Usted es mayor de edad y usted tiene: " << Total1 << " años." << endl;
    }
}

void Opcion12()
{
    system("cls");

    double Uno;
    double Dos;
    double Tres;

    cout << "Porfavor ingrese el primer numero: " << endl;
    cin >> Uno;

    cout << "Porfavor ingrese el segundo numero: " << endl;
    cin >> Dos;

    cout << "Porfavor ingrese el tercer numero: " << endl;
    cin >> Tres;

    if (Uno < Dos)
    {
        swap(Uno, Dos);
    }

    if (Uno < Tres)
    {
        swap(Uno, Tres);
    }

    if (Dos < Tres)
    {
        swap(Dos, Tres);
    }

    cout << "Los numeros ordenados de mayor a menor son: " << Uno << " " << Dos << " " << Tres << endl;
}

void Opcion13()
{
    system("cls");

    double Cuatro;
    double Cinco;
    double Seis;

    cout << "Porfavor ingrese el primer numero: " << endl;
    cin >> Cuatro;

    cout << "Porfavor ingrese el segundo numero: " << endl;
    cin >> Cinco;

    cout << "Porfavor ingrese el tercer numero: " << endl;
    cin >> Seis;

    if (Cuatro > Cinco)
    {
        swap(Cuatro, Cinco);
    }

    if (Cuatro > Seis)
    {
        swap(Cuatro, Seis);
    }

    if (Cinco > Seis)
    {
        swap(Cinco, Seis);
    }

    cout << "Los numeros ordenados de menor a mayor son: " << Cuatro << " " << Cinco << " " << Seis << endl;
}

void Opcion14()
{
    system("cls");

    const double Pi = 3.1416;
    double Radio, Altura;

    cout << "Porfavor ingrese el radio del cilindro" << endl;
    cin >> Radio;

    cout << "Porfavor ingrese la aultura del cilindro" << endl;
    cin >> Altura;

    double Area_base = Pi * (Radio, 2);
    double Area_lateral = 2 * Pi * Radio * Altura;
    double Area_total = Area_base + Area_lateral;
    double Volumen = Area_base * Altura;

    cout << "El area del cilindro es: " << Area_total << endl;
    cout << "El volumen del cilindro es: " << Volumen << endl;
}

void Opcion15()
{
    system("cls");

    float Kmh;
    float Mps;

    cout << "Porfavor ingrese su velocidad en kilometros por hora: " << endl;
    cin >> Kmh;

    Mps = Kmh / 3.6;

    cout << "Su velocidad es de " << Kmh << " kilometros por hora, su velocidad convertida a metros por segundo es: " << Mps << endl;
}

void Opcion16()
{
    system("cls");

    for (int I = 3; I <= 100; I += 3)
    {
        cout << "Los numeron impares entre 1 y 100 son: " << I << endl;
    }
}

void Opcion17()
{
    system("cls");

    int Suma = 0;

    for (int I = 1; I <= 100; I += 2)
    {
        Suma += I;
    }

    cout << "La suma de los nuumeros impares del 1 al 100 son: " << Suma << endl;
}

void Opcion18()
{
    system("cls");

    int Suma_par = 0;

    for (int I = 2; I <= 100; I += 2)
    {
        Suma_par += I;
    }

    cout << "La suma de los nuumeros pares del 1 al 100 son: " << Suma_par << endl;
}

void Opcion19()
{
    system("cls");

    int Numero;
    int Mayor = INT_MIN;
    int Menor = INT_MAX;

    cout << "Porfavor ingrese 5 numeros: " << endl;

    for (int I = 0; I < 5; I++)
    {
        cout << "Numero " << I + 1 << ": ";
        cin >> Numero;

        if (Numero > Mayor) {
            Mayor = Numero;
        }

        if (Numero < Menor) {
            Menor = Numero;
        }
    }

    cout << "El numero mayor es: " << Mayor << endl;
    cout << "El numero menor es: " << Menor << endl;
}

void Opcion20()
{
    system("cls");

    int Num, Fac = 1;

    cout << "Porfavor ingrese un numero: " << endl;
    cin >> Num;

    for (int I = 1; I <= Num; I++)
    {
        Fac *= I;
    }

    cout << "El facrorial de " << Num << " es " << Fac << endl;
}

void Opcion21()
{
    system("cls");

    int NM;

    cout << "Porfavor ingrese un numero entre 1 y 10" << endl;
    cin >> NM;

    if (NM == 1)
    {
        cout << " El numero " << NM << " es equivalente al numero romano I" << endl;
    }

    else if (NM == 2) {
        cout << " El numero " << NM << " es equivalente al numero romano II" << endl;
    }

    else if (NM == 3) {
        cout << " El numero " << NM << " es equivalente al numero romano III" << endl;
    }

    else if (NM == 4) {
        cout << " El numero " << NM << " es equivalente al numero romano IV" << endl;
    }

    else if (NM == 5) {
        cout << " El numero " << NM << " es equivalente al numero romano V" << endl;
    }

    else if (NM == 6) {
        cout << " El numero " << NM << " es equivalente al numero romano VI" << endl;
    }

    else if (NM == 7) {
        cout << " El numero " << NM << " es equivalente al numero romano VII" << endl;
    }

    else if (NM == 8) {
        cout << " El numero " << NM << " es equivalente al numero romano VIII" << endl;
    }

    else if (NM == 9) {
        cout << " El numero " << NM << " es equivalente al numero romano IX" << endl;
    }

    else if (NM == 10) {
        cout << " El numero " << NM << " es equivalente al numero romano X" << endl;
    }
}

void Opcion22()
{
    system("cls");

    int Req;
    int Req2;

    cout << "Porfavor ingrese un numero: " << endl;
    cin >> Req;

    Req2 = Req % 10;

    cout << "El ultimo numero del digito que ingreso es: " << Req2 << endl;
}

void Opcion23()
{
    system("cls");

    float Cm;
    float Pg;

    cout << "Porfavor ingrese su medida en centimetros: " << endl;
    cin >> Cm;

    Pg = Cm / 2.54;

    cout << "Su medida es de " << Cm << " centimetros, su medida convertida a pulgadas es: " << Pg << endl;
}

void Opcion24()
{
    system("cls");

    float Hr;
    float Mins;
    float Seg;

    cout << "Porfavor ingrese una hora" << endl;
    cin >> Hr;

    cout << "Porfavor ingrese cantidad de minutos" << endl;
    cin >> Mins;

    cout << "Porfavor ingrese una cantidad de segundos" << endl;
    cin >> Seg;

    float Z = Hr * 60;
    float T = Mins;
    float Minss = Seg / 60;
    float Qw = Z + T + Minss;

    cout << Hr << " horas, " << Mins << " minutos y  " << Seg << " son equivalentes a " << Qw << "minutos" << endl;
}

void Opcion25()
{
    system("cls");

    int Mes;

    cout << "Porfavor introduzca el numero del mes: " << endl;
    cin >> Mes;


    if (Mes == 1)
    {
        cout << "El mes numero " << Mes << " es igual a enero" << endl;
    }

    if (Mes == 2)
    {
        cout << "El mes numero " << Mes << " es igual a febrero" << endl;
    }

    if (Mes == 3)
    {
        cout << "El mes numero " << Mes << " es igual a marzo" << endl;
    }

    if (Mes == 4)
    {
        cout << "El mes numero " << Mes << " es igual a abril" << endl;
    }

    if (Mes == 5)
    {
        cout << "El mes numero " << Mes << " es igual a mayo" << endl;
    }

    if (Mes == 6)
    {
        cout << "El mes numero " << Mes << " es igual a junio" << endl;
    }

    if (Mes == 7)
    {
        cout << "El mes numero " << Mes << " es igual a julio" << endl;
    }
    if (Mes == 8)
    {
        cout << "El mes numero " << Mes << " es igual a agosto" << endl;
    }

    if (Mes == 9)
    {
        cout << "El mes numero " << Mes << " es igual a septiembre" << endl;
    }

    if (Mes == 10)
    {
        cout << "El mes numero " << Mes << " es igual a octubre" << endl;
    }

    if (Mes == 11)
    {
        cout << "El mes numero " << Mes << " es igual a noviembre" << endl;
    }

    if (Mes == 12)
    {
        cout << "El mes numero " << Mes << " es igual a diciembre" << endl;
    }

    else
    {
        cout << "Porfavor ingrese un mes valido" << endl;
    }
}

void Opcion26()
{
    system("cls");

    int Mes = 0;
    int Dia = 0;


    cout << "Porfavor ingrese su dia de nacimiento: " << endl;
    cin >> Dia;

    cout << "Porfavor ingrese su mes de nacimiento (1 al 12): " << endl;
    cin >> Dia;

    if ((Mes == 1 && Dia >= 20) || (Mes == 2 && Dia <= 18)) {
        cout << "Su signo zodiacal es acuario" << endl;
    }
    else if ((Mes == 2 && Dia >= 19) || (Mes == 3 && Dia <= 20)) {
        cout << "Su signo zodiacal es piscis" << endl;
    }
    else if ((Mes == 3 && Dia >= 21) || (Mes == 4 && Dia <= 19)) {
        cout << "Su signo zodiacal es aries" << endl;
    }
    else if ((Mes == 4 && Dia >= 20) || (Mes == 5 && Dia <= 20)) {
        cout << "Su signo zodiacal es tauro" << endl;
    }
    else if ((Mes == 5 && Dia >= 21) || (Mes == 6 && Dia <= 20)) {
        cout << "Su signo zodiacal es geminis" << endl;
    }
    else if ((Mes == 6 && Dia >= 21) || (Mes == 7 && Dia <= 22)) {
        cout << "Su signo zodiacal es cancer" << endl;
    }
    else if ((Mes == 7 && Dia >= 23) || (Mes == 8 && Dia <= 22)) {
        cout << "Su signo zodiacal es leo" << endl;
    }
    else if ((Mes == 8 && Dia >= 23) || (Mes == 9 && Dia <= 22)) {
        cout << "Su signo zodiacal es virgo" << endl;
    }
    else if ((Mes == 9 && Dia >= 23) || (Mes == 10 && Dia <= 22)) {
        cout << "Su signo zodiacal es libra" << endl;
    }
    else if ((Mes == 10 && Dia >= 23) || (Mes == 11 && Dia <= 21)) {
        cout << "Su signo zodiacal es escorpio" << endl;
    }
    else if ((Mes == 11 && Dia >= 22) || (Mes == 12 && Dia <= 21)) {
        cout << "Su signo zodiacal es sagitario" << endl;
    }
    else if ((Mes == 12 && Dia >= 22) || (Mes == 1 && Dia <= 19)) {
        cout << "Su signo zodiacal es capricornio" << endl;
    }
    else {
        cout << "Digite una fecha valida" << endl;
    }
}

void Opcion27()
{
    system("cls");

    int Numero;

    cout << "Porfavor ingrese un numero" << endl;
    cin >> Numero;

    cout << "El calculo de los numeros desde 1 hasta " << Numero << " es: " << endl;

    for (int I = 1; I <= Numero; I++)
    {
        cout << I << " ";
    }
}

void Opcion28()
{
    system("cls");

    int numero;
    int suma = 0;

    cout << "Ingrese un número: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        suma += i;
    }

    cout << "La suma de los números desde 1 hasta " << numero << " es: " << suma << endl;
}

void Opcion29()
{
    system("cls");

    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    for (int i = 1; i <= 10; i++) {
        int residuo = numero % i;
        cout << "Residuo de " << numero << " dividido por " << i << ": " << residuo << endl;
    }
}

void Opcion30()
{
    system("cls");

    float PC;
    float J;
    float K;

    cout << "Digite el radio del circulo" << endl;
    cin >> PC;

    J = 2 * 3.1416 * PC;
    K = 3.1416 * PC * PC;

    cout << "El area del ciurculo es " << K << " centimetros cuadrados" << endl;
    cout << "El perimetro del circulo es" << J << " centimetros" << endl;
}

void Opcion31()
{
    system("cls");

    double Radio;
    double const PI = 3.1416;

    cout << "Ingrese el radio de la esfera: ";
    cin >> Radio;

    double volumen = (4.0 / 3.0) * PI * (Radio, 3);

    cout << "El volumen de la esfera es: " << volumen << endl;
}

void Opcion32()
{
    system("cls");

    double C1, C2;

    cout << "Ingrese el valor del primer cateto: ";
    cin >> C1;

    cout << "Ingrese el valor del segundo cateto: ";
    cin >> C2;

    double hipotenusa = ((C1, 2) + (C2, 2));

    cout << "La hipotenusa del triángulo rectángulo es: " << hipotenusa << endl;
}

void Opcion33()
{
    system("cls");

    float Gf;
    float Gc;

    cout << "Porfavor ingrese su temperatura en grados fahrenheit: " << endl;
    cin >> Gf;

    Gc = (Gf - 32) * 5 / 9;

    cout << "Su temperatura es de " << Gf << " grados fahrenheit, su temperatura convertida a grados celsius es: " << Gc << endl;
}

void Opcion34()
{
    system("cls");

    float gF;
    float gC;

    cout << "Porfavor ingrese su temperatura en grados celsius: " << endl;
    cin >> gC;

    gF = (gC * 9 / 5) + 32;

    cout << "Su temperatura es de " << gC << " grados celsius, su temperatura convertida a grados fahrenheit es: " << gF << endl;
}

void Opcion35()
{
    system("cls");

    float P1;
    float P2;
    float P3;
    float Rs;

    cout << "Porfavor ingrese la primer nota: " << endl;
    cin >> P1;

    cout << "Porfavor ingrese la segunda nota: " << endl;
    cin >> P2;

    cout << "Porfavor ingrese la tercer nota: " << endl;
    cin >> P3;

    Rs = (P1 * 0.30) + (P2 * 0.30) + (P3 * 0.40);

    if (Rs > 5)
    {
        cout << "Promedio fuera del rango" << endl;
    }

    cout << "Su nota final en la asignatura fue: " << Rs << endl;
}

void Opcion36()
{
    system("cls");

    float N1, N2, N3, N4, NF;

    cout << "Porfavor ingrese la primer nota (Porfavor ingrese una nota entre 1 y 5): " << endl;
    cin >> N1;

    cout << "Porfavor ingrese la segunda nota (Porfavor ingrese una nota entre 1 y 5): " << endl;
    cin >> N2;

    cout << "Porfavor ingrese la tercer nota (Porfavor ingrese una nota entre 1 y 5): " << endl;
    cin >> N3;

    cout << "Porfavor ingrese la cuarta nota (Porfavor ingrese una nota entre 1 y 5): " << endl;
    cin >> N4;

    NF = (N1 * 0.20) + (N2 * 0.20) + (N3 + 0.10) + (N4 * 0.50);

    if (NF > 5)
    {
        cout << "Promedio fuera del rango" << endl;
    }

    cout << "Su nota final de la asignatura de introduccion a la programacion es: " << NF << endl;
}

void Opcion37()
{
    system("cls");

    for (int X = -5; X <= 20; X++) {
        double Y = (5.0 / 3.0) * X + (3.0 / 2.0) * X + 8;
        cout << "Cuando X es iagua a " << X << ", Y es igual a: = " << Y << endl;
    }
}

void Opcion38()
{
    system("cls");

    float E1, E2, E3, RE, PE;

    cout << "Porfavor ingrese la primer edad: " << endl;
    cin >> E1;

    cout << "Porfavor ingrese la segunda edad: " << endl;
    cin >> E2;

    cout << "Porfavor ingrese la tercer edad: " << endl;
    cin >> E3;

    RE = E1 + E2 + E3;
    PE = RE / 3;

    cout << "El promedio de las edades ingresadas es: " << PE << endl;
}

void Opcion39()
{
    system("cls");

    int Numeros[10];

    cout << "Porfavor ingrese 10 numeros" << endl;

    for (int I = 0; I < 10; I++)
    {
        cout << "Numero " << I + 1 << ": " << endl;
        cin >> Numeros[I];
    }

    cout << "Los numeros positivos son: " << endl;

    for (int I = 0; I < 10; I++)
    {
        if (Numeros[I] > 0) {
            cout << Numeros[I] << endl;
        }
    }
}

void Opcion40()
{
    system("cls");

    int Crojo = 0, Cverde = 0, Cazul = 0;
    string Color;

    cout << "Encuesta de gustos - Colores de luz primarios" << endl;

    for (int I = 1; I <= 10; I++) {
        cout << "Visitante " << I << ": ";
        cin >> Color;

        if (Color == "rojo") {
            Crojo++;
        }
        else if (Color == "verde") {
            Cverde++;
        }
        else if (Color == "azul") {
            Cazul++;
        }
        else {
            std::cout << "Color inválido. Por favor, ingrese rojo, verde o azul." << endl;
            I--;
        }
    }

    float Projo = (Crojo / 10.0) * 100;
    float Pverde = (Cverde / 10.0) * 100;
    float Pazul = (Cazul / 10.0) * 100;

    cout << "El resultado de la encuesta es:" << std::endl;
    cout << "El rojo tuvo una votacion del: " << Projo << "% (" << Crojo << " votos)" << endl;
    cout << "El verde tuvo una votacion del: " << Pverde << "% (" << Cverde << " votos)" << endl;
    cout << "El azul tuvo una votacion del: " << Pazul << "% (" << Cazul << " votos)" << endl;
}

void Opcion41()
{
    system("cls");

    int Hombres = 0, Mujeres = 0;
    int Sph = 0, Spm = 0;
    int Puntos, Cpersonas;
    char Sexo;

    cout << "Porfavor ingrese la cantidad de personas: " << endl;
    cin >> Cpersonas;

    for (int I = 0; I < Cpersonas; I++)
    {
        cout << "Persona " << I + 1 << endl;
        cout << "Su sexo es: (especificar si es hombre o mujer e ingresar la opcion en mayuscula M o H)" << endl;
        cin >> Sexo;
        cout << "Ingrese la cantidad de puntos obtenidos: " << endl;
        cin >> Puntos;

        if (Sexo == 'H')
        {
            Hombres++;
            Sph += Puntos;
        }

        else if (Sexo == 'M')
        {
            Mujeres++;
            Spm += Puntos;
        }

        else
        {
            cout << "Sexo inválido. Por favor, ingrese 'h' o 'm'." << std::endl; I--;
        }
    }

    float Phombres = Sph / Hombres;
    float Pmujeres = Spm / Mujeres;

    cout << "Los resultados son: " << endl;
    cout << "El promedio de puntos de los hombre es de: " << Phombres << endl;
    cout << "El promedio de puntos de las mujeres es de: " << Pmujeres << endl;

    if (Phombres > Pmujeres)
    {
        cout << "Los hombres tuvieron un mejor desempeño" << endl;
    }

    else if (Pmujeres > Phombres)
    {
        cout << "Las mujeres tuvieron un mejor desempeño" << endl;
    }

    else
    {
        cout << "Las mujeres y los hombres tuvieron el mismo desempeño" << endl;
    }
}

void Opcion42()
{
    system("cls");

    int tipoVehiculo, pasajeros, totalCarros = 0, totalBuses = 0;
    int sumaPasajerosCarros = 0, sumaPasajerosBuses = 0;

    while (true) {
        cout << "Ingrese el tipo de vehiculo (1: Carro particular, 2: Bus, 3: Otro): ";
        cin >> tipoVehiculo;

        if (tipoVehiculo == 1 || tipoVehiculo == 2) {
            std::cout << "Ingrese el numero de pasajeros: ";
            std::cin >> pasajeros;
        }

        if (tipoVehiculo == 1) {
            totalCarros++;
            sumaPasajerosCarros += pasajeros;
        }
        else if (tipoVehiculo == 2) {
            totalBuses++;
            sumaPasajerosBuses += pasajeros;
        }

        std::cout << "¿Desea ingresar otro vehiculo? (s/n): ";
        char respuesta;
        std::cin >> respuesta;

        if (respuesta == 'n') {
            break;
        }
    }

    double promedioPasajerosCarros = (sumaPasajerosCarros) / totalCarros;
    double promedioPasajerosBuses = (sumaPasajerosBuses) / totalBuses;

    cout << "El total de carros particulares es de: " << totalCarros << endl;
    cout << "El total de buses es de: " << totalBuses << endl;
    cout << "El promedio de pasajeros en carros particulares es de : " << promedioPasajerosCarros << endl;
    cout << "El promedio de pasajeros en buses es de: " << promedioPasajerosBuses << endl;

}

void Opcion43()
{
    system("cls");

    int A60, A61, A62, A63, MCD;

    cout << "Porfavor ingrese el primer numero" << endl;
    cin >> A60;

    cout << "Porfavor ingrese el segundo numero" << endl;
    cin >> A61;

    A62 = max(A60, A61);
    A63 = min(A60, A61);

    do
    {
        MCD = A63;
        A63 = A62 % A63;
        A62 = MCD;
    } while (A63 != 0);
    cout << "El maximo comun divisor es: " << MCD << endl;
}

void Opcion44()
{
    system("cls");

    int Num1, Num2, A, B, Res;

    cout << "Ingrese el primer numero: " << endl;
    cin >> Num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> Num2;

    A = max(Num1, Num2);
    B = min(Num1, Num2);

    do {
        Res = B;
        B = A % B;
        A = Res;
    } while (B != 0);

    cout << "El maximo comun divisor entre " << Num1 << " y " << Num2 << " es: " << Res;
}

void Opcion45()
{
    system("cls");

    long long Cop;
    double Cop_to_usd;

    cout << "Ingrese la cantidad de pesos colombianos la cual quiere convertir: " << endl;
    cin >> Cop;

    Cop_to_usd = Cop * 4446;

    cout << "Usted tiene " << Cop << " pesos colombianos, lo cual a dolar es: " << Cop_to_usd << endl;
}

void Opcion46()
{
    system("cls");

    double Euro;
    double Euro_to_usd;

    cout << "Ingrese la cantidad de euros a convertir: " << endl;
    cin >> Euro;

    Euro_to_usd = Euro * 1.08;

    cout << "Usted tiene " << Euro << " euros, lo que equivale a " << Euro_to_usd << " dolares" << endl;
}

void Opcion47()
{
    system("cls");

    double Dolar;
    double Usd_to_eur;

    cout << "Porfavor ingrese la cantidad de dolares que quiere convertir" << endl;
    cin >> Dolar;

    Usd_to_eur = Dolar * 0.92;

    cout << "Usted tiene " << Dolar << " dolar, lo que equivale a " << Usd_to_eur << " euros" << endl;
}

void Opcion48()
{
    system("cls");

    char Categoria_deporte;

    cout << "Bienvenido al sistema, porfavor selesccione un deporte (Para la seleccion digite una letra mayuscula)" << endl;
    cout << "A: Automovilismo" << endl;
    cout << "B: Futbol" << endl;
    cout << "C: Salir" << endl;
    cout << "Porfavor ingrese la letra del deporte que le guste." << endl;
    cin >> Categoria_deporte;

    switch (Categoria_deporte)
    {
    case 'A':
        cout << "Los implementos basicos para practicar el automovilismo son: " << endl;
        cout << "Carro" << endl;
        cout << "autodromo o pista de carreras" << endl;
        cout << "Casco" << endl;
        cout << "balaclava" << endl;
        cout << "Traje ignifugo" << endl;
        cout << "Guantes" << endl;
        cout << "Botas" << endl;
        cout << "Arnes de seguridad" << endl;
        cout << "collarin hans" << endl;
        cout << "Extintor" << endl;
        cout << "Jaula antivuelco" << endl;
        cout << "Radio de comunicaciones" << endl;
        cout << "Ropa interior ignifuga" << endl;
        break;

    case 'B':
        cout << "Los implementos basicos para practicar el futbol son: " << endl;
        cout << "Cancha" << endl;
        cout << "Balon" << endl;
        cout << "Uniforme del equipo al cual representa" << endl;
        cout << "Guayos  o calzado deportivo" << endl;
        cout << "Protectores de espinillas" << endl;
        cout << "Medias" << endl;
        cout << "Porterias" << endl;
        cout << "Conos" << endl;
        cout << "Hidratacion" << endl;
        cout << "Cronometro" << endl;
        break;

    case 'C':
        cout << "Gracias por usar nuestro sistema." << endl;
        break;
    }
}

void Opcion49()
{
    system("cls");

    double Libra;
    double Conver;

    cout << "Porfavor ingrese el valor en libras a convertir" << endl;
    cin >> Libra;

    Conver = Libra / 2.2046;

    cout << Libra << " libras equivalen a " << Conver << " kilos" << endl;
}

void Opcion50()
{
    system("cls");

    float Hrs;
    float Pago_hrs;
    float Bono;
    float Pago_total;
    char Categoria;

    cout << "Bienvenido al sistema, porfavor ingrese el cargo en el que esta trabajando (digite una letra mayuscula)" << endl;
    cout << "A: Supervisor de acabados." << endl;
    cout << "B: Equipo de soldadura" << endl;
    cout << "C: Practicante de acabados y soldadura" << endl;
    cout << "D: Salir " << endl;
    cout << "Porfavor ingrese la categoria correspondiente a su cargo" << endl;
    cin >> Categoria;

    switch (Categoria) {
    case'A':
        cout << "Porfavor ingrese la cantidad de horas trabajadas durante el mes: " << endl;
        cin >> Hrs;

        Pago_hrs = Hrs * 26.90;

        if (Hrs > 150)
        {

            Bono = Pago_hrs * 0.05;
            Pago_total = Pago_hrs + Bono;
            cout << "Usted trabajo " << Hrs << " horas y su pago mensual es de: " << Pago_total << endl;
        }

        else
        {
            cout << "Usted trabajo " << Hrs << " horas y su pago mensual es de: " << Pago_hrs << endl;
        }
        break;

    case'B':
        cout << "Porfavor ingrese la cantidad de horas trabajadas durante el mes: " << endl;
        cin >> Hrs;

        Pago_hrs = Hrs * 24.30;

        if (Hrs > 150)
        {

            Bono = Pago_hrs * 0.05;
            Pago_total = Pago_hrs + Bono;
            cout << "Usted trabajo " << Hrs << " horas y su pago mensual es de: " << Pago_total << endl;
        }

        else
        {
            cout << "Usted trabajo " << Hrs << " horas y su pago mensual es de: " << Pago_hrs << endl;
        }
        break;

    case'C':
        cout << "Porfavor ingrese la cantidad de horas trabajadas durante el mes: " << endl;
        cin >> Hrs;

        Pago_hrs = Hrs * 21.50;
        break;

        if (Hrs > 150)
        {

            Bono = Pago_hrs * 0.05;
            Pago_total = Pago_hrs + Bono;
            cout << "Usted trabajo " << Hrs << " horas y su pago mensual es de: " << Pago_total << endl;
        }

        else
        {
            cout << "Usted trabajo " << Hrs << " horas y su pago mensual es de: " << Pago_hrs << endl;
        }

    case'D':
        cout << "Muchas gracias por usar nuestro sistema" << endl;
        break;
    }
}

int main() {
    int opcion;

    do {
        cout << "=== Menu seleccione un ejercicio, para salir escriba 00.===\n";
        cout << "1. Leer un numero e imprima por pantalla si el numero es mayor, igual o menor de 0.\n";
        cout << "2. Leer un numero e imprima por pantalla si el numero es par o impar.\n";
        cout << "3. Imprimir los numeros del 100 al -2.\n";
        cout << "4. Imprimir los numeros pares del 1 al 100\n";
        cout << "5. Calcular un promedio de notas\n";
        cout << "6. Imprimir y contar los multiplos de 2 y de 3 que hay de 1 a 100.\n";
        cout << "7. Determinar cual de dos numeros es mayor.\n";
        cout << "8. Determinar cual de dos numeros es menor.\n";
        cout << "9. Sumar los numeros del 20 al 50\n";
        cout << "10. Sumar 15 numeros cualquiera y mostrar su resultado.\n";
        cout << "11. Leer la fecha de nacimiento de una persona y decir si es mayor de edad.\n";
        cout << "12. Leer 3 numeros y ordenarlos de mayor a menor.\n";
        cout << "13. Leer 3 numeros y ordenarlos de menor a mayor.\n";
        cout << "14. Determinar el area y el volumen de un cilindro dado su radio y su altura.\n";
        cout << "15. Leer la velocidad de un vehiculo expresado en Km por hora y proporcionar la velocidad en metros por segundos.\n";
        cout << "16. Imprimir cuantos numeros impares hay del 1 al 100.\n";
        cout << "17. Muestrar la suma de los numeros impares del 1 al 100.\n";
        cout << "18. muestre la suma de los números pares del 1 al 100.\n";
        cout << "19. imprima el mayor y el menor de una serie de 5 números ingresados por teclado.\n";
        cout << "20. calcule el factorial de un numero.\n";
        cout << "21. Lea un numero del 1 al 10 y diga cuál es su numero en romano.\n";
        cout << "22. Obtenga la última cifra de un numero introducido.\n";
        cout << "23. Leer una medida expresada en centimetros la convierta en pulgadas\n";
        cout << "24. Expresar las horas, minutos y segundos un tiempo expresado en minutos.\n";
        cout << "25. Dado un numero del 1 al 12 muestre en pantalla en mes correspondiente del año.\n";
        cout << "26. Dado el mes, el día muestre el signo del zodiacal.\n";
        cout << "27. Calcule los numeros que hay desde 1 hasta un numero introducido por teclado.\n";
        cout << "28. Calcule la suma de los numeros que hay desde 1 hasta un numero introducido por teclado.\n";
        cout << "29. calcule el residuo de la división de 1 hasta 10 de un numero dado.\n";
        cout << "30. calcule el perímetro y área de un círculo dado su radio.\n";
        cout << "31. Calcular el volumen de una esfera dado su radio.\n";
        cout << "32. Dados los catetos de un triángulo rectángulo, calcular su hipotenusa.\n";
        cout << "33. convierta un valor dado en grados Fahrenheit a grados Celsius.\n";
        cout << "34. convierta un valor dado en grados celsius a grados fahrenheit.\n";
        cout << "35. Leer 3 notas y decir cual es la nota final.\n";
        cout << "36. Leer 4 notas y decir cual es la nota fianl.\n";
        cout << "37. Evaluar la función y=5/3x + 3/2x + 8.\n";
        cout << "38. Leer 3 edades, e imprimirlas junto con el promedio.\n";
        cout << "39. Leer 10 numeros e imprimir solamente los numeros positivos.\n";
        cout << "40. Encuesta de color primario.\n";
        cout << "41. Promedio de puntos por personas. 2\n";
        cout << "42. Promedio en un peaje.\n";
        cout << "43. Calcular el maximo comun divisor de 2 numeros naturales, distintos de 0.\n";
        cout << "44. Convertir un valor dado en pesos colombianos a dolares.\n";
        cout << "45. Convertir un valor dado en dolares a pesos colombianos.\n";
        cout << "46. Calcular un valor dado en euros a dolares\n";
        cout << "47. Calcular un valor dado en dolares a euros.\n";
        cout << "48. Leer dos deportes y muestrar los implementos utilizados en cada deporte.\n";
        cout << "49. Convertir un valor dado en libras a kilos.\n";
        cout << "50. Calcular el sueldo mensual de un empleado que trabaja por horas.\n";
        cout << "00. Salir.\n";
        cout << "Ingrese el numero de opcion que desea seleccionar: ";
        cin >> opcion;

        switch (opcion) {
        case 0:
            cout << "Saliendo del programa...\n";
            break;
        case 1:
            Opcion1();
            break;
        case 2:
            Opcion2();
            break;

        case 3:
            Opcion3();
            break;

        case 4:
            Opcion4();
            break;

        case 5:
            Opcion5();
            break;

        case 6:
            Opcion6();
            break;

        case 7:
            Opcion7();
            break;

        case 8:
            Opcion8();
            break;

        case 9:
            Opcion9();
            break;

        case 10:
            Opcion10();
            break;

        case 11:
            Opcion11();
            break;
        case 12:
            Opcion2();
            break;

        case 13:
            Opcion13();
            break;

        case 14:
            Opcion14();
            break;

        case 15:
            Opcion15();
            break;

        case 16:
            Opcion16();
            break;

        case 17:
            Opcion17();
            break;

        case 18:
            Opcion18();
            break;

        case 19:
            Opcion19();
            break;

        case 20:
            Opcion20();
            break;

        case 21:
            Opcion21();
            break;
        case 22:
            Opcion22();
            break;

        case 23:
            Opcion23();
            break;

        case 24:
            Opcion24();
            break;

        case 25:
            Opcion25();
            break;

        case 26:
            Opcion26();
            break;

        case 27:
            Opcion27();
            break;

        case 28:
            Opcion28();
            break;

        case 29:
            Opcion29();
            break;

        case 30:
            Opcion30();
            break;

        case 31:
            Opcion31();
            break;
        case 32:
            Opcion32();
            break;

        case 33:
            Opcion33();
            break;

        case 34:
            Opcion34();
            break;

        case 35:
            Opcion35();
            break;

        case 36:
            Opcion36();
            break;

        case 37:
            Opcion37();
            break;

        case 38:
            Opcion38();
            break;

        case 39:
            Opcion39();
            break;

        case 40:
            Opcion40();
            break;

        case 41:
            Opcion41();
            break;
        case 42:
            Opcion42();
            break;

        case 43:
            Opcion43();
            break;

        case 44:
            Opcion44();
            break;

        case 45:
            Opcion45();
            break;

        case 46:
            Opcion46();
            break;

        case 47:
            Opcion47();
            break;

        case 48:
            Opcion48();
            break;

        case 49:
            Opcion49();
            break;

        case 50:
            Opcion50();
            break;
        default:
            cout << "Opción inválida. Por favor, ingrese un número válido.\n";
            break;
        }

        cout << endl;

    } while (opcion != 0);
}