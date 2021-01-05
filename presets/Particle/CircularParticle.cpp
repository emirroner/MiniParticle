#include "CircularParticle.hpp"

CircularParticle::CircularParticle(){}

CircularParticle::CircularParticle(sf::Vector2f pos,sf::Vector2f velocity,sf::Color color,float radius,float lifeTime,bool resize,float gravity,unsigned short ID)
{
	m_pos           = pos;
	m_velocity      = velocity;
	m_color         = color;
	m_lifeTime      = lifeTime;
	m_startLifeTime = lifeTime;
	m_radius        = radius;
	m_startRadius   = radius;
	m_resize        = resize;
	m_gravity       = gravity;
	m_ID            = ID;
}

void CircularParticle::update(float elapsed,float deltaTime)
{
	MiniParticle::update(elapsed,deltaTime);

	if (m_resize)
		m_radius = m_startRadius*m_lifeTime/m_startLifeTime;

	m_velocity.y += m_gravity;
}


float CircularParticle::getRadius() const
{
	return m_radius;
}

sf::Color CircularParticle::getColor() const
{
	return m_color;
}

float CircularParticle::getStartLifeTime() const
{
	return m_startLifeTime;
}

float CircularParticle::getStartRadius() const
{
	return m_startRadius;
}

void CircularParticle::setRadius(float radius)
{
	m_radius = radius;
}

void CircularParticle::setColor(sf::Color color)
{
	m_color = color;
}