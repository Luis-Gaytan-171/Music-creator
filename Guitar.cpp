#include "Guitar.h"

// constructors
Guitar::Guitar() : Instrument("Guitar", 50) {}

Guitar::Guitar(const std::string& name, int volume) : Instrument(name, volume) {}

// override
std::string Guitar::playSound() const {
    std::string sound = "Strum guitar sound";

    // apply effects
    for (const auto& effect : effects) {
        sound = effect->modifySound(sound);
    }

    return sound;
}
