#pragma once
#include "IEventListener.h"

class UI : public IEventListener {
public:
    void onEvent(const std::string& event) override;
};
