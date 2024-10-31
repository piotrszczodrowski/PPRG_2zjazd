#include <iostream>

using namespace std;

int main() {
    //wprowadzenie wartosci wejsciowych
    int a = 0;
    int b = 0;
    do {
        cout << "Wprowadz liczbe calkowita dodatnia a: ";
        cin >> a;
        if (a <= 0) {
            cout <<"Wprowadzona liczba nie spelnia warunkow wykonywalnosci programu!" << endl;
        }
    }
    while (a <= 0);
    do {
        cout << "Wprowadz liczbe calkowita dodatnia b: ";
        cin >> b;
        if (b <= 0) {
            cout <<"Wprowadzona liczba nie spelnia warunkow wykonywalnosci programu!" << endl;
        }
    }
    while (b <= 0);
    cout << endl;
    //wiersz gwiazdek o dlugosci a
    cout << "Wiersz o dlugosci a:" << endl << endl;
    for (int i = 1; i <= a; i++) {
        cout << "*";
    }
    cout << endl << endl;
    //kolumna gwiazdek o dlugosci b
    cout << "Kolumna o wysokosci b:" << endl << endl;
    for (int i = 1; i <= b; i++) {
        cout << "*" << endl;
    }
    cout << endl << endl;
    //wypelniony prostokat a*b
    cout << "Prostokat gwiazdek o wymiarach a*b:" << endl << endl;
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= a; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl << endl;
    // pusty prostokat a*b
    cout << "Obwod prostokata o wymiarach a*b" << endl << endl;
    for (int i = 1; i <= b; i++) {
        if ((i == 1) || (i == b)) {
            for (int j = 1; j <= a; j++) {
                cout << "*";
            }
            cout << endl;
        } else {
            for (int j = 1; j <= a; j++) {
                if ((j==1) || (j==a)) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    cout << endl << endl;
    //trojkat prostokatny rownoramienny
    cout << "Trojkat prostokatny rownoramienny o przyprostokatnej a, kat prosty w lewym dolnym rogu:" << endl << endl;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl << endl;
    //trojkat prostokatny rownoramienny odwrocony
    cout << "Trojkat prostokatny rownoramienny o przyprostokatnej a, kat prosty w prawym gornym rogu:" << endl << endl;
    for (int i = 0; i < a; i++) {
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (a-i); j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl << endl;

}