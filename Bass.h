#ifndef BASS_H
#define BASS_H

#include "Instrument.h"

class Bass : public Instrument {
public:
    Bass(); // constructor
    Bass(const std::string& name, int volume, int duration); // overloaded constructor

    // overloading the playSound method
    std::string playSound() const override;
    std::string playSound(int volume) const override; // method overloading
};

#endif
