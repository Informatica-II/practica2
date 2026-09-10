#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void problema1();
void problema2();
void problema3();
void problema4();
void problema5();
void problema6();
void problema7();
void problema8();
void problema9();
void problema10();
void problema11();
void problema12();
void problema13();
void problema14();
void problema15();

int main()
{
    cout << "Menu:" << endl;
    cout << endl;
    cout << "1: Problema 1" << endl;
    cout << "2: Problema 2" << endl;
    cout << "3: Problema 3" << endl;
    cout << "4: Problema 4" << endl;
    cout << "5: Problema 5" << endl;
    cout << "6: Problema 6" << endl;
    cout << "7: Problema 7" << endl;
    cout << "8: Problema 8" << endl;
    cout << "9: Problema 9" << endl;
    cout << "10: Problema 10" << endl;
    cout << "11: Problema 11" << endl;
    cout << "12: Problema 12" << endl;
    cout << "13: Problema 13" << endl;
    cout << "14: Problema 14" << endl;
    cout << "15: Problema 15" << endl;
    cout << "16: Problema 16" << endl;
    cout << "17: Problema 17" << endl;
    cout << endl;

    int opcion = 0;

    cout << "Ingrese la opcion que desea: ";
    cin >> opcion;
    cout << endl;

    cin.ignore();

    switch (opcion) {
    case 1:
        problema1();
        break;
    case 2:
        problema2();
        break;
    case 3:
        problema3();
        break;
    case 4:
        problema4();
        break;
    case 5:
        problema5();
        break;
    case 6:
        problema6();
        break;
    case 7:
        problema7();
        break;
    case 8:
        problema8();
        break;
    case 9:
        problema9();
        break;
    case 10:
        problema10();
        break;
    case 11:
        problema11();
        break;
    case 12:
        problema12();
        break;
    case 13:
        problema13();
        break;
    case 14:
        problema14();
        break;
    case 15:
        problema15();
        break;
    case 16:
        problema4();
        break;
    case 17:
        problema5();
        break;
    default:
        break;
    }
}

void problema1(){
    cout << "----------------Determinar cantidad de dinero----------------" << endl;
    cout << endl;

    int Bi50, Bi20, Bi10, Bi5, Bi2, Bi1;
    int Mo500, Mo200, Mo100, Mo50;
    int cantidad, faltante;

    cout << "Ingrese la cantidad de dinero: ";
    cin >> cantidad;

    Bi50 = cantidad / 50000;
    cantidad = cantidad % 50000;

    Bi20 = cantidad / 20000;
    cantidad = cantidad % 20000;

    Bi10 = cantidad / 10000;
    cantidad = cantidad % 10000;

    Bi5 = cantidad / 5000;
    cantidad = cantidad % 5000;

    Bi2 = cantidad / 2000;
    cantidad = cantidad % 2000;

    Bi1 = cantidad / 1000;
    cantidad = cantidad % 1000;

    Mo500 = cantidad / 500;
    cantidad = cantidad % 500;

    Mo200 = cantidad / 200;
    cantidad = cantidad % 200;

    Mo100 = cantidad / 100;
    cantidad = cantidad % 100;

    Mo50 = cantidad / 50;
    cantidad = cantidad % 50;

    faltante = cantidad;

    cout << "50000: " << Bi50 << endl;
    cout << "20000: " << Bi20 << endl;
    cout << "10000: " << Bi10 << endl;
    cout << "5000: " << Bi5 << endl;
    cout << "2000: " << Bi2 << endl;
    cout << "1000: " << Bi1 << endl;
    cout << "500: " << Mo500 << endl;
    cout << "200: " << Mo200 << endl;
    cout << "100: " << Mo100 << endl;
    cout << "50: " << Mo50 << endl;
    cout << "Faltante: " << faltante << endl;
}

void problema2(){
    cout << "----------------Arreglo de 200 letras mayusculas aleatorias----------------" << endl;
    cout << endl;

    unsigned short int n = 200;
    char arreglo[n];
    unsigned short int contador[26] = {0};

    srand(time(0));

    for (int i = 0; i < n; i++) {
        arreglo[i] = 'A' + rand() % 26;
        cout << arreglo[i];
        contador[arreglo[i] - 'A']++;
    }

    cout << endl;

    for (int i = 0; i < 26; i++) {
        if (contador[i] > 0) {
            cout << char('A' + i) << ": " << contador[i] << endl;
        }
    }
}

void problema3(){
    cout << "----------------Comparar 2 cadenas de caracteres----------------" << endl;
    cout << endl;

    char cadena1[100];
    char cadena2[100];
    unsigned short int i = 0;

    cout << "Ingrese la primera cadena: ";
    cin.getline(cadena1, 100);

    cout << "Ingrese la segunda cadena: ";
    cin.getline(cadena2, 100);

    while(cadena1[i] != '\0' && cadena2[i] != '\0') {
        if (cadena1[i] != cadena2[i]) {
            cout << "Las cadenas son diferentes." << endl;
            return;
        }
        i += 1;;
    }

    if(cadena1[i] == '\0' && cadena2[i] == '\0'){
        cout << "Las cadenas son iguales." << endl;
    }
    else {
        cout << "Las cadenas son diferentes." << endl;
    }
}

void problema4(){
    cout << "----------------Convertir cadena de caracteres numericos  a entero----------------" << endl;
    cout << endl;

    unsigned int numero = 0;
    int i = 0;
    char cadena[10];

    cout << "Ingrese la cadena numerica: ";
    cin >> cadena;

    while (cadena[i] != '\0') {
        int digito = cadena[i] - '0';
        numero = numero * 10 + digito;
        i++;
    }

    cout << "El numero convertido a entero es: " << numero << endl;
}

void problema5(){
    cout << "----------------Convertir entero a cadena de caracteres----------------" << endl;
    cout << endl;

    unsigned int num = 0;
    unsigned short int caracteres = 0;
    unsigned short int digito = 0;
    char cadena[20];

    cout << "Ingrese el numero: ";
    cin >> num;

    if (num == 0) {
        cadena[0] = '0';
        cadena[1] = '\0';
        cout << "El numero convertido a cadena es: " << cadena << endl;
        return;
    }

    int copia = num;

    while(copia > 0){
        copia = copia / 10;
        caracteres += 1;
    }

    cadena[caracteres] = '\0';
    for(int i = caracteres - 1; i >= 0; i--){
        digito = num % 10;
        cadena[i] = digito + '0';
        num = num / 10;
    }

    cout << "El numero convertido a cadena es: " << cadena << endl;
}

void problema6(){
    cout << "----------------Cambiar las letras minusculas por mayusculas----------------" << endl;
    cout << endl;

    char cadena[20];
    int longitud = 0;

    cout << "Ingrese la cadena de caracteres: ";
    cin.getline(cadena, 20);

    for(int i = 0; cadena[i] != '\0'; i++) {
        longitud++;
    }

    for(int i = 0; i < longitud; i++){
        if(cadena[i] >= 97 && cadena[i] <= 122){
            cadena[i] -= 32;
            cout << cadena[i];
        }
        else{
            cout << cadena[i];
        }
    }
}

void problema7(){
    cout << "----------------Eliminar caracteres repetidos----------------" << endl;
    cout << endl;

    char cadena[20];
    char NuevaCadena[20];
    int NuevaLongitud = 0;

    cout << "Ingrese la cadena de caracteres: ";
    cin.getline(cadena, 20);

    for(int i = 0; cadena[i] != '\0'; i++){
        bool repetido = false;

        for(int j = 0; j < NuevaLongitud; j++){
            if (cadena[i] == NuevaCadena[j]) {
                repetido = true;
                break;
            }
        }

        if(repetido == false){
            NuevaCadena[NuevaLongitud] = cadena[i];
            NuevaLongitud++;
        }
    }

    NuevaCadena[NuevaLongitud] = '\0';

    cout << "Cadena sin repetidos: " << NuevaCadena << endl;
}

void problema8(){
    cout << "----------------Separar numeros del resto de caracteres----------------" << endl;
    cout << endl;

    char cadena[20];
    char cadenaRestante[20];
    char cadenaNumeros[20];
    int longitudCaNu = 0;
    int longitudCaRes = 0;

    cout << "Ingrese la cadena de caracteres: ";
    cin.getline(cadena, 20);
    cout << endl;

    for(int i = 0; cadena[i] != '\0'; i++){
        if(cadena[i] >= 48 && cadena[i] <= 57){
            cadenaNumeros[longitudCaNu] = cadena[i];
            longitudCaNu++;
        }
        else{
            cadenaRestante[longitudCaRes] = cadena[i];
            longitudCaRes++;
        }
    }

    cadenaNumeros[longitudCaNu] = '\0';
    cadenaRestante[longitudCaRes] = '\0';

    cout << "Original: " << cadena << endl;
    cout << "Texto: " << cadenaRestante << " Numeros: " << cadenaNumeros <<endl;
}

void problema9(){
    cout << "----------------Separar numeros del resto de caracteres----------------" << endl;
    cout << endl;

    int n = 0;
    int longitud = 0;
    int resto = 0;
    int ceros = 0;
    int suma = 0;
    char cadena[20];

    cout << "Ingrese el valor de n: ";
    cin >> n;

    cout << "Ingrese la cadena numerica: ";
    cin >> cadena;
    cout << endl;

    for(int i = 0; cadena[i] != '\0'; i++){
        longitud++;
    }

    resto = longitud % n;
    ceros = (resto == 0) ? 0 : (n - resto);

    if(ceros == 0) {
        for(int i = 0; cadena[i] != '\0'; i += n){
            int numero = 0;
            for(int j = 0; j < n; j++){
                numero = numero * 10 + (cadena[i + j] - '0');
            }
            suma += numero;
        }
    }
    else{
        char ajustada[40];
        for(int i = 0; i < ceros; i++){
            ajustada[i] = '0';
        }
        for(int i = 0; i < longitud; i++){
            ajustada[ceros + i] = cadena[i];
        }
        ajustada[longitud + ceros] = '\0';

        for(int i = 0; ajustada[i] != '\0'; i += n){
            int numero = 0;
            for(int j = 0; j < n; j++){
                numero = numero * 10 + (ajustada[i + j] - '0');
            }
            suma += numero;
        }
    }

    cout << "Original: " << cadena << endl;
    cout << "Suma: " << suma << endl;
}

void problema10(){
    cout << "----------------Convertir un numero del sistema romano----------------" << endl;
    cout << endl;

    char romano[50];
    int resultado = 0;
    bool valido = true;

    cout << "Numeros Romanos: " << endl;
    cout << "M: 1000" << endl;
    cout << "D: 500" << endl;
    cout << "C: 100" << endl;
    cout << "L: 50" << endl;
    cout << "X: 10" << endl;
    cout << "V: 5" << endl;
    cout << "I: 1" << endl;

    cout << endl;
    cout << "Ingrese el numero romano: ";
    cin >> romano;
    cout << endl;

    for(int i = 0; romano[i] != '\0'; i++){
        int actual = 0;
        int siguiente = 0;

        switch(romano[i]){
        case 'M': actual = 1000; break;
        case 'D': actual = 500; break;
        case 'C': actual = 100; break;
        case 'L': actual = 50; break;
        case 'X': actual = 10; break;
        case 'V': actual = 5; break;
        case 'I': actual = 1; break;
        default: actual = 0; break;
        }

        if(romano[i+1] != '\0'){
            switch (romano[i+1]) {
            case 'M': siguiente = 1000; break;
            case 'D': siguiente = 500; break;
            case 'C': siguiente = 100; break;
            case 'L': siguiente = 50; break;
            case 'X': siguiente = 10; break;
            case 'V': siguiente = 5; break;
            case 'I': siguiente = 1; break;
            default: siguiente = 0; break;
            }
        }

        int repeticiones = 1;
        for (int j = i+1; romano[j] != '\0' && romano[j] == romano[i]; j++) {
            repeticiones++;
            if (repeticiones > 3) {
                valido = false;
                break;
            }
        }
        if (!valido) break;

        if(siguiente > actual){
            resultado -= actual;
        }
        else{
            resultado += actual;
        }
    }

    cout << "El numero ingresado fue: " << romano << endl;

    if(valido){
        cout << "Que corresponde a: " << resultado << endl;
    }
    else{
        cout << "Error: el numero romano no es valido (mas de 3 caracteres iguales seguidos)." << endl;
    }
}

void problema11(){
    cout << "----------------Gestion de reservas en sala de cine----------------" << endl;
    cout << endl;

    char sala[15][20];

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 20; j++) {
            sala[i][j] = '-';
        }
    }

    int opcion;
    do{
        cout << endl;
        cout << "--- Menu ---" << endl;
        cout << "1. Mostrar sala" << endl;
        cout << "2. Reservar asiento" << endl;
        cout << "3. Cancelar reserva" << endl;
        cout << "4. Salir" << endl;
        cout << endl;
        cout << "Opcion: ";

        cin >> opcion;
        cout << endl;

        if(opcion == 1){
            cout << "   ";
            for(int j = 1; j <= 20; j++){
                cout << j << " ";
            }
            cout << endl;

            for(int i = 0; i < 15; i++){
                cout << char('A' + i) << "  ";
                for (int j = 0; j < 20; j++) {
                    cout << sala[i][j] << " ";
                }
                cout << endl;
            }
        }
        else if (opcion == 2){
            char fila;
            int asiento;
            cout << "Ingrese fila (A-O): ";
            cin >> fila;
            cout << "Ingrese asiento (1-20): ";
            cin >> asiento;

            int f = fila - 'A';
            int a = asiento - 1;

            if(f >= 0 && f < 15 && a >= 0 && a < 20){
                if(sala[f][a] == '-'){
                    sala[f][a] = '+';
                    cout << "Reserva realizada." << endl;
                }
                else{
                    cout << "El asiento ya esta reservado." << endl;
                }
            }
            else{
                cout << "Fila o asiento fuera de rango." << endl;
            }
        }
        else if(opcion == 3){
            char fila;
            int asiento;
            cout << "Ingrese fila (A-O): ";
            cin >> fila;
            cout << "Ingrese asiento (1-20): ";
            cin >> asiento;

            int f = fila - 'A';
            int a = asiento - 1;

            if(f >= 0 && f < 15 && a >= 0 && a < 20){
                if(sala[f][a] == '+'){
                    sala[f][a] = '-';
                    cout << "Reserva cancelada." << endl;
                }
                else{
                    cout << "El asiento no estaba reservado." << endl;
                }
            }
            else{
                cout << "Fila o asiento fuera de rango." << endl;
            }
        }
    } while (opcion != 4);
}

void problema12(){
    cout << "----------------Cuadrado magico.----------------" << endl;
    cout << endl;

    int n = 0;
    int sumaObjetivo = 0;
    bool esMagico = true;
    cout << "Ingrese el tamanio de la matriz cuadrada: ";
    cin >> n;

    int matriz[20][20];

    cout << "Ingrese los elementos de la matriz: " << endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << endl;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    for(int j = 0; j < n; j++) {
        sumaObjetivo += matriz[0][j];
    }

    // Verificar filas
    for(int i = 1; i < n; i++) {
        int sumaFila = 0;
        for(int j = 0; j < n; j++){
            sumaFila += matriz[i][j];
        }
        if(sumaFila != sumaObjetivo){
            esMagico = false;
        }
    }

    // Verificar columnas
    for(int j = 0; j < n; j++) {
        int sumaColumna = 0;
        for(int i = 0; i < n; i++){
            sumaColumna += matriz[i][j];
        }
        if(sumaColumna != sumaObjetivo){
            esMagico = false;
        }
    }

    // Verificar diagonales
    int sumaDiag1 = 0, sumaDiag2 = 0;
    for(int i = 0; i < n; i++){
        sumaDiag1 += matriz[i][i];
        sumaDiag2 += matriz[i][n-1-i];
    }
    if(sumaDiag1 != sumaObjetivo || sumaDiag2 != sumaObjetivo){
        esMagico = false;
    }

    cout << endl;
    if(esMagico){
        cout << "La matriz es un cuadrado magico." << endl;
    }
    else{
        cout << "La matriz NO es un cuadrado magico." << endl;
    }
}

void problema13(){
    cout << "----------------Deteccion de estrellas----------------" << endl;
    cout << endl;

    int filas = 6;
    int columnas = 8;
    int estrellas = 0;

    int matriz[6][8]= {
        {0, 3, 4, 0, 0, 0, 6, 8},
        {5, 13, 6, 0, 0, 0, 2, 3},
        {2, 6, 2, 7, 3, 0, 10, 0},
        {0, 0, 4, 15, 4, 1, 6, 0},
        {0, 0, 7, 12, 6, 9, 10, 4},
        {5, 0, 6, 10, 6, 4, 8, 0}
    };
/*
    cout << "Ingrese numero de filas: ";
    cin >> filas;
    cout << "Ingrese numero de columnas: ";
    cin >> columnas;

    int matriz[20][20];

    cout << "Ingrese los valores de la matriz:" << endl;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cin >> matriz[i][j];
        }
    }*/

    for (int i = 1; i < filas-1; i++) {
        for (int j = 1; j < columnas-1; j++) {
            int suma = matriz[i][j] + matriz[i][j-1] + matriz[i][j+1] + matriz[i-1][j] + matriz[i+1][j];
            double promedio = suma / 5.0;

            if (promedio > 6) {
                estrellas++;
            }
        }
    }

    cout << "Numero de estrellas encontradas: " << estrellas << endl;
}

void problema14(){
    cout << "----------------Matrices ratadas----------------" << endl;
    cout << endl;

    int matrizOriginal[5][5];
    int valor = 1;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            matrizOriginal[i][j] = valor;
            valor++;
        }
    }

    int rot90[5][5];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            rot90[j][5-1-i] = matrizOriginal[i][j];
        }
    }

    int rot180[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            rot180[5-1-i][5-1-j] = matrizOriginal[i][j];
        }
    }

    int rot270[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            rot270[5-1-j][i] = matrizOriginal[i][j];
        }
    }

    cout << "Matriz original: " << endl;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << matrizOriginal[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Matriz 90 grados: " << endl;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << rot90[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Matriz 180 grados: " << endl;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << rot180[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Matriz 270 grados: " << endl;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << rot270[i][j] << " ";
        }
        cout << endl;
    }
}

void problema15(){
    cout << "----------------Interseccion entre un par de rectangulos.----------------" << endl;
    cout << endl;

    int RecA[4];
    int RecB[4];
    int Interseccion[4];

    cout << "Ingrese rectangulo A (x, y, ancho, alto): ";
    for(int i = 0; i < 4; i++){
        cin >> RecA[i];
    }

    cout << "Ingrese rectangulo B (x, y, ancho, alto): ";
    for(int i = 0; i < 4; i++){
        cin >> RecB[i];
    }

    // Coordenadas de A
    int Ax1 = RecA[0], Ay1 = RecA[1];
    int Ax2 = RecA[0] + RecA[2], Ay2 = RecA[1] + RecA[3];

    // Coordenadas de B
    int Bx1 = RecB[0], By1 = RecB[1];
    int Bx2 = RecB[0] + RecB[2], By2 = RecB[1] + RecB[3];

    // Intersección
    int xIzq = max(Ax1, Bx1);
    int yArriba = min(Ay1, By1);
    int xDer = min(Ax2, Bx2);
    int yAbajo = min(Ay2, By2);

    if(xIzq < xDer && yArriba < yAbajo){
        Interseccion[0] = xIzq;
        Interseccion[1] = yArriba;
        Interseccion[2] = xDer - xIzq;
        Interseccion[3] = yAbajo - yArriba;

        cout << "Rectangulo interseccion: {"
             << Interseccion[0] << ", " << Interseccion[1] << ", "
             << Interseccion[2] << ", " << Interseccion[3] << "}" << endl;
    }
    else{
        cout << "No hay interseccion entre los rectangulos." << endl;
    }
}
