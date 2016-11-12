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
  static sf::Texture* GetTexture(std::string);
  static sf::Font* GetFont(std::string);
  static sf::SoundBuffer* GetSoundBuffer(std::string);
  static sf::Music* GetMusic(std::string);
private:
  static std::unordered_map<std::string, sf::Texture*> textures;
  static std::unordered_map<std::string, sf::Font*> fonts;
  static std::unordered_map<std::string, sf::SoundBuffer*> sounds;
  static std::unordered_map<std::string, sf::Music*> musics;
};

#endif
