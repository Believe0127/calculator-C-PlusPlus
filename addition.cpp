#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    int calc;
    int end;

    cout << "���l1: ";
    cin >> num1;
    cout << "���l2: ";
    cin >> num2;

    cout << "�v�Z���@����͂��Ă��������B[��: �����Z: 1, �����Z: 2, �|���Z: 3, ����Z: 4]\n>> ";
    cin >> calc;

    switch(calc){
        case 1:
            cout << "�v�Z����: " << num1 + num2 << "\n";
            break;
        case 2:
            cout << "�v�Z����: " << num1 - num2 << "\n";
            break;
        case 3:
            cout << "�v�Z����: " << num1 * num2 << "\n"; 
            break;
        case 4:
            cout << "�v�Z����: " << num1 / num2 << "\n";
            break;
        default:
            cout << "�v�Z����: " << num1 + num2 << "\n";
            break;
    }
    cin >> end;

}