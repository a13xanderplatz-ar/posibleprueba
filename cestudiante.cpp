#include "cestudiante.hpp"
#include <iostream>
using namespace std;

cestudiante::cestudiante() {
    id = 0;
    nombre = nullptr;
    apellido = nullptr;
    dni = nullptr;
    telefono = nullptr;
}

cestudiante::~cestudiante() {
    if (nombre != nullptr) delete[] nombre;
    if (apellido != nullptr) delete[] apellido;
    if (dni != nullptr) delete[] dni;
    if (telefono != nullptr) delete[] telefono;
}

void cestudiante::setname(char in_name[40]) {
    int longitud = 0;
    while (in_name[longitud] != '\0' && longitud < 40) {
        longitud++;
    }
    
    if (nombre != nullptr) {
        delete[] nombre;
    }
    
    nombre = new char[longitud + 1];
    
    if (nombre != nullptr) {
        for (int i = 0; i < longitud; i++) {
            nombre[i] = in_name[i];
        }
        nombre[longitud] = '\0';
    } else {
        cout << "Error: No se pudo asignar memoria para nombre" << endl;
    }
}

void cestudiante::setapellido(char in_apellido[40]) {
    int longitud = 0;
    while (in_apellido[longitud] != '\0' && longitud < 40) {
        longitud++;
    }
    
    if (apellido != nullptr) {
        delete[] apellido;
    }
    
    apellido = new char[longitud + 1];
    
    if (apellido != nullptr) {
        for (int i = 0; i < longitud; i++) {
            apellido[i] = in_apellido[i];
        }
        apellido[longitud] = '\0';
    } else {
        cout << "Error: No se pudo asignar memoria para apellido" << endl;
    }
}

void cestudiante::setdni(char in_dni[10]) {
    int longitud = 0;
    while (in_dni[longitud] != '\0' && longitud < 10) {
        longitud++;
    }
    
    if (dni != nullptr) {
        delete[] dni;
    }
    
    dni = new char[longitud + 1];
    
    if (dni != nullptr) {
        for (int i = 0; i < longitud; i++) {
            dni[i] = in_dni[i];
        }
        dni[longitud] = '\0';
    } else {
        cout << "Error: No se pudo asignar memoria para DNI" << endl;
    }
}

void cestudiante::settelefono(char in_telefono[15]) {
    int longitud = 0;
    while (in_telefono[longitud] != '\0' && longitud < 15) {
        longitud++;
    }
    
    if (telefono != nullptr) {
        delete[] telefono;
    }
    
    telefono = new char[longitud + 1];
    
    if (telefono != nullptr) {
        for (int i = 0; i < longitud; i++) {
            telefono[i] = in_telefono[i];
        }
        telefono[longitud] = '\0';
    } else {
        cout << "Error: No se pudo asignar memoria para teléfono" << endl;
    }
}

void cestudiante::setid(int nuevo_id) {
    id = nuevo_id;
}

void cestudiante::displayData() {
    cout << "\n=== Datos del Estudiante ===" << endl;
    cout << "ID: " << id << endl;
    
    if (nombre != nullptr) {
        cout << "Nombre: ";
        int i = 0;
        while (nombre[i] != '\0') {
            cout << nombre[i];
            i++;
        }
        cout << endl;
    }
    
    if (apellido != nullptr) {
        cout << "Apellido: ";
        int i = 0;
        while (apellido[i] != '\0') {
            cout << apellido[i];
            i++;
        }
        cout << endl;
    }
    
    if (dni != nullptr) {
        cout << "DNI: ";
        int i = 0;
        while (dni[i] != '\0') {
            cout << dni[i];
            i++;
        }
        cout << endl;
    }
    
    if (telefono != nullptr) {
        cout << "Telefono: ";
        int i = 0;
        while (telefono[i] != '\0') {
            cout << telefono[i];
            i++;
        }
        cout << endl;
    }
}

// ... resto de implementaciones
// Resto de implementaciones...
// [Implementar getters y setters según necesidad]