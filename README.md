Creating music isn’t always as easy as we might wish. Instruments can be incredibly expensive, and mastering them is an adventure in itself that requires time, dedication, and practice. But what if there were a digital solution? We live in an era where technology allows us to simulate sounds at will—so why not use it to unleash our creativity?

This project is heavily inspired by Avicii, a legendary DJ and producer who composed some of the most iconic and widely listened-to songs in history—all by himself, using digital tools. Following that inspiration, the goal of this project is to develop a music creation tool that empowers anyone, regardless of musical expertise or access to real instruments, to compose and experiment with music.

By simulating instruments such as guitars, drums, and bass, and applying sound effects through a digital pedalboard system, users can mix and create unique sounds. Whether you’re an aspiring musician or simply looking for a fun way to explore music creation, this project aims to provide an engaging and interactive experience that brings music production closer to everyone.
![image](https://github.com/user-attachments/assets/896ad5c1-dd72-4edb-b233-62ffcc066360)

Class Descriptions

Instrument (Abstract Class)
Purpose: Represents a general musical instrument.

  Attributes:

    name: The name of the instrument (e.g., Guitar, Drums, Bass).

    volume: The volume of the instrument.

    duration: The duration for which the instrument plays in the song.

    effects: A list of effects (of type Effect*) applied to the instrument.

  Methods:

    playSound(): An abstract method that is overridden in each derived instrument class (e.g., Guitar, Drums).

    playSound(int volume): A method to play sound with the given volume (overloaded).

    addEffect(Effect* effect): Adds an effect to the instrument.

    removeEffect(Effect* effect): Removes a specific effect.

    clearEffects(): Clears all effects applied to the instrument.

Guitar (Inherits from Instrument)
Purpose: Represents a Guitar instrument that plays a specific sound.

  Methods:

    playSound(): Plays the "Strum guitar sound".

    playSound(int volume): Plays the "Strum guitar sound" at a specific volume (overloaded method).

Drums (Inherits from Instrument)
Purpose: Represents a Drums instrument that plays a specific sound.

  Methods:

    playSound(): Plays the "Beat drums sound".

    playSound(int volume): Plays the "Beat drums sound" at a specific volume (overloaded method).

Bass (Inherits from Instrument)
Purpose: Represents a Bass instrument that plays a specific sound.

  Methods:

    playSound(): Plays the "Deep bass sound".

    playSound(int volume): Plays the "Deep bass sound" at a specific volume (overloaded method).

Effect (Abstract Class)
Purpose: Represents a generic sound effect that can be applied to an instrument.

  Attributes:

    effectName: The name of the effect (e.g., Distortion, Delay, Chorus).
  Methods:

    modifySound(const std::string& sound): An abstract method that modifies the sound. It is overridden in each derived effect class.

DistortionEffect (Inherits from Effect)
Purpose: Represents a Distortion effect that modifies the sound of an instrument by adding a distortion.

  Methods:

    modifySound(const std::string& sound): Adds the text " + Distorted" to the sound.

DelayEffect (Inherits from Effect)
Purpose: Represents a Delay effect (echo) that modifies the sound of an instrument.

  Methods:

    modifySound(const std::string& sound): Adds the text " + Echo delay" to the sound.

ChorusEffect (Inherits from Effect)
Purpose: Represents a Chorus effect that modifies the sound of an instrument by adding a chorus effect.

  Methods:

    modifySound(const std::string& sound): Adds the text " + Chorus effect" to the sound.

Some use example

![image](https://github.com/user-attachments/assets/41b5c4a9-cd75-479b-810e-bf9c13c6fc17)

![image](https://github.com/user-attachments/assets/d1ec66af-e5be-419f-9103-072cbc14398f)

This solution follows best object-oriented programming practices, ensuring a modular, scalable, and maintainable design. The key classes, such as Instrument and Effect, are properly identified and abstracted, allowing for easy extension with new instruments or effects. Inheritance is used effectively, with classes like Guitar, Drums, and Bass inheriting from Instrument, and specific effects inheriting from Effect. Method overriding and overloading are implemented to customize the behavior of each instrument and effect, allowing for flexible sound generation and manipulation. Polymorphism is employed through polymorphic collections and references, enabling seamless management of different instrument and effect types. The operator overloading of + to combine instruments adds intuitive functionality, while basic error handling ensures smooth user interaction. This approach provides a robust and flexible foundation for expanding the project with more features in the future.

Identification of Cases That Would Prevent the Project from Functioning Properly
There are a few potential cases that could prevent the project from functioning as intended:

  Incorrect or missing input validation: If the user inputs invalid options (such as entering non-numeric characters for volume or duration), the program may crash or behave unexpectedly. This is mitigated by basic checks, but it would need further validation to ensure a smooth user experience.

  Memory management issues: Although we’re using delete to clean up memory, forgetting to delete dynamically allocated objects could lead to memory leaks. This is especially critical when using pointers like Instrument* and Effect*. The absence of exception handling for memory allocation failures could also potentially cause the program to crash.

  Effect chaining: While multiple effects are applied to instruments, there might be situations where chaining multiple effects (e.g., applying distortion and delay) leads to unexpected sound results,     especially if the effect order matters. Proper testing is needed to ensure the effects behave as expected when combined.

  Scalability concerns: As more instruments and effects are added, the program might face challenges in performance or complexity if not carefully optimized, especially when working with large sets of data.

Test Plan
  To ensure the project functions correctly, the following tests should be performed:

Input tests:

  Test the user input for instrument selection, effect selection, and volume/duration input to ensure invalid inputs are handled gracefully.

Instrument creation:

  Test creating various combinations of instruments (Guitar, Drums, Bass) and adding different effects to them.

Sound and effects verification:

  Verify that the sound generated by each instrument is correct and that the effects are applied properly.

  Test the interaction between multiple effects applied to a single instrument.

Operator overloading:

  Test the + operator for combining two instruments to ensure their volume and duration are correctly summed, and the effects are properly combined.

Edge case handling:

  Test edge cases such as selecting zero instruments, applying no effects, or applying too many effects to a single instrument.

Memory management:

  Ensure that all dynamically allocated memory is freed after use to avoid memory leaks.

Personal Conclusion

I really enjoyed working on this project. It was a great opportunity to apply object-oriented programming concepts such as inheritance, polymorphism, and operator overloading, while also exploring how to simulate music creation with digital tools. I'm excited to continue improving this project by adding a library to handle real audio playback in the future. My goal is to turn this into a more advanced tool for music creation, with more instruments, effects, and enhanced functionality. I plan to keep working on it and make something truly amazing!



