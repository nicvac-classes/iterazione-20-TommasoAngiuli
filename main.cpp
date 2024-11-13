#include <iostream>
using namespace std;
int main() 
{
    int blocchi, h, i;
    cout << "inserisci il numero di blocchi" << endl;
    cin >> blocchi;
    i = 0;
    h = 0;
    while (i + h < blocchi) {
        h = h + 1;
        i = i + h;
    }
    cout << "l'altezza è " << h << endl;
}