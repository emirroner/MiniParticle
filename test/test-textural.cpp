#include <iostream>
#include <SFML\Graphics.hpp>
#include "..\presets\Particle\RectangularParticle.hpp"
#include "..\presets\ParticleSystem\TexturalParticleSystem.hpp"

int randint(int min,int max) {
	return (rand()%(max-min)+min);
}

int main()
{srand(time(0));

	sf::RenderWindow window(sf::VideoMode(640,480), "texural particleee");
	window.setFramerateLimit(60.f);
	sf::Event event;

    sf::Clock clock;
    sf::Time elapsed;

    // texture
    sf::Texture texture;
    texture.loadFromFile("..\\test\\test.png");

	// particle system
	TexturalParticleSystem rps(texture);
	
	while(window.isOpen())
	{
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
				case sf::Event::Closed:
					window.close();
				break;

				default:break;
			}
		}

		elapsed = clock.restart();

		// particles
		rps.particles.push_back(
			RectangularParticle(
				sf::Vector2f(320,240),
				sf::Vector2f((float)randint(-4,4)/10,(float)randint(-14,0)/10),
				sf::Color(255,255,255),
				sf::Vector2f(16,16),
				randint(1250,2750),
				false,0,(float)randint(-20,20)/10
			)
		);

		window.clear();

		rps.update(elapsed.asMilliseconds(),elapsed.asSeconds());
		rps.draw(window);

		window.display();
	}
	return 0;
}