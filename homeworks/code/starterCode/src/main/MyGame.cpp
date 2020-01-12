#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "DisplayObject.h"
#include "MyGame.h"

using namespace std;

MyGame::MyGame() : Game(1200, 1000){
	character = new DisplayObject("character","./resources/character/Idle_1.png");
}

MyGame::~MyGame(){
	delete character;
}


void MyGame::update(set<SDL_Scancode> pressedKeys){

	Game::update(pressedKeys);
}

void MyGame::draw(AffineTransform &at){
	Game::draw(at);

	SDL_RenderClear(Game::renderer);
	character->draw(at);
	SDL_RenderPresent(Game::renderer);
}