#include "Maestro.hpp"
#include <iostream>

Maestro::Maestro()
{

}

Maestro::Maestro(const std::string nombre, int edad, const std::string departamento) : Persona(nombre, edad)
{
    this->departamento = departamento;
}

std::string Maestro::getDepartamento()
{
    return departamento;
}

void Maestro::muestraDatos()
{
    std::cout << "Nombre: " << nombre << " Edad: " << edad << " Departamento: " << departamento << "\n";
}