#include <iostream>

using namespace std;

int main()
{
    int L = 0;
    int W = 0;
    int Perimeter = 0;

    cout << "L=? ";
    cin >> L;

    cout << "W=? ";
    cin >> W;

    Perimeter = 2 * (W + L);

    cout << "Perimeter: " << Perimeter;
    return 0;
}