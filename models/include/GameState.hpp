#ifndef GAMESTATE_HPP
#define GAMESTATE_HPP

#include "./EngineEvent.hpp"
#include "Player.hpp"
#include "Map.hpp"

#include <SFML/System.hpp>
#include <iostream>
#include <vector>

struct GameState
{
	Player player;
	Map map;
};

#endif