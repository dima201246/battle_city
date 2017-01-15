#include "includes/obj.hpp"

Block::Block()
{

}

Block::~Block()
{

}

void Block::init(std::string l_p_texture, sf::RenderWindow *l_window)
{
	texture_.loadFromFile(l_p_texture);
	sprite_.setTexture(texture_);

	window_	= l_window;
}