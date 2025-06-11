#include "DistortionEffect.h"

// constructors
DistortionEffect::DistortionEffect() : Effect("Distortion") {}

DistortionEffect::DistortionEffect(const std::string& name) : Effect(name) {}

// overloading modifySound method
std::string DistortionEffect::modifySound(const std::string& sound) const {
    return sound + " + Distorted";
}
