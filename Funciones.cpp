#include <iostream>
#include <cmath>

using namespace std;

// Función para convertir grados a radianes
double gradosARadianes(double grados)
{
    const double PI = acos(-1);
    return grados * (PI / 180);
}

// Función para calcular el área de un círculo
double areaCirculo(double radio)
{
    const double PI = acos(-1);
    return PI * pow(radio, 2);
}

// Función para calcular el factorial de un número
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

// Función que ejecuta el primer ejercicio
void ejercicio1()
{
    char repetir;
    do
    {
        double grados;
        cout << "Ingrese el angulo en grados: ";
        cin >> grados;
        double radianes = gradosARadianes(grados);
        double seno = sin(radianes);
        double coseno = cos(radianes);
        double tangente = tan(radianes);
        cout << "Seno de " << grados << " grados: " << seno << endl;
        cout << "Coseno de " << grados << " grados: " << coseno << endl;
        cout << "Tangente de " << grados << " grados: " << tangente << endl;
        cout << "Desea repetir el ejercicio? (s/n): ";
        cin >> repetir;
    } while (repetir == 's' || repetir == 'S');
}

// Función que ejecuta el segundo ejercicio
void ejercicio2()
{
    char repetir;
    do
    {
        double radio;
        cout << "Ingrese el radio del circulo: ";
        cin >> radio;
        double area = areaCirculo(radio);
        cout << "Area del circulo con radio " << radio << ": " << area << endl;
        cout << "Desea repetir el ejercicio? (s/n): ";
        cin >> repetir;
    } while (repetir == 's' || repetir == 'S');
}

// Función que ejecuta el tercer ejercicio
void ejercicio3()
{
    char repetir;
    do
    {
        int n;
        cout << "Ingrese un numero entero positivo: ";
        cin >> n;
        int fact = factorial(n);
        cout << "Factorial de " << n << ": " << fact << endl;
        cout << "Desea repetir el ejercicio? (s/n): ";
        cin >> repetir;
    } while (repetir == 's' || repetir == 'S');
}

int main()
{
    int opcion;

    do
    {
        system("cls"); // Limpiar la pantalla antes de mostrar el menú

        cout << "\t------------------------" << endl;
        cout << "\t         Opciones   " << endl;
        cout << "\t ------------------------" << endl;

        cout << "[1] Convertir grados a radianes." << endl;
        cout << "[2] Calcular el area de un circulo." << endl;
        cout << "[3] Calcular el factorial de un numero." << endl;
        cout << "[4] Salir del programa." << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            ejercicio1();
            break;
        case 2:
            ejercicio2();
            break;
        case 3:
            ejercicio3();
            break;
        case 4:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion invalida" << endl;
        }
    } while (opcion != 4);

    return 0;
}
