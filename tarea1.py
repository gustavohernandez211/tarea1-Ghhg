# Gustavo Hernandez Gomez-Estructuras de datos-B-Carlos Ramirez Restrepo
# punto 1


def verificarDiagonales(mat):
    """
    _revisa la diagonal principal y secundaria de una matriz cuadrada_

    Args:
        mat (_list_): _matriz cuadrada_

    Returns:
        _bool_: _si se cumple la funcion retorna True y si no retorna False_
    """
    revisarMatriz = len(mat)                                                                   
    resultado = True                                                                              # coloco los booleanos en en una variable para tener un solo return
    for i in range(revisarMatriz):                                                                        # recorre cada fila de la matriz y su longitud
        if mat[i][i] != mat[i][revisarMatriz-i-1]:                                                    # el [i][i] se refiere a filas y columnas y mira si son diferentes por el ciclo que lo recorre va restando 1 encada posicion y verificando
            resultado = False
    return resultado
mat=[[11, 23, 76, 34, 11],
[14, 30, 92, 30, 101],
[12, 45, 5, 92, 22],
[74, 56, 49, 56, 100],
[99, 5, 28, 47, 92]]

print(verificarDiagonales(mat))

# punto 2


def escapicua1(esCapicua):
    if esCapicua == esCapicua[::-1]:   # el [::-1] se llama slicing y sirve para extraer elementos en una lista o una cadena de caracteres
        result=True
    else:
        result=False
    return result
invocacion=escapicua1([42,12,90,90,12,42])
print(invocacion)
        
    

#punto 3




def diferenciaListas(listaA, listaB):
    """_mira que elementos no estan en una lista y los mete a una lista vacia y los imprime_

    Args:
        listaA (_list_): _lsitas con valores enteros_
        listaB (_list_): _lista con valores enters_

    Returns:
        _list_: _retorna una lista vavcia que se le agregaron los elemntos no se repetian_
    """
    listaVacia = []                                                
    for i in listaA:                                                       # ciclo para recorrer elementos
        if i not in listaB:                                                # Si el elemento actual no está en listaB, lo agrega a la lista vacia
            listaVacia.append(i)
        else:                                                              # si el elemento actual sí está en listaB, lo elimina de listaB
            listaB.remove(i)
    return listaVacia                                                      # devuelve la lista
listaA = [40, 10, 22, 12, 33, 33, 33]
listaB = [41, 22, 31, 15, 13, 12, 33, 19]
output = diferenciaListas(listaA, listaB)
print(output)                                                           # lo imprime

#punto 4  


def mostrarPrimos(n):
    print("Números primos entre 1 y", n, ":")
    for i in range(2, n + 1):
        es_primo = True
        for j in range(2, int(i**0.5) + 1):
            if i % j == 0:
                es_primo = False
        if es_primo:
            print("-->", i)
mostrarPrimos(100)

def mostrarPrimos(n):
    print("Números primos entre 1 y", n, "con suma de dígitos primos:")
    for i in range(2, n + 1):
        es_primo = True
        for j in range(2, int(i**0.5) + 1):
            if i % j == 0:
                es_primo = False
        if es_primo:
            suma_digitos = sum(int(d) for d in str(i))
            es_primo_digitos = True
            for j in range(2, int(suma_digitos**0.5) + 1):
                if suma_digitos % j == 0:
                    es_primo_digitos = False
            if es_primo_digitos:
                print(i)
mostrarPrimos(100)      
#punto 5
def sumarValoresMatriz(matriz, posiciones):
    """_Esta función recibe como argumentos un diccionario 'matriz' y una lista de tuplas 'posiciones', y devuelve la suma de los valores en las posiciones especificadas en la lista 'posiciones'._

    Args:
        matriz (_dic_): _nos muestra lo que recibe la funcion que seria la matriz y las posiciones_
        posiciones (_int_): _esto nos muestra lo que recibe la funcion en este caso serian las posiciones y la matriz que es un diccionario metido dentro de tuplas y listas_

    Returns:
        _int_: _comienza en 0 para ir iterando sobre la fila y la columna despues_
    """
    suma = 0
    for fila, columna in posiciones:                                                                # iteramos sobre las posiciones
        try:
            if fila in matriz and (columna, matriz[fila][columna]) in matriz[fila]:                     # verificamos si la fila está en el diccionario matriz y si la columna, valor correspondiente están en la fila específica
                suma += matriz[fila][columna]                                                           # si ambas condiciones se cumple se agregam a el valor correspondiente a la suma
        except IndexError:
    return suma

disp = {0 : [(0, 1), (5, 4), (7, 5)],
                1 : [(6, 4), (7, 7)],
                2 : [(0, 2), (1, 2), (4, 9), (6, 1)],
                4 : [(2, 8), (3, 1), (5, 7)],
                6 : [(0, 3), (5, 6), (7, 2)],
                7 : [(0, 4), (1, 4), (2, 7)],
                8 : [(1, 9), (3, 8), (5, 7), (7, 6)]}

resultado = sumarValoresMatriz(disp, [(0, 0), (8, 3), (3, 5), (7, 2), (4, 3), (4,6)])
print(resultado)

