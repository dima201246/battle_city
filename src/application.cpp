#include "includes/obj.hpp"

Application::Application()
{
	window_	= new sf::RenderWindow(sf::VideoMode(800, 600), "Battle city");

	window_->setFramerateLimit(fps_limit);	// Ограничение частоты кадра
	mainMap.setWindow(window_);
}

Application::~Application()
{
	delete window_;
}

void Application::startGame()
{
	while (window_->isOpen())
	{
		window_->display();
	}
}