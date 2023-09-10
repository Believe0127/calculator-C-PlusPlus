#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    int calc;
    int end;

    cout << "”’l1: ";
    cin >> num1;
    cout << "”’l2: ";
    cin >> num2;

    cout << "ŒvŽZ•û–@‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B[—á: ‘«‚µŽZ: 1, ˆø‚«ŽZ: 2, Š|‚¯ŽZ: 3, Š„‚èŽZ: 4]\n>> ";
    cin >> calc;

    switch(calc){
        case 1:
            cout << "ŒvŽZŒ‹‰Ê: " << num1 + num2 << "\n";
            break;
        case 2:
            cout << "ŒvŽZŒ‹‰Ê: " << num1 - num2 << "\n";
            break;
        case 3:
            cout << "ŒvŽZŒ‹‰Ê: " << num1 * num2 << "\n"; 
            break;
        case 4:
            cout << "ŒvŽZŒ‹‰Ê: " << num1 / num2 << "\n";
            break;
        default:
            cout << "ŒvŽZŒ‹‰Ê: " << num1 + num2 << "\n";
            break;
    }
    cin >> end;

}