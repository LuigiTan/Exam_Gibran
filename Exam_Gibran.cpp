#include <iostream>
#include <Windows.h>

int validacion(int RangoLow, int RangoHigh);
void GuessMyNumber();
bool SeguroSalir();
using namespace std;


int main() {
    int MainMenuChoice = 0;
    bool MainContinuar = true;

    do {
        system("cls");
        cout << "Bienvenido a la sala de juegos" << endl;
        cout << "Este es un examen creado por Gibran Garcia Coss y Leon para la materia de Programacion 2" << endl;
        cout << "Elija la accion que desea realizar" << endl;
        cout << "1.Play Guess My Number\n2.Exit " << endl;
        cin >> MainMenuChoice;
        switch (MainMenuChoice)
        {
        case 1:
            GuessMyNumber();
            break;

        case 2:
            SeguroSalir();
            MainContinuar = SeguroSalir();
            break;
        default:
            //Por alguna razon lo que se ponga aqui va a salir si el usuario selecciona 1) en SeguroSalir
            break;


        }
    } while (MainContinuar == true);

    cout << "Gracias por jugar vuelva pronto!" << endl;





}




int validacion(int RangoLow, int RangoHigh) {
    int Respuesta = 0;

    do {
        cout << "Introduzca el numero que cree que la maquina haya elegido del " << RangoLow << " al " << RangoHigh << endl;

        cin >> Respuesta;
    } while (Respuesta > RangoHigh || Respuesta < RangoLow);
    return  Respuesta;
}



bool SeguroSalir()
{
    bool MainContinuar = true;
    int OpcSalir = 0;
    do
    {

        system("cls");
        cout << "Estas seguro que deseas salir?" << endl;
        cout << "1) Si\n2) No" << endl;
        cin >> OpcSalir;
        switch (OpcSalir)
        {

        case 1:
            MainContinuar = false;
            break;

        case 2:
            break;

        default:
            break;

        }
    } while (OpcSalir != 1 && OpcSalir != 2);

    return MainContinuar;

}


void GuessMyNumber()
{
    srand(time(NULL));//Se utiliza el tiempo de la maquina (reloj interno) para siempre generar un numero diferente 
    
    bool VolverAJugar = true;
    int OpcionVolverAJugar = 0;
    do
    {
    int intentos = 0;
    int Respuesta = 0;

    int RandomMax = 0;
    int RandomMin = 0;

    system("cls");
    cout << "Bienvenido al *Guess My Numer*" << endl;
    cout << "Primero que nada vamos a determinar un rango dentro del cual encontrar el numero" << endl;
    cout << "Introduzca el Rango Minimo" << endl;
    cin >> RandomMin;
    cout << "Ahora introduzca el Rango Maximo" << endl;
    cin >> RandomMax;


    int NumRan = rand() % (RandomMax - RandomMin - 1) + RandomMin;
    int RangoRespMax = NumRan + 5;
    int RangoRespMin = NumRan - 5;

    
        do
        {
            cout << "Modo Test: El numero random es: " << NumRan << endl;
            Respuesta = validacion(RandomMin, RandomMax);


            if (Respuesta > NumRan)
            {
                intentos = intentos + 1;

                cout << "Tu numero es mas alto que el de la maquina\n";
                system("Color 09");
                for (int i = RangoRespMax; i >= NumRan; i--)
                {
                    if (Respuesta == i)
                    {
                        cout << "Estas muy cerca, sigue intentandolo" << endl;
                    }
                }

            }
            else if (Respuesta < NumRan)
            {
                intentos = intentos + 1;
                cout << "Tu numero es mas bajo que el de la maquina\n";
                system("Color 0C");
                for (int i = RangoRespMin; i <= NumRan; i++)
                {
                    if (Respuesta == i)
                    {
                        cout << "Estas muy cerca, sigue intentandolo" << endl;
                    }
                }

            }
            else if (Respuesta == NumRan)
            {

                intentos = intentos + 1;
                if (intentos == 1)
                {
                    cout << "FELICIDADES, encontraste el numero en el primer intento!!!!!"<<endl;
                    system("Color 01"); //Recordatorio de que en esta funcion el primer caracter (despues de color) es el background y el segundo es el color del texto
                    Sleep(250);
                    system("Color 04");
                    Sleep(250);
                    system("Color 02");
                    Sleep(250);
                    system("Color 01");
                    Sleep(250);
                    system("Color 04");
                    Sleep(250);
                    system("Color 02");
                    Sleep(250);


                }
                else
                {
                    system("Color 02");
                    cout << "Correcto! Tu numero de intentos fue de " << intentos << " Intentos";
                }

            }
            else
            {
                cout << "Opcion no valida";
            }
        } while (Respuesta != NumRan);


    cout << "Deseas volver a jugar?" << endl;
    cout << "1)Si\n2)No" << endl;
    cin >> OpcionVolverAJugar;
    switch (OpcionVolverAJugar)
    {
    case 1:
        break;
    case 2 :
        VolverAJugar = false;
        break;
    default:
        break;
    }

    } while (VolverAJugar == true);
}








