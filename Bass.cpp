#include "Bass.h"

// constructors
Bass::Bass() : Instrument("Bass", 50) {}

Bass::Bass(const std::string& name, int volume) : Instrument(name, volume) {}

// override
std::string Bass::playSound() const {
    std::string sound = "Deep bass sound";

    // apply effects
    for (const auto& effect : effects) {
        sound = effect->modifySound(sound);
    }

    return sound;
}
