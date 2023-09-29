#ifndef DOUBLE_CELL_H
#define DOUBLE_CELL_H

class DoubleCell {
public:
    //Constructor Default
    DoubleCell();

    //Aqui va el constructor con valor
    explicit DoubleCell(double value); //Aqui se declara a DoubleCell con un valor predeterminado

    //Copiamos constructor
    DoubleCell(const DoubleCell& other);

    //Referencias del constructor
    DoubleCell(DoubleCell&& other) noexcept;

    // Aqui se destruye
    ~DoubleCell();

    //Asignacion de operador por copia
    DoubleCell& operator=(const DoubleCell& other);

    //Asigancion de operador por referencia
    DoubleCell& operator=(DoubleCell&& other) noexcept;

     //Asignacion de operador por double
    DoubleCell& operator=(double value);

   //Operadores Arimeticos
    DoubleCell operator +(const DoubleCell& other) const;
    DoubleCell operator +(const double other) const;
    DoubleCell operator -(const DoubleCell& other) const;
    DoubleCell operator -(const double other) const;
    DoubleCell operator *(const DoubleCell& other) const;
    DoubleCell operator *(const double other) const;
    DoubleCell operator /(const DoubleCell& other) const;
    DoubleCell operator /(const double other) const;

    // Setters
    void SetValue(double value);

    // Getters

    double GetValue() const;


protected:
    double Storedvalue;
};

