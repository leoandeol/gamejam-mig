#include "Child.hpp"

Child::Child(string name) : Entity
{
  this.c_sex = (bool) rand()%2;
  this.c_name = name;
  this.c_enchanted = true;
  this.c_moveSpeed = 1.0;
}
			    
void Child::accelerate()
{
  if(this.c_moveSpeed <= 9.5) this.c_moveSpeed += 0.5;
}
			      
void Child::slowDown()
{
  if(this.c_moveSpeed >= 0.5) this.c_moveSpeed -= 0.5; 
}

//FAIRE METHODE DESENCHANTE
//JOUER TROP FAUX
//JOUER PAS ASSEZ FORT
