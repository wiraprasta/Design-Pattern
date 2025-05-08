#pragma once
#include "IEventListener.h"

class ScoreSystem : public IEventListener {
public:
    void onEvent(const std::string& event) override;
};
