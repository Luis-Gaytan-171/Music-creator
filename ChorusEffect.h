#ifndef CHORUSEFFECT_H
#define CHORUSEFFECT_H

#include "Effect.h"

class ChorusEffect : public Effect {
public:
    ChorusEffect(); // constructor
    ChorusEffect(const std::string& name); // overloaded constructor

    // override
    std::string modifySound(const std::string& sound) const override;
};

#endif
