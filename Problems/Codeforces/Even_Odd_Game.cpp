#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend()); // Ordenamos el arreglo de mayor a menor

        int aliceScore = 0;
        int bobScore = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) { // Turno de Alice (índice par)
                if (a[i] % 2 == 0) { // Si el número es par, Alice suma su valor
                    aliceScore += a[i];
                }
            } else { // Turno de Bob (índice impar)
                if (a[i] % 2 != 0) { // Si el número es impar, Bob suma su valor
                    bobScore += a[i];
                }
            }
        }

        if (aliceScore > bobScore) {
            cout << "Alice" << endl;
        } else if (aliceScore < bobScore) {
            cout << "Bob" << endl;
        } else {
            cout << "Tie" << endl;
        }
    }

    return 0;
}