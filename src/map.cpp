#include <new>
#include "includes/obj.hpp"

Map::Map(std::string l_p_texture)
{
	texturePath_	=l_p_texture;
}

Map::~Map()
{

}

void Map::setWindow(sf::RenderWindow *l_window)
{
	window_			= l_window;
}

void Map::draw()
{

}