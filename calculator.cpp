#include <iostream>

using namespace std;

int main() {
    int x, y, choice;

    cout << "”’l1: ";
    cin >> x;
    cout << "”’l2: ";
    cin >> y;
    cout << "ŒvŽZ•û–@‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢ | 1: ‘«‚µŽZ, 2: ˆø‚«ŽZ, 3: Š|‚¯ŽZ, 4: Š„‚èŽZ\n>>> ";
    cin >> choice;

    if( choice == 1 ) {
        cout << "ŒvŽZŒ‹‰Ê: " << x + y << endl;
        system("pause");
    }
    else if( choice == 2 ) {
        cout << "ŒvŽZŒ‹‰Ê: " << x - y << endl;
        system("pause");
    }
    else if( choice == 3 ) {
        cout << "ŒvŽZŒ‹‰Ê: " << x * y << endl;
        system("pause");
    }
    else if( choice == 4 ) {
        cout << "ŒvŽZŒ‹‰Ê: " << x / y << endl;
        system("pause");
    }
}