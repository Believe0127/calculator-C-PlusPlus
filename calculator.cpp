#include <iostream>

using namespace std;

int main() {
    int x, y, choice;

    cout << "数値1: ";
    cin >> x;
    cout << "数値2: ";
    cin >> y;
    cout << "計算方法を選択してください | 1: 足し算, 2: 引き算, 3: 掛け算, 4: 割り算\n>>> ";
    cin >> choice;

    if( choice == 1 ) {
        cout << "計算結果: " << x + y << endl;
        system("pause");
    }
    else if( choice == 2 ) {
        cout << "計算結果: " << x - y << endl;
        system("pause");
    }
    else if( choice == 3 ) {
        cout << "計算結果: " << x * y << endl;
        system("pause");
    }
    else if( choice == 4 ) {
        cout << "計算結果: " << x / y << endl;
        system("pause");
    }
}