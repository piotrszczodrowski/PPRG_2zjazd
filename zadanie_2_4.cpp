#include <iostream>

using namespace std;

int main() {
    int height(0);
    char letter;
    bool valid(false);
    do {
        cout << "Podaj wysokosc diamentu: ";
        cin >> height;
        if (height < 0) {
            cout << endl << "Nie mozna narysowac diamentu o ujemnej wysokosci!" << endl;
            continue;
        }
        if (height == 0) {
            cout << endl << "Nie mozna narysowac diamentu o zerowej wysokosci!" << endl;
            continue;
        }
        if (height % 2 == 0) {
            do {
                cout << endl <<
                        "Narysowanie diamentu o parzystej wysokosci moze dac niesatysfakcjonujace wyniki, rekomendowane wprowadzenie liczby nieparzystej. Kontynuowac? (Y/N): ";
                cin >> letter;
                if (letter == 'N') {
                    valid = false;
                    continue;
                }
                if (letter == 'T') {
                    valid = true;
                    break;
                }
            } while ((letter != 'N') && (letter != 'T'));
        }
    } while ((valid == false) && (height <= 0));
    bool odd = ((height % 2) == 0) ? 0 : 1;
    int half_height = height / 2;
    int spaces(0);
    int stars(0);
    for (int i = 1; i <= (half_height + odd); i++) {
        stars = (1 + (i - 1) * 2);
        spaces = ((1 + ((half_height + odd) - 1) * 2) - stars) / 2;
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        for (int k = 1; k <= stars; k++) {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = half_height; i >= 1; i--) {
        stars = (1 + (i - 1) * 2);
        spaces = ((1 + ((half_height + odd) - 1) * 2) - stars) / 2;
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        for (int k = 1; k <= stars; k++) {
            cout << "*";
        }
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
