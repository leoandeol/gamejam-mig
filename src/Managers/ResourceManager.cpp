#include "ResourceManager.hpp"

std::map<std::string, sf::Texture*> ResourceManager::textures;
std::map<std::string, sf::Font*> ResourceManager::fonts;
std::map<std::string, sf::SoundBuffer*> ResourceManager::sounds;
std::map<std::string, sf::Music*> ResourceManager::musics;

sf::Texture* ResourceManager::GetTexture(const std::string path)
{
  if (textures.find(path) == textures.end())
    {
      sf::Texture* texture = new sf::Texture();
      if(!texture->loadFromFile(path))
	{
	  std::cout << "Error loading file : " << path << std::endl;
	}
      textures[path] = texture;
    }
  return textures[path];
}

sf::Font* ResourceManager::GetFont(const std::string path)
{
  if (fonts.find(path) == fonts.end())
    {
      sf::Font* font = new sf::Font();
      if(!font->loadFromFile(path))
	{
	  std::cout << "Error loading file : " << path << std::endl;
	}
      fonts[path] = font;
    }
  return fonts[path];
}

sf::SoundBuffer* ResourceManager::GetSoundBuffer(const std::string path)
{
  if (sounds.find(path) == sounds.end())
    {
      sf::SoundBuffer* sound = new sf::SoundBuffer();
      if(!sound->loadFromFile(path))
	{
	  std::cout << "Error loading file : " << path << std::endl;
	}
      sounds[path] = sound;
    }
  return sounds[path];
}

sf::Music* ResourceManager::GetMusic(const std::string path)
{
  if (musics.find(path) == musics.end())
    {
      sf::Music* music = new sf::Music();
      if(!music->openFromFile(path))
	{
	  std::cout << "Error loading file : " << path << std::endl;
	}
      musics[path] = music;
    }
  return musics[path];
}
