#include "DelayEffect.h"

// constructors
DelayEffect::DelayEffect() : Effect("Delay") {}

DelayEffect::DelayEffect(const std::string& name) : Effect(name) {}

// overloading modifySound method
std::string DelayEffect::modifySound(const std::string& sound) const {
    return sound + " + Echo delay";
}
