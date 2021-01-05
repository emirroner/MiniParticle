#ifndef PARTICLE_HPP
#define PARTICLE_HPP

#include <SFML\Graphics.hpp>

class MiniParticle
{
public:
	virtual void update(float elapsed,float deltaTime);

	// getter setter
	const sf::Vector2f& getPosition() const;
	const sf::Vector2f& getVelocity() const;
	int getLifeTime() const;
	unsigned short getID() const;

	virtual void setPosition(sf::Vector2f pos);
	virtual void setVelocity(sf::Vector2f velocity);
	virtual void setLifeTime(int lifeTime);
	virtual void setID(unsigned short ID);

protected:
	sf::Vector2f m_pos;
	sf::Vector2f m_velocity;
	// life time is millis
	int m_lifeTime;

	// particle id
	unsigned short m_ID;
};

#endif // PARTICLE_HPP