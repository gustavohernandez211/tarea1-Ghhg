#include <stdio.h>

int main() {
    int num_consultas; //almacenar num de consultas que se van a realizar.
    while (scanf("%d", &num_consultas) == 1 && num_consultas != 0) { //repetir el proceso de lectura y cálculo de consultas  != 0
        int coord_x_division, coord_y_division, i; //coordenadas de la división y un contador
        scanf("%d %d", &coord_x_division, &coord_y_division); // Se leen las coordenadas de la división.
        for ( i = 0; i < num_consultas; i++) { // Se utiliza un bucle for para procesar cada una de las consultas.
            int coord_x_residencia, coord_y_residencia; // Se declaran las variables para almacenar las coordenadas de la residencia.
            scanf("%d %d", &coord_x_residencia, &coord_y_residencia); // Se leen las coordenadas de la residencia.
            if (coord_x_residencia == coord_x_division || coord_y_residencia == coord_y_division) { // Se verifica si la residencia está en la misma línea horizontal o vertical que la división.
                printf("divisa\n"); // Si es así, se imprime "divisa".
            } else if (coord_x_residencia > coord_x_division && coord_y_residencia > coord_y_division) { // Se verifica si la residencia está en el cuadrante superior derecho con respecto a la división.
                printf("NE\n"); // Si es así, se imprime "NE" (noroeste).
            } else if (coord_x_residencia > coord_x_division && coord_y_residencia < coord_y_division) { // Se verifica si la residencia está en el cuadrante inferior derecho con respecto a la división.
                printf("SE\n"); // Si es así, se imprime "SE" (sureste).
            } else if (coord_x_residencia < coord_x_division && coord_y_residencia > coord_y_division) { // Se verifica si la residencia está en el cuadrante superior izquierdo con respecto a la división.
                printf("NO\n"); // Si es así, se imprime "NO" (noreste).
            } else { // Si no se cumplen las condiciones anteriores, la residencia está en el cuadrante inferior izquierdo con respecto a la división.
                printf("SO\n"); 
            }
        }
    }
    return 0; // El programa termina con éxito.
}

