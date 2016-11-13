#ifndef GAMESCREEN_HPP
#define GAMESCREEN_HPP

#include <vector>
#include <SFML/Graphics.hpp>
#include "../Managers/ScreenManager.hpp"
#include "AbstractScreen.hpp"
#include "../Entity/Enemy/Wolf.hpp"
#include "../Entity/Enemy/Parent.hpp"
#include "../Level/Parallax.hpp"
#include "../Entity/Player/Player.hpp"

class Player;

class GameScreen : public AbstractScreen
{
public:
  GameScreen(ScreenManager*);
  ~GameScreen();
  virtual void update(sf::Time);
  virtual void draw();
  void wolfRun();
private:
  Player* player;
  std::vector<Wolf*> wolves;
  std::vector<Parent*> parents;
  Parallax para;
};

#endif
