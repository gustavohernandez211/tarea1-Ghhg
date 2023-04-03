#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num_grandes_premios, num_pilotos, num_sistemas, num_carreras;
    while (cin >> num_grandes_premios >> num_pilotos && (num_grandes_premios || num_pilotos)) {
        vector<vector<int> > resultados_carreras(num_grandes_premios, vector<int>(num_pilotos));
        for (int i = 0; i < num_grandes_premios; i++) {
            for (int j = 0; j < num_pilotos; j++) {
                cin >> resultados_carreras[i][j];
            }
        }
        cin >> num_sistemas;
        while (num_sistemas--) { 
            vector<int> sistema_puntuacion(500);
            vector<int> puntos_pilotos(num_pilotos);
            cin >> num_carreras;
            for (int i = 0; i < num_carreras; i++) {
                cin >> sistema_puntuacion[i];
            }
            for (int i = 0; i < num_grandes_premios; i++) {
                for (int j = 0; j < num_pilotos; j++) {
                    puntos_pilotos[j] += sistema_puntuacion[resultados_carreras[i][j] - 1];
                }
            }
            int max_puntos = *max_element(puntos_pilotos.begin(), puntos_pilotos.end());
            bool first = true;
            for (int i = 0; i < num_pilotos; i++) {
                if (puntos_pilotos[i] == max_puntos) {
                    if (first) {
                        cout << i + 1;
                        first = false;
                    } else {
                        cout << " " << i + 1;
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}

