#include <iostream>
#include "cestudiante.hpp"
//#comandos macro
#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif

void mostrarcaratula() {
    std::system(CLEAR_COMMAND);
    std::cout << "\x1B[H";

    std::cout << "\x1B[200;90;106m";
    std::cout << "/***************************************************************************************/" << std::endl; 
    std::cout << "\x1B[m";
    std::cout << "\x1B[31;1m                         Universidad Catolica San Pablo \x1B[m" << std::endl; 
    std::cout << "\x1B[33;1m              Escuela Profesional de Ciencia de la Computacion \x1B[m" << std::endl; 
    std::cout << "\x1B[22;1m                     Curso de Ciencia de la Computacion I \x1B[m" << std::endl; 
    std::cout << "\x1B[38;5;63m                 Estudiante -Jhon Alexander Flores Condori  \x1B[m" << std::endl; 
    std::cout << "\x1B[3;38;5;160m                          Arequipa 2024 - Semestre II \x1B[m" << std::endl; 
    std::cout << "\x1B[200;90;106m";
    std::cout << "/***************************************************************************************/" << std::endl;
    std::cout << "\x1B[m";
    std::cout << "\n !! Welcome to 2024 - II semester !! \n\n";
}

int main() {   
    mostrarcaratula();

    cestudiante estudiante;
    
    char nombre[40], apellido[40], dni[10], telefono[15];
    int id;
    
    std::cout << "=== Registro de Estudiante ===" <<std::endl;
    
    std::cout << "Ingrese ID: ";
    std::cin >> id;
    std::cin.ignore();
    
    std::cout << "Ingrese Nombre: ";
    std::cin.getline(nombre, 40);
    
    std::cout << "Ingrese Apellido: ";
    std::cin.getline(apellido, 40);
    
    std::cout << "Ingrese DNI: ";
    std::cin.getline(dni, 10);
    
    std::cout << "Ingrese Telefono: ";
    std::cin.getline(telefono, 15);
    
    estudiante.setid(id);
    estudiante.setname(nombre);
    estudiante.setapellido(apellido);
    estudiante.setdni(dni);
    estudiante.settelefono(telefono);
    
    estudiante.displayData();
    
    return 0;
}
