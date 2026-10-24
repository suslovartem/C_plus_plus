// Вариант 12. Написать программу, запрашивающую цифру от 0 до 9 и выдающую английское (немецкое) слово, соответствующее ее названию.
Программа запрашивающая цифру от 0 до 9 и выдающая английское слово, соответствующее ее названию.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Введите цифру от 0 до 9: ";
    cin >> num;

    switch (num)
    {
    case 0:
        cout << "zero";
        break;
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "three";
        break;
    case 4:
        cout << "four";
        break;
    case 5:
        cout << "five";
        break;
    case 6:
        cout << "six";
        break;
    case 7:
        cout << "seven";
        break;
    case 8:
        cout << "eight";
        break;
    case 9:
        cout << "nine";
        break;
    default:
        cout << "Нужно число от 0 до 9";
    }

    return 0;
}
