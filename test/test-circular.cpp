#include <iostream>
#include <SFML\Graphics.hpp>
#include "..\presets\Particle\CircularParticle.hpp"
#include "..\presets\ParticleSystem\CircularParticleSystem.hpp"

int randint(int min,int max) {
	return (rand()%(max-min)+min);
}

int main()
{
	srand(time(0));

	sf::RenderWindow window(sf::VideoMode(640,480), "circular particle");
	window.setFramerateLimit(60.f);
	sf::Event event;

    sf::Clock clock;
    sf::Time elapsed;
	
	// particle system
	CircularParticleSystem cps;

	// particles
	for (unsigned i = 0;i < 100;i++)
	{
		cps.particles.push_back(
			CircularParticle(
				sf::Vector2f(320,240),
				sf::Vector2f((float)randint(-30,30)/10,(float)randint(-30,30)/10),
				sf::Color(randint(215,255),randint(40,100),randint(15,30)),
				7.5f,
				randint(250,1000),
				true,
				0
			)
		);
	}

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
		cps.particles.push_back(
			CircularParticle(
				sf::Vector2f(320,240),
				sf::Vector2f((float)randint(-10,10)/10,(float)randint(-30,2)/10),
				sf::Color(randint(215,255),randint(40,100),randint(15,30)),
				7.f,
				randint(250,1000),
				true,
				0.02
			)
		);

		window.clear();

		cps.update(elapsed.asMilliseconds(),elapsed.asSeconds());
		cps.draw(window);

		window.display();
	}
	return 0;
}