#include "Instrument.h"
#include <algorithm>

// constructors
Instrument::Instrument() : name(""), volume(50) {}

Instrument::Instrument(const std::string& name, int volume) : name(name), volume(volume) {}

// get n set
std::string Instrument::getName() const {
    return name;
}

void Instrument::setName(const std::string& name) {
    this->name = name;
}

int Instrument::getVolume() const {
    return volume;
}

void Instrument::setVolume(int volume) {
    this->volume = volume;
}

// effect management
void Instrument::addEffect(Effect* effect) {
    effects.push_back(effect);
}

void Instrument::removeEffect(Effect* effect) {
    effects.erase(std::remove(effects.begin(), effects.end(), effect), effects.end());
}

void Instrument::clearEffects() {
    effects.clear();
}
