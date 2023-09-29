#include <iostream>
#include "DoubleCell.h"
int main() {
  //Inicializamos un objeto DoubleCell
   DoubleCell dc(5);
   //Inicializamos otro objeto al DoubleCell sin argumento
   DoubleCell dc2;
   //Y aqui imprimimos el valor del objeto DoubleCell
   std::cout << "The value of dc is " << dc.GetValue() << std::endl;
   //Aqui se imprime el valor de DoubleCell
   std::cout << "The value of dc2 is " << dc2.GetValue() << std::endl;
   //Asignamos un nuevo valor al objeto DoubleCell
   dc2 = dc;
   //Añadimos un double al DoubleCell (Objeto)
   dc2 = dc2 + 5.0;
   //Y aqui se extrae el double del DoubleCell
   dc2 = dc2 - 15.0;

   //Se imprime el valor del DoubleCell
   std::cout << "The value of dc2 is " << dc2.GetValue() << std::endl;

}
