#include "DelayEffect.h"

// constructors
DelayEffect::DelayEffect() : Effect("Delay") {}

DelayEffect::DelayEffect(const std::string& name) : Effect(name) {}

// override
std::string DelayEffect::modifySound(const std::string& sound) const {
    return sound + " + Echo delay";
}
