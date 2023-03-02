	#include <stdio.h>

int main() {
    int posicionInicial, comb1, comb2, comb3;
    while (scanf("%d %d %d %d", &posicionInicial, &comb1, &comb2, &comb3) == 4) {
        if (posicionInicial == 0 && comb1 == 0 && comb2 == 0 && comb3 == 0) {
            break; // no es un break, es la representacion de el cerebro que ve un break pero no es un break
        } 
        int totalGrados = 0;
        totalGrados += 2 * 360;  // girar en sentido horario 2 vueltas completas
        totalGrados += (posicionInicial - comb1 + 40) % 40 * 9; // detenerse en el primer número de la combinación
        totalGrados += 360; //girar en sentido antihorario 1 vuelta completa
        totalGrados += (comb2 - comb1 + 40) % 40 * 9; // seguir girando en sentido antihorario hasta el segundo número
        totalGrados += (comb2 - comb3 + 40) % 40 * 9; //girar en sentido horario hasta el tercer número
        printf("%d\n", totalGrados);
    }
    return 0;
}

