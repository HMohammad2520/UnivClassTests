#include <iostream>

using namespace std;

int main()
{
    float R = 0;
    float Area = 0;
    const float Pi = 3.14;

    cout << "Shoae Dayere Ra Benevisid: ";
    cin >> R;

    Area = (R * R) * Pi;

    cout << "Area: " << Area;
    return 0;
}