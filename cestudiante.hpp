#ifndef CESTUDIANTE_HPP
#define CESTUDIANTE_HPP
class cestudiante{
    private:
    //atributo
    int id;
    char* nombre;
    char* apellido;
    char* dni;
    char* telefono;
    
    public:
    cestudiante();//constructor
    ~cestudiante();//destructor
    
    void setname(char in_name[40]);
    void displayname();
    void displayData();  // Corregido a mayúscula D
    
    /*get->mostrar  */
    int getid();
    char* getnombre();
    char* getapellido();
    char* getdni();
    char* gettelefono();
    
    /*set-> establcer,dar ->void */
    void setid(int nuevo_id);
    void setapellido(char in_apellido[40]);
    void setdni(char in_dni[10]);
    void settelefono(char in_telefono[15]);
};
#endif



