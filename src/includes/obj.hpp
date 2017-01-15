#ifndef OBJ
#define OBJ

	#include <string>
	#include <SFML/Graphics.hpp>
	#include <SFML/Audio.hpp>

/*		Список объектов, описание и их связи:
*	- Application - в нём будет начальные конфигурации, крутится: меню, пауза, следилка за тем кто выиграл.
*	- Map - будет хранить карту, загружать её, менять, возвращать то, что на ходится по определённым координатам
*	- Block - "кирпичик" для стены
*	- Vehicle - любая техника
*	- Bullet - то, чем стреляет танк
*	- Tank (наследует Vehicle) - сам танк
*
*		Характеристики игры:
*	- В игре есть баталия техники против техники (танки вертолеты и проч.)
*/

	typedef unsigned char btype_t;
	typedef unsigned char bpos_t;

	class Block
	{
	public:
		Block(std::string, sf::RenderWindow*);
		~Block();

		void setScale(float, float);
		void setType(btype_t, bpos_t);

	private:
		sf::Sprite			sprite_;
		sf::Texture 		texture_;
		sf::RenderWindow	*window_;
	};

	class Map
	{
	public:
		Map();
		~Map();

	// private:
	};

	extern Map **mainMap;

#endif