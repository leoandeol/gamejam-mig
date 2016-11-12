#include "Player.hpp"

Player::Player(int lane) : MovingEntity(lane)
{
  for(int i = 0; i < 10 ;i++){
    child.push_back(new Child(lane));
  }  
}

Player::~Player()
{
  delete &child;
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
  child.back()->setEnchanted();
}

void Player::loseChild()
{
  child.back()->kill();
}

void Player::getAttacked()
{
  child.back()->kill();
}

int Player::update(sf::Time delta)
{
  return 0;
}
		

