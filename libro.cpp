#include "libro.h"
#include <cstdlib>
#include <fstream>
#include <stdlib.h>
using namespace std;
using namespace hache;
 
void hache::crearPersona(LibroDir * libro)
{
 if (libro->m_Size == MAX)
 {
  cout << "Libro lleno, no se puede :(" << endl;
  return;
 }
 else
 {
  string nombre;
  cout << "Introducir nombre:" << endl;
  cin >> nombre;
  libro->arrayPersonas[libro->m_Size].m_Nombre = nombre;
 
  cout << "Introducir genero:" << endl;
  cout << "1 - Hombre" << endl;
  cout << "2 - Mujer" << endl;
  int genero = 0;
 
  while (true)
  {
   cin >> genero;
   if (genero == 1 || genero == 2)
   {
    libro->arrayPersonas[libro->m_Size].m_Genero = genero;
    break;
   }
   cout << "No valido" << endl;
  }
 
 cout << "Introducir edad:" << endl;
 int edad = 0;
 cin >> edad;
 libro->arrayPersonas[libro->m_Size].m_Edad = edad;
 
 cout << "Introducir telefono:" << endl;
 string tlf;
 cin >> tlf;
 libro->arrayPersonas[libro->m_Size].m_Tlf = tlf;
 
 cout << "Introducir direccion:" << endl;
 string dir;
 cin >> dir;
 libro->arrayPersonas[libro->m_Size].m_Dir = dir;
 
 libro->m_Size++;
 
 cout << "Creado :)" << endl << endl;
 system("PAUSE"); //solucion cutre 
 system("CLS");

 }
}
 
void hache::mostrarPersonas(LibroDir * libro)
{
 if (libro->m_Size == 0)
 {
  cout << "Esta vacio :(" << endl << endl;
  system("PAUSE");
  system("CLS");
 }
 else
 {
  for (int i = 0; i < libro->m_Size; i++)
  {
   cout << "Nombre:" << libro->arrayPersonas[i].m_Nombre << "\t";
   cout << "Genero:" << (libro->arrayPersonas[i].m_Genero == 1? "Hombre": "Mujer") << "\t";
   cout << "Edad:" << libro->arrayPersonas[i].m_Edad << "\t";
   cout << "Telefono:" << libro->arrayPersonas[i].m_Tlf << "\t";
   cout << "Direccion:" << libro->arrayPersonas[i].m_Dir << endl;
  }
  cout << endl;
  system("PAUSE");
  system("CLS");
 }

}
 
int hache::existe(LibroDir * libro, string nombre)
{
 for (int i = 0; i < libro->m_Size; i++)
 {
  if (libro->arrayPersonas[i].m_Nombre == nombre)
  {
   return i;
  }
 }
 return -1;
}
 

void hache::borrarPersona(LibroDir * libro)
{
 cout << "Introduce el nombre de la persona a borrar:" << endl;
 string nombre;
 cin >> nombre;
 
 int tempersona = existe(libro, nombre);
 
 if (tempersona != -1)
 {
  for (int i = tempersona; i < libro->m_Size; i++)
  {
   libro->arrayPersonas[i] = libro->arrayPersonas[i + 1];
  }
  libro->m_Size--;
  cout << "Borrado" << endl << endl;
  system("PAUSE");
  system("CLS");
 }
}
 

void hache::buscarPersona(LibroDir * libro)
{
 cout << "Introduce nombre de la persona a buscar:" << endl;
 string nombre;
 cin >> nombre;
 
 int temPersona = existe(libro, nombre);
 
 if (temPersona != -1)
 {
  cout << "nombre:" << libro->arrayPersonas[temPersona].m_Nombre << "\t";
  cout << "Genero:" << (libro->arrayPersonas[temPersona].m_Genero == 1? "Hombre": "Mujer") << "\t";
  cout << "Edad:" << libro->arrayPersonas[temPersona].m_Edad << "\t";
  cout << "Telefono:" << libro->arrayPersonas[temPersona].m_Tlf << "\t";
  cout << "Direccion:" << libro->arrayPersonas[temPersona].m_Dir << endl << endl;
  system("PAUSE");
  system("CLS");
 }
 else
 {
  cout << "No existe :(" << endl << endl;
  system("PAUSE");
  system("CLS");;
 }
}
 
void hache::cambiarPersona(LibroDir * libro)
{
 cout << "Introducir nombre de persona a cambiar" << endl;
 string nombre;
 cin >> nombre;
 
 int temPersona = existe(libro, nombre);
 
 if (temPersona != -1)
 {
  string nombre;
  cout << "Nombre:" << endl;
  cin >> nombre;
  libro->arrayPersonas[temPersona].m_Nombre = nombre;
 
  cout << "Genero:" << endl;
  cout << "1 - Hombre" << endl;
  cout << "2 - Mujer" << endl;
  int genero = 0;
 
  while (true)
  {
   cin >> genero;
   if (genero == 1 || genero == 2)
   {
    libro->arrayPersonas[temPersona].m_Genero = genero;
    break;
   }
   cout << "No valido"<< endl;
  }
 
  cout << "Edad:" << endl;
  int edad = 0;
  cin >> edad;
  libro->arrayPersonas[temPersona].m_Edad = edad;
 
  cout << "Introducir telefono:" << endl;
  string tlf;
  cin >> tlf;
  libro->arrayPersonas[temPersona].m_Tlf = tlf;
 
  cout << "Introducir direccion:" << endl;
  string dir;
  cin >> dir;
  libro->arrayPersonas[temPersona].m_Dir = dir;
 
  cout << "Cambiado" << endl << endl;
  system("PAUSE");
  system("CLS");
 }
 else
 {
  cout << "No existe :(" << endl << endl;
  system("PAUSE");
  system("CLS");
 }
}
 

void hache::vaciar(LibroDir * libro)
{
 libro->m_Size = 0;
 cout << "Libro limpiado" << endl << endl;
 system("PAUSE");
 system("CLS");
}

void hache::menu()
{
 cout << "******************************************" << endl;
 cout << "****** 1. Crear contacto *****************" << endl;
 cout << "****** 2. Mostrar libro de contactos *****" << endl;
 cout << "****** 3. Borrar contacto ****************" << endl;
 cout << "****** 4. Encontrar contacto *************" << endl;
 cout << "****** 5. Modificar contacto *************" << endl;
 cout << "****** 6. Vaciar libro de contactos ******" << endl;
 cout << "****** 0. Salir **************************" << endl;
 cout << "******************************************" << endl;
 
}
