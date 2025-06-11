#include "Guitar.h"

// constructors
Guitar::Guitar() : Instrument("Guitar", 50, 0) {}

Guitar::Guitar(const std::string& name, int volume, int duration) : Instrument(name, volume, duration) {}

// overloading the playSound method
std::string Guitar::playSound() const {
    return "Strum guitar sound";
}

// overloading the playSound method with volume
std::string Guitar::playSound(int volume) const {
    return "Strum guitar sound at volume " + std::to_string(volume);
}
