# Examen parcial 1 ProgramacionIII


## Parte 1.1:


¿Qué es un Rvalor y un Lvalor?
**RValor es los valores que se encuentran en la derecha, y Lvalor es los que se encuentran en la izquierda**

¿Porqué es necesario que una clase tenga constructores y operadores por copia y por referencia?
**Por que el constructor se encarga de inicializar un objeto copiando los valores de los miembros de un objeto del mismo tipo y los operadores son necesesarios para hacer comparaciones proporcionales de dos expresiones**

¿Qué función desarrollan los :: en la implementación de la clase?
**Para llamar a una clase dentro de otra clase igual y hacemos que nos de el resultado de una aplicacion**

¿Cómo se le denomina a cuando una clase posee un operador puede tener múltiples implementaciones dependiendo de los argumentos que este reciba?
**Sobrecarga**

¿Cúal es la funcion del archivo .h?
**es un archivo de encabezado que se usa en archivos C++ para incluir la declaración de variables, constantes y funciones.**



## Parte 2 Complejidad
```c++
#include <iostream> //Ponemos las libreria iostream

int algoritmo1(int n) { //Inicializamos la variable y que contenga la variable n
    int resultado = 0; //Hacemos otra variable para guardar datos de operaciones, que empieze en 0

    for (int i = 0; i < n; i++) { //Aqui le decimos que si i(numero) es menor a n(0) que este vaya sumando
        resultado += i; // En resultado se guarda el resultado(i) y se imprime.
    }

    for (int i = 0; i < n; i++) { //Aqui se hace lo mismo que la parte de arriba
        for (int j = 0; j < n; j++) { //Aqui se declara que j vale 0, y si este es menor que n, j se vaya sumando
            resultado += i * j; // y aqui el resultado se multiplica por la i de la anterior operacion.
        }
    }

    return resultado; //y aqui se cierra hasta resultado
}

int main() { //Iniciamos la variable main
    int n; //Iniciamos otra variable para guardar los datos
    std::cout << "Ingrese el valor de n: "; // Le pedimos al usuario que ingres un valor para n
    std::cin >> n; //Se guarda el valor en la variable n

    int resultado = algoritmo1(n); //Aqui se imprime el resultado de las operaciones += i; += i * j
    std::cout << "Resultado: " << resultado << std::endl; //Aqui imprimimos los resultados de las operaciones

    return 0; //Aqui cerramos el codigo
}
```

