// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#include "engine/audio/AudioStreamJob.gen.h"

// FUNCTION: 0x53C400 ??_GAudioStreamJob@@UAEPAXI@Z

// STUB: 0x53F5D0 AudioStreamJob::vfn_1 (225 bytes)
void AudioStreamJob::vfn_1()
{
}

AudioStreamJob* createAudioStreamJob()
{
    return new AudioStreamJob;
}
