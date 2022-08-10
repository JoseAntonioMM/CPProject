#include "libro.h"

using std::cout;
using std::cin;
using std::endl;
using namespace hache;

int main() 
{
 LibroDir libro;
 libro.m_Size = 0;
 int select = 0;
 
 while (true)
 {
  menu();
 
  cin >> select;
  switch (select)
  {
  case 1:
   crearPersona(&libro);
   break;
  case 2:
   mostrarPersonas(&libro);
   break;
  case 3:
   borrarPersona(&libro);
   break;
  case 4:
   buscarPersona(&libro);
   break;
  case 5:
   cambiarPersona(&libro);
   break;
  case 6:
   vaciar(&libro);
   break;
  case 0:
   cout << "Adios" << endl;
   return 0;
   break;
  default:
   break;
  }
 }
 return 0;
}