#include <iostream>
#include <string>

class Usuario {
private:
    std::string nombre;
    int edad, ID;
    char sexo;
    std::string direccion;

public:
    Usuario(std::string nombre, int edad, char sexo, std::string direccion, int ID) {
        this->nombre = nombre;
        this->edad = edad;
        this->sexo = sexo;
        this->direccion = direccion;
        this->ID = ID;
    }

    void imprimirInformacion() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Sexo: " << sexo << std::endl;
        std::cout << "Dirección: " << direccion << std::endl;
        std::cout << "ID: " << ID << std::endl;
    }

    void borrarInformacion() {
        nombre = "";
        edad = 0;
        sexo = ' ';
        direccion = "";
        ID = 0;
    }
};

class Profesor : public Usuario {
private:
    std::string especialidad;
    int tiempo_experiencia;

public:
    Profesor(std::string nombre, int edad, char sexo, std::string direccion, int ID, std::string especialidad, int tiempo_experiencia) :
        Usuario(nombre, edad, sexo, direccion, ID),
        especialidad(especialidad),
        tiempo_experiencia(tiempo_experiencia)
    {}

    void imprimirInformacionProfesor() {
        imprimirInformacion();
        std::cout << "Especialidad: " << especialidad << std::endl;
        std::cout << "Tiempo de experiencia: " << tiempo_experiencia << std::endl;
    }
};
