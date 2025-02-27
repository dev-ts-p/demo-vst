# demo-vst

This is a demo VST plugin built with JUCE. The goal is to show how to build a VST plugin using the JUCE framework and the VST3 SDK.

## Project Goals

- Create a delay effect VST plugin
- Implement basic delay parameters (delay time and feedback)
- Build a simple GUI with parameter controls
- Learn JUCE framework basics

## Prerequisites

1. Install the following:

   - CMake (3.15 or higher)
   - A C++ compiler (Visual Studio, Xcode, or GCC)
   - JUCE framework
   - Your preferred IDE

2. Set up JUCE:
   - Clone JUCE: `git clone https://github.com/juce-framework/JUCE.git`
   - Or download from [JUCE Website](https://juce.com/)

## Development Roadmap

1. Initial Setup

   - Create a basic JUCE Audio Plugin project
   - Set up the CMake build system
   - Verify the empty plugin loads in a DAW

2. Audio Processing

   - Implement basic audio pass-through
   - Add delay buffer
   - Implement delay time parameter
   - Add feedback parameter

3. GUI Development
   - Create basic plugin window
   - Add parameter knobs
   - Style the interface

## Project Structure

```
demo-vst/
├── CMakeLists.txt
├── Source/
│   ├── PluginProcessor.cpp
│   ├── PluginProcessor.h
│   ├── PluginEditor.cpp
│   └── PluginEditor.h
└── README.md
```

## Build Instructions

1. Generate build files:

```bash
cmake -Bbuild -H.
```

2. Build the project:

```bash
cmake --build build
```

3. Install the plugin:

```bash
cmake --install build
```

## Resources

- [JUCE GitHub](https://github.com/juce-framework/JUCE)
- [JUCE Website](https://juce.com/)
- [JUCE Documentation](https://docs.juce.com/)
- [JUCE Audio Plugin Tutorial](https://docs.juce.com/master/tutorial_create_projucer_basic_plugin.html)

## Next Steps

1. Create the basic CMakeLists.txt file
2. Set up the initial plugin source files
3. Implement basic audio pass-through
