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

	const std::string	texture_path	= "media/image/Textures.png";
	const unsigned char	fps_limit		= 60;

	class Application
	{
	public:
		Application();
		~Application();

		void startGame();

	private:
		sf::RenderWindow	*window_;
	};

	class Block
	{
	public:
		Block();
		~Block();

		void init(std::string, sf::RenderWindow*);
		void setScale(float, float);
		void setType(btype_t, bpos_t);
		btype_t getType();

	private:
		sf::Sprite			sprite_;
		sf::Texture 		texture_;
		sf::RenderWindow	*window_;
	};

	class Map
	{
	public:
		Map(std::string);
		~Map();

		void draw();
		void setWindow(sf::RenderWindow*);

	private:
		Block				**map_;
		sf::Sprite			sprite_;
		std::string 		texturePath_;
		sf::RenderWindow	*window_;
	};

	extern Map mainMap;

#endif