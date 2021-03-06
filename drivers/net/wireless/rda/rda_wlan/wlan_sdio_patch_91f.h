#ifndef __WLAN_SDIO_PATCH_91_F_H__
#define __WLAN_SDIO_PATCH_91_F_H__

static const u32 wifi_core_patch_data_32_91f[][2] = {
	// add for pta
	{0x50000828,0x00100FFD},
	{0x50000810,0xFFFF0F0F},
	{0x50000814,0xFFFF0F0F},
	{0x50000818,0x00FF000F},
	{0x5000081C,0xFF000F00},
	{0x50000820,0xFF000F00},
	{0x50000824,0x0000F0F0},
	{0x50090044,0xE6AD6CB0},//mode
	{0x50090040,0xBA9D5EC4},//agc value 
#if 0
	// add for pta
	{0x0010FFFC, 0x20140304},
	{0x00110000, 0xEA03FA67},
	{0x00110004, 0xE51FF004},
	{0x00110008, 0x000116B4},
	{0x0011000C, 0xEA03C0BF},
	{0x00110010, 0xE200007F},
	{0x00110014, 0xE3500028},
	{0x00110018, 0x1A00000B},
	{0x0011001C, 0xE1A01801},
	{0x00110020, 0xE1A01821},
	{0x00110024, 0xE59F0024},
	{0x00110028, 0xE1510000},
	{0x0011002C, 0x059F1024},
	{0x00110030, 0x03A00028},
	{0x00110034, 0x059FF028},
	{0x00110038, 0xE59F0014},
	{0x0011003C, 0xE1510000},
	{0x00110040, 0x059F1014},
	{0x00110044, 0x03A00028},
	{0x00110048, 0x059FF014},
	{0x0011004C, 0xE59FF00C},
	{0x00110050, 0x00001F20},
	{0x00110054, 0x00001320},
	{0x00110058, 0x00004F20},
	{0x0011005C, 0x00004320},
	{0x00110060, 0x0001FD10},
	{0x00110064, 0x0001FD18},
	{0x00110068, 0xEA0410ED},
	{0x0011006C, 0xE5940004},
	{0x00110070, 0xE3800850},
	{0x00110074, 0xE5840004},
	{0x00110078, 0xE3A00D44},
	{0x0011007C, 0xE5840634},
	{0x00110080, 0xE59F0004},
	{0x00110084, 0xE5840584},
	{0x00110088, 0xE59FF000},
	{0x0011008C, 0x00007BF8},
	{0x00110090, 0x0000BCB4},
	{0x00110094, 0xEA040607},
	{0x00110098, 0xE59F2020},
	{0x0011009C, 0xE1D210B0},
	{0x001100A0, 0xE1A00000},
	{0x001100A4, 0xE1A00000},
	{0x001100A8, 0xE59F200C},
	{0x001100AC, 0xE3A01010},
	{0x001100B0, 0xE5C21000},
	{0x001100B4, 0xE3560000},
	{0x001100B8, 0xE59FF004},
	{0x001100BC, 0x50300038},
	{0x001100C0, 0x00106B1C},
	{0x001100C4, 0x0000E878},
	{0x001100C8, 0xEA03FE7A},
	{0x001100CC, 0xE5CD0018},
	{0x001100D0, 0xE51F0018},
	{0x001100D4, 0xE1D010B0},
	{0x001100D8, 0xE1A00000},
	{0x001100DC, 0xE1A00000},
	{0x001100E0, 0xE51F002C},
	{0x001100E4, 0xE3A01010},
	{0x001100E8, 0xE5C01000},
	{0x001100EC, 0xE59FF000},
	{0x001100F0, 0x50060000},
	{0x001100F4, 0x000106E0},
	{0x001100F8, 0xEA042EFA},
	{0x001100FC, 0xE59F0028},
	{0x00110100, 0xE5840584},
	{0x00110104, 0xE59F0024},
	{0x00110108, 0xE59F1024},
	{0x0011010C, 0xE5810000},
	{0x00110110, 0xE59F1020},
	{0x00110114, 0xE3A00003},
	{0x00110118, 0xE5810000},
	{0x0011011C, 0xE59F001C},
	{0x00110120, 0xE59F1014},
	{0x00110124, 0xE5810000},
	{0x00110128, 0xE59FF014},
	{0x0011012C, 0x0000FFFB},
	{0x00110130, 0x00000030},
	{0x00110134, 0x5000020C},
	{0x00110138, 0x50000200},
	{0x0011013C, 0x30000014},
	{0x00110140, 0x25801B0A},
	{0x00110144, 0x00004510},
	{0x00110148, 0xEA041E5A},
	{0x0011014C, 0xE59F103C},
	{0x00110150, 0x03A00000},
	{0x00110154, 0x05810000},
	{0x00110158, 0x0A000007},
	{0x0011015C, 0xE5910000},
	{0x00110160, 0xE2800001},
	{0x00110164, 0xE3500002},
	{0x00110168, 0x35810000},
	{0x0011016C, 0x3A000004},
	{0x00110170, 0xE3A00000},
	{0x00110174, 0xE5810000},
	{0x00110178, 0xEAFFFFFF},
	{0x0011017C, 0xE51FF004},
	{0x00110180, 0x000087E0},
	{0x00110184, 0xE51FF004},
	{0x00110188, 0x00008824},
	{0x0011018C, 0x00000000},
	{0x00110190, 0x0011018C},
	{0x00110194, 0xEA0437F6},
	{0x00110198, 0xE1A000A0},
	{0x0011019C, 0xE51FF004},
	{0x001101A0, 0x000021BC},
	{0x001101A4, 0xEA0437E3},
	{0x001101A8, 0xE3A00002},
	{0x001101AC, 0xE51FF004},
	{0x001101B0, 0x00002218},
	{0x001101B4, 0xEA0418DC},
	{0x001101B8, 0xE3A03000},
	{0x001101BC, 0xE5D11000},
	{0x001101C0, 0xE5802010},
	{0x001101C4, 0xE5803044},
	{0x001101C8, 0xE3510001},
	{0x001101CC, 0x13A01003},
	{0x001101D0, 0x03A01009},
	{0x001101D4, 0xE5A01014},
	{0x001101D8, 0xE5803034},
	{0x001101DC, 0xE51FF004},
	{0x001101E0, 0x00009E64},
	{0x001101E4, 0xEA042DED},
	{0x001101E8, 0xE59F1010},
	{0x001101EC, 0xE3A00007},
	{0x001101F0, 0xEB000001},
	{0x001101F4, 0xE3E00006},
	{0x001101F8, 0xE59FF008},
	{0x001101FC, 0xE59FF000},
	{0x00110200, 0x00000E2E},
	{0x00110204, 0x0001FD08},
	{0x00110208, 0x00004A30},
	{0x0011020C, 0xEA042DEC},
	{0x00110210, 0xE59F1080},
	{0x00110214, 0xE3A00007},
	{0x00110218, 0xEBFFFFF7},
	{0x0011021C, 0xE3A00007},
	{0x00110220, 0xE59F1078},
	{0x00110224, 0xEB00001A},
	{0x00110228, 0xE59F1070},
	{0x0011022C, 0xE5910000},
	{0x00110230, 0xE3100C80},
	{0x00110234, 0x1A000006},
	{0x00110238, 0xE59F1068},
	{0x0011023C, 0xE3A00000},
	{0x00110240, 0xE5810000},
	{0x00110244, 0xE51F104C},
	{0x00110248, 0xE3A00007},
	{0x0011024C, 0xEBFFFFEA},
	{0x00110250, 0xEAFFFFEE},
	{0x00110254, 0xE59F104C},
	{0x00110258, 0xE5910000},
	{0x0011025C, 0xE2800001},
	{0x00110260, 0xE5810000},
	{0x00110264, 0xE3500010},
	{0x00110268, 0xBAFFFFEB},
	{0x0011026C, 0xE59F103C},
	{0x00110270, 0xE3A00003},
	{0x00110274, 0xEBFFFFE0},
	{0x00110278, 0xE59F1034},
	{0x0011027C, 0xE3A00003},
	{0x00110280, 0xEBFFFFDD},
	{0x00110284, 0xE3A00000},
	{0x00110288, 0xE5810000},
	{0x0011028C, 0xE51F1238},
	{0x00110290, 0xE59FF020},
	{0x00110294, 0xE59FF010},
	{0x00110298, 0x0000082E},
	{0x0011029C, 0x00000000},
	{0x001102A0, 0x0011029C},
	{0x001102A4, 0x00000000},
	{0x001102A8, 0x001102A4},
	{0x001102AC, 0x00013750},
	{0x001102B0, 0x00002627},
	{0x001102B4, 0x00000627},
	{0x001102B8, 0x00004A5C},
	{0x001102BC, 0xEA042F5C},
	{0x001102C0, 0xE51F10C8},
	{0x001102C4, 0xE3A00007},
	{0x001102C8, 0xEBFFFFCB},
	{0x001102CC, 0xE3E00006},
	{0x001102D0, 0xE51FF004},
	{0x001102D4, 0x0000454C},
	{0x001102D8, 0xEA042F59},
	{0x001102DC, 0xE51F104C},
	{0x001102E0, 0xE3A00007},
	{0x001102E4, 0xEBFFFFC4},
	{0x001102E8, 0xE3A00007},
	{0x001102EC, 0xE51F1054},
	{0x001102F0, 0xEBFFFFE7},
	{0x001102F4, 0xE51F105C},
	{0x001102F8, 0xE5910000},
	{0x001102FC, 0xE3100C80},
	{0x00110300, 0x1A000006},
	{0x00110304, 0xE51F1064},
	{0x00110308, 0xE3A00000},
	{0x0011030C, 0xE5810000},
	{0x00110310, 0xE51F1118},
	{0x00110314, 0xE3A00007},
	{0x00110318, 0xEBFFFFB7},
	{0x0011031C, 0xEAFFFFEE},
	{0x00110320, 0xE51F1080},
	{0x00110324, 0xE5910000},
	{0x00110328, 0xE2800001},
	{0x0011032C, 0xE5810000},
	{0x00110330, 0xE3500010},
	{0x00110334, 0xBAFFFFEB},
	{0x00110338, 0xE51F1090},
	{0x0011033C, 0xE3A00003},
	{0x00110340, 0xEBFFFFAD},
	{0x00110344, 0xE51F1098},
	{0x00110348, 0xE3A00003},
	{0x0011034C, 0xEBFFFFAA},
	{0x00110350, 0xE3A00000},
	{0x00110354, 0xE5810000},
	{0x00110358, 0xE51F1304},
	{0x0011035C, 0xE51FF004},
	{0x00110360, 0x00004574},
	{0x20040004, 0x00011660},
	{0x20040024, 0x00110000},
	{0x20040008, 0x0001FD0C},
	{0x20040028, 0x0011000C},
	{0x2004000C, 0x0000BCB0},
	{0x2004002C, 0x00110068},
	{0x20040010, 0x0000E874},
	{0x20040030, 0x00110094},
	{0x20040014, 0x000106DC},
	{0x20040034, 0x001100C8},
	{0x20040018, 0x0000450C},
	{0x20040038, 0x001100F8},
	{0x2004001C, 0x000087DC},
	{0x2004003C, 0x00110148},
	{0x20040020, 0x000021B8},
	{0x20040040, 0x00110194},
	{0x20040100, 0x00002214},
	{0x20040120, 0x001101A4},
	{0x20040104, 0x00009E40},
	{0x20040124, 0x001101B4},
	{0x20040108, 0x00004A2C},
	{0x20040128, 0x001101E4},
	{0x2004010C, 0x00004A58},
	{0x2004012C, 0x0011020C},
	{0x20040110, 0x00004548},
	{0x20040130, 0x001102BC},
	{0x20040114, 0x00004570},
	{0x20040134, 0x001102D8},
	{0x20040000, 0x00003FFF},
#endif
};
#define SET_CHANNEL_MEM_TABLE_BASE_91F 0x0010D7B0
#define SET_CHANNEL_RF_TABLE_BASE_91F 0x0010DA50
static const u32 wifi_clock_switch_91f[][2] = {

	//channel 1
	{SET_CHANNEL_MEM_TABLE_BASE_91F, 0x50090048},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x04, 0x604199C4},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x08, 0x50000654},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x0C, 0x2222CFCF},

	//channel 2
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x30, 0x50090048},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x34, 0x604199C4},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x38, 0x50000654},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x3C, 0x2222CFCF},

	//channel 3
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x60, 0x50090048},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x64, 0x604199C4},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x68, 0x50000654},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x6C, 0x2222CFCF},

	//channel 4
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x90, 0x50090048},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x94, 0x604199C4},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x98, 0x50000654},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x9C, 0x2222CFCF},

	//channel 5
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0xC0, 0x50090048},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0xC4, 0x304199C4},//diffrent with 91e
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0xC8, 0x50000654},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0xCC, 0x2222CFCF},

	//channel 6
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0xF0, 0x50090048},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0xF4, 0x204199C4},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0xF8, 0x50000654},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0xFC, 0x2222CFCF},

	//channel 7
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x120, 0x50090048},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x124, 0x204199C4},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x128, 0x50000654},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x12C, 0x2222CFCF},

	//channel 8
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x150, 0x50090048},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x154, 0x204199C4},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x158, 0x50000654},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x15C, 0x2222CFCF},

	//channel 9
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x180, 0x50090048},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x184, 0x604199C4},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x188, 0x50000654},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x18C, 0x2222CFCF},

	//channel 10
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x1B0, 0x50090048},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x1B4, 0x604199C4},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x1B8, 0x50000654},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x1BC, 0x2222CFCF},

	//channel 11
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x1E0, 0x50090048},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x1E4, 0x604199C4},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x1E8, 0x50000654},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x1EC, 0x2222CFCF},

	//channel 12
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x210, 0x50090048},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x214, 0x604199C4},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x218, 0x50000654},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x21C, 0x2222CFCF},

	//channel 13
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x240, 0x50090048},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x244, 0x304199C4},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x248, 0x50000654},
	{SET_CHANNEL_MEM_TABLE_BASE_91F + 0x24C, 0x2222CFCF},

	//channel 1
	{SET_CHANNEL_RF_TABLE_BASE_91F, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x04, 0x00000001},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x08, 0x00000038},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x0C, 0x00000808},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x10, 0x0000003E},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x14, 0x0000AA00},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x18, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x1C, 0x00000000},

	//channel 2
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x40, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x44, 0x00000001},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x48, 0x00000038},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x4C, 0x00000808},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x50, 0x0000003E},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x54, 0x0000AA00},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x58, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x5C, 0x00000000},

	//channel 3
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x80, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x84, 0x00000001},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x88, 0x00000038},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x8C, 0x00000808},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x90, 0x0000003E},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x94, 0x0000AA00},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x98, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x9C, 0x00000000},

	//channel 4
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0xC0, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0xC4, 0x00000001},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0xC8, 0x00000038},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0xCC, 0x00000808},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0xD0, 0x0000003E},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0xD4, 0x0000AA00},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0xD8, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0xDC, 0x00000000},

	//channel 5
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x100, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x104, 0x00000001},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x108, 0x00000038},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x10C, 0x00000B08},//diff with 91e
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x110, 0x0000003E},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x114, 0x0000AA12},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x118, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x11C, 0x00000000},

	//channel 6
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x140, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x144, 0x00000001},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x148, 0x00000038},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x14C, 0x00000908},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x150, 0x0000003E},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x154, 0x0000AA00},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x158, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x15C, 0x00000000},

	//channel 7
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x180, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x184, 0x00000001},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x188, 0x00000038},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x18C, 0x00000908},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x190, 0x0000003E},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x194, 0x0000AA00},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x198, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x19C, 0x00000000},

	//channel 8
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x1C0, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x1C4, 0x00000001},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x1C8, 0x00000038},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x1CC, 0x00000908},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x1D0, 0x0000003E},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x1D4, 0x0000AA00},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x1D8, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x1DC, 0x00000000},

	//channel 9
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x200, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x204, 0x00000001},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x208, 0x00000038},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x20C, 0x00000808},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x210, 0x0000003E},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x214, 0x0000AA00},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x218, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x21C, 0x00000000},

	//channel 10
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x240, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x244, 0x00000001},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x248, 0x00000038},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x24C, 0x00000808},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x250, 0x0000003E},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x254, 0x0000AA00},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x258, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x25C, 0x00000000},

	//channel 11
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x280, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x284, 0x00000001},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x288, 0x00000038},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x28C, 0x00000808},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x290, 0x0000003E},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x294, 0x0000AA00},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x298, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x29C, 0x00000000},

	//channel 12
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x2C0, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x2C4, 0x00000001},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x2C8, 0x00000038},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x2CC, 0x00000808},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x2D0, 0x0000003E},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x2D4, 0x0000AA00},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x2D8, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x2DC, 0x00000000},

	//channel 13
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x300, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x304, 0x00000001},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x308, 0x00000038},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x30C, 0x00000B08},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x310, 0x0000003E},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x314, 0x0000AA12},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x318, 0x0000003F},
	{SET_CHANNEL_RF_TABLE_BASE_91F + 0x31C, 0x00000000},

};

static const u8 wifi_core_patch_data_91f_8[][2] = {
	{0x28, 0x1a},
	{0x29, 0x0d},
	{0x25, 0x00},
	{0x08, 0x43},
	//rx patch
	{0x26, 0x35},
	{0x3e, 0x64},
	{0x3f, 0x00},
	{0x45, 0x75},
	{0x46, 0x73},
	{0x50, 0x58},
	{0x30, 0xf6},

	{0xA0, 0x7f},
	{0x74, 0x01},
	{0x75, 0x40},

	{0x12, 0x04},
	{0x1C, 0x2D},
	{0x0D, 0x59},
	{0x17, 0x75},
	{0x74, 0xD4},
	{0x75, 0x47},

	{0x74, 0xFF},
	{0x75, 0x4B},

	{0x74, 0x3D},
	{0x75, 0x4C},

	{0x74, 0x01},
	{0x75, 0x50},

	{0x74, 0x99},
	{0x75, 0x57},

	{0x74, 0xFF},
	{0x75, 0x5B},

	{0x74, 0x33},
	{0x75, 0x5D},

	{0x74, 0xE4},
	{0x75, 0x61},

	{0x30, 0xF7},
};

static const u32 wifi_core_init_data_32_91f[][2] = {
	{0x500002a8, 0x00000001},
	{0x50000080, 0x0003FEF7},
#if 0
	{0x00100018, 0x000A3243}, // flow ctrl , WPS supported, proakis
	{0x0010001C, 0xFFFF0001},
#endif
	{0x30010010, 0x00007DFF},

	{0x50090060, 0x000001B4},
	//item:rda5991_verE_wf_tx_pn9
	{0x50090068,  0xEB3FF7FF},
	{0x50090070,  0x1403DBFF},
	{0x500900B0,  0x00400000},
	{0x500900A8,  0xE0400048},
	{0x5009008C,  0xF6700000},
	//PHY:phy rx timeout enable
#if 0
	{0x0010216c,  0x50000634},
	{0x00102170,  0x00001100},
	{0x00102174,  0x50000584},
	{0x00102178,  0x00007bf8},
#endif
};

static const u32 wifi_core_AM_PM_data_32_91f[][2] = {
	{0x50090054, 0x00000000},
	{0x50090068, 0xEB3FF7FF},
	{0x50090070, 0x1403DBFF},
	{0x500900B0, 0x00400000},
	//item0:theta0=7_B=0_r0=2_for_verE
	{0x50090090,  0x00000000},
	{0x50090094,  0x00A01401},
	{0x50090098,  0x02907412},
	{0x5009009C,  0x05D12438},
	{0x500900A0,  0x0A522872},
	{0x500900A4,  0xFFF380C1},
	//item0:G0=-3.5_r0=2.5_for_verE
	{0x50090078,  0x02B05400},
	{0x5009007C,  0x06D15840},
	{0x50090080,  0x0B927885},
	{0x50090084,  0x11A3DCD7},
	{0x50090088,  0x1975A540},
	{0x5009008C,  0xFFF7FDC9},
	{0x500900A8,  0x9C4001A0},

};
const u32 wifi_phy_timeout_cfg_91f[][2] =
{
	{0x50000634, 0x00001100},
	{0x50000584, 0x00007BF8},
};

#endif

