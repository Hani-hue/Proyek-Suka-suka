#include <iostream>
using namespace std;

int main()
{

    srand(time(NULL));

    int num1 = (rand() % 15) + 1;
    int num2 = (rand() % 15) + 1;
    int num3 = (rand() % 15) + 1;

    cout << num1 << '\n';
    cout << num2 << '\n';
    cout << num3 << '\n';

    return 0;
}