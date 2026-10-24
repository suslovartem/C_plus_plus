#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Введите четырехзначное число: ";
    cin >> x;

    int e = x % 10;
    int d = (x / 10) % 10;
    int s = (x / 100) % 10;
    int t = x / 1000;
    
    int p = t * 10 + d;
    p = p + e + s;

    cout << "e: " << e << endl << "d: " << d << endl << "s: " << s << endl << "t: " << t << endl;
    cout << "P: " << p;
    
    return 0;
}
