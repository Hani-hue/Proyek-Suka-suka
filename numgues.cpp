#include <iostream>
using namespace std;

int main()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "========== NUMBER GUESSING GAME ==========\n";
    cin >> guess;
    tries++;

    if (guess > num)
    {
        cout << "Too high!\n";
    }
    else if (guess < num)
    {
        cout << "Too low!\n";
    }
    else
    {
        cout << "CORRECT! # of tries:" << tries << '\n';
    }

    return 0;
}