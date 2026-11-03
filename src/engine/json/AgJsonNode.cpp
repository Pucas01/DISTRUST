// FLAGS: /nologo /c /O2 /Oy- /Gy /GS /Zc:wchar_t /arch:SSE2 /fp:fast /EHa
#define AG_JSON_NODE_OUT_OF_LINE_DTOR
#include "engine/json/AgJsonNode.gen.h"

AgJsonNode::AgJsonNode()
{
}

// FUNCTION: 0x51FA40 ??1AgJsonNode@@UAE@XZ
AgJsonNode::~AgJsonNode()
{
}

// FUNCTION: 0x51FBA0 ??_GAgJsonNode@@UAEPAXI@Z
