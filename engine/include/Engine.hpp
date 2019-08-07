#ifndef _ENGINE_HPP
#define _ENGINE_HPP

#include "./EngineEvent.hpp"

#include <vector>

class Engine
{
public:
	// deltaTime should be expressed in seconds
	// action might need to be vector as multiple keys can be pressed
	// in a single frame
	void update(double deltaTime, EngineEvent action);
};

#endif