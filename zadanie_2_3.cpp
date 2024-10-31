#include <iostream>

using namespace std;

int main() {
    int month(0);
    cout << "Podaj numer miesiąca (1-12): ";
    cin >> month;
    if ((month<1)||(month>12)) {
        cout << endl << "Wprowadzono wartosc z poza zakresu. Program zakonczy dzialanie.";
        return 1;
    }
    cout << endl << "Miesiac: ";
    switch (month) {
        case 1: {
            cout << "Styczen";
            break;
        }
        case 2: {
            cout << "Luty";
            break;
        }
        case 3: {
            cout << "Marzec";
            break;
        }
        case 4: {
            cout << "Kwiecien";
            break;
        }
        case 5: {
            cout << "Maj";
            break;
        }
        case 6: {
            cout << "Czerwiec";
            break;
        }
        case 7: {
            cout << "Lipiec";
            break;
        }
        case 8: {
            cout << "Sierpien";
            break;
        }
        case 9: {
            cout << "Wrzesien";
            break;
        }
        case 10: {
            cout << "Pazdziernik";
            break;
        }
        case 11: {
            cout << "Listopad";
            break;
        }
        case 12: {
            cout << "Grudzien";
            break;
        }
    }
    cout << endl << "Dni w miesiacu: ";
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
            cout << 31;
            break;
        }
        case 4: case 6: case 9: case 11: {
            cout << 30;
            break;
        }
        case 2: {
            cout <<28;
            break;
        }
    }
    cout << endl << "Pogoda: ";
    if ((month >=4 ) && (month <=9))
        cout << "slonecznie" << endl;
    else
        cout << "pochmurno" << endl;




    return 0;
}
