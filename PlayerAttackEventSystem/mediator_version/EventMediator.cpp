#include "EventMediator.h"

void EventMediator::registerListener(const std::string& event, IEventListener* listener) {
    listeners[event].push_back(listener);
}

void EventMediator::triggerEvent(const std::string& event) {
    for (auto& listener : listeners[event]) {
        listener->onEvent(event);
    }
}
