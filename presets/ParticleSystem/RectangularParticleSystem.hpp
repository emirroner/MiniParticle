#ifndef RECTANGULAR_PARTICLE_SYSTEM_HPP
#define RECTANGULAR_PARTICLE_SYSTEM_HPP

#include <SFML\Graphics.hpp>
#include "..\..\include\MiniParticleSystem.hpp"
#include "..\Particle\RectangularParticle.hpp"

class RectangularParticleSystem : public MiniParticleSystem<RectangularParticle,sf::RectangleShape>
{
public:

	void draw(sf::RenderTarget& target,sf::RenderStates states = sf::RenderStates::Default);
	void drawID(unsigned short ID,sf::RenderTarget& target,sf::RenderStates states = sf::RenderStates::Default);
};

#endif // RECTANGULAR_PARTICLE_SYSTEM_HPP
