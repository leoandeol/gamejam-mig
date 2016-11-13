#include "TextManager.hpp"

TextManager::read(std::string nomfichier)
{
  ifstream fichier("test.txt", ios::in); 
  char car;
  if(fichier)
    {
      do{
	fichier.get(car);
	switch(car){
	case 'B':
	  
	  break;
	case 'S':
	  break;
	case 'D':
	  break;
	case 'H':
	  break;
	case 'W':
	  break;
	case 'U':
	  break;
	case 'G':
	  break;
	case 'P':
	  break;
      }
      while(!flux.eof())
      fichier.close();  
    }
  else  
    cerr << "Erreur ouverture fichier" << endl;
}
