#include "ChorusEffect.h"

// constructors
ChorusEffect::ChorusEffect() : Effect("Chorus") {}

ChorusEffect::ChorusEffect(const std::string& name) : Effect(name) {}

// overloading modifySound method
std::string ChorusEffect::modifySound(const std::string& sound) const {
    return sound + " + Chorus effect";
}
