#ifndef TEXTURAL_PARTICLE_SYSTEM_HPP
#define TEXTURAL_PARTICLE_SYSTEM_HPP

#include <SFML\Graphics.hpp>
#include "..\..\include\MiniParticleSystem.hpp"
#include "..\Particle\RectangularParticle.hpp"

class TexturalParticleSystem : public ParticleSystem<RectangularParticle,sf::Sprite>
{
public:
	TexturalParticleSystem();
	TexturalParticleSystem(sf::Texture& texture);

	void draw(sf::RenderTarget& target,sf::RenderStates states = sf::RenderStates());
	void drawID(unsigned short ID,sf::RenderTarget& target,sf::RenderStates states = sf::RenderStates());

	void setTexture(sf::Texture& texture);

};


#endif // TEXTURAL_PARTICLE_SYSTEM_HPP
