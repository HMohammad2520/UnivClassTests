#include<iostream>

using namespace std;

int main(){
    int Score;

    cout << "Nomre Danesh Amoz ra Vared Konid: ";
    cin >> Score;

    if (20 >= Score && Score > 18){
        cout << "Kheyli Khob !!";
        return 0;
    }
    else if (18 >= Score && Score > 16) {
        cout << "Khob";
        return 0;
    }
    else if (16 >= Score && Score > 14) {
        cout << "Ghabel Ghabol";
        return 0;
    }
    else if (14 >= Score && Score > 12) {
        cout << "Niyaz Be Talash Bishtar";
        return 0;
    }
    else if (12 >= Score && Score > 0) {
        cout << "Mardood";
        return 0;
    }
    else {
        cout << "## Nomre Eshtebah Bood !!";
        return 1;
    }
}