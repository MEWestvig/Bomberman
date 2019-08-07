#ifndef _Bomberman_hpp_
#define _Bomberman_hpp_

#include "./AMainLoop.hpp"

#include <Engine.hpp>
#include <EngineEvent.hpp>
#include <Renderer.hpp>
#include <SFML/Graphics.hpp>

#include <vector>
#include <ctime>

static const uint WINDOW_WIDTH = 640;
static const uint WINDOW_HEIGHT = 400;
static const char *WINDOW_TITLE = "Bomberman";

class Bomberman : private AMainLoop
{

private:
	sf::RenderWindow window;
	Engine engine;
	Renderer renderer;

	virtual void updateFunc();

public:
	Bomberman();
	~Bomberman();

	void startGame();
};

#endif