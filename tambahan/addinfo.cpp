#include <iostream>
using namespace std;

int main()
{

    // && = check if two condition are true
    // || = check if at least one of the two condition is true
    // ! = reverse the logical state of its operand

    int temp;
    bool sunny = true;

    cout << "Enter the temperature: ";
    cin >> temp;

    if (temp > 0 && temp < 30)
    {
        cout << "The temperature is good!\n";
    }
    else
    {
        cout << "The temperature is bad!";
    }
    if (sunny)
    {
        cout << "It's sunny outside";
    }
    else
    {
        cout << "It's cloudy outside";
    }
    return 0;
}