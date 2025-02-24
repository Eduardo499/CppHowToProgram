#include <iostream>
#include <limits>

using namespace std;

int main() {
    int n, value, smallest;
    cout << "Digite o número de valores a serem lidos: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "A quantidade de valores deve ser maior que zero." << endl;
        return 1;
    }
    
    cout << "Digite o primeiro valor: ";
    cin >> smallest;
    
    for (int i = 1; i < n; ++i) {
        cout << "Digite o próximo valor: ";
        cin >> value;
        if (value < smallest) {
            smallest = value;
        }
    }
    
    cout << "O menor valor é: " << smallest << endl;
    return 0;
}
