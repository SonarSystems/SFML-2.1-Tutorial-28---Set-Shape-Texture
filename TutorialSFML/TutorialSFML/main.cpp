#include "SFML/Graphics.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML WORK!");

	sf::CircleShape circle(150);
	circle.setRadius(200);

	circle.setPointCount(300);

	sf::Texture texture;

	if (!texture.loadFromFile("texture.jpeg"))
	{
		std::cout << "ERROR ERROR ERROR" << std::endl;
	}

	circle.setTexture(&texture);

	circle.setTextureRect(sf::IntRect(0, 0, 20, 45));

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		window.clear();

		window.draw(circle);

		window.display();
	}
}