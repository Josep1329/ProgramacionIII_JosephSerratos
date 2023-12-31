#include "FloatCell.h"


//Se pone Constructor Implicito
FloatCell::FloatCell(float newValue) : storedValue(newValue){}

//Copiamos el constructor y lo guardamos en storeValue rhs.
FloatCell::FloatCell(const FloatCell &rhs) : storedValue(rhs.storedValue){}

//Movemos el constructor
FloatCell::FloatCell(FloatCell &&rhs) noexcept : storedValue(rhs.storedValue) {
rhs.storedValue = 0;
}

//Declaramos un FloatCell de tipo FloatCell :v adentro de un operador y hacemos que aprenda el uso de = en otro FloatCell con el valor de rhs
FloatCell &FloatCell::operator=(const FloatCell &rhs) {
//Si valor que tiene FloatCell no es el mismo al rhs, entonces
    if(this != &rhs)
        //Le ponemos storedValue el valor de rhs.storedValue
        storedValue = rhs.storedValue;

    return * this; //Retornamos el valor que tiene FloatCell, osea, el storeValue
}
//Remueve el operador de asignacion de movimiento
FloatCell &FloatCell::operator=(FloatCell &&rhs) noexcept { //Declaramos un FloatCell de tipo FLoatCell (Que bien xd) adentro de un operador y lo hacemos que haga = en un FloatCell con el valor de rhs de referencia.
if (this != &rhs) {//Si el valor FloatCell actual no es el mismo que rhs, entonces
storedValue = rhs.storedValue; //Asignamos a storeValue el valor de rhs.storeValue
rhs.storedValue = 0; //Y aqui se los asignamos a 0
}

return *this; //Aqui retornamos el valor de storeValue (FloatCell)

}
// Se elimina el operador de asignación sobrecargado para que este pueda aceptar cualquier dato.

void FloatCell::setValue(float newValue) //Estas haciendo void de tipo FloatCell, le ponemos un valer a newValue, ya que no debe regresar nada.
{
    storedValue = newValue; // Y aqui va el nuevo valor que se asigno
}
float FloatCell::getValue() const
{
    return storedValue; //Aqui se obtiene un valor
}