#include <iostream>
#include <cstdlib>
#include "Player.h"
#include "AnimatedSprite.h"
#include "Sprite.h"
#include "Controls.h"

using namespace std;


Player::Player() : AnimatedSprite("Player"){

	this->type = "Player";
	
	this->x = 55;
	this->y = 200;
	this->width = 416;
	this->height = 454;
	this->scaleX = 0.15;
	this->scaleY = 0.15;
	this->pivotX = this->width / 2;
	this->pivotY = this->height / 2;

	this->addAnimation("resources/PlayerSprites/", "Idle", 16, 4, true);
	this->addAnimation("resources/PlayerSprites/", "Run", 20, 2, true);
	this->addAnimation("resources/PlayerSprites/", "Jump", 30, 1, false);
	this->play("Idle");
}

//Called automatically by collision system when something collides with the player
//our job is to simply react to that collision.
void Player::onCollision(DisplayObject* other){
	if(other->type == "Platform"){
		Game::instance->collisionSystem.resolveCollision(this, other, this->x - oldX, this->y - oldY);	
		_yVel = 0;
		_standing=true;
	}
	else if(other->type == "Enemy"){
		if(!this->iFrames){
			this->onEnemyCollision((Enemy*)other);
		}
	}

}


void Player::update(set<SDL_Scancode> pressedKeys){
	AnimatedSprite::update(pressedKeys);
	oldY = this->y;
	oldX = this->x;

	//Movement arrow keys
	//Controls is a class we wrote that just checks the SDL Scancode values and game controller values in one check
	if(controls::holdRight()){
		this->x += 4;
		this->flipH = false;
		if(_standing){
			this->play("Run");
		}
	}
	else if(controls::holdLeft()){
		this->x -= 4;
		this->flipH = true;
		if(_standing){
			this->play("Run");
		}
	}
	
	
	//play idle animation if player is just standing still on ground
	if(_standing && !controls::holdLeft() && !controls::holdRight()){
		this->play("Idle");
	}
	

	/* handle iFrames if player was hit by enemy recently */
	if(this->iFrames){
		this->visible = this->iFrameCount%2 == 0;
		this->iFrameCount++;
		if(this->iFrameCount == this->numIFrames){
			this->iFrames = false;
			this->visible = true;
		}
	}

	/* Calculate fall velocity */
	_yAccCount++;
	if(_yAccCount == _yAcc){
		_yAccCount=0;
		_yVel++;
		if(_yVel > _maxFall) _yVel = _maxFall;
	}

	/* Jumping */
	if(_standing && controls::pressJump()){
		this->_yVel = _jumpVel;
		_standing = false;
		this->play("Jump");
	}

	/* Actual falling depending on falling versus whether a jump occurred */
	this->y += _yVel;
}

void Player::onEnemyCollision(Enemy* enemy){
	this->health -= enemy->damage;
	this->initIFrames(120);
}

void Player::initIFrames(int numFrames){
	this->iFrameCount = 0;
	this->numIFrames = numFrames;
	this->iFrames = true;
}

void Player::draw(AffineTransform &at){
	AnimatedSprite::draw(at);
}
