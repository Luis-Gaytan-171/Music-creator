#include "Effect.h"

// constructors
Effect::Effect() : effectName("") {}

Effect::Effect(const std::string& name) : effectName(name) {}

// get n set
std::string Effect::getEffectName() const {
    return effectName;
}

void Effect::setEffectName(const std::string& name) {
    this->effectName = name;
}
