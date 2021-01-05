#include <SFML\Graphics.hpp>
#include "..\..\include\MiniParticleSystem.hpp"
#include "..\Particle\CircularParticle.hpp"

class CircularParticleSystem : public ParticleSystem<CircularParticle,sf::CircleShape>
{
public:
	
	virtual void draw(sf::RenderTarget& target,sf::RenderStates states = sf::RenderStates());

	virtual void drawID(unsigned short ID,sf::RenderTarget& target,sf::RenderStates states = sf::RenderStates());
};