#ifndef DEF_TEXTMANAGER
#define DEF_TEXTMANAGER
#include <iostream>
#include <fstream>
#include "Bloc.hpp"

class TextManager
{
public:
  char read();
private:
  Bloc Matrice[32][18];
}

#endif
