#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        cout << " You win a bumer sticker!\n";
        break;
    case 2:
        cout << " you win a t-shirt!\n";
        break;
    case 3:
        cout << " you win a free lunch!\n";
        break;
    case 4:
        cout << "You win a gift card!\n";
        break;
    case 5:
        cout << "you win concert ticket!\n";
        break;
    }
    return 0;
}