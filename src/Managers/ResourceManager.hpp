#ifndef RESOURCEMANAGER_HPP
#define RESOURCEMANAGER_HPP

#include <iostream>
#include <string>
#include <map>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class ResourceManager
{
public:
  sf::Texture* GetTexture(std::string);
  sf::Font* GetFont(std::string);
  sf::SoundBuffer* GetSoundBuffer(std::string);
  sf::Music* GetMusic(std::string);
private:
  std::map<std::string, sf::Texture*> textures;
  std::map<std::string, sf::Font*> fonts;
  std::map<std::string, sf::SoundBuffer*> sounds;
  std::map<std::string, sf::Music*> musics;
};

#endif
