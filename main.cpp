#include <iostream>
#include "Guitar.h"
#include "Drums.h"
#include "Bass.h"
#include "DistortionEffect.h"
#include "DelayEffect.h"
#include "ChorusEffect.h"

int main() {
    Guitar guitar;
    Drums drums;
    Bass bass;

    DistortionEffect distortion;
    DelayEffect delay;
    ChorusEffect chorus;

    guitar.addEffect(&distortion);
    guitar.addEffect(&delay);

    drums.addEffect(&chorus);

    bass.addEffect(&distortion);
    bass.addEffect(&chorus);

    std::cout << guitar.getName() << " plays: " << guitar.playSound() << std::endl;
    std::cout << drums.getName() << " plays: " << drums.playSound() << std::endl;
    std::cout << bass.getName() << " plays: " << bass.playSound() << std::endl;

    return 0;
}
