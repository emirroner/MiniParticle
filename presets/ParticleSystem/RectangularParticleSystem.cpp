#include "RectangularParticleSystem.hpp"

void RectangularParticleSystem::draw(sf::RenderTarget& target,sf::RenderStates states)
{
	for (auto const& i : particles)
	{
		m_particleDrawer.setSize(i.getSize());
		m_particleDrawer.setOrigin(sf::Vector2f(i.getSize().x/2,i.getSize().y/2));

		m_particleDrawer.setPosition(i.getPosition());
		m_particleDrawer.setFillColor(i.getColor());
		m_particleDrawer.setRotation(i.getRotation());
		target.draw(m_particleDrawer,states);
	}
}

void RectangularParticleSystem::drawID(unsigned short ID,sf::RenderTarget& target,sf::RenderStates states)
{
	for (auto const& i : particles)
	{
		m_particleDrawer.setPosition(i.getPosition());
		m_particleDrawer.setSize(i.getSize());
		m_particleDrawer.setFillColor(i.getColor());
		m_particleDrawer.setRotation(i.getRotation());
		target.draw(m_particleDrawer,states);
	}
}