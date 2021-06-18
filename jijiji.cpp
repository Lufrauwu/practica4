// jijiji.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include<string.h>
#pragma warning (disable : 4996)

using namespace std;

int main()
{
	int escoge = 0;
	int x = 0;
	float y = 0;
	char c[40];
	double doble = 99999999;
	string s;
	int proba = 0;
	cout << "hola voy a guardar datos para ti:) \n Lo quieres con cout/cin o lo quieres con scanf/printf? selecciona una opcion" << endl;
	cout << "1.- cout/cin \n2.- scanf/printf" << endl;
	cin >> escoge;
	switch (escoge)
	{
	case 1: cout << "Porfa pon un entero" << endl;
		cin >> x;
		cout << "Ahora un flotante" << endl;
		cin >> y;
		cout << "Porfa escribe una cadena" << endl;
		cin >> s;
		cout << "Muy bien, ahora un caracter ";
		cin >> c;
		cout << "Perfecto, ahora ingresa un dato doble ";
		cin >> doble;

		cout << "Gracias, ahora te dire los datos que ingresaste" << endl;
		cout << "tu valor entero es: " << x << endl;
		cout << "tu variable flotante es: " << y << endl;
		cout << "tu variable de cadena es: " << s << endl;
		cout << "tu variable doble es: " << doble << endl;
		cout << "tu caracter es: " << c << endl;


	case 2: printf("Porfa ingresa un numero entero: ");
		scanf("%d", &x);
		printf("Ahora un flotante ");
		scanf("%f", &y);
		printf("Porfa escribe una cadena ");
		scanf("%s",&s);
		printf("Muy bien, ahora un caracter ");
		scanf("%c",&c);
		printf("Perfecto, ahora ingresa un dato doble ");
		scanf("%ld",&doble);

		printf("Muy bien, estos son los datos que ingresaste\n");
			printf("Tu numero entero es: %d", x);
		printf("\nTu numero flotante es: %f", y);
		printf("\nTu cadena es: %s", s);
		printf("\nTu caracter es: %c", c);
		printf("\nTu numero doble es: %ld", doble);
	default:
		cout << "Dije que 1 o 2 >:("<<endl;
		break;
	}


	//evaluar la opcion del parentesis


}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
