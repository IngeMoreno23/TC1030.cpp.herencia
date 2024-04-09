#pragma once
#include "Persona.hpp"
#include <string>

class Maestro : public Persona {
private:
    std::string departamento;
public:
    Maestro();
    Maestro(std::string, int, std::string);
    std::string getDepartamento();
    void muestraDatos();
};
