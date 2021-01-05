#include "..\include\MiniParticle.hpp"

void Particle::update(float elapsed,float deltaTime) {
	m_pos.x += m_velocity.x + m_velocity.x * deltaTime;
	m_pos.y += m_velocity.y + m_velocity.y * deltaTime;

	m_lifeTime -= elapsed;
}

const sf::Vector2f& Particle::getPosition() const
{
	return m_pos;
}

const sf::Vector2f& Particle::getVelocity() const
{
	return m_velocity;
}

int Particle::getLifeTime() const
{
	return m_lifeTime;
}

unsigned short Particle::getID() const
{
	return m_ID;
}

void Particle::setPosition(sf::Vector2f pos)
{
	m_pos = pos;
}

void Particle::setVelocity(sf::Vector2f velocity)
{
	m_velocity = velocity;
}

void Particle::setLifeTime(int lifeTime)
{
	m_lifeTime = lifeTime;
}

void Particle::setID(unsigned short ID)
{
	m_ID = ID;
}