#include "PluginProcessor.h"
#include "PluginEditor.h"

DemoDelayAudioProcessor::DemoDelayAudioProcessor()
     : AudioProcessor (BusesProperties()
                      .withInput  ("Input",  juce::AudioChannelSet::stereo(), true)
                      .withOutput ("Output", juce::AudioChannelSet::stereo(), true))
{
}

DemoDelayAudioProcessor::~DemoDelayAudioProcessor()
{
}

const juce::String DemoDelayAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

bool DemoDelayAudioProcessor::acceptsMidi() const
{
    return false;
}

bool DemoDelayAudioProcessor::producesMidi() const
{
    return false;
}

bool DemoDelayAudioProcessor::isMidiEffect() const
{
    return false;
}

double DemoDelayAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int DemoDelayAudioProcessor::getNumPrograms()
{
    return 1;
}

int DemoDelayAudioProcessor::getCurrentProgram()
{
    return 0;
}

void DemoDelayAudioProcessor::setCurrentProgram (int index)
{
}

const juce::String DemoDelayAudioProcessor::getProgramName (int index)
{
    return {};
}

void DemoDelayAudioProcessor::changeProgramName (int index, const juce::String& newName)
{
}

void DemoDelayAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    // Initialize any processing here
}

void DemoDelayAudioProcessor::releaseResources()
{
    // Free any resources when playback stops
}

void DemoDelayAudioProcessor::processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{
    // For now, just pass through the audio
    for (auto i = getTotalNumInputChannels(); i < getTotalNumOutputChannels(); ++i)
        buffer.clear (i, 0, buffer.getNumSamples());
}

bool DemoDelayAudioProcessor::hasEditor() const
{
    return true;
}

juce::AudioProcessorEditor* DemoDelayAudioProcessor::createEditor()
{
    return new juce::GenericAudioProcessorEditor (*this);
}

void DemoDelayAudioProcessor::getStateInformation (juce::MemoryBlock& destData)
{
    // Save plugin state here
}

void DemoDelayAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // Restore plugin state here
}

juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new DemoDelayAudioProcessor();
} 