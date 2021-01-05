#ifndef CIRCULAR_PARTICLE_HPP
#define CIRCULAR_PARTICLE_HPP

#include <SFML\Graphics.hpp>
#include "..\..\include\MiniParticle.hpp"

class CircularParticle : public MiniParticle
{
public:
	CircularParticle();

	CircularParticle(sf::Vector2f pos,sf::Vector2f velocity,sf::Color color,float radius,float lifeTime,bool resize,float gravity,unsigned short ID = 0);

	void update(float elapsed,float deltaTime);

	float getRadius() const;
	sf::Color getColor() const;
	float getStartRadius() const;
	float getStartLifeTime() const;

	void setRadius(float radius);
	void setColor(sf::Color color);

private:
	float m_radius, m_startRadius;
	float m_startLifeTime;
	bool m_resize;
	float m_gravity;
	sf::Color m_color;

};



#endif // CIRCULAR_PARTICLE_HPP
