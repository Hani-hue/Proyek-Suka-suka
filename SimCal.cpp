#include <iostream>
using namespace std;

int main()
{

    char hehe;
    double num1;
    double num2;
    double result;

    cout << "============ Simple Calculator ============";

    cout << "Enter either (+ - * /) :";
    cin >> hehe;

    cout << "Enter #1: ";
    cin >> num1;

    cout << "Enter #2: ";
    cin >> num2;

    switch (hehe)
    {
    case '+':
        result = num1 + num2;
        cout << "Result" << result << '\n';
        break;

    case '-':
        result = num1 - num2;
        cout << "Result" << result << '\n';
        break;

    case '*':
        result = num1 * num2;
        cout << "Result" << result << '\n';
        break;

    case '/':
        result = num1 / num2;
        cout << "Result" << result << '\n';
        break;

    default:
        cout << "gada perintah gitu njir. coba disesuain lagi\n";
        cout << "=================== Tamat ===================";
        break;
    }
    return 0;
}