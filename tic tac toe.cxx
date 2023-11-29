#include<iostream>
using namespace std;

int main() {
    int num[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int a = 0, b = 0, i, j = 0, n1, n2, n = 0;

    while (a != 1) {
        system("cls");

        cout << "\n\t1 | 2 | 3 ";
        cout << "\n\t------------";
        cout << "\n\t4 | 5 | 6 ";
        cout << "\n\t------------";
        cout << "\n\t7 | 8 | 9 ";

        cout << "\n\n\n";

        for (i = 0; i < 9; i++) {
            if (i % 3 == 0) {
                cout << "\n\t";
            }

            if (num[i] == 1) {
                cout << 0;
            } else if (num[i] == 2) {
                cout << 1;
            } else {
                cout << " ";
            }

            if (i % 3 < 2) {
                cout << "| ";
            }
        }

        cout << "\n\n";

        if (j == 0) {
            cout << "Player 1: ";
            cin >> n1;

            if (num[n1 - 1] == 0) {
                num[n1 - 1] = 1;
            }

            j = 1;
        } else if (j == 1) {
            cout << "Player 2: ";
            cin >> n2;

            if (num[n2 - 1] == 0) {
                num[n2 - 1] = 2;
            }

            j = 0;
        }

        n++;

        if ((num[0] == 1 && num[1] == 1 && num[2] == 1) ||
            (num[3] == 1 && num[4] == 1 && num[5] == 1) ||
            (num[6] == 1 && num[7] == 1 && num[8] == 1) ||
            (num[0] == 1 && num[3] == 1 && num[6] == 1) ||
            (num[1] == 1 && num[4] == 1 && num[7] == 1) ||
            (num[2] == 1 && num[5] == 1 && num[8] == 1) ||
            (num[0] == 1 && num[4] == 1 && num[8] == 1) ||
            (num[2] == 1 && num[4] == 1 && num[6] == 1)) {
            cout << "Player 1 wins";
            a = 1;
        } else if ((num[0] == 2 && num[1] == 2 && num[2] == 2) ||
                   (num[3] == 2 && num[4] == 2 && num[5] == 2) ||
                   (num[6] == 2 && num[7] == 2 && num[8] == 2) ||
                   (num[0] == 2 && num[3] == 2 && num[6] == 2) ||
                   (num[1] == 2 && num[4] == 2 && num[7] == 2) ||
                   (num[2] == 2 && num[5] == 2 && num[8] == 2) ||
                   (num[0] == 2 && num[4] == 2 && num[8] == 2) ||
                   (num[2] == 2 && num[4] == 2 && num[6] == 2)) {
            cout << "Player 2 wins";
            a = 1;
        } else if (n == 9) {
            cout << "The match ties";
            a = 1;
        }
    }

    return 0;

}