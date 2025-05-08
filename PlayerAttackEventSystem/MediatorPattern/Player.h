#pragma once
class EventMediator;

class Player {
public:
    Player(EventMediator* mediator);
    void attack();
private:
    EventMediator* mediator;
};
