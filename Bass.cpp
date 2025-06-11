#include "Bass.h"

// constructors
Bass::Bass() : Instrument("Bass", 50, 0) {}

Bass::Bass(const std::string& name, int volume, int duration) : Instrument(name, volume, duration) {}

// overloading the playSound method
std::string Bass::playSound() const {
    return "Deep bass sound";
}

// overloading the playSound method with volume
std::string Bass::playSound(int volume) const {
    return "Deep bass sound at volume " + std::to_string(volume);
}
