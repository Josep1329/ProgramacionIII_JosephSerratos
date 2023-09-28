# Documentacion de una clase

## .h

```c++
#include "IntCell.h" //Incluimos el include (Encabezado) IntCell.h

// Constructor Default
IntCell::IntCell(int newValue) : storedValue(newValue) {} //Declara un IntCell dentro de IntCell con (Asi xd "::") con parámetro (int newValue) en sentido global dentro de almacenadoValue, haciendo que lo asignamos directamente nuevoValue a almacenadoValue

// Copiar constructor
IntCell::IntCell(const IntCell &rhs) : storedValue(rhs.storedValue) {} //Declara un IntCell dentro de IntCell (Lo mismo de arriba xd) con parámetros (cons IntCell &rhs), copiando el valor de rhs en almacenadoValue, rhs.storedValue es el valor almacenado dentro de rhs.

// Move constructor
IntCell::IntCell(IntCell &&rhs) noexcept : storedValue(rhs.storedValue) { 
   // Bueno pues como es lo mismo que arriba (Casi) Basicamente volvemos a declarar un IntCell dentro del IntCell con parametros (IntCell && rhs), Moviendo (Copiando su valor) valor rhs en storeValue, rhs.storedvalue es el storedValue con el rhs.
}
// Copiar el trabajo op
IntCell &IntCell::operator=(const IntCell &rhs) { 
//Declaramos un IntCell de tipo IntCell :v adentro de un operador y hacemos que aprenda el uso de = en otro IntCell con el valor de rhs

    if (this != &rhs) { //Si valor que tiene IntCell no es el mismo al rhs, entonces
        storedValue = rhs.storedValue; //Le ponemos storedValue el valor de rhs.storedValue
    }
    return *this; //Retornamos el valor que tiene IntCell, osea, el storeValue
}

//Remueve el operador de asignacion de movimiento
IntCell &IntCell::operator=(IntCell &&rhs) noexcept { //Declaramos un IntCell de tipo IntCell (vaya vaya quien lo dirira) adentro de un operador y lo hacemos que haga = en un IntCell con el valor de rhs de referencia.
    if (this != &rhs) {  //Si el valor IntCell actual no es el mismo que rhs, entonces
        storedValue = rhs.storedValue;  //Asignamos a storeValue el valor de rhs.storeValue
        rhs.storedValue = 0; //Y aqui se los asignamos a 0
    }
    return *this; //Aqui retornamos el valor de storeValue (IntCell)
}

// Se elimina el operador de asignación sobrecargado para que este pueda aceptar cualquier dato.

IntCell &IntCell::operator=(int rhs) { //Aqui se declaro un IntCell de tipo IntCell adentro de un operador para que este entienda las variables tipo Int
    storedValue = rhs; //Y aqui se asigna el valor de StoreValue de rhs
    return *this; //Returns the current value of IntCell (storedValue) //Y aqui se retorna el valor de IntCell, osea, storeValue
}
```


## .cpp

```c++
#ifndef INTCELL_H 
 //Aqui checamos que los Ifndef y define esten como deben
#define INTCELL_H 

class IntCell {
public: //Aqui todo debe ser publico 
    explicit IntCell(int newValue = 0); //Un constructor Explicit y lo asignamos un valor 0
    IntCell(const IntCell &rhs); //Aqui seria el impicito constructor, se copea el valor de rhs de la derecha, se usa  -- & cuando Rvalue no tiene memoria de referencia
    IntCell(IntCell &&rhs) noexcept; //Aqui esta otro constructor implicito, las mismas referencia de arriba, ahora solo que && se usa cuando Rvalue tiene memoria
    ~IntCell() = default; //Un destructor que se iguala = como defualt para borrar la variable en el caso de ya no necesitarlo

    IntCell &operator=(const IntCell &rhs); //Le decimos al operador que tipo de variables puede usar
    IntCell &operator=(IntCell &&rhs) noexcept; //Le decimos al operador los tipos de variable que usa, solo que esta vez por referencia

    
    IntCell &operator=(int rhs); //Tells operator it can now use/read int type variables //Le dicimos al operador que puede usar o leer

    int getValue() const; //le asignamos una nueva constante de tipo int llamada getValue
    void setValue(int newValue); //Y aqui se asigna un nuevo void con el parametro de int

private: //Aqui va todo lo privado
    int storedValue; //Y se crea un nuevo int
};

#endif  // y aqui se termina.
```