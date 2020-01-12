#ifndef EVENT_H
#define EVENT_H

#include <string>

#include "EventDispatcher.h"

using namespace std;

class EventDispatcher;

class Event{

public:

	Event(string type, EventDispatcher* source);

	string getType();
	EventDispatcher* getSource();

private:
	string eventType = "";
	EventDispatcher* source;
	
};

#endif