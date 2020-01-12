#ifndef ANIMATEDSPRITE_H
#define ANIMATEDSPRITE_H

#include "Sprite.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

using namespace std;

class AnimatedSprite : public Sprite{

public:
	
	AnimatedSprite();
	AnimatedSprite(string id);
	~AnimatedSprite();

	void addAnimation(string basepath, string animName, int numFrames, int frameRate, bool loop);
	Animation* getAnimation(string animName);

	void play(string animName);
	void replay();
	void stop();

	virtual void update(set<SDL_Scancode> pressedKeys);
	virtual void draw(AffineTransform &at);

	bool playing = false;

private:
	
};

#endif