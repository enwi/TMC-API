/*
 * TMC2209.h
 *
 *  Created on: 18.01.2019
 *      Author: LK
 */

#ifndef TMC_IC_TMC2209_H_
#define TMC_IC_TMC2209_H_

#include "tmc/helpers/Constants.h"
#include "tmc/helpers/API_Header.h"
#include "TMC2209_Register.h"
#include "TMC2209_Constants.h"

// Usage note: use 1 TypeDef per IC
typedef struct {
	ConfigurationTypeDef *config;
	int velocity;
	int oldX;
	uint32_t oldTick;
	int32_t registerResetState[TMC2209_REGISTER_COUNT];
	uint8_t registerAccess[TMC2209_REGISTER_COUNT];
	uint8_t slave;
} TMC2209TypeDef;

typedef void (*tmc2209_callback)(TMC2209TypeDef*, ConfigState);

// Default Register values
#define R00 0x00000041  // GCONF
//#define R10 0x00001F00  // IHOLD_IRUN
#define R10 0x00071703  // IHOLD_IRUN
#define R11 0x00000014  // TPOWERDOWN
#define R6C 0x10000053  // CHOPCONF
#define R70 0xC10D0024  // PWMCONF

// Register access permissions:
//   0x00: none (reserved)
//   0x01: read
//   0x02: write
//   0x03: read/write
//   0x13: read/write, seperate functions/values for reading or writing
//   0x21: read, flag register (read to clear)
//   0x42: write, has hardware presets on reset
static const uint8_t tmc2209_defaultRegisterAccess[TMC2209_REGISTER_COUNT] =
{
//  0     1     2     3     4     5     6     7     8     9     A     B     C     D     E     F
	0x03, 0x23, 0x01, 0x02, 0x02, 0x01, 0x01, 0x03, ____, ____, ____, ____, ____, ____, ____, ____, // 0x00 - 0x0F
	0x02, 0x02, 0x01, 0x02, 0x02, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, // 0x10 - 0x1F
	____, ____, 0x02, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, // 0x20 - 0x2F
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, // 0x30 - 0x3F
	0x02, 0x01, 0x02, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, // 0x40 - 0x4F
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, // 0x50 - 0x5F
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, 0x01, 0x01, 0x03, ____, ____, 0x01, // 0x60 - 0x6F
	0x03, 0x01, 0x01, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____  // 0x70 - 0x7F
};

static const int32_t tmc2209_defaultRegisterResetState[TMC2209_REGISTER_COUNT] =
{
//	0    1    2    3    4    5    6    7    8    9    A    B    C    D    E    F
	R00, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, // 0x00 - 0x0F
	R10, R11, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, // 0x10 - 0x1F
	0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, // 0x20 - 0x2F
	0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, // 0x30 - 0x3F
	0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, // 0x40 - 0x4F
	0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0, // 0x50 - 0x5F
	0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   R6C, 0,   0,   0, // 0x60 - 0x6F
	R70, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0  // 0x70 - 0x7F
};

#undef R00
#undef R10
#undef R11
#undef R6C
#undef R70

void tmc2209_init(TMC2209TypeDef *tmc2209, uint8_t channel, ConfigurationTypeDef *tmc2209_config, const int32_t *registerResetState);
uint8_t tmc2209_reset(TMC2209TypeDef *tmc2209);
uint8_t tmc2209_restore(TMC2209TypeDef *tmc2209);
void tmc2209_setRegisterResetState(TMC2209TypeDef *tmc2209, const int32_t *resetState);
void tmc2209_setCallback(TMC2209TypeDef *tmc2209, tmc2209_callback callback);
void tmc2209_periodicJob(TMC2209TypeDef *tmc2209, uint32_t tick);

uint8_t tmc2209_get_slave(TMC2209TypeDef *tcm2209);
void tmc2209_set_slave(TMC2209TypeDef *tmc2209, uint8_t slave);

#endif /* TMC_IC_TMC2209_H_ */