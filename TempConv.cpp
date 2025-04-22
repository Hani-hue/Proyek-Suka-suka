#include <iostream>
using namespace std;

int main()
{

    double temp;
    char unit;

    cout << "================= Temperature Conversion =================\n";
    cout << "F = Fahrenheit\n";
    cout << "C = Celcius\n";
    cout << "What unit you like to convert to: ";
    cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        cout << "Enter the temperature in Celscius: ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temperature is: " << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "Temperature is: " << temp << "C\n";
    }
    else
    {
        cout << " Cuma ada C atau F. Gada yang laen";
    }
    return 0;
}