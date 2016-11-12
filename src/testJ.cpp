#include <iostream>
#include <SFML/Window.hpp>

int main(){
    
    for(unsigned int i=0; i< sf::Joystick::Count; ++i)
    {
        if(sf::Joystick::isConnected(i))
            std::cout << "Joystick " << i << " is connected!" << std::endl;
        else
            std::cout << "Joystick " << i << " is NOT connected!" << std::endl;
    }
}
