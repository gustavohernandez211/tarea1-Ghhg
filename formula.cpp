#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num_grand_prix1, num_grand_prix2;
	while (cin >> num_grand_prix1 >> num_grand_prix2 && (num_grand_prix1 != 0 || num_grand_prix2 != 0)) {
        // leer resultados de cada premio
        vector<vector<int> > resultados(num_grand_prix1, vector<int>(num_grand_prix2));
        for (int i = 0; i < num_grand_prix1; i++) {
            for (int j = 0; j < num_grand_prix2; j++) {
                cin >> resultados[i][j];
            }
        }
        int num_calculos;
        cin >> num_calculos;
        while (num_calculos--) {
            int num_puntos;
            cin >> num_puntos;
            vector<int> puntos(num_puntos);
            for (int i = 0; i < num_puntos; i++) {
                cin >> puntos[i];
            }
            vector<int> puntuacion(num_grand_prix2); // calcula puntuacion de piloto
            for (int i = 0; i < num_grand_prix1; i++) {
                for (int j = 0; j < num_puntos && j < num_grand_prix2; j++) {
                    puntuacion[resultados[i][j] - 1] += puntos[j];
                }
            }
            int max_puntuacion = *max_element(puntuacion.begin(), puntuacion.end()); // max puntuacion
            vector<int> campeones;
            for (int i = 0; i < num_grand_prix2; i++) {
                if (puntuacion[i] == max_puntuacion) {
                    campeones.push_back(i + 1);
                }
            }
            for (int i = 0; i < campeones.size(); i++) {
                if (i > 0) {
                    cout << " ";
                }
                cout << campeones[i];
            }
            cout << endl;
        }
    }
    return 0;
}

