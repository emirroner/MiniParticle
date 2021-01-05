#include "RectangularParticle.hpp"

RectangularParticle::RectangularParticle()
{}

RectangularParticle::RectangularParticle(sf::Vector2f pos,sf::Vector2f velocity,sf::Color color,sf::Vector2f size,float lifeTime,bool resize,float gravity,float rotationSpeed,unsigned short ID)
{
	m_pos           = pos;
	m_velocity      = velocity;
	m_lifeTime      = lifeTime;
	m_color         = color;
	m_startLifeTime = lifeTime;
	m_size          = size;
	m_startSize     = size;
	m_resize        = resize;
	m_gravity       = gravity;
	m_rotationSpeed = rotationSpeed;
	m_ID          = ID;
}

void RectangularParticle::update(float elapsed,float deltaTime)
{
	MiniParticle::update(elapsed,deltaTime);

	if (m_resize)
		m_size = sf::Vector2f(
			m_lifeTime*m_startSize.x/m_startLifeTime,
			m_lifeTime*m_startSize.y/m_startLifeTime
		);

	m_velocity.y += m_gravity;

	m_rotation += m_rotationSpeed;
}

const sf::Vector2f& RectangularParticle::getSize() const
{
	return m_size;
}

sf::Color RectangularParticle::getColor() const
{
	return m_color;
}

float RectangularParticle::getStartLifeTime() const
{
	return m_startLifeTime;
}

const sf::Vector2f& RectangularParticle::getStartSize() const
{
	return m_startSize;
}

float RectangularParticle::getRotation() const
{
	return m_rotation;
}

void RectangularParticle::setSize(sf::Vector2f size)
{
	m_size = size;
}

void RectangularParticle::setColor(sf::Color color)
{
	m_color = color;
}