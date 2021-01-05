#include "TexturalParticleSystem.hpp"

TexturalParticleSystem::TexturalParticleSystem(){}

TexturalParticleSystem::TexturalParticleSystem(sf::Texture& texture)
{
	m_particleDrawer.setTexture(texture);
}

void TexturalParticleSystem::draw(sf::RenderTarget& target,sf::RenderStates states)
{
	for (auto const& i  : particles)
	{
		m_particleDrawer.setScale(sf::Vector2f(i.getSize().x/m_particleDrawer.getTexture()->getSize().x,i.getSize().y/m_particleDrawer.getTexture()->getSize().y));
		m_particleDrawer.setOrigin(sf::Vector2f(i.getSize().x/2,i.getSize().y/2));
		m_particleDrawer.setPosition(i.getPosition());
		m_particleDrawer.setRotation(i.getRotation());
		m_particleDrawer.setColor(i.getColor());
		target.draw(m_particleDrawer,states);
	}
}

void TexturalParticleSystem::drawID(unsigned short ID,sf::RenderTarget& target,sf::RenderStates states)
{
	for (auto const& i  : particles)
	{
		if (i.getID() == ID)
		{
			m_particleDrawer.setPosition(i.getPosition());
			m_particleDrawer.setColor(i.getColor());
			m_particleDrawer.setScale(sf::Vector2f(i.getSize().x/m_particleDrawer.getTexture()->getSize().x,i.getSize().y/m_particleDrawer.getTexture()->getSize().y));
			m_particleDrawer.setRotation(i.getRotation());
			target.draw(m_particleDrawer,states);
		}
	}
}

void TexturalParticleSystem::setTexture(sf::Texture& texture)
{
	m_particleDrawer.setTexture(texture);
}