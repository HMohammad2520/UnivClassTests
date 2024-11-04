#include<iostream>

using namespace std;

int main(){
    int N = 0;
    int I = 2;

    cout << "Yek Addad Tabiei Vared Konid: ";
    cin >> N;

    if (N < 2){
        cout << "N nemitavanad az 2 kochek tar bashad";
        return 0;
    }

    while (I < N) {
        cout << I << " ";
        I = I + 2;
    }
    cout << "\n";
    cout << "I: " << I;

    return 0;
}