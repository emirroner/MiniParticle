#include "CircularParticleSystem.hpp"

void CircularParticleSystem::draw(sf::RenderTarget& target,sf::RenderStates states)
{
	for (auto const& i : particles)
	{
		m_particleDrawer.setPosition(i.getPosition());
		m_particleDrawer.setFillColor(i.getColor());
		m_particleDrawer.setRadius(i.getRadius());
		target.draw(m_particleDrawer,states);
	}
}

void CircularParticleSystem::drawID(unsigned short ID,sf::RenderTarget& target,sf::RenderStates states)
{
	for (auto const& i : particles)
	{
		if (i.getID() == ID)
		{
			m_particleDrawer.setPosition(i.getPosition());
			m_particleDrawer.setFillColor(i.getColor());
			m_particleDrawer.setRadius(i.getRadius());
			target.draw(m_particleDrawer,states);
		}
	}
}