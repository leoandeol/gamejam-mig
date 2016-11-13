#ifndef RESOURCEMANAGER_HPP
#define RESOURCEMANAGER_HPP

#include <iostream>
#include <string>
#include <unordered_map>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class ResourceManager
{
public:
  ResourceManager();
  sf::Texture* getTexture(std::string const&);
  sf::Font* getFont(std::string const&);
  sf::SoundBuffer* getSound(std::string const&);
  sf::Music* getMusic(std::string const&);

private:
  std::unordered_map<std::string, sf::Texture*> textures;
  std::unordered_map<std::string, sf::Font*> fonts;
  std::unordered_map<std::string, sf::SoundBuffer*> sounds;
  std::unordered_map<std::string, sf::Music*> musics;
};

#endif
