#include "Instrument.h"
#include <algorithm>
#include <iostream>
#include "Guitar.h"

// constructors
Instrument::Instrument() : name(""), volume(50), duration(0) {}

Instrument::Instrument(const std::string& name, int volume, int duration) : name(name), volume(volume), duration(duration) {}

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

int Instrument::getDuration() const {
    return duration;
}

void Instrument::setDuration(int duration) {
    this->duration = duration;
}

// method overloading to play sound with volume
std::string Instrument::playSound(int volume) const {
    return "Playing sound at volume " + std::to_string(volume);
}

// add, remove effects
void Instrument::addEffect(Effect* effect) {
    effects.push_back(effect);
}

void Instrument::removeEffect(Effect* effect) {
    effects.erase(std::remove(effects.begin(), effects.end(), effect), effects.end());
}

void Instrument::clearEffects() {
    effects.clear();
}

// operator overloading to combine two instruments
Instrument* Instrument::operator+(const Instrument& other) {
    int combinedVolume = this->volume + other.volume;  // combined volume
    int combinedDuration = this->duration + other.duration;  // combined duration
    Instrument* newInstrument = new Guitar("Combination of " + this->name + " and " + other.name, combinedVolume, combinedDuration); // Example with Guitar
    return newInstrument;
}

// operator [] to access effects by index
Effect* Instrument::operator[](int index) {
    if (index >= 0 && index < effects.size()) {
        return effects[index];
    } else {
        return nullptr; // if index is out of range
    }
}

// operator << to print the instrument
std::ostream& operator<<(std::ostream& os, const Instrument& instrument) {
    os << "Instrument: " << instrument.getName() << "\n";
    os << "Volume: " << instrument.getVolume() << "\n";
    os << "Duration: " << instrument.getDuration() << " seconds\n";
    return os;
}
