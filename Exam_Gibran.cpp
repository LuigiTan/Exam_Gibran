#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <windows.h>


int validacion(int RangoLow, int RangoHigh);
void GuessMyNumber();
bool SeguroSalir();
int Inventory();
//void DisplayInventory(vector<string>& vec);
using namespace std;


int main() {
    int MainMenuChoice = 0;
    bool MainContinuar = true;

    do {
        system("cls");
        cout << "Bienvenido a la sala de juegos" << endl;
        cout << "Este es un examen creado por Gibran Garcia Coss y Leon para la materia de Programacion 2" << endl;
        cout << "Elija la accion que desea realizar" << endl;
        cout << "1.Play Guess My Number\n2.Inventario\n3.Exit " << endl;
        cin >> MainMenuChoice;
        switch (MainMenuChoice)
        {
        case 1:
            GuessMyNumber();
            break;
        case 2:
            Inventory();
            break;

        case 3:
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
int Inventory()
{
    vector<string> inventory;
    int MaxFreeSpace = 5;
    int Gemas = 1000;
    int NoSpace = 0;
    int Replace = 0;
    vector<string>::iterator myIterator;
    vector<string>::const_iterator iter;
    cout << "Bienvenido el juego del Inventario, aqui iras seleccionando objetos para llenar tu inventario" << endl;
    cout << "Pero ten cuidado, tienes espacio limitado y cada objeto cuesta gemas. (Añadir espacios a tu inventario tambien cuesta)" << endl;
    cout << "Tienes " << MaxFreeSpace << " espacios gratis, y " << Gemas << " gemas disponibles, usalas sabiamente" << endl;

    cout << "Comienza tu aventura y te encuentras una [Espada], asi que la recoges" << endl;
    inventory.push_back("Espada");
    system("pause");
    //DisplayInventory(inventory);  
    cout << "Este es tu inventario actual" << endl;
    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }
    system("pause");

    cout << "Continuas tu camino y te encuentras un [Arco], por lo que procedes a recogerlo" << endl;
    inventory.push_back("Arco");
    system("pause");
    cout << "Este es tu inventario actual" << endl;
    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }
    system("pause");

    cout << "Pasan las horas y te encuentras un [Artefacto] muy peculiar. Tambien lo recoges" << endl;
    inventory.push_back("Artefacto");
    system("pause");
    cout << "Este es tu inventario actual" << endl;
    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }
    system("pause");

    cout << "Durante la noche ves algo brillar a la distancia, por lo que lo sigues y encuentras un [Espejo]. Te gusta y lo guardas" << endl;
    inventory.push_back("Espejo");
    system("pause");
    cout << "Este es tu inventario actual" << endl;
    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }
    system("pause");

    cout << "A la mañana siguiente despiertas y notas que el arbol que usaste de refugio solto un [Mango], asi que te lo guardas para despues" << endl;
    inventory.push_back("Mango");
    system("pause");
    cout << "Este es tu inventario actual" << endl;
    for (iter = inventory.begin(); iter != inventory.end(); iter++)
    {
        cout << *iter << endl;
    }
    system("pause");

    
    cout << "Cazaste unos conejos para desayunar y te sobro algo de [Carne], decides llevartela para vendarla despues" << endl;

    if (inventory.size() >= MaxFreeSpace)
    {
        cout << "Parece que ya no te queda espacio. Que deseas hacer?" << endl;
        cout << "1.Reemplazar el objeto\n2.Continuar sin el objeto recogido\n3.Añadir un espacio mas por (500) gemas" << endl;
        cin >> NoSpace;
        int j = 0;
        switch (NoSpace)
        {
        case 1:
            cout << "Este es tu inventario actual" << endl;
           
            for (iter = inventory.begin(); iter != inventory.end(); iter++)
            {
                cout << j << ".- " << *iter << endl;
                j++;
            }
            cout << "Escribe el numero del objeto que quieras intercambiar" << endl;
            cin >> Replace;
            cout << "\n Intercambiaste tu " << inventory[Replace] << " por [Carne]" << endl;
            myIterator = inventory.begin() + 2;
            *myIterator = "Carne";
            system("pause");
            break;

        case 2:
            cout << "Decides que no vale la pena tirar nada por ese objeto, asi que continuas tu aventura" << endl;
            cout << "Este es tu inventario actual" << endl;
            for (iter = inventory.begin(); iter != inventory.end(); iter++)
            {
                cout << *iter << endl;
            }
            cout << "Estas son tus gemas" << Gemas << endl;
            system("pause");
            return 0;
            break;

        case 3:
            Gemas = Gemas - 500;
            MaxFreeSpace = MaxFreeSpace + 1;
            cout << "Compraste mas espacio usando gemas" << endl;
            cout << "Estas son tus gemas restantes\n" << Gemas << endl;
            inventory.push_back("Carne");
            cout << "Este es tu inventario actual" << endl;
            for (iter = inventory.begin(); iter != inventory.end(); iter++)
            {
                cout << *iter << endl;
            }
            system("pause");
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
       


    }
    cout << "Buscando algo que hacer antes de desayunar encuentras atorada en un arbo una [Hacha vieja], no parece ser de nadie asi que la tomas" << endl;
    if (inventory.size() >= MaxFreeSpace)
    {
        cout << "Parece que ya no te queda espacio. Que deseas hacer?" << endl;
        cout << "1.Reemplazar el objeto\n2.Continuar sin el objeto recogido\n3.Añadir un espacio mas por (500) gemas" << endl;
        cin >> NoSpace;
        int k = 0;
        switch (NoSpace)
        {
        case 1:
            cout << "Este es tu inventario actual" << endl;
            
            for (iter = inventory.begin(); iter != inventory.end(); iter++)
            {
                cout << k << ".- " << *iter << endl;
                k++;
            }
            cout << "Escribe el numero del objeto que quieras intercambiar" << endl;
            cin >> Replace;
            cout << "\n Intercambiaste tu " << inventory[Replace] << " por [Hacha vieja]" << endl;
            myIterator = inventory.begin() + 2;
            *myIterator = "Carne";
            system("pause");
            break;

        case 2:
            cout << "Decides que no vale la pena tirar nada por ese objeto, asi que continuas tu aventura" << endl;
            cout << "Este es tu inventario actual" << endl;
            for (iter = inventory.begin(); iter != inventory.end(); iter++)
            {
                cout << *iter << endl;
            }
            cout << "Estas son tus gemas" << Gemas << endl;
            system("pause");
            return 0;
            break;

        case 3:
            Gemas = Gemas - 500;
            MaxFreeSpace = MaxFreeSpace + 1;
            cout << "Compraste mas espacio usando gemas" << endl;
            cout << "Estas son tus gemas restantes\n" << Gemas << endl;
            inventory.push_back("Hacha vieja");
            cout << "Este es tu inventario actual" << endl;
            for (iter = inventory.begin(); iter != inventory.end(); iter++)
            {
                cout << *iter << endl;
            }
            
            system("pause");
            cout << "Parece que te acabaste tus gemas magicas y tu espacio, por lo que continuas tu viaje sin entretenerte" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }



    }
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








