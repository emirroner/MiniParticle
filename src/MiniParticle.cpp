#include "..\include\MiniParticle.hpp"

void MiniParticle::update(float elapsed,float deltaTime) {
	m_pos.x += m_velocity.x + m_velocity.x * deltaTime;
	m_pos.y += m_velocity.y + m_velocity.y * deltaTime;

	m_lifeTime -= elapsed;
}

const sf::Vector2f& MiniParticle::getPosition() const
{
	return m_pos;
}

const sf::Vector2f& MiniParticle::getVelocity() const
{
	return m_velocity;
}

int MiniParticle::getLifeTime() const
{
	return m_lifeTime;
}

unsigned short MiniParticle::getID() const
{
	return m_ID;
}

void MiniParticle::setPosition(sf::Vector2f pos)
{
	m_pos = pos;
}

void MiniParticle::setVelocity(sf::Vector2f velocity)
{
	m_velocity = velocity;
}

void MiniParticle::setLifeTime(int lifeTime)
{
	m_lifeTime = lifeTime;
}

void MiniParticle::setID(unsigned short ID)
{
	m_ID = ID;
}