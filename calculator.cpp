#include <iostream>

using namespace std;

int main() {
    int x, y, choice;

    cout << "���l1: ";
    cin >> x;
    cout << "���l2: ";
    cin >> y;
    cout << "�v�Z���@��I�����Ă������� | 1: �����Z, 2: �����Z, 3: �|���Z, 4: ����Z\n>>> ";
    cin >> choice;

    if( choice == 1 ) {
        cout << "�v�Z����: " << x + y << endl;
        system("pause");
    }
    else if( choice == 2 ) {
        cout << "�v�Z����: " << x - y << endl;
        system("pause");
    }
    else if( choice == 3 ) {
        cout << "�v�Z����: " << x * y << endl;
        system("pause");
    }
    else if( choice == 4 ) {
        cout << "�v�Z����: " << x / y << endl;
        system("pause");
    }
}