// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO:  在此处引用程序需要的其他头文件

typedef struct SysListInfoSt
{
	int offset;
	int SysNameID;
	int offset2;
	int PromtInfoID;
	char unknow1;
	char unknow2;
	char field_12;
	char field_13;
	int EcuFileNameID;
	char judgeFlag;
	char unknow5;
	char unknow6;
	char unknow7;
	char unknow8;
	char field_1D;
	char field_1E;
	char field_1F;
	int EndFID;
	char unknow3;
	char unknow4;
	int field_26;
	char field_2A;
	char field_2B;
	int CANRegisterNameID;
	int field_30;
	int field_34;
	int EcuDataArrNum;
	int ArrEcuindexAddr;
	int ArrEcuInfoAddr[32];
	char field_C0[53476];
};



typedef struct ExceptEcu
{
	void *Ecu00;
	int field_4;
	int field_8;
	int field_C;
	void *Ecu10;
	void *Ecu05;
	int field_18;
	int field_1C;
	int field_20;
	int field_24;
	int field_28;
	int field_2C;
	int field_30;
	int field_34;
	void *Ecu0E;
	char* field_3C;
	int field_40;
	void *Ecu11;
	void *Ecu12;
	int field_4C;
	int field_50;
	int field_54;
	int field_58;
	int field_5C;
	int field_60;
	int field_64;
	int field_68;
	int field_6C;
	int field_70;
	int field_74;
	int field_78;
	int field_7C;
	int field_80;
	int field_84;
	int field_88;
	int field_8C;
	int field_90;
	int field_94;
	int field_98;
	int field_9C;
	int field_A0;
	int field_A4;
	int field_A8;
	int field_AC;
	void *Ecu2C;
	int field_B4;
	int field_B8;
	int field_BC;
	char *Ec30;
	int field_C4;
	int field_C8;
	int field_CC;
	int field_D0;
	int field_D4;
	int field_D8;
	int field_DC;
	int field_E0;
	char *Ecu39;
	char *Ecu3A;
	int field_EC;
	int field_F0;
	int field_F4;
	int field_F8;
	int field_FC;
	int field_100[192];
}ExceptEcuSt, *pExceptEcuSt;





typedef struct TOKEN
{
	char AreaCode;
	char Connector;
	__int16 field_2;
	int field_4;
	int FuncConfig;
	char SysFunCfgInfo;
	char g_iCanFlag;
	__int16 field_E;
	char field_10;
	char field_11;
	char SeriesName[14];
	void *ExceptEcuBuf;
	char field_24;
	char field_25[47];
	void *Ecu0D;
	int field_58;
	int field_5C;
	char *Ecu60;
	__int16 field_64;
	char field_66[954];
	char field_420[1024];
	int FinalSelID;
	int FinalSysInfoOffset;
	__int16 SysListNum;
	__int16 field_82A;
	int SysListCanUseNum;
	SysListInfoSt *SysInfoAddr;
	void *pInfoAddr;
	char field_838[120];
	int ReadOffset;
	char InitCommMode;
	unsigned __int8 KwpCmdModeVal;
	char field_8B6;
	char Flag;
	char field_8B8;
	char field_8B9;
	__int16 gap8BA;
	int field_8BC;
	int field_8C0;
	int field_8C4;
	int field_8C8;
	int field_8CC;
	int field_8D0;
	__int16 TototaOEBinDataAboutCanBPS;
	__int16 field_8D6;
	int fBps;
	int ToolID;
	char field_8E0;
	char fByteToByte;
	__int16 wPacketToPacket;
	int unknowToolID;
	int tToolID;
	char field_8EC;
	char EcuIDArrIndex;
	__int16 field_8EE;
	int EcuIDArr[4];
	char gap900[4];
	char field_904;
	char field_905;
	char PinBuf[10];
	int field_910;
	int field_914;
	__int16 field_918;
	char field_91A[1022];
	__int16 field_D18;
	__int16 CmdDataInfoCount;
	int field_D1C;
	char field_D20;
	char CmdLen;
	unsigned __int8 SysEnterCmd[2566];
	char field_1728;
	char field_1729[4776];
	char field_29D1;
	char field_29D2;
	char field_29D3[55989];
	char field_10488[2450];
	unsigned __int16 xxCount;
	char field_10E1C[4];
	char field_10E20[33085200];
	char field_1F9E530;
	char field_1F9E531;
	char field_1F9E532;
	char field_1F9E533;
	int Addr;
	__int16 OffsetValData;
	char field_1F9E53A[276562];
	int SelectItemPathAddr;
	int Num200;
	int DiagWay;
	char field_1FE1D98;
	char gap1FE1D99;
	char field_1FE1D9A;
	char field_1FE1D9B;
	char field_1FE1D9C[321];
	char field_1FE1EDD;
	char field_1FE1EDE[426];
	char field_1FE2088;
	char field_1FE2089;
	char field_1FE208A;
	char field_1FE208B;
	char field_1FE208C;
	char field_1FE208D;
	char field_1FE208E;
	char field_1FE208F;
	char gap1FE2090[33569048];
	char field_3FE59A8;
}tt_Token, *ptt_Token;
