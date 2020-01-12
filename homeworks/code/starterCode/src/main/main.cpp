#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <DisplayObject.h>
#include <iostream>
#include "MyGame.h"

using namespace std;

int main(int argc, char ** argv)
{
	MyGame* myGame = new MyGame();
	myGame->start();

	delete myGame;
	return 0;
}