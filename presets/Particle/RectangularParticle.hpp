#ifndef RECTANGULAR_PARTICLE_HPP
#define RECTANGULAR_PARTICLE_HPP

#include <SFML\Graphics.hpp>
#include "..\..\include\MiniParticle.hpp"

class RectangularParticle : public MiniParticle
{
public:
	RectangularParticle();

	RectangularParticle(sf::Vector2f pos,sf::Vector2f velocity,sf::Color color,sf::Vector2f size,float lifeTime,bool resize,float gravity,float rotationSpeed,unsigned short ID = 0);

	void update(float elapsed,float deltaTime);

	const sf::Vector2f& getSize() const;
	sf::Color getColor() const;
	const sf::Vector2f& getStartSize() const;
	float getRotation() const;
	float getStartLifeTime() const;

	void setSize(sf::Vector2f size);
	void setColor(sf::Color color);

private:
	sf::Vector2f m_size, m_startSize;
	float m_rotationSpeed, m_rotation;
	float m_startLifeTime;
	bool m_resize;
	float m_gravity;
	sf::Color m_color;
};

#endif // RECTANGULAR_PARTICLE_HPP
