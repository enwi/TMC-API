/*******************************************************************************
* Copyright © 2019 TRINAMIC Motion Control GmbH & Co. KG
* (now owned by Analog Devices Inc.),
*
* Copyright © 2023 Analog Devices Inc. All Rights Reserved. This software is
* proprietary & confidential to Analog Devices, Inc. and its licensors.
*******************************************************************************/


#ifndef TMC2209_REGISTER_H
#define TMC2209_REGISTER_H

// ===== TMC2209 & 2202 & TMC2209 & 2220 & 2225 "Donkey Kong" family register set =====

/// @brief General config
#define TMC2209_GCONF         0x00
/// @brief Global status flags
#define TMC2209_GSTAT         0x01
/// @brief Interface transmission counter
#define TMC2209_IFCNT         0x02
/// @brief Slave config
#define TMC2209_SLAVECONF     0x03
/// @brief OTP programming
#define TMC2209_OTP_PROG      0x04
/// @brief OTP read access
#define TMC2209_OTP_READ      0x05
/// @brief State of all input pins
#define TMC2209_IOIN          0x06
/// @brief Factory config
#define TMC2209_FACTORY_CONF  0x07

/// @brief Driver current control
#define TMC2209_IHOLD_IRUN    0x10
/// @brief Stand still delay time
#define TMC2209_TPOWERDOWN    0x11
/// @brief Measured step time
#define TMC2209_TSTEP         0x12
/// @brief Upper velocity threshold for StealthChop
#define TMC2209_TPWMTHRS      0x13
/// @brief Lower velocity threshold for CoolStep & StallGuard
#define TMC2209_TCOOLTHRS     0x14

/// @brief UART motor control
#define TMC2209_VACTUAL       0x22

/// @brief StallGuard detection threshold
#define TMC2209_SGTHRS        0x40
/// @brief StallGuard result
#define TMC2209_SG_RESULT     0x41
/// @brief CoolStep configuration
#define TMC2209_COOLCONF      0x42

/// @brief Microstep counter
#define TMC2209_MSCNT         0x6A
/// @brief Microstep current for phases A & B
#define TMC2209_MSCURACT      0x6B
/// @brief Chopper and driver config
#define TMC2209_CHOPCONF      0x6C
/// @brief Driver status flags and current
#define TMC2209_DRVSTATUS     0x6F
/// @brief StealthChop PWM chopper config
#define TMC2209_PWMCONF       0x70
/// @brief Results of StealthChop amplitude regulator
#define TMC2209_PWMSCALE      0x71
/// @brief Auto generated values
#define TMC2209_PWM_AUTO      0x72

#endif /* TMC2209_Register */
