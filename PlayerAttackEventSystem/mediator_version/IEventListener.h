#pragma once
#include <string>

class IEventListener {
public:
    virtual void onEvent(const std::string& event) = 0;
    virtual ~IEventListener() = default;
};
