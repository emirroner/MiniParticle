#ifndef PARTICLE_SYSTEM_HPP
#define PARTICLE_SYSTEM_HPP

#include <SFML\Graphics.hpp>

// example : ParticleSystem<MyParticleClass,sf::RectangleShape>
template <class T,class S>
class MiniParticleSystem
{
public:
	std::vector<T> particles;

	// update function
	virtual void update(float elapsed,float deltaTime)
	{
		for (auto i = particles.begin();i != particles.end();)
		{
			if (i->getLifeTime() <= 0.f)
			{
				i = particles.erase(i);
			} else {
				i->update(elapsed,deltaTime);
				++i;
			}
		}
	}

	// update function with ID filtering
	virtual void updateID(unsigned short ID,float elapsed,float deltaTime)
	{
		for (auto i = particles.begin();i != particles.end();)
		{
			if (i->getLifeTime() <= 0.f)
			{
				i = particles.erase(i);
			} else {
				if (i->getID() == ID)
					i->update(elapsed,deltaTime);
				++i;
			}
		}
	}
	// draws all particles
	virtual void draw(sf::RenderTarget& target,sf::RenderStates states = sf::RenderStates())
	{
		for (auto const& i : particles)
		{
			m_particleDrawer.setPosition(i.getPosition());
			target.draw(m_particleDrawer,states);
		}
	}

	// draws particles according to the ID
	virtual void drawID(unsigned short ID,sf::RenderTarget& target,sf::RenderStates states = sf::RenderStates())
	{
		for (auto const& i : particles)
		{
			if (i.getID() == ID)
			{
				m_particleDrawer.setPosition(i.getPosition());
				target.draw(m_particleDrawer,states);
			}
		}
	}

	// returns particles equal to the given id
	virtual std::vector<T> getParticlesByID(unsigned short ID)
	{
		std::vector<T> result;

		for (auto const& i : particles)
		{
			if (i.getID() == ID)
			{
				result.push_back(i);
			}
		}

		return result;
	}

protected:
	S m_particleDrawer;
};


#endif // PARTICLE_SYSTEM_HPP
