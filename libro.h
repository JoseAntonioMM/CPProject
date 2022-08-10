#ifndef LIBRO
#define LIBRO
#include <iostream>
#include <string>
#define MAX 100
using std::string;

namespace hache{
 
 struct Persona
 {
  string m_Nombre;
  int m_Genero;
  int m_Edad;
  string m_Tlf;
  string m_Dir;
 };
 
 struct LibroDir
 {
  struct Persona arrayPersonas[MAX];
  int m_Size;
 };

 void crearPersona(LibroDir * libro);
 void mostrarPersonas(LibroDir * libro);
 void borrarPersona(LibroDir * libro);
 void buscarPersona(LibroDir * libro);
 void cambiarPersona(LibroDir * libro);
 void vaciar(LibroDir * libro);
 void menu();
 int existe(LibroDir * libro, string nombre);

}

#endif