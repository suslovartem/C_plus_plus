#include <iostream>
#include <cmath>
using namespace std;
int main() {
    // put your code here
    const double PI = atan(1) * 4;
    double a, z, y;
    cin >> a;
    z = 2 * pow(sin(3 * PI - 2 * a), 2) * pow(cos(5 * PI + 2 * a), 2);
    y = 1. / 4 - 1. / 4 * sin(5. / 2 * PI - 8 * a);
    cout << z << endl;
    cout << y << endl;
    system("pause");
    return 0;
}

