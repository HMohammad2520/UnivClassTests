#include<iostream>

using namespace std;

int main(){
    int N = 0;
    int I = 1;
    
    cout << "Yek Addad Tabiei Vared Konid: ";
    cin >> N;
    
    if (N < 1){
        cout << "N nemitavanad az 1 kochek tar bashad";
        return 0;
    }

    while (I < N) {
        cout << I << " ";
        I = I + 1;
    }
    
    return 0;
}