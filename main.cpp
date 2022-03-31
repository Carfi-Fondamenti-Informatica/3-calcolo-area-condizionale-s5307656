#include <iostream>
using namespace std;

int main() {
       float a =0, b=0, risultato=0;
    int opzione=0;
    cout << "Inserire due numeri razionali" << endl;
    cin >> a >> b;
    cout << "Inserire opzione" << endl;
    cin >> opzione;
    switch (opzione) {
        case 0:
            risultato = (a*b)/2;
            break;
        case 1:
            risultato = a*a;
            break;
        case 2:
            risultato = a*b;
            break;
        default:
            cout << "opzione non valida" << endl;
    }
cout << risultato << endl;
   return 0;
}
