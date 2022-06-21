#include <iostream>
using namespace std;

//prototipo de la función.
int number_pow(int number);//función de potenciación números positivos.

int main() {

    int units_pow;
    int tens_pow;
    int cents_pow;
    int pow_adittion;
    int discriminator[] = {};
    int number = 0;

    cout << "Ingrese cualquier numero positivo entre 1 y 999: ";
    cin >> number;

    if ( number == 0 )
    {
        cout << "Todas las operaciones disponibles en el sistema con el número 0 dan: 0";
    }
    else if ( number < 0 )
    {
        number *= -1;

        if ( number > 0 && number < 10 )
        {
            units_pow = number_pow(number);

            if ( units_pow % 2 != 0 )
            {
                units_pow *= -1;
            }
            cout << "El resultado de la operación con el digito que indicó es : ";
            cout << units_pow;
        }
        else if ( number >= 10 && number < 100 )
        {
            discriminator[0] = number / 10;
            tens_pow = number_pow(discriminator[0]);

            if ( tens_pow % 2 != 0 )
            {
                tens_pow *= -1;
            }

            discriminator[1] = number % 10/1;
            units_pow = number_pow(discriminator[1]);

            if ( units_pow % 2 != 0 )
            {
                units_pow *= -1;
            }

            pow_adittion = tens_pow + units_pow;

            cout << "El resultado de la suma de potencias del número es: ";
            cout << pow_adittion << endl;
            cout << "La potencia de las decenas es: " << tens_pow;
            cout << "La potencia de las unidades es: " << units_pow;

        }
        else if ( number >= 100 && number < 1000 )//Números mayores o iguales a 100.
        {
            discriminator[0] = number / 100;
            cents_pow = number_pow(discriminator[0]);

            if ( cents_pow % 2 != 0 )
            {
                cents_pow *= -1;
            }

            discriminator[1] = number % 100 / 10;
            tens_pow = number_pow(discriminator[1]);

            if ( tens_pow % 2 != 0 )
            {
                tens_pow *= -1;
            }

            discriminator[2] = number % 10 / 1;
            units_pow = number_pow(discriminator[2]);

            if ( units_pow % 2 != 0 )
            {
                units_pow *= -1;
            }

            pow_adittion = cents_pow + tens_pow + units_pow;
            cout << "El resultado de la suma de potencias del número es: ";
            cout << pow_adittion << endl;
            cout << "La potencia de las centenas es: " << cents_pow;
            cout << "La potencia de las decenas es: " << tens_pow;
            cout << "La potencia de las unidades es: " << units_pow;

        }
    }

    else if ( number > 0 && number < 10 )
    {
        units_pow = number_pow(number);

        cout << "La potencia de la cifra indicada es: " << units_pow << endl;
        cout << "La suma de la cifra indicada elevada a su propio exponente es: ";
        cout << units_pow << endl;
    }

    else if ( number >= 10 && number < 100 )
    {
        discriminator[0] = number / 10;
        tens_pow = number_pow(discriminator[0]);

        cout <<"La pontencia de las decenas de la cifra es: " << tens_pow << endl;

        discriminator[1] = number % 10/1;
        units_pow = number_pow(discriminator[1]);

        cout << "La potencia de las unidades de la cifra indicada es: " << units_pow << endl;
        pow_adittion = tens_pow + units_pow;
        cout << "la suma de las dos cifras indicadas es: " << pow_adittion << endl;
    }

    else if ( number >= 100 && number < 1000 )//Números mayores o iguales a 100.
    {
        discriminator[0] = number / 100;
        cents_pow = number_pow(discriminator[0]);
        cout << "La potencia de las centenas de la cifra indicada es: " << cents_pow << endl;

        discriminator[1] = number % 100 / 10;
        tens_pow = number_pow(discriminator[1]);
        cout << "La pontencia de las decenas de la cifra es: " << tens_pow << endl;

        discriminator[2] = number % 10 / 1;
        units_pow = number_pow(discriminator[2]);
        cout << "La potencia de las unidades es: " << units_pow << endl;
        pow_adittion = units_pow + tens_pow + cents_pow;
        cout << "la suma de las tres potencias indicadas es: " << pow_adittion << endl;
    }
    else
    {
        cout << "¡¡El VALOR indicado no es válido!!";
    }

    return 0;
}
//definición de la funición de potenciación numeros positivos.
int number_pow(int number)
{
    int units_pow;
    int units_counter = 1;
    units_pow = number * number;
    while ( units_counter < number - 1 )
    {
        for (int i = number; i == number; i++)
        {
            units_pow = number * units_pow;
        }
        units_counter++;
    }
    return units_pow;
}