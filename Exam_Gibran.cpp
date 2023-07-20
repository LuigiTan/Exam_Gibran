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
int MatrizSumas();

void NumeroVectores();
void MascotaVirtual();

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
        cout << "1.Play Guess My Number\n2.Inventario\n3.Suma de elementos de una matriz\n4.Numero mayor con vectores\n5.Mascota virtual\n6.Exit " << endl;
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
            MatrizSumas();
            break;

        case 4:
            NumeroVectores();
            break;

        case 5:
            MascotaVirtual();
            break;

        case 6:
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


    int NumRan = rand() % (RandomMax - RandomMin + 1) + RandomMin;
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

int MatrizSumas()
{
    int MatrizPrincipal[3][4] = { {1, 3, 1, 4},
                                 {9, 8, 7, 9},
                                 {3, 2, 1, 5} };
    int SumaPares = 0;
    int SumaPosiciones = 0;
    int ParesMenosPosiciones = 0;
    cout << "Esta es la matriz sobre la cual trabajaremos: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << MatrizPrincipal[i][j]<<"  ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (MatrizPrincipal[i][j] % 2 == 0)
            {
                SumaPares = SumaPares + MatrizPrincipal[i][j];
                SumaPosiciones = SumaPosiciones + (j + (i * 10));
                cout << MatrizPrincipal[i][j] << " Es par y se sumo al resto de pares"<<endl;
                cout << "Y su posicion en la matriz es: " << i << " , " << j << endl<<endl;
            }
        }
        
    }

    cout << "La suma de los numeros pares en la matriz es: " << SumaPares<<endl;
    cout << "La suma de las pocisiones de los numeros pares en la matriz es: " << SumaPosiciones << endl;
    ParesMenosPosiciones = SumaPares - SumaPosiciones;
    cout << "La resta de los numeros pares menos las pocisiones en la matriz es: " << ParesMenosPosiciones << endl;
    cout << "Presiona [ENTER] para continuar y finalizar el programa (eso borrara la pantalla)" << endl;
    system("pause");
    return 0;
}

void NumeroVectores()
{

}
///To do   


class Critter
{
public:
    Critter(int hunger = 0, int boredom = 0, int thirst = 0);

    void Talk();
    void Eat(int food = 4);
    void Play(int fun = 4);
    void Drink(int water = 4);
    void DisplayValues();

private:
    int m_Hunger;
    int m_Boredom;
    int m_Thirst;
    void PassTime(int time = 1);
};

Critter::Critter(int hunger, int boredom, int thirst) :
    m_Hunger(hunger),
    m_Boredom(boredom),
    m_Thirst(thirst)
{}


void Critter::PassTime(int time)
{
    m_Hunger += time;
    m_Boredom += time+1;
    m_Thirst += time+2;
}

void Critter::Talk()
{
    /*Implementar código
    */

    //Menos que 4 es bueno, 4 - 9 es medio , 10 - 15 es malo, 16+ es muerte
    if (m_Hunger < 4 && m_Boredom < 4 && m_Thirst < 4) //Bueno
    {
        cout << "Hola amo, estoy muy feliz!" << endl;
    }
    else if ((m_Hunger > 15) || (m_Boredom > 15)  || (m_Thirst > 15 )) //Muerte
    {
        cout << "Tu mascota ha muerto. Te quiso hasta el final\n            GAME OVER\n";
        exit(0);
    }
    else if ((m_Hunger > 9 && m_Hunger < 16) || (m_Boredom > 9 && m_Boredom < 16) || (m_Thirst > 9 && m_Thirst < 16))//Alto
    {
        cout << "Amo, me estoy muriendo, ayudame" << endl;
    }
    else if ((m_Hunger > 4 && m_Hunger < 10) || (m_Boredom > 4 && m_Boredom < 10) || (m_Thirst > 4 && m_Thirst < 10))//Medio
    {
        cout << "Hola amo, no me siento muy bien..." << endl;
    }

    if (m_Hunger >= 4)
    {
        cout << "Amo, tengo mucha hambre" << endl;
    }
    if (m_Boredom >= 4)
    {
        cout << "Amo, estoy muy aburrido..." << endl;
    }
    if (m_Thirst >= 4)
    {
        cout << "Amo, tengo mucha sed" << endl;
    }
     
    DisplayValues();
    PassTime();
}

void Critter::Eat(int food)
{
    cout << "\nBrrupp. \n";
    m_Hunger -= food;
    if (m_Hunger < 0)
    {
        m_Hunger = 0;
    }
    DisplayValues();
    PassTime();
}

void Critter::Play(int fun)
{
    cout << "\nWheee!\n";
    m_Boredom -= fun;
    if (m_Boredom < 0)
    {
        m_Boredom = 0;
    }
    DisplayValues();
    PassTime();
}

void Critter::Drink(int water)
{
    cout << "\n SCHLOP SCHLOP SCHLOP SCHLOP SCHLOP\n";
    m_Thirst -= water;
    if (m_Thirst < 0)
    {
        m_Thirst = 0;
    }
    DisplayValues();
    PassTime();
}
void Critter::DisplayValues()
{
    cout << "Valores de tu mascota:" << endl;
    cout << "Hambre: " << m_Hunger << endl;
    cout << "Aburrimiento: " << m_Boredom << endl;
    cout << "Sed: " << m_Thirst << endl<<endl;
}
void MascotaVirtual()
{
    {
        Critter crit;
        crit.Talk();
        int choice;
        do
        {
            
            cout << "\n Mascotas Virtuales\n\n";
            cout << "0 - Salir.\n";
            cout << "1 - Escucha a tu mascota.\n";
            cout << "2 - Alimentar.\n";
            cout << "3 - Jugar con tu mascota.\n";
            cout << "4 - Darle de tomar a tu mascota \n";
            cout << "Elige una opcion: ";
            cin >> choice;
            switch (choice)
            {
            case 0:
                cout << "Vuelve pronto!.\n";
                cout << "DISCLAIMER: Ninguna creatura real o virtual en 3D fue lastimada durante este juego \n";
                break;
            case 1:
                crit.Talk();
                break;
            case 2:
                crit.Eat();
                break;
            case 3:
                crit.Play();
                break;
            case 4:
                crit.Drink();
                break;
            default:
                cout << "\n Tu elección es inválida. \n";
            }
        } while (choice != 0);
    }
}


