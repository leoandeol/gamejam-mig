#include "Player.hpp"

Player::Player() : Entity()
{
  for(int i = 0; i < 10 ;i++){
    child.push_back(new Child());
  }  
}

Player::~Player()
{
  delete this.child;
}

void Player::wolfFlute()
{
}

/*void Player::Bomb()
{
  this.child.top().kill();
  Wolf.run();
  delete this.child.pop();
}*/

void Player::enchantChildren()
{
  this.child.back().setEnchanted();
}

void Player::loseChild()
{
  this.child.back().kill();
}

/*void Player::getAttacked()
{
  this.child.back().kill();
  delete this.child.back();
}*/

string Player::toString(){
  string bonjour;
  for(int i = 0; i < this.child.size(); i++)
    {
      bonjour + this.child[i].getSex();
    }
}
		

