#include <SFML/Graphics.hpp>
#include <vector>

int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "CPP MineSweeper");
    window.setFramerateLimit(50);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                {
                    window.close();
                    return 0;
                }
            }
        }

        window.clear();
        // Draw here on window
        window.display();
    }

    return 0;
}