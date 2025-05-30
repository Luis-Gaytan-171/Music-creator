#ifndef DISTORTIONEFFECT_H
#define DISTORTIONEFFECT_H

#include "Effect.h"

class DistortionEffect : public Effect {
public:
    DistortionEffect(); // constructor
    DistortionEffect(const std::string& name); // overloaded constructor

    // override
    std::string modifySound(const std::string& sound) const override;
};

#endif
