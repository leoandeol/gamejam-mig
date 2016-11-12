#include "Child.hpp"

Child::Child() : Entity()
{
  this.c_sex = (bool) rand()%2;
  this.c_enchanted = true;
  this.c_moveSpeed = 1.0;
}

void Child::setEnchanted()
{
  this.c_enchanted = true;
}

void Child::setDesenchanted()
{
  this.c_enchanted = false;
}

bool Child::getSex()
{
  return this.c_sex;
}

/*void Child::kill()
{
}*/

//FAIRE METHODE DESENCHANTE
//JOUER TROP FAUX
//JOUER PAS ASSEZ FORT
