#ifndef EVENTDISPATCHER_H
#define EVENTDISPATCHER_H

#include <unordered_map>
#include <vector>
#include <string>

#include "Event.h"
#include "EventListener.h"

using namespace std;

class EventListener;
class Event;

class EventDispatcher{

public:

	EventDispatcher();
	virtual ~EventDispatcher();
	
	void addEventListener(EventListener* l, string eventType);
	void removeEventListener(EventListener* l, string eventType);
	bool hasEventListener(EventListener* l, string eventType);
	void dispatchEvent(Event *e);

private:
	
	/* List of listeners */
    std::unordered_map<std::string, std::vector<EventListener*>*> *listeners;


};

#endif