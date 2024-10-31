#include <iostream>

using namespace std;

int main() {
    int length = 0;
    int total = 0;
    int an= 0;
    cout << "Podaj dlugosc szeregu: ";
    cin >> length;
    for (int i = 1; i <= length; i++) {
        an = 0;
        for (int j = 1; j <= i; j++) {
            an = an + j;
        }
        total = total + an;
    }
    cout << "Suma szeregu: " << total;

    return 0;
}