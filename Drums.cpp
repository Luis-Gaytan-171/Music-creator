#include "Drums.h"

// constructors
Drums::Drums() : Instrument("Drums", 50, 0) {}

Drums::Drums(const std::string& name, int volume, int duration) : Instrument(name, volume, duration) {}

// overloading the playSound method
std::string Drums::playSound() const {
    return "Beat drums sound";
}

// overloading the playSound method with volume
std::string Drums::playSound(int volume) const {
    return "Beat drums sound at volume " + std::to_string(volume);
}
