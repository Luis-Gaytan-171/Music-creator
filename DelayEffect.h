#ifndef DELAYEFFECT_H
#define DELAYEFFECT_H

#include "Effect.h"

class DelayEffect : public Effect {
public:
    DelayEffect(); // constructor
    DelayEffect(const std::string& name); // overloaded constructor

    // override
    std::string modifySound(const std::string& sound) const override;
};

#endif
