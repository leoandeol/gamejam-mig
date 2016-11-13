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
  ResourceManager();
  sf::Texture* GetTexture(const char*);
  sf::Font* GetFont(const char*);
  sf::SoundBuffer* GetSoundBuffer(const char*);
  sf::Music* GetMusic(const char*);
private:
  std::map<const char*, sf::Texture*> textures;
  std::map<const char*, sf::Font*> fonts;
  std::map<const char*, sf::SoundBuffer*> sounds;
  std::map<const char*, sf::Music*> musics;
};

#endif
