//dPS5000 Header File - created with ref. to TN1494 Rev. F
//Author: Oli Talbot (113010958)
//Created: 09.01.2017

//ID
//#define DPS_ID                    2
int DPS_ID = 2;

//BLOCK 0
#define STATUS                    0x00
#define PRESSURE                  0x01  
#define TEMP                      0x02
#define PRESSURE_ADC_COUNT        0x03
#define TEMP_ADC_COUNT            0x04
#define ACCESS_WORD               0x05
#define PRESSURE_ADC_MV           0x06
#define TEMP_ADC_MV               0x07

//BLOCK 1
#define CHECKSUM                  0x40 //64
#define BEEN_HERE                 0x41 //65
#define I2C_ADDRESS               0x42 //66
#define CURVE_FIT_ORDER           0x43 //67
#define PRESSURE_GAIN             0x44 //68
#define PRESSURE_OFFSET           0x45 //69
#define PRESSURE_MAX              0x46 //70
#define PRESSURE_MIN              0x47 //71
#define LAST_CAL_DATE             0x48 //72
#define PRESSURE_MAX_ADC          0x49 //73
#define PRESSURE_MIN_ADC          0x4A //74
#define TEMP_MAX_ADC              0x4B //75
#define TEMP_MIN_ADC              0x4C //76
#define SERIAL_NO                 0x4D //77
#define TYPE                      0x4E //78
#define VERSION                   0x4F //79
#define PN_SUBTYPE_R              0x50 //80
#define PN_SUBTYPE_W              0x51 //81
#define PRESSURE_TEMP_READING     0x52 //82
#define UNIT_CONV                 0x53 //83
#define UNIT_INDEX                0x54 //84
#define CONT_MODE_DELAY           0x55 //85
#define E_DRAW_NO                 0x56 //86
#define TARE_VAL                  0x57 //87
#define CAL_AREA_CSUM             0x58 //88

//BLOCK 2
