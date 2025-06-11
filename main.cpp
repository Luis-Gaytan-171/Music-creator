#include <iostream>
#include <vector>
#include "Guitar.h"
#include "Drums.h"
#include "Bass.h"
#include "DistortionEffect.h"
#include "DelayEffect.h"
#include "ChorusEffect.h"

// function to display available effects
void showEffectsMenu() {
    std::cout << "Add effects to the instrument:\n";
    std::cout << "1. Distortion\n2. Delay\n3. Chorus\n4. No effect\n";
}

// function to select instrument
Instrument* selectInstrument() {
    int option;
    std::cout << "Select an instrument:\n";
    std::cout << "1. Guitar\n2. Drums\n3. Bass\n";
    std::cin >> option;

    Instrument* instrument = nullptr;

    // create instrument based on selection
    switch (option) {
        case 1: instrument = new Guitar(); break;
        case 2: instrument = new Drums(); break;
        case 3: instrument = new Bass(); break;
        default: std::cout << "Invalid selection.\n"; return nullptr;
    }
    return instrument;
}

int main() {
    std::vector<Instrument*> song; // List to store instruments
    std::vector<Effect*> effectsList; // List of applied effects
    int numOfInstruments;

    // ask the user how many instruments they want in their song
    std::cout << "How many instruments do you want in your song? ";
    std::cin >> numOfInstruments;

    for (int i = 0; i < numOfInstruments; ++i) {
        Instrument* instrument = selectInstrument();
        if (instrument == nullptr) return 1; // Check if the selection is valid

        song.push_back(instrument); // Store the instrument in the song

        // ask for the duration of this instrument
        int duration;
        std::cout << "Enter duration for this instrument (seconds): ";
        std::cin >> duration;
        instrument->setDuration(duration); // Set duration

        // add effects to this instrument
        int numOfEffects;
        std::cout << "How many effects would you like to add to this instrument? ";
        std::cin >> numOfEffects;

        for (int j = 0; j < numOfEffects; ++j) {
            showEffectsMenu();
            int effectChoice;
            std::cin >> effectChoice;

            Effect* effect = nullptr;
            switch (effectChoice) {
                case 1: effect = new DistortionEffect(); break;
                case 2: effect = new DelayEffect(); break;
                case 3: effect = new ChorusEffect(); break;
                case 4: break;
                default: std::cout << "Invalid effect choice.\n"; continue;
            }
            if (effect != nullptr) {
                instrument->addEffect(effect); // Add effect to instrument
                effectsList.push_back(effect);  // Store applied effects
            }
        }
    }

    // Print the song created with all applied effects
    std::cout << "\nYour song with effects:\n";
    for (auto& instrument : song) {
        std::cout << instrument->getName() << " plays for " << instrument->getDuration() << " seconds: " << instrument->playSound() << std::endl;
    }

    // Replay the song (play each instrument in order with its duration)
    std::cout << "\nReplaying your song:\n";
    for (auto& instrument : song) {
        std::cout << "Playing " << instrument->getName() << " for " << instrument->getDuration() << " seconds...\n";
        std::cout << instrument->playSound() << std::endl;
    }

    // Clean up memory
    for (auto& instrument : song) {
        delete instrument;
    }
    for (auto& effect : effectsList) {
        delete effect;
    }

    return 0;
}
