#include "DoubleCell.h"
#include <stdexcept>

// Constructor defualt
DoubleCell::DoubleCell()
        :Storedvalue(0.0){}

// Constructor con un valor
DoubleCell::DoubleCell(double value)
        : Storedvalue(value){}

// Copiamos el constructor
DoubleCell::DoubleCell(const DoubleCell& other)
        : Storedvalue(other.Storedvalue){}

//Cosntructor de referencia
DoubleCell::DoubleCell(DoubleCell&& other) noexcept
: Storedvalue(other.Storedvalue)
{
other.Storedvalue = 0;
}


// Aqui es un destructor
DoubleCell:: ~DoubleCell() //Assigns value of Storedvalue to 0
{
    Storedvalue = 0;
}

 //Asignamos operador por copy
DoubleCell& DoubleCell::operator=(const DoubleCell& other){//Copiamos el valor del otro storvalue
    if (this != &other){
        Storedvalue = other.Storedvalue;
    }
    return *this;
}

//Asignamos operador por referncia
DoubleCell& DoubleCell::operator=(DoubleCell&& other) noexcept//Marcamos la referencia al otro storeValue
{
if (this != &other)
{
Storedvalue = other.Storedvalue; //Aqui se se saca el resultado de los storeValues
other.Storedvalue = 0;
}
return *this;
}

//Asignamos operador para le double
DoubleCell& DoubleCell::operator=(double value){//Asignamos valor al storeValue
    Storedvalue = value;
    return *this;
}

//Operadores Arimeticos
// Se añade el DoubleCell
DoubleCell DoubleCell::operator +(const DoubleCell& other) const{ //Usamos referencias del DoubleCell que sume el StoreValue
    return DoubleCell(Storedvalue + other.Storedvalue);
}
//Double primitiva añadida
DoubleCell DoubleCell:: operator +(double value) const //Despues usamos doble valor para sumar directamente a StoreValue
{
    return DoubleCell(Storedvalue + value);
}

// Sustractivo de DoubleCell
DoubleCell DoubleCell::operator -(const DoubleCell& other) const //Usamos referencias del DoubleCell para sustractar el StoreValue
{
    return DoubleCell(Storedvalue - other.Storedvalue);
}

//Aqui se sustracta el double
DoubleCell DoubleCell::operator -(double value) const{ //Aqui usamos el valor de sustractar directamente para StoreValue
    return DoubleCell(Storedvalue - value);
}

 //Aqui se hace multiplicacion de DoubleCell
DoubleCell DoubleCell::operator *(const DoubleCell& other) const{ //Usamos referencia para el DoubleCell para multiplicar el StoreValue
    return DoubleCell(Storedvalue * other.Storedvalue);
}
//Aqui se multiplica la primitiva
DoubleCell DoubleCell::operator *(double value) const //Usamos el valor de double para multiplicar a StoreValue
{
    return DoubleCell(Storedvalue * value);
}

//Aqui se hace la division de DoubleCell
DoubleCell DoubleCell::operator /(const DoubleCell& other) const{ //Usamos las referencias del DoubleCell para dividir el StoreValue
    if(other.Storedvalue == 0){
        throw std::invalid_argument("Division by zero");
    }
    return DoubleCell(Storedvalue / other.Storedvalue);
}

//Primitive souble division
DoubleCell DoubleCell::operator /(double value) const{ //Uses double value to divide directly to Storedvalue
    if(value == 0){
        throw std::invalid_argument("Division by zero");
    }
    return DoubleCell(Storedvalue / value);
}

// Setters
void DoubleCell::SetValue(double value){
    Storedvalue = value;
}

// Getters
double DoubleCell::GetValue() const
{
    return Storedvalue;
}


