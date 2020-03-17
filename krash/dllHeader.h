#pragma once
#include <Windows.h>
#pragma pack(push,1)
typedef struct
{
	BYTE jumpCode[3];
	BYTE sysName[8];
	WORD bytesOnSector;
	BYTE sectorOnCluster;
	WORD reservedSectors;
	BYTE Nm[3];
	WORD Nm2;
	BYTE mediaDescriptor;
	WORD Nm3;
	WORD sectorPerTrack;
	WORD numberOfHeaders;
	DWORD hiddenSectors;
	DWORD Nm4;
	DWORD Nm5;
	ULONGLONG sectorsInTheVolume;
	ULONGLONG lcnOfMFT;
	ULONGLONG lcnOfSMFTMirr;
	DWORD clusterPerMftRecord;
	BYTE clusterPerIndexRecord;
	BYTE  Nm6[3];
	ULONGLONG volumeID;
	DWORD  Nm7;
	BYTE  Nm8[426];
	WORD markerEnd;
} NTFSBoot;
#pragma pack(pop)
