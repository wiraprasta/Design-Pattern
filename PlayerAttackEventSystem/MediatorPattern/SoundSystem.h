#pragma once
#include "IEventListener.h"

class SoundSystem : public IEventListener {
public:
    void onEvent(const std::string& event) override;
};
