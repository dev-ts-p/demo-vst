# demo-vst

This is a demo VST plugin built with JUCE. The goal is to show how to build a VST plugin using the JUCE framework and the VST3 SDK.
All steps are documented in the README.md file.

How to get started with JUCE:

- [JUCE GitHub](https://github.com/juce-framework/JUCE)
- [JUCE Website](https://juce.com/)
- [JUCE Documentation](https://docs.juce.com/)

The goal of the project is to build a simple VST plugin with a simple UI guided by AI.

The plugin will be a simple delay effect with a delay time parameter and a feedback parameter.

The UI will be a simple VST GUI with a delay time knob and a feedback knob.

The plugin will be built and tested using the VST3 SDK and the JUCE framework.

## Build and run with CMake

```bash
cmake -Bbuild -H.
```

## Run

```bash
cmake --build build
```

## Install

```bash
cmake --install build
```

## Run the plugin

```bash
cmake --build build
```
