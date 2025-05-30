#include "Drums.h"

// constructors
Drums::Drums() : Instrument("Drums", 50) {}

Drums::Drums(const std::string& name, int volume) : Instrument(name, volume) {}

// override
std::string Drums::playSound() const {
    std::string sound = "Beat drums sound";

    // apply effects
    for (const auto& effect : effects) {
        sound = effect->modifySound(sound);
    }

    return sound;
}
