#include <iostream>

using namespace std;


void Multitable()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    for (int i = 1; i < 11; i++)
    {
        cout << a << " X " << i << " = " << (a * i) << "\n";
    }
}
void doubl()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Double of value: " << (2 * a) << "\n";
}
void menu() {
    int ch;
    cout << "1: Display a Multiplication Table \n";
    cout << "2: Double a Value \n";
    cout << "3: Exit\n";
    cout << "Enter your choice:\n";
    cin >> ch;
    switch (ch) {
    case 1: {
        Multitable();
        menu();
        break;
    }
    case 2: {
        doubl();
        menu();
        break;
    }
    case 3: {
        cout << "Thank you\n";
        break;
    }
    default:
        printf("Wrong Input\n");
    }
}
int main()
{
    menu();
    return 0;
}