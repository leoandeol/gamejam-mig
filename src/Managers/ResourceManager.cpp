#include "ResourceManager.hpp"

std::unordered_map<std::string, sf::Texture*> ResourceManager::textures;
std::unordered_map<std::string, sf::Font*> ResourceManager::fonts;
std::unordered_map<std::string, sf::SoundBuffer*> ResourceManager::sounds;
std::unordered_map<std::string, sf::Music*> ResourceManager::musics;

sf::Texture* ResourceManager::GetTexture(std::string path)
{
  if (textures.find(path) == textures.end())
    {
      sf::Texture* texture = new sf::Texture();
      texture->loadFromFile(path);
      textures[path] = texture;
    }
  return textures[path];
}

sf::Font* ResourceManager::GetFont(std::string path)
{
  if (fonts.find(path) == fonts.end())
    {
      sf::Font* font = new sf::Font();
      font->loadFromFile(path);
      fonts[path] = font;
    }
  return fonts[path];
}

sf::SoundBuffer* ResourceManager::GetSoundBuffer(std::string path)
{
  if (sounds.find(path) == sounds.end())
    {
      sf::SoundBuffer* sound = new sf::SoundBuffer();
      sound->loadFromFile(path);
      sounds[path] = sound;
    }
  return sounds[path];
}

sf::Music* ResourceManager::GetMusic(std::string path)
{
  if (musics.find(path) == musics.end())
    {
      sf::Music* music = new sf::Music();
      music->openFromFile(path);
      musics[path] = music;
    }
  return musics[path];
}
