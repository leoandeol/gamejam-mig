#include "Parallax.hpp"

Parallax::Parallax()
{
  background = new sf::Sprite();
  background2 = new sf::Sprite();
  deep_para = new sf::Sprite();
  deep_para2 = new sf::Sprite();
  close_para = new sf::Sprite();
  close_para2 = new sf::Sprite();
  background->setTexture(*ResourceManager::GetTexture("data/textures/game/background.png"));
  background2->setTexture(*ResourceManager::GetTexture("data/textures/game/background.png"));
  deep_para->setTexture(*ResourceManager::GetTexture("data/textures/game/deep_para.png"));
  deep_para2->setTexture(*ResourceManager::GetTexture("data/textures/game/deep_para.png"));
  close_para->setTexture(*ResourceManager::GetTexture("data/textures/game/close_para.png"));
  close_para2->setTexture(*ResourceManager::GetTexture("data/textures/game/close_para.png"));
}

Parallax::~Parallax()
{
  
}

void Parallax::update(sf::Time delta)
{
  background->move(-bg_speed,0);
  background2->move(-bg_speed,0);
  deep_para->move(-dp_speed,0);
  deep_para2->move(-dp_speed,0);
  close_para->move(-cl_speed,0);
  close_para2->move(-cl_speed,0);
}

void Parallax::draw(sf::RenderWindow* w)
{
  w->draw(*(background));
  w->draw(*(background2));
  w->draw(*(deep_para));
  w->draw(*(deep_para2));
  w->draw(*(close_para));
  w->draw(*(close_para2));
}
