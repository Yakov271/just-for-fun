#pragma once
#include <SFML/Graphics.hpp>
#include<stdlib.h>
#include "windows.h"
#include<iostream>
#include <conio.h>
using namespace std;

class truepicture
{
   
private:


    vector<int> color;
    int b,R,G,B;
 public:   
    truepicture(int _b, int _R,int _G, int _B) : b(_b), R(_R), G(_G), B(_B)
    {
        
        
    }
    ~truepicture(){}
    void showpicture(); 

};
void truepicture::showpicture() {
    sf::RenderWindow window(sf::VideoMode(400, 400), "color");
    sf::CircleShape shape(200.f,b);
    shape.setFillColor(sf::Color(R,G,B));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
      
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
        {
            // left key is pressed: move our character
            window.close();
        }
        window.clear();
        window.draw(shape);
        window.display();
    }
}
