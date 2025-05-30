#ifndef BASS_H
#define BASS_H

#include "Instrument.h"

class Bass : public Instrument {
public:
    Bass(); // constructor
    Bass(const std::string& name, int volume); // overloaded constructor

    // override
    std::string playSound() const override;
};

#endif
