#include <stdio.h>

int main() {
    int num_consultas; //almacenar num de consultas que se van a realizar.
    while (scanf("%d", &num_consultas) == 1 && num_consultas != 0) { //repetir el proceso de lectura y c�lculo de consultas  != 0
        int coord_x_division, coord_y_division, i; //coordenadas de la divisi�n y un contador
        scanf("%d %d", &coord_x_division, &coord_y_division); // Se leen las coordenadas de la divisi�n.
        for ( i = 0; i < num_consultas; i++) { // Se utiliza un bucle for para procesar cada una de las consultas.
            int coord_x_residencia, coord_y_residencia; // Se declaran las variables para almacenar las coordenadas de la residencia.
            scanf("%d %d", &coord_x_residencia, &coord_y_residencia); // Se leen las coordenadas de la residencia.
            if (coord_x_residencia == coord_x_division || coord_y_residencia == coord_y_division) { // Se verifica si la residencia est� en la misma l�nea horizontal o vertical que la divisi�n.
                printf("divisa\n"); // Si es as�, se imprime "divisa".
            } else if (coord_x_residencia > coord_x_division && coord_y_residencia > coord_y_division) { // Se verifica si la residencia est� en el cuadrante superior derecho con respecto a la divisi�n.
                printf("NE\n"); // Si es as�, se imprime "NE" (noroeste).
            } else if (coord_x_residencia > coord_x_division && coord_y_residencia < coord_y_division) { // Se verifica si la residencia est� en el cuadrante inferior derecho con respecto a la divisi�n.
                printf("SE\n"); // Si es as�, se imprime "SE" (sureste).
            } else if (coord_x_residencia < coord_x_division && coord_y_residencia > coord_y_division) { // Se verifica si la residencia est� en el cuadrante superior izquierdo con respecto a la divisi�n.
                printf("NO\n"); // Si es as�, se imprime "NO" (noreste).
            } else { // Si no se cumplen las condiciones anteriores, la residencia est� en el cuadrante inferior izquierdo con respecto a la divisi�n.
                printf("SO\n"); 
            }
        }
    }
    return 0; // El programa termina con �xito.
}

