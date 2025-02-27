#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

class DemoDelayAudioProcessorEditor : public juce::AudioProcessorEditor
{
public:
    explicit DemoDelayAudioProcessorEditor (DemoDelayAudioProcessor&);
    ~DemoDelayAudioProcessorEditor() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    DemoDelayAudioProcessor& processorRef;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DemoDelayAudioProcessorEditor)
}; 