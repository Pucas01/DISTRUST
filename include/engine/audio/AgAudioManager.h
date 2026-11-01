#pragma once

struct AgAudioManagerSub28
{
    unsigned char data[12];
};

class AgAudioManager
{
public:
    virtual void vfn_0(); // 0x50D460
    virtual void vfn_1(); // 0x50DFE0
    virtual void vfn_2(); // 0x50DF10
    virtual float getSampleRate();

    void fn_50D490();
    void fn_50D590();
    void fn_50D6A0();
    void fn_50D700();
    void fn_50D780();
    void fn_50D8A0();
    void fn_50DA30();
    void fn_50DAB0();
    void fn_50DB70();
    void fn_50DE70();
    AgAudioManagerSub28* getSub28();
    float getVolume0();
    float getVolume1();
    float* getListenerPosition();

protected:
    unsigned char unk_04[0x10];
    float listenerPosition[3];
    float volume0;
    float volume1;
    AgAudioManagerSub28 sub28;
};
