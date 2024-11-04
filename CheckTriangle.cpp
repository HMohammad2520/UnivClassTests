#include<iostream>

using namespace std;

int main(){
    int A;
    int B;
    int C;

    cout << "A=? ";
    cin >> A;

    cout << "B=? ";
    cin >> B;

    cout << "C=? ";
    cin >> C;

    if ((A+B)>=C && (A+C)>=B && (C+B)>=A){
        cout << "Mosalas Tashkil Mishavad";
        return 0;
    }
    else {
        cout << "Mosalas Tashkil Nemishavad";
        return 0;
    }
}