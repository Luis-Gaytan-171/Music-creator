#ifndef EFFECT_H
#define EFFECT_H

#include <string>

class Effect {
protected:
    std::string effectName;

public:
    Effect(); // default constructor
    Effect(const std::string& name); // overloaded constructor

    // get n set
    std::string getEffectName() const;
    void setEffectName(const std::string& name);

    // virtual method
    virtual std::string modifySound(const std::string& sound) const = 0; // abstract
};

#endif
