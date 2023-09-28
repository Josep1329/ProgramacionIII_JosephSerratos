#ifndef TEMA1_FLOATCELL_H
#define TEMA1_FLOATCELL_H

class FloatCell {
public:
    //Constructor Implicito de estilo float que guarda un valor de 0
    explicit FloatCell(float newValue = 0);

    //Copia de constructor implicito
    FloatCell(const FloatCell &rhs);

    //Constructor implicito por referencia
    FloatCell(FloatCell &&rhs) noexcept;

    //Destructor, se activa cuand el free es usado
    ~FloatCell() = default;

    //Asiganmos por copia, para rvalues
    FloatCell &operator = (const FloatCell &rhs);
    FloatCell &operator = (FloatCell &&rhs) noexcept;

    //Le dice que tipo de datos va a trabajar con el caso float
    //Porque solo puede trabajar con datos de su propia clase
    FloatCell &operator = (float rhs);

    //Funcion que ve que valor esta asignado
    float getValue() const;

    //Funcion que asigna el valor
    void setValue(float newValue);

private:
    //Variable que usamos para
    float storedValue;
};