#include "PluginProcessor.h"
#include "PluginEditor.h"

DemoDelayAudioProcessorEditor::DemoDelayAudioProcessorEditor (DemoDelayAudioProcessor& p)
    : AudioProcessorEditor (&p), processorRef (p)
{
    setSize (400, 300);
}

DemoDelayAudioProcessorEditor::~DemoDelayAudioProcessorEditor()
{
}

void DemoDelayAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));
    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Demo Delay", getLocalBounds(), juce::Justification::centred, 1);
}

void DemoDelayAudioProcessorEditor::resized()
{
    // Layout your components here
} 