#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    int calc;
    int end;

    cout << "数値1: ";
    cin >> num1;
    cout << "数値2: ";
    cin >> num2;

    cout << "計算方法を入力してください。[例: 足し算: 1, 引き算: 2, 掛け算: 3, 割り算: 4]\n>> ";
    cin >> calc;

    switch(calc){
        case 1:
            cout << "計算結果: " << num1 + num2 << "\n";
            break;
        case 2:
            cout << "計算結果: " << num1 - num2 << "\n";
            break;
        case 3:
            cout << "計算結果: " << num1 * num2 << "\n"; 
            break;
        case 4:
            cout << "計算結果: " << num1 / num2 << "\n";
            break;
        default:
            cout << "計算結果: " << num1 + num2 << "\n";
            break;
    }
    cin >> end;

}