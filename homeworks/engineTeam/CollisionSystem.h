#ifndef COLLISIONSYSTEM_H
#define COLLISIONSYSTEM_H

#include "DisplayObject.h"
#include "DisplayObjectContainer.h"
#include "Sprite.h"
#include "EventListener.h"
#include "Event.h"

using namespace std;

class CollisionSystem : public EventListener{

public:

	CollisionSystem();
	~CollisionSystem();

	//checks collisions between pairs of DOs where the corresponding types have been requested
	//to be checked (via a single call to watchForCollisions) below.
	void update();

	//This system watches the game's display tree and is notified whenever a display object is placed onto
	//or taken off of the tree. Thus, the collision system always knows what DOs are in the game at any moment automatically.
	void handleEvent(Event* e);

	//This function asks the collision system to start checking for collisions between all pairs
	//of DOs of a given type (e.g., player vs platform). The system will begin to check all player objects
	//against all platform objects that are in the current scene.
	void watchForCollisions(string type1, string type2);

	//returns true iff obj1 hitbox and obj2 hitbox overlap. Uses the following method from DO:
	//	SDL_Point* DisplayObject::getGlobalHitbox();
	bool collidesWith(DisplayObject* obj1, DisplayObject* obj2);

	//Resolves the collision that occurred between d and other
	//xDelta1 and yDelta1 are the amount d moved before causing the collision.
	//xDelta2 and yDelta2 are the amount other moved before causing the collision.
	void resolveCollision(DisplayObject* d, DisplayObject* other, int xDelta1, int yDelta1, int xDelta2, int yDelta2);
	
private:

	
};

#endif
