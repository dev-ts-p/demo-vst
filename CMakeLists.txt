cmake_minimum_required(VERSION 3.15)
project(DemoDelay VERSION 1.0.0)

# Fetch JUCE if it's not already available
if(NOT TARGET JUCE::juce_audio_utils)
    add_subdirectory(JUCE)
endif()

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create the plugin
juce_add_plugin(DemoDelay
    VERSION "1.0.0"
    COMPANY_NAME "YourCompany"
    IS_SYNTH FALSE
    NEEDS_MIDI_INPUT FALSE
    NEEDS_MIDI_OUTPUT FALSE
    IS_MIDI_EFFECT FALSE
    EDITOR_WANTS_KEYBOARD_FOCUS FALSE
    COPY_PLUGIN_AFTER_BUILD TRUE
    VST3_CATEGORIES "Fx" "Delay"
    PLUGIN_MANUFACTURER_CODE "Demo"
    PLUGIN_CODE "Ddly"
    FORMATS VST3)

# Add source files
target_sources(DemoDelay
    PRIVATE
        Source/PluginProcessor.cpp
        Source/PluginEditor.cpp)

# Add JUCE modules
target_compile_definitions(DemoDelay
    PUBLIC
        JUCE_WEB_BROWSER=0
        JUCE_USE_CURL=0
        JUCE_VST3_CAN_REPLACE_VST2=0)

target_link_libraries(DemoDelay
    PRIVATE
        juce::juce_audio_utils
        juce::juce_audio_processors
        juce::juce_core
        juce::juce_data_structures
        juce::juce_events
        juce::juce_graphics
        juce::juce_gui_basics
        juce::juce_gui_extra
    PUBLIC
        juce::juce_recommended_config_flags
        juce::juce_recommended_lto_flags
        juce::juce_recommended_warning_flags) 