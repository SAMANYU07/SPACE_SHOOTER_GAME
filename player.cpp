#include <SFML/Graphics.hpp>

int main()
{
        sf::RenderWindow win(sf::VideoMode(400, 400), "C++", sf::Style::Close);
        float length = 100, width = 80;
        sf::RectangleShape rect(sf::Vector2f(length, width));
        float x = 300, y = 100;
        sf::Vector2f pos = sf::Vector2f(x, y);
        rect.setPosition(pos);
        sf::Transform tranf;
        rect.setOrigin(length/2, width/2);
        while (win.isOpen())
        {
                win.draw(rect);
                win.display();
                sf::Event evt;
                while (win.pollEvent(evt))
                {
                        switch (evt.type)
                        {
                                case sf::Event::Closed:
                                {
                                        win.close();
                                }
                        }
                }
                rect.rotate(0.1);
                win.clear();
                tranf.rotate(0.1, sf::Vector2f(200, 200));
                //rect.setPosition(rect.getPosition().x + rect.getOrigin().x, rect.getPosition().y + rect.getOrigin().y);
        }
        return 0;
}