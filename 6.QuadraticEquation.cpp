#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float A = 0;
    float B = 0;
    float C = 0;

    float Delta = 0;
    float x1 = 0;
    float x2 = 0;

    cout << "A=? ";
    cin >> A;

    cout << "B=? ";
    cin >> B;

    cout << "C=? ";
    cin >> C;

    Delta = (B*B) - (4*A*C);
    cout << "Delta: " << Delta << "\n";

    if (Delta<0){
        cout << "Rishe Nadarad !";
        return 0;
    }
    else if (Delta==0) {
        x1 = x2 = -(B) / (2*A);
        cout << "Rishe Mozaaf\n";
        cout << "x1: " << x1 << "\n";
        cout << "x2: " << x2 << "\n";
        return 0;
    }
    else if (Delta>0){
        x1 = (-(B) - sqrt(Delta)) / (2*A);
        x2 = (-(B) + sqrt(Delta)) / (2*A);
        cout << "x1: " << x1 << "\n";
        cout << "x2: " << x2 << "\n";
        return 0;
    }
    else {
        cout << "Error";
        return 1;
    }
}