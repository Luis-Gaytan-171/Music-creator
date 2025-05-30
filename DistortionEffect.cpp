#include "DistortionEffect.h"

// constructors
DistortionEffect::DistortionEffect() : Effect("Distortion") {}

DistortionEffect::DistortionEffect(const std::string& name) : Effect(name) {}

// override
std::string DistortionEffect::modifySound(const std::string& sound) const {
    return sound + " + Distorted";
}
