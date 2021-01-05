#include <iostream>
#include <SFML\Graphics.hpp>
#include "..\presets\Particle\RectangularParticle.hpp"
#include "..\presets\ParticleSystem\RectangularParticleSystem.hpp"

int randint(int min,int max) {
	return (rand()%(max-min)+min);
}

int main()
{srand(time(0));

	sf::RenderWindow window(sf::VideoMode(640,480), "rectangular particlee");
	window.setFramerateLimit(60.f);
	sf::Event event;

    sf::Clock clock;
    sf::Time elapsed;

    // particle system
	RectangularParticleSystem rps;
	
	// particles
	for (unsigned i = 0;i < 100;i++)
	{
		rps.particles.push_back(
			RectangularParticle(
				sf::Vector2f(320,240),
				sf::Vector2f((float)randint(-30,30)/10,(float)randint(-25,25)/10),
				sf::Color(55,55,55),
				sf::Vector2f(15,15),
				randint(250,1000),
				false,
				0.01f,
				(float)randint(-20,20)/10
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
		rps.particles.push_back(
			RectangularParticle(
				sf::Vector2f(640,240),
				sf::Vector2f((float)randint(-45,2)/10,(float)randint(-25,10)/10),
				sf::Color(randint(15,25),randint(50,150),randint(155,255)),
				sf::Vector2f(15,15),
				randint(350,1500),
				true,
				0.025f,
				(float)randint(-20,20)/10
			)
		);

		rps.particles.push_back(
			RectangularParticle(
				sf::Vector2f(0,240),
				sf::Vector2f((float)randint(-2,45)/10,(float)randint(-25,10)/10),
				sf::Color(randint(215,255),randint(40,100),randint(15,30)),
				sf::Vector2f(15,15),
				randint(350,1500),
				true,
				0.025f,
				(float)randint(-20,20)/10
			)
		);

		window.clear();

		rps.update(elapsed.asMilliseconds(),elapsed.asSeconds());
		rps.draw(window);

		window.display();
	}
	return 0;
}