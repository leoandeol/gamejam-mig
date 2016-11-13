#include "ResourceManager.hpp"

ResourceManager::ResourceManager() : textures(), fonts(), sounds(), musics()
{
  textures.clear();
  fonts.clear();
  sounds.clear();
  musics.clear();
}

sf::Texture* ResourceManager::getTexture(const std::string& path)
{
  if (textures.find(path)==textures.end())
    {
      sf::Texture* texture = new sf::Texture();
      if(!texture->loadFromFile(path))
	{
	  std::cout << "Error loading file : " << path << std::endl;
	}
      textures[path]=texture;
    }
  return textures[path];
}

sf::Font* ResourceManager::getFont(const std::string& path)
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

sf::SoundBuffer* ResourceManager::getSound(const std::string& path)
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

sf::Music* ResourceManager::getMusic(const std::string& path)
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
