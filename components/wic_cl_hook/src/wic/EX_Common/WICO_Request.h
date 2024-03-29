#pragma once

class WICO_Request
{
public:
	enum RequestType : s32
	{
		REQ_SORRY = 0x0,
		REQ_THANKYOU = 0x1,
		REQ_ATTENTION = 0x2,
		REQ_IMGOINGHERE = 0x3,
		REQ_ADVANCEHERE = 0x4,
		REQ_DEFENDHERE = 0x5,
		REQ_CEASEFIRE = 0x6,
		REQ_NEEDARTILLERY = 0x7,
		REQ_NEEDANTIAIR = 0x8,
		REQ_NEEDGROUNDSUPPORT = 0x9,
		REQ_NEEDAIRSUPPORT = 0xA,
		REQ_NEEDREPAIRS = 0xB,
		REQ_TACAID = 0xC,
		REQ_WRITETOPOS = 0xD,
		REQ_NUMTYPES = 0xE,
	};
};