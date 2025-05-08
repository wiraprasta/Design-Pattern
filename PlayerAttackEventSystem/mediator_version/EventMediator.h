#pragma once
#include <string>
#include <unordered_map>
#include <vector>
#include "IEventListener.h"

class EventMediator {
public:
    void registerListener(const std::string& event, IEventListener* listener);
    void triggerEvent(const std::string& event);
private:
    std::unordered_map<std::string, std::vector<IEventListener*>> listeners;
};
