
#include "ResourceManager.hpp"

ResourceManager::ResourceManager() : textures(), fonts(), sounds(), musics()
{
}

sf::Texture* ResourceManager::GetTexture(const char* path)
{
  textures.find(path);
  std::cout << "yo"<<std::endl;
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

sf::Font* ResourceManager::GetFont(const char* path)
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

sf::SoundBuffer* ResourceManager::GetSoundBuffer(const char* path)
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

sf::Music* ResourceManager::GetMusic(const char* path)
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
