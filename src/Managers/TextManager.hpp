#ifndef DEF_TEXTMANAGER
#define DEF_TEXTMANAGER
#include <iostream>
#include <fstream>
#include <string>
#include "Bloc.hpp"

class TextManager
{
public:
  void read(std::string);
private:
  Bloc Matrice[32][18];
};

#endif
