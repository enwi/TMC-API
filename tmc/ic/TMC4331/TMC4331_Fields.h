/*******************************************************************************
* Copyright © 2019 TRINAMIC Motion Control GmbH & Co. KG
* (now owned by Analog Devices Inc.),
*
* Copyright © 2023 Analog Devices Inc. All Rights Reserved. This software is
* proprietary & confidential to Analog Devices, Inc. and its licensors.
*******************************************************************************/


#ifndef TMC4331_FIELDS_H
#define TMC4331_FIELDS_H

#define TMC4331_USE_ASTART_AND_VSTART_MASK              0x01 // GENERAL_CONF // Sets AACTUAL = ASTART or -ASTART at ramp start and in the case of VSTART ? 0
#define TMC4331_USE_ASTART_AND_VSTART_SHIFT             0 // min.: 0, max.: 1, default: 0
#define TMC4331_DIRECT_ACC_VAL_EN_MASK                  0x02 // GENERAL_CONF // Acceleration values are set directly as steps per clock cycle.
#define TMC4331_DIRECT_ACC_VAL_EN_SHIFT                 1 // min.: 0, max.: 1, default: 0
#define TMC4331_DIRECT_BOW_VAL_EN_MASK                  0x04 // GENERAL_CONF // Bow values are set directly as steps per clock cycle
#define TMC4331_DIRECT_BOW_VAL_EN_SHIFT                 2 // min.: 0, max.: 1, default: 0
#define TMC4331_STEP_INACTIVE_POL_MASK                  0x08 // GENERAL_CONF // Inactive STPOUT polarity
#define TMC4331_STEP_INACTIVE_POL_SHIFT                 3 // min.: 0, max.: 1, default: 0
#define TMC4331_TOGGLE_STEP_MASK                        0x10 // GENERAL_CONF // Every level change of STPOUT indicates a step
#define TMC4331_TOGGLE_STEP_SHIFT                       4 // min.: 0, max.: 1, default: 0
#define TMC4331_POL_DIR_OUT_MASK                        0x20 // GENERAL_CONF // DIROUT negative direction polarity
#define TMC4331_POL_DIR_OUT_SHIFT                       5 // min.: 0, max.: 1, default: 0
#define TMC4331_SDIN_MODE_MASK                          0xC0 // GENERAL_CONF // External step control configuration
#define TMC4331_SDIN_MODE_SHIFT                         6 // min.: 0, max.: 3, default: 0
#define TMC4331_POL_DIR_IN_MASK                         0x0100 // GENERAL_CONF // DIRIN negative direction polarity
#define TMC4331_POL_DIR_IN_SHIFT                        8 // min.: 0, max.: 1, default: 0
#define TMC4331_SD_INDIRECT_CONTROL_MASK                0x0200 // GENERAL_CONF // STPIN/DIRIN input signals will manipulate XTARGET register value, the internal ramp generator is used
#define TMC4331_SD_INDIRECT_CONTROL_SHIFT               9 // min.: 0, max.: 1, default: 0
#define TMC4331_STDBY_CLK_PIN_ASSIGNMENT_MASK           0x6000 // GENERAL_CONF // STDBY_CLK pin assignment
#define TMC4331_STDBY_CLK_PIN_ASSIGNMENT_SHIFT          13 // min.: 0, max.: 3, default: 0
#define TMC4331_INTR_POL_MASK                           0x8000 // GENERAL_CONF // Active INTR pin polarity
#define TMC4331_INTR_POL_SHIFT                          15 // min.: 0, max.: 1, default: 0
#define TMC4331_INVERT_POL_TARGET_REACHED_MASK          0x010000 // GENERAL_CONF // Inactive TARGET_REACHED pin polarity
#define TMC4331_INVERT_POL_TARGET_REACHED_SHIFT         16 // min.: 0, max.: 1, default: 0
#define TMC4331_FS_EN_MASK                              0x080000 // GENERAL_CONF // SPI output forwards fullsteps, if ?VACTUAL? > FS_VEL
#define TMC4331_FS_EN_SHIFT                             19 // min.: 0, max.: 1, default: 0
#define TMC4331_FS_SDOUT_MASK                           0x100000 // GENERAL_CONF // Fullsteps are forwarded via Step/Dir output also if fullstep operation is active
#define TMC4331_FS_SDOUT_SHIFT                          20 // min.: 0, max.: 1, default: 0
#define TMC4331_DCSTEP_MODE_MASK                        0x600000 // GENERAL_CONF // dcStep mode
#define TMC4331_DCSTEP_MODE_SHIFT                       21 // min.: 0, max.: 3, default: 0
#define TMC4331_PWM_OUT_EN_MASK                         0x800000 // GENERAL_CONF // Enabling Volatage controlled PWM
#define TMC4331_PWM_OUT_EN_SHIFT                        23 // min.: 0, max.: 1, default: 0
#define TMC4331_AUTOMATIC_DIRECT_SDIN_SWITCH_OFF_MASK   0x04000000 // GENERAL_CONF // VACTUAL = VSTART and AACTUAL = ASTART after switching off direct external step control
#define TMC4331_AUTOMATIC_DIRECT_SDIN_SWITCH_OFF_SHIFT  26 // min.: 0, max.: 1, default: 0
#define TMC4331_CIRCULAR_CNT_AS_XLATCH_MASK             0x08000000 // GENERAL_CONF // The register value of REV_CNT (#internal revolutions) is forwarded at register 0x36
#define TMC4331_CIRCULAR_CNT_AS_XLATCH_SHIFT            27 // min.: 0, max.: 1, default: 0
#define TMC4331_REVERSE_MOTOR_DIR_MASK                  0x10000000 // GENERAL_CONF // Reverse internal MSLUT direction
#define TMC4331_REVERSE_MOTOR_DIR_SHIFT                 28 // min.: 0, max.: 1, default: 0
#define TMC4331_INTR_TR_PU_PD_EN_MASK                   0x20000000 // GENERAL_CONF // INTR and TARGET_REACHED are used as outputs with gated pull-up and / or pull-down functionality
#define TMC4331_INTR_TR_PU_PD_EN_SHIFT                  29 // min.: 0, max.: 1, default: 0
#define TMC4331_INTR_AS_WIRED_AND_MASK                  0x40000000 // GENERAL_CONF // INTR output function is used as Wired-And
#define TMC4331_INTR_AS_WIRED_AND_SHIFT                 30 // min.: 0, max.: 1, default: 0
#define TMC4331_TR_AS_WIRED_AND_MASK                    0x80000000 // GENERAL_CONF // TARGET_REACHED output function is used as Wired-And
#define TMC4331_TR_AS_WIRED_AND_SHIFT                   31 // min.: 0, max.: 1, default: 0
#define TMC4331_STOP_LEFT_EN_MASK                       0x01 // REFERENCE_CONF // Enabling STOPL reference pin
#define TMC4331_STOP_LEFT_EN_SHIFT                      0 // min.: 0, max.: 1, default: 0
#define TMC4331_STOP_RIGHT_EN_MASK                      0x02 // REFERENCE_CONF // Enabling STOPR reference pin
#define TMC4331_STOP_RIGHT_EN_SHIFT                     1 // min.: 0, max.: 1, default: 0
#define TMC4331_POL_STOP_LEFT_MASK                      0x04 // REFERENCE_CONF // Active STOPL polarity
#define TMC4331_POL_STOP_LEFT_SHIFT                     2 // min.: 0, max.: 1, default: 0
#define TMC4331_POL_STOP_RIGHT_MASK                     0x08 // REFERENCE_CONF // Active STOPR polarity
#define TMC4331_POL_STOP_RIGHT_SHIFT                    3 // min.: 0, max.: 1, default: 0
#define TMC4331_INVERT_STOP_DIRECTION_MASK              0x10 // REFERENCE_CONF // Inverts STOPL/STOPR
#define TMC4331_INVERT_STOP_DIRECTION_SHIFT             4 // min.: 0, max.: 1, default: 0
#define TMC4331_SOFT_STOP_EN_MASK                       0x20 // REFERENCE_CONF // Enabling soft stop
#define TMC4331_SOFT_STOP_EN_SHIFT                      5 // min.: 0, max.: 1, default: 0
#define TMC4331_VIRTUAL_LEFT_LIMIT_EN_MASK              0x40 // REFERENCE_CONF // Enabling position limit VIRT_STOP_LEFT
#define TMC4331_VIRTUAL_LEFT_LIMIT_EN_SHIFT             6 // min.: 0, max.: 1, default: 0
#define TMC4331_VIRTUAL_RIGHT_LIMIT_EN_MASK             0x80 // REFERENCE_CONF // Enabling position limit VIRT_STOP_RIGHT
#define TMC4331_VIRTUAL_RIGHT_LIMIT_EN_SHIFT            7 // min.: 0, max.: 1, default: 0
#define TMC4331_VIRT_STOP_MODE_MASK                     0x0300 // REFERENCE_CONF // Virtual StopMode
#define TMC4331_VIRT_STOP_MODE_SHIFT                    8 // min.: 1, max.: 2, default: 0
#define TMC4331_LATCH_X_ON_INACTIVE_L_MASK              0x0400 // REFERENCE_CONF // X_LATCH = XACTUAL is stored in the case STOPL becomes inactive
#define TMC4331_LATCH_X_ON_INACTIVE_L_SHIFT             10 // min.: 0, max.: 1, default: 0
#define TMC4331_LATCH_X_ON_ACTIVE_L_MASK                0x0800 // REFERENCE_CONF // X_LATCH = XACTUAL is stored in the case STOPL becomes active
#define TMC4331_LATCH_X_ON_ACTIVE_L_SHIFT               11 // min.: 0, max.: 1, default: 0
#define TMC4331_LATCH_X_ON_INACTIVE_R_MASK              0x1000 // REFERENCE_CONF // X_LATCH = XACTUAL is stored in the case STOPR becomes inactive
#define TMC4331_LATCH_X_ON_INACTIVE_R_SHIFT             12 // min.: 0, max.: 1, default: 0
#define TMC4331_LATCH_X_ON_ACTIVE_R_MASK                0x2000 // REFERENCE_CONF // X_LATCH = XACTUAL is stored in the case STOPR becomes active
#define TMC4331_LATCH_X_ON_ACTIVE_R_SHIFT               13 // min.: 0, max.: 1, default: 0
#define TMC4331_STOP_LEFT_IS_HOME_MASK                  0x4000 // REFERENCE_CONF // STOPL input signal is also the HOME position
#define TMC4331_STOP_LEFT_IS_HOME_SHIFT                 14 // min.: 0, max.: 1, default: 0
//#define TMC4331_STOP_LEFT_IS_HOME_MASK                0x8000 // REFERENCE_CONF // STOPR input signal is also the HOME position
//#define TMC4331_STOP_LEFT_IS_HOME_SHIFT               15 // min.: 0, max.: 1, default: 0
#define TMC4331_HOME_EVENT_MASK                         0x0F0000 // REFERENCE_CONF // Home event
#define TMC4331_HOME_EVENT_SHIFT                        16 // min.: 2, max.: 13, default: 0
#define TMC4331_START_HOME_TRACKING_MASK                0x100000 // REFERENCE_CONF // Storage of XACTUAL as X_HOME at next regular home event. This switch is reset after an executed homing. An XLATCH_DONE event will be also released then
#define TMC4331_START_HOME_TRACKING_SHIFT               20 // min.: 0, max.: 1, default: 0
#define TMC4331_CLR_POS_AT_TARGET_MASK                  0x200000 // REFERENCE_CONF // Set XACTUAL = 0 after XTARGET has been reached. The next ramp starts immediately
#define TMC4331_CLR_POS_AT_TARGET_SHIFT                 21 // min.: 0, max.: 1, default: 0
#define TMC4331_CIRCULAR_MOVEMENT_EN_MASK               0x400000 // REFERENCE_CONF // Range of XACTUAL is limited by X_RANGE: -X_RANGE = XACTUAL = X_RANGE - 1
#define TMC4331_CIRCULAR_MOVEMENT_EN_SHIFT              22 // min.: 0, max.: 1, default: 0
#define TMC4331_POS_COMP_OUTPUT_MASK                    0x01800000 // REFERENCE_CONF // TR pin output assignment
#define TMC4331_POS_COMP_OUTPUT_SHIFT                   23 // min.: 0, max.: 3, default: 0
#define TMC4331_STOP_ON_STALL_MASK                      0x04000000 // REFERENCE_CONF // SPI and S/D output interface stops motion in case of an stall event (hard stop)
#define TMC4331_STOP_ON_STALL_SHIFT                     26 // min.: 0, max.: 1, default: 0
#define TMC4331_DRV_AFTER_STALL_MASK                    0x08000000 // REFERENCE_CONF // Enabling free motion after stop_on_stall event
#define TMC4331_DRV_AFTER_STALL_SHIFT                   27 // min.: 0, max.: 1, default: 0
#define TMC4331_MODIFIED_POS_COPARE_MASK                0x30000000 // REFERENCE_CONF // POS_COMP_REACHED based on XACTUAL vs.:
#define TMC4331_MODIFIED_POS_COPARE_SHIFT               28 // min.: 0, max.: 3, default: 0
#define TMC4331_AUTOMATIC_COVER_MASK                    0x40000000 // REFERENCE_CONF // SPI output interface sends automatically cover datagrams when VACTUAL crosses SPI_SWITCH_VEL
#define TMC4331_AUTOMATIC_COVER_SHIFT                   30 // min.: 0, max.: 1, default: 0
#define TMC4331_CIRCULAR_ENC_EN_MASK                    0x80000000 // REFERENCE_CONF // Range of ENC_POS is limited by X_RANGE: -X_RANGE = XACTUAL = X_RANGE - 1
#define TMC4331_CIRCULAR_ENC_EN_SHIFT                   31 // min.: 0, max.: 1, default: 0
#define TMC4331_START_EN0_MASK                          0x01 // START_CONF // Alteration of XTARGET value requires distinct start signal
#define TMC4331_START_EN0_SHIFT                         0 // min.: 0, max.: 1, default: 0
#define TMC4331_START_EN1_MASK                          0x02 // START_CONF // Alteration of VMAX value requires distinct start signal
#define TMC4331_START_EN1_SHIFT                         1 // min.: 0, max.: 1, default: 0
#define TMC4331_START_EN2_MASK                          0x04 // START_CONF // Alteration of RAMPMODE value requires distinct start signal
#define TMC4331_START_EN2_SHIFT                         2 // min.: 0, max.: 1, default: 0
#define TMC4331_START_EN3_MASK                          0x08 // START_CONF // Alteration of GEAR_RATIO value requires distinct start signal
#define TMC4331_START_EN3_SHIFT                         3 // min.: 0, max.: 1, default: 0
#define TMC4331_START_EN4_MASK                          0x10 // START_CONF // Activation of shadow register feature set
#define TMC4331_START_EN4_SHIFT                         4 // min.: 0, max.: 1, default: 0
#define TMC4331_TRIGGER_EVENTS0_MASK                    0x20 // START_CONF // External start signal is enabled as timer trigger. START pin is assigned as input
#define TMC4331_TRIGGER_EVENTS0_SHIFT                   5 // min.: 0, max.: 1, default: 0
#define TMC4331_TRIGGER_EVENTS1_MASK                    0x40 // START_CONF // TARGET_REACHED event is assigned as start signal trigger
#define TMC4331_TRIGGER_EVENTS1_SHIFT                   6 // min.: 0, max.: 1, default: 0
#define TMC4331_TRIGGER_EVENTS2_MASK                    0x80 // START_CONF // VELOCITY_REACHED event is assigned as start signal trigger
#define TMC4331_TRIGGER_EVENTS2_SHIFT                   7 // min.: 0, max.: 1, default: 0
#define TMC4331_TRIGGER_EVENTS3_MASK                    0x0100 // START_CONF // POSCOMP_REACHED event is assigned as start signal trigger
#define TMC4331_TRIGGER_EVENTS3_SHIFT                   8 // min.: 0, max.: 1, default: 0
#define TMC4331_POL_START_SIGNAL_MASK                   0x0200 // START_CONF // Active START pin polarity
#define TMC4331_POL_START_SIGNAL_SHIFT                  9 // min.: 0, max.: 1, default: 0
#define TMC4331_IMMEDIATE_START_IN_MASK                 0x0400 // START_CONF // Immediate external START signal processing
#define TMC4331_IMMEDIATE_START_IN_SHIFT                10 // min.: 0, max.: 1, default: 0
#define TMC4331_BUSY_STATE_EN_MASK                      0x0800 // START_CONF // Busy state enable switch
#define TMC4331_BUSY_STATE_EN_SHIFT                     11 // min.: 0, max.: 1, default: 0
#define TMC4331_PIPELINE_EN0_MASK                       0x1000 // START_CONF // XTARGET is considered for pipelining
#define TMC4331_PIPELINE_EN0_SHIFT                      12 // min.: 0, max.: 1, default: 0
#define TMC4331_PIPELINE_EN1_MASK                       0x2000 // START_CONF // POS_COMP is considered for pipelining
#define TMC4331_PIPELINE_EN1_SHIFT                      13 // min.: 0, max.: 1, default: 0
#define TMC4331_PIPELINE_EN2_MASK                       0x4000 // START_CONF // GEAR_RATIO is considered for pipelining
#define TMC4331_PIPELINE_EN2_SHIFT                      14 // min.: 0, max.: 1, default: 0
#define TMC4331_PIPELINE_EN3_MASK                       0x8000 // START_CONF // GENERAL_CONF is considered for pipelining
#define TMC4331_PIPELINE_EN3_SHIFT                      15 // min.: 0, max.: 1, default: 0
#define TMC4331_SHADOW_OPTION_MASK                      0x030000 // START_CONF // Shadow registers options
#define TMC4331_SHADOW_OPTION_SHIFT                     16 // min.: 0, max.: 3, default: 0
#define TMC4331_CYCLIC_SHADOW_REGS_MASK                 0x040000 // START_CONF // Cyclic shadow register switch
#define TMC4331_CYCLIC_SHADOW_REGS_SHIFT                18 // min.: 0, max.: 1, default: 0
#define TMC4331_SHADOW_MISS_CNT_MASK                    0xF00000 // START_CONF // Number of unused internal start signals between two consecutive shadow register transfers
#define TMC4331_SHADOW_MISS_CNT_SHIFT                   20 // min.: 0, max.: 15, default: 0
#define TMC4331_XPIPE_REWRITE_REG0_MASK                 0x01000000 // START_CONF // X_PIPE0 is selected for rewriting
#define TMC4331_XPIPE_REWRITE_REG0_SHIFT                24 // min.: 0, max.: 1, default: 0
#define TMC4331_XPIPE_REWRITE_REG1_MASK                 0x02000000 // START_CONF // X_PIPE1 is selected for rewriting
#define TMC4331_XPIPE_REWRITE_REG1_SHIFT                25 // min.: 0, max.: 1, default: 0
#define TMC4331_XPIPE_REWRITE_REG2_MASK                 0x04000000 // START_CONF // X_PIPE2 is selected for rewriting
#define TMC4331_XPIPE_REWRITE_REG2_SHIFT                26 // min.: 0, max.: 1, default: 0
#define TMC4331_XPIPE_REWRITE_REG3_MASK                 0x08000000 // START_CONF // X_PIPE3 is selected for rewriting
#define TMC4331_XPIPE_REWRITE_REG3_SHIFT                27 // min.: 0, max.: 1, default: 0
#define TMC4331_XPIPE_REWRITE_REG4_MASK                 0x10000000 // START_CONF // X_PIPE4 is selected for rewriting
#define TMC4331_XPIPE_REWRITE_REG4_SHIFT                28 // min.: 0, max.: 1, default: 0
#define TMC4331_XPIPE_REWRITE_REG5_MASK                 0x20000000 // START_CONF // X_PIPE5 is selected for rewriting
#define TMC4331_XPIPE_REWRITE_REG5_SHIFT                29 // min.: 0, max.: 1, default: 0
#define TMC4331_XPIPE_REWRITE_REG6_MASK                 0x40000000 // START_CONF // X_PIPE6 is selected for rewriting
#define TMC4331_XPIPE_REWRITE_REG6_SHIFT                30 // min.: 0, max.: 1, default: 0
#define TMC4331_XPIPE_REWRITE_REG7_MASK                 0x80000000 // START_CONF // X_PIPE7 is selected for rewriting
#define TMC4331_XPIPE_REWRITE_REG7_SHIFT                31 // min.: 0, max.: 1, default: 0
#define TMC4331_SR_SD_IN_MASK                           0x07 // INPUT_FILT_CONF // SR of S/D input group: STPIN, DIRIN
#define TMC4331_SR_SD_IN_SHIFT                          0 // min.: 0, max.: 7, default: 0
#define TMC4331_FILT_L_SD_IN_MASK                       0x70 // INPUT_FILT_CONF // FILT_L of S/D input group
#define TMC4331_FILT_L_SD_IN_SHIFT                      4 // min.: 0, max.: 7, default: 0
#define TMC4331_SR_REF_MASK                             0x0700 // INPUT_FILT_CONF // SR of reference input group: STOPL, HOME_REF, STOPL
#define TMC4331_SR_REF_SHIFT                            8 // min.: 0, max.: 7, default: 0
#define TMC4331_FILT_L_REF_MASK                         0x7000 // INPUT_FILT_CONF // FILT_L of reference input group
#define TMC4331_FILT_L_REF_SHIFT                        12 // min.: 0, max.: 7, default: 0
#define TMC4331_SR_S_MASK                               0x070000 // INPUT_FILT_CONF // SR of START input pin
#define TMC4331_SR_S_SHIFT                              16 // min.: 0, max.: 7, default: 0
#define TMC4331_FILT_L_S_MASK                           0x700000 // INPUT_FILT_CONF // FILT_L of START input pin
#define TMC4331_FILT_L_S_SHIFT                          20 // min.: 0, max.: 7, default: 0
#define TMC4331_SPI_OUTPUT_FORMAT_MASK                  0x0F // SPI_OUT_CONF // Selection of connected driver/DAC
#define TMC4331_SPI_OUTPUT_FORMAT_SHIFT                 0 // min.: 0, max.: 15, default: 0
#define TMC4331_MIXED_DECAY_MASK                        0x30 // SPI_OUT_CONF // Mixed decay setting
#define TMC4331_MIXED_DECAY_SHIFT                       4 // min.: 0, max.: 3, default: 0
#define TMC4331_AUTO_DOUBLE_CHOPSYNC_MASK               0x1000 // SPI_OUT_CONF // Enabling double chopSync frequency during Stillstand
#define TMC4331_AUTO_DOUBLE_CHOPSYNC_SHIFT              12 // min.: 0, max.: 1, default: 0
#define TMC4331_MIXED_DECAY_MASK                        0x30 // SPI_OUT_CONF // Mixed decay setting
#define TMC4331_MIXED_DECAY_SHIFT                       4 // min.: 0, max.: 3, default: 0
#define TMC4331_STDBY_ON_STALL_FOR_24X_MASK             0x40 // SPI_OUT_CONF // Transfer of standby datagram in case of a stop_on_stall event
#define TMC4331_STDBY_ON_STALL_FOR_24X_SHIFT            6 // min.: 0, max.: 1, default: 0
#define TMC4331_STALL_FLAG_INSTEAD_OF_UV_EN_MASK        0x80 // SPI_OUT_CONF // STATUS(24) forwards calculated stall status instead of UV flag
#define TMC4331_STALL_FLAG_INSTEAD_OF_UV_EN_SHIFT       7 // min.: 0, max.: 1, default: 0
#define TMC4331_STALL_LOAD_LIMIT_MASK                   0x0700 // SPI_OUT_CONF // Stall is detected in case STALL_LOAD_LIMIT > (LD2andLD1andLD0)
#define TMC4331_STALL_LOAD_LIMIT_SHIFT                  8 // min.: 0, max.: 7, default: 0
#define TMC4331_PWM_PHASE_SHFT_EN_MASK                  0x0800 // SPI_OUT_CONF // Enabling phase shift during PWM mode
#define TMC4331_PWM_PHASE_SHFT_EN_SHIFT                 11 // min.: 0, max.: 1, default: 0
#define TMC4331_AUTO_DOUBLE_CHOPSYNC_MASK               0x1000 // SPI_OUT_CONF // Enabling double chopSync frequency during Stillstand
#define TMC4331_AUTO_DOUBLE_CHOPSYNC_SHIFT              12 // min.: 0, max.: 1, default: 0
#define TMC4331_THREE_PHASE_STEPPER_EN_MASK             0x10 // SPI_OUT_CONF // TMC389 connected
#define TMC4331_THREE_PHASE_STEPPER_EN_SHIFT            4 // min.: 0, max.: 1, default: 0
#define TMC4331_AUTOREPEAT_COVER_EN_MASK                0x80 // SPI_OUT_CONF // Continous streaming of once transferred cover datagrams
#define TMC4331_AUTOREPEAT_COVER_EN_SHIFT               7 // min.: 0, max.: 1, default: 0
#define TMC4331_COVER_DONE_ONLY_FOR_COVER_MASK          0x1000 // SPI_OUT_CONF // COVER_DONE only set in case cover datagram is sent
#define TMC4331_COVER_DONE_ONLY_FOR_COVER_SHIFT         12 // min.: 0, max.: 1, default: 0
#define TMC4331_SCALE_VALE_TRANSFER_EN_MASK             0x20 // SPI_OUT_CONF // Transfer of scaling values in scaling values alter
#define TMC4331_SCALE_VALE_TRANSFER_EN_SHIFT            5 // min.: 0, max.: 1, default: 0
#define TMC4331_DISABLE_POLLING_MASK                    0x40 // SPI_OUT_CONF // No transfer of polling datagrams
#define TMC4331_DISABLE_POLLING_SHIFT                   6 // min.: 0, max.: 1, default: 0
#define TMC4331_AUTOREPEAT_COVER_EN_MASK                0x80 // SPI_OUT_CONF // Continous streaming of once transferred cover datagrams
#define TMC4331_AUTOREPEAT_COVER_EN_SHIFT               7 // min.: 0, max.: 1, default: 0
#define TMC4331_POLL_BLOCK_EXP_MASK                     0xF000 // SPI_OUT_CONF // Exponent for idle state time between two polling datagrams
#define TMC4331_POLL_BLOCK_EXP_SHIFT                    8 // min.: 0, max.: 15, default: 0
#define TMC4331_COVER_DONE_ONLY_FOR_COVER_MASK          0x1000 // SPI_OUT_CONF // COVER_DONE only set in case cover datagram is sent
#define TMC4331_COVER_DONE_ONLY_FOR_COVER_SHIFT         12 // min.: 0, max.: 1, default: 0
#define TMC4331_SCALE_VALE_TRANSFER_EN_MASK             0x20 // SPI_OUT_CONF // Transfer of scaling values in scaling values alter
#define TMC4331_SCALE_VALE_TRANSFER_EN_SHIFT            5 // min.: 0, max.: 1, default: 0
#define TMC4331_DISABLE_POLLING_MASK                    0x40 // SPI_OUT_CONF // No transfer of polling datagrams
#define TMC4331_DISABLE_POLLING_SHIFT                   6 // min.: 0, max.: 1, default: 0
#define TMC4331_AUTOREPEAT_COVER_EN_MASK                0x80 // SPI_OUT_CONF // Continous streaming of once transferred cover datagrams
#define TMC4331_AUTOREPEAT_COVER_EN_SHIFT               7 // min.: 0, max.: 1, default: 0
#define TMC4331_POLL_BLOCK_EXP_MASK                     0xF000 // SPI_OUT_CONF // Exponent for idle state time between two polling datagrams
#define TMC4331_POLL_BLOCK_EXP_SHIFT                    8 // min.: 0, max.: 15, default: 0
#define TMC4331_COVER_DONE_ONLY_FOR_COVER_MASK          0x1000 // SPI_OUT_CONF // COVER_DONE only set in case cover datagram is sent
#define TMC4331_COVER_DONE_ONLY_FOR_COVER_SHIFT         12 // min.: 0, max.: 1, default: 0
#define TMC4331_DISABLE_POLLING_MASK                    0x40 // SPI_OUT_CONF // No transfer of polling datagrams
#define TMC4331_DISABLE_POLLING_SHIFT                   6 // min.: 0, max.: 1, default: 0
#define TMC4331_AUTOREPEAT_COVER_EN_MASK                0x80 // SPI_OUT_CONF // Continous streaming of once transferred cover datagrams
#define TMC4331_AUTOREPEAT_COVER_EN_SHIFT               7 // min.: 0, max.: 1, default: 0
#define TMC4331_POLL_BLOCK_EXP_MASK                     0xF000 // SPI_OUT_CONF // Exponent for idle state time between two polling datagrams
#define TMC4331_POLL_BLOCK_EXP_SHIFT                    8 // min.: 0, max.: 15, default: 0
#define TMC4331_COVER_DONE_ONLY_FOR_COVER_MASK          0x1000 // SPI_OUT_CONF // COVER_DONE only set in case cover datagram is sent
#define TMC4331_COVER_DONE_ONLY_FOR_COVER_SHIFT         12 // min.: 0, max.: 1, default: 0
#define TMC4331_SCK_LOW_BEFORE_CSN_MASK                 0x10 // SPI_OUT_CONF // Serial Clk is tied low before CS
#define TMC4331_SCK_LOW_BEFORE_CSN_SHIFT                4 // min.: 0, max.: 1, default: 0
#define TMC4331_NEW_OUT_BIT_AT_RISE_MASK                0x20 // SPI_OUT_CONF // New serial output data is assigned at rising edge of serial clock.
#define TMC4331_NEW_OUT_BIT_AT_RISE_SHIFT               5 // min.: 0, max.: 1, default: 0
#define TMC4331_DAC_CMD_LENGTH_MASK                     0xF800 // SPI_OUT_CONF // Command address bit length
#define TMC4331_DAC_CMD_LENGTH_SHIFT                    7 // min.: 0, max.: 31, default: 0
#define TMC4331_SCK_LOW_BEFORE_CSN_MASK                 0x10 // SPI_OUT_CONF // Serial Clk is tied low before CS
#define TMC4331_SCK_LOW_BEFORE_CSN_SHIFT                4 // min.: 0, max.: 1, default: 0
#define TMC4331_NEW_OUT_BIT_AT_RISE_MASK                0x20 // SPI_OUT_CONF // New serial output data is assigned at rising edge of serial clock.
#define TMC4331_NEW_OUT_BIT_AT_RISE_SHIFT               5 // min.: 0, max.: 1, default: 0
#define TMC4331_COVER_DATA_LENGTH_MASK                  0x0FE000 // SPI_OUT_CONF // Datagram length. Set to 0 for TMCx drivers
#define TMC4331_COVER_DATA_LENGTH_SHIFT                 13 // min.: 0, max.: 64, default: 0
#define TMC4331_SPI_OUT_LOW_TIME_MASK                   0xF00000 // SPI_OUT_CONF // SPI output clock low level duration
#define TMC4331_SPI_OUT_LOW_TIME_SHIFT                  20 // min.: 0, max.: 15, default: 0
#define TMC4331_SPI_OUT_HIGH_TIME_MASK                  0x0F000000 // SPI_OUT_CONF // SPI output clock high level duration
#define TMC4331_SPI_OUT_HIGH_TIME_SHIFT                 24 // min.: 0, max.: 15, default: 0
//#define TMC4331_SPI_OUT_LOW_TIME_MASK                 0xF0000000 // SPI_OUT_CONF // SPI output transfer idle state duration
//#define TMC4331_SPI_OUT_LOW_TIME_SHIFT                28 // min.: 0, max.: 15, default: 0
#define TMC4331_HOLD_CURRENT_SCALE_EN_MASK              0x01 // CURRENT_CONF // Enabling hold current scaling during standstill
#define TMC4331_HOLD_CURRENT_SCALE_EN_SHIFT             0 // min.: 0, max.: 1, default: 0
#define TMC4331_DRIVE_CURRENT_SCALE_EN_MASK             0x02 // CURRENT_CONF // Enabling drive current scaling during motion
#define TMC4331_DRIVE_CURRENT_SCALE_EN_SHIFT            1 // min.: 0, max.: 1, default: 0
#define TMC4331_BOOST_CURRENT_ON_ACC_EN_MASK            0x04 // CURRENT_CONF // Enabling boost current during acceleration slopes
#define TMC4331_BOOST_CURRENT_ON_ACC_EN_SHIFT           2 // min.: 0, max.: 1, default: 0
#define TMC4331_BOOST_CURRENT_ON_DEC_EN_MASK            0x08 // CURRENT_CONF // Enabling boost current during deceleration slopes
#define TMC4331_BOOST_CURRENT_ON_DEC_EN_SHIFT           3 // min.: 0, max.: 1, default: 0
#define TMC4331_BOOST_CURRENT_AFTER_START_EN_MASK       0x10 // CURRENT_CONF // Enabling boost current after ramp start
#define TMC4331_BOOST_CURRENT_AFTER_START_EN_SHIFT      4 // min.: 0, max.: 1, default: 0
#define TMC4331_SEC_DRIVE_CURRENT_SCALE_EN_MASK         0x20 // CURRENT_CONF // Enabling 2nd drive current scaling during motion
#define TMC4331_SEC_DRIVE_CURRENT_SCALE_EN_SHIFT        5 // min.: 0, max.: 1, default: 0
#define TMC4331_FREEWHEELING_EN_MASK                    0x40 // CURRENT_CONF // Enabling freewheeling phase during standstill
#define TMC4331_FREEWHEELING_EN_SHIFT                   6 // min.: 0, max.: 1, default: 0
#define TMC4331_HOLD_CURRENT_SCALE_EN_MASK              0x01 // CURRENT_CONF // Enabling hold current scaling during standstill
#define TMC4331_HOLD_CURRENT_SCALE_EN_SHIFT             0 // min.: 0, max.: 1, default: 0
#define TMC4331_PWM_SCALE_EN_MASK                       0x0100 // CURRENT_CONF // Enabling PWM scaling
#define TMC4331_PWM_SCALE_EN_SHIFT                      8 // min.: 0, max.: 1, default: 0
#define TMC4331_PWM_AMPL_MASK                           0xFFFF0000 // CURRENT_CONF // PWM amplitude at VACTUAL=0
#define TMC4331_PWM_AMPL_SHIFT                          16 // min.: 0, max.: 65535, default: 0
#define TMC4331_BOOST_SCALE_VAL_MASK                    0xFF // SCALE_VALUES // Boost current scaling value
#define TMC4331_BOOST_SCALE_VAL_SHIFT                   0 // min.: 0, max.: 255, default: 0
#define TMC4331_DRV1_SCALE_VAL_MASK                     0xFF00 // SCALE_VALUES // 1st drive current scaling value
#define TMC4331_DRV1_SCALE_VAL_SHIFT                    8 // min.: 0, max.: 255, default: 0
#define TMC4331_DRV2_SCALE_VAL_MASK                     0xFF0000 // SCALE_VALUES // 2nd drive current scaling value
#define TMC4331_DRV2_SCALE_VAL_SHIFT                    16 // min.: 0, max.: 255, default: 0
#define TMC4331_HOLD_SCALE_VAL_MASK                     0xFF000000 // SCALE_VALUES // hold current scaling value
#define TMC4331_HOLD_SCALE_VAL_SHIFT                    24 // min.: 0, max.: 255, default: 0
#define TMC4331_MSTEP_PER_FS_MASK                       0x0F // STEP_CONF // microstep per revolution
#define TMC4331_MSTEP_PER_FS_SHIFT                      0 // min.: 0, max.: 8, default: 0
#define TMC4331_FS_PER_REV_MASK                         0xFFF0 // STEP_CONF // Fullsteps per motor axis revolution
#define TMC4331_FS_PER_REV_SHIFT                        4 // min.: 0, max.: 4095, default: 0
#define TMC4331_SG_MASK                                 0x010000 // STEP_CONF // EVENTS(30) considers Stallguard2 status
#define TMC4331_SG_SHIFT                                16 // min.: 0, max.: 1, default: 0
#define TMC4331_OT_MASK                                 0x020000 // STEP_CONF // EVENTS(30) considers Overtemperature shutdown
#define TMC4331_OT_SHIFT                                17 // min.: 0, max.: 1, default: 0
#define TMC4331_OTPW_MASK                               0x040000 // STEP_CONF // EVENTS(30) considers Overtemperature warning
#define TMC4331_OTPW_SHIFT                              18 // min.: 0, max.: 1, default: 0
#define TMC4331_S2GA_MASK                               0x080000 // STEP_CONF // EVENTS(30) considers Short2Gnd coilA
#define TMC4331_S2GA_SHIFT                              19 // min.: 0, max.: 1, default: 0
#define TMC4331_S2GB_MASK                               0x100000 // STEP_CONF // EVENTS(30) considers Short2Gnd coilB
#define TMC4331_S2GB_SHIFT                              20 // min.: 0, max.: 1, default: 0
#define TMC4331_OLA_MASK                                0x200000 // STEP_CONF // EVENTS(30) considers Open load coilA
#define TMC4331_OLA_SHIFT                               21 // min.: 0, max.: 1, default: 0
#define TMC4331_OLB_MASK                                0x400000 // STEP_CONF // EVENTS(30) considers Open load coilB
#define TMC4331_OLB_SHIFT                               22 // min.: 0, max.: 1, default: 0
#define TMC4331_STST_MASK                               0x800000 // STEP_CONF // EVENTS(30) considers Standstill
#define TMC4331_STST_SHIFT                              23 // min.: 0, max.: 1, default: 0
#define TMC4331_SG_MASK                                 0x010000 // STEP_CONF // EVENTS(30) considers calculated Stallguard status
#define TMC4331_SG_SHIFT                                16 // min.: 0, max.: 1, default: 0
#define TMC4331_UV_SF_MASK                              0x010000 // STEP_CONF // EVENTS(30) considers Undervoltage status
#define TMC4331_UV_SF_SHIFT                             16 // min.: 0, max.: 1, default: 0
#define TMC4331_UV_SF_MASK                              0x010000 // STEP_CONF // EVENTS(30) considers Undervoltage status
#define TMC4331_UV_SF_SHIFT                             16 // min.: 0, max.: 1, default: 0
#define TMC4331_OT_MASK                                 0x020000 // STEP_CONF // EVENTS(30) considers Overtemperature shutdown
#define TMC4331_OT_SHIFT                                17 // min.: 0, max.: 1, default: 0
#define TMC4331_OTPW_MASK                               0x040000 // STEP_CONF // EVENTS(30) considers Overtemperature warning
#define TMC4331_OTPW_SHIFT                              18 // min.: 0, max.: 1, default: 0
#define TMC4331_OCA_MASK                                0x080000 // STEP_CONF // EVENTS(30) considers Overcurrent bridge A
#define TMC4331_OCA_SHIFT                               19 // min.: 0, max.: 1, default: 0
#define TMC4331_OCB_MASK                                0x100000 // STEP_CONF // EVENTS(30) considers Overcurrent bridge B
#define TMC4331_OCB_SHIFT                               20 // min.: 0, max.: 1, default: 0
#define TMC4331_OLA_MASK                                0x200000 // STEP_CONF // EVENTS(30) considers Open load coilA
#define TMC4331_OLA_SHIFT                               21 // min.: 0, max.: 1, default: 0
#define TMC4331_OLB_MASK                                0x400000 // STEP_CONF // EVENTS(30) considers Open load coilB
#define TMC4331_OLB_SHIFT                               22 // min.: 0, max.: 1, default: 0
#define TMC4331_OCHS_MASK                               0x800000 // STEP_CONF // EVENTS(30) considers Overcurrent highSide
#define TMC4331_OCHS_SHIFT                              23 // min.: 0, max.: 1, default: 0
#define TMC4331_TARGET_REACHED_MASK                     0x01 // SPI_STATUS_SELECTION // ---
#define TMC4331_TARGET_REACHED_SHIFT                    0 // min.: 0, max.: 1, default: 0
#define TMC4331_POS_COMP_REACHED_MASK                   0x02 // SPI_STATUS_SELECTION // ---
#define TMC4331_POS_COMP_REACHED_SHIFT                  1 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_REACHED_MASK                        0x04 // SPI_STATUS_SELECTION // ---
#define TMC4331_VEL_REACHED_SHIFT                       2 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_STATE_00_MASK                       0x08 // SPI_STATUS_SELECTION // ---
#define TMC4331_VEL_STATE_00_SHIFT                      3 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_STATE_01_MASK                       0x10 // SPI_STATUS_SELECTION // ---
#define TMC4331_VEL_STATE_01_SHIFT                      4 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_STATE_10_MASK                       0x20 // SPI_STATUS_SELECTION // ---
#define TMC4331_VEL_STATE_10_SHIFT                      5 // min.: 0, max.: 1, default: 0
#define TMC4331_RAMP_STATE_00_MASK                      0x40 // SPI_STATUS_SELECTION // ---
#define TMC4331_RAMP_STATE_00_SHIFT                     6 // min.: 0, max.: 1, default: 0
#define TMC4331_RAMP_STATE_01_MASK                      0x80 // SPI_STATUS_SELECTION // ---
#define TMC4331_RAMP_STATE_01_SHIFT                     7 // min.: 0, max.: 1, default: 0
#define TMC4331_RAMP_STATE_10_MASK                      0x0100 // SPI_STATUS_SELECTION // ---
#define TMC4331_RAMP_STATE_10_SHIFT                     8 // min.: 0, max.: 1, default: 0
#define TMC4331_MAX_PHASE_TRAP_MASK                     0x0200 // SPI_STATUS_SELECTION // ---
#define TMC4331_MAX_PHASE_TRAP_SHIFT                    9 // min.: 0, max.: 1, default: 0
#define TMC4331_STOPL_EVENT_MASK                        0x0800 // SPI_STATUS_SELECTION // ---
#define TMC4331_STOPL_EVENT_SHIFT                       11 // min.: 0, max.: 1, default: 0
#define TMC4331_STOPR_EVENT_MASK                        0x1000 // SPI_STATUS_SELECTION // ---
#define TMC4331_STOPR_EVENT_SHIFT                       12 // min.: 0, max.: 1, default: 0
#define TMC4331_VSTOPL_ACTIVE_MASK                      0x2000 // SPI_STATUS_SELECTION // ---
#define TMC4331_VSTOPL_ACTIVE_SHIFT                     13 // min.: 0, max.: 1, default: 0
//#define TMC4331_VSTOPL_ACTIVE_MASK                    0x4000 // SPI_STATUS_SELECTION // ---
//#define TMC4331_VSTOPL_ACTIVE_SHIFT                   14 // min.: 0, max.: 1, default: 0
#define TMC4331_HOME_ERROR_MASK                         0x8000 // SPI_STATUS_SELECTION // ---
#define TMC4331_HOME_ERROR_SHIFT                        15 // min.: 0, max.: 1, default: 0
#define TMC4331_XLATCH_DONE_MASK                        0x010000 // SPI_STATUS_SELECTION // ---
#define TMC4331_XLATCH_DONE_SHIFT                       16 // min.: 0, max.: 1, default: 0
#define TMC4331_FS_ACTIVE_MASK                          0x020000 // SPI_STATUS_SELECTION // ---
#define TMC4331_FS_ACTIVE_SHIFT                         17 // min.: 0, max.: 1, default: 0
#define TMC4331_COVER_DONE_MASK                         0x02000000 // SPI_STATUS_SELECTION // ---
#define TMC4331_COVER_DONE_SHIFT                        25 // min.: 0, max.: 1, default: 0
//#define TMC4331_STOP_ON_STALL_MASK                    0x20000000 // SPI_STATUS_SELECTION // ---
//#define TMC4331_STOP_ON_STALL_SHIFT                   29 // min.: 0, max.: 1, default: 0
#define TMC4331_MOTOR_EV_MASK                           0x40000000 // SPI_STATUS_SELECTION // ---
#define TMC4331_MOTOR_EV_SHIFT                          30 // min.: 0, max.: 1, default: 0
#define TMC4331_RST_EV_MASK                             0x80000000 // SPI_STATUS_SELECTION // ---
#define TMC4331_RST_EV_SHIFT                            31 // min.: 0, max.: 1, default: 0
#define TMC4331_TARGET_REACHED_MASK                     0x01 // EVENT_CLEAR_CONF // ---
#define TMC4331_TARGET_REACHED_SHIFT                    0 // min.: 0, max.: 1, default: 0
#define TMC4331_POS_COMP_REACHED_MASK                   0x02 // EVENT_CLEAR_CONF // ---
#define TMC4331_POS_COMP_REACHED_SHIFT                  1 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_REACHED_MASK                        0x04 // EVENT_CLEAR_CONF // ---
#define TMC4331_VEL_REACHED_SHIFT                       2 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_STATE_00_MASK                       0x08 // EVENT_CLEAR_CONF // ---
#define TMC4331_VEL_STATE_00_SHIFT                      3 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_STATE_01_MASK                       0x10 // EVENT_CLEAR_CONF // ---
#define TMC4331_VEL_STATE_01_SHIFT                      4 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_STATE_10_MASK                       0x20 // EVENT_CLEAR_CONF // ---
#define TMC4331_VEL_STATE_10_SHIFT                      5 // min.: 0, max.: 1, default: 0
#define TMC4331_RAMP_STATE_00_MASK                      0x40 // EVENT_CLEAR_CONF // ---
#define TMC4331_RAMP_STATE_00_SHIFT                     6 // min.: 0, max.: 1, default: 0
#define TMC4331_RAMP_STATE_01_MASK                      0x80 // EVENT_CLEAR_CONF // ---
#define TMC4331_RAMP_STATE_01_SHIFT                     7 // min.: 0, max.: 1, default: 0
#define TMC4331_RAMP_STATE_10_MASK                      0x0100 // EVENT_CLEAR_CONF // ---
#define TMC4331_RAMP_STATE_10_SHIFT                     8 // min.: 0, max.: 1, default: 0
#define TMC4331_MAX_PHASE_TRAP_MASK                     0x0200 // EVENT_CLEAR_CONF // ---
#define TMC4331_MAX_PHASE_TRAP_SHIFT                    9 // min.: 0, max.: 1, default: 0
#define TMC4331_STOPL_EVENT_MASK                        0x0800 // EVENT_CLEAR_CONF // ---
#define TMC4331_STOPL_EVENT_SHIFT                       11 // min.: 0, max.: 1, default: 0
#define TMC4331_STOPR_EVENT_MASK                        0x1000 // EVENT_CLEAR_CONF // ---
#define TMC4331_STOPR_EVENT_SHIFT                       12 // min.: 0, max.: 1, default: 0
#define TMC4331_VSTOPL_ACTIVE_MASK                      0x2000 // EVENT_CLEAR_CONF // ---
#define TMC4331_VSTOPL_ACTIVE_SHIFT                     13 // min.: 0, max.: 1, default: 0
//#define TMC4331_VSTOPL_ACTIVE_MASK                    0x4000 // EVENT_CLEAR_CONF // ---
//#define TMC4331_VSTOPL_ACTIVE_SHIFT                   14 // min.: 0, max.: 1, default: 0
#define TMC4331_HOME_ERROR_MASK                         0x8000 // EVENT_CLEAR_CONF // ---
#define TMC4331_HOME_ERROR_SHIFT                        15 // min.: 0, max.: 1, default: 0
#define TMC4331_XLATCH_DONE_MASK                        0x010000 // EVENT_CLEAR_CONF // ---
#define TMC4331_XLATCH_DONE_SHIFT                       16 // min.: 0, max.: 1, default: 0
#define TMC4331_FS_ACTIVE_MASK                          0x020000 // EVENT_CLEAR_CONF // ---
#define TMC4331_FS_ACTIVE_SHIFT                         17 // min.: 0, max.: 1, default: 0
#define TMC4331_COVER_DONE_MASK                         0x02000000 // EVENT_CLEAR_CONF // ---
#define TMC4331_COVER_DONE_SHIFT                        25 // min.: 0, max.: 1, default: 0
//#define TMC4331_STOP_ON_STALL_MASK                    0x20000000 // EVENT_CLEAR_CONF // ---
//#define TMC4331_STOP_ON_STALL_SHIFT                   29 // min.: 0, max.: 1, default: 0
#define TMC4331_MOTOR_EV_MASK                           0x40000000 // EVENT_CLEAR_CONF // ---
#define TMC4331_MOTOR_EV_SHIFT                          30 // min.: 0, max.: 1, default: 0
#define TMC4331_RST_EV_MASK                             0x80000000 // EVENT_CLEAR_CONF // ---
#define TMC4331_RST_EV_SHIFT                            31 // min.: 0, max.: 1, default: 0
#define TMC4331_TARGET_REACHED_MASK                     0x01 // INTR_CONF // ---
#define TMC4331_TARGET_REACHED_SHIFT                    0 // min.: 0, max.: 1, default: 0
#define TMC4331_POS_COMP_REACHED_MASK                   0x02 // INTR_CONF // ---
#define TMC4331_POS_COMP_REACHED_SHIFT                  1 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_REACHED_MASK                        0x04 // INTR_CONF // ---
#define TMC4331_VEL_REACHED_SHIFT                       2 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_STATE_00_MASK                       0x08 // INTR_CONF // ---
#define TMC4331_VEL_STATE_00_SHIFT                      3 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_STATE_01_MASK                       0x10 // INTR_CONF // ---
#define TMC4331_VEL_STATE_01_SHIFT                      4 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_STATE_10_MASK                       0x20 // INTR_CONF // ---
#define TMC4331_VEL_STATE_10_SHIFT                      5 // min.: 0, max.: 1, default: 0
#define TMC4331_RAMP_STATE_00_MASK                      0x40 // INTR_CONF // ---
#define TMC4331_RAMP_STATE_00_SHIFT                     6 // min.: 0, max.: 1, default: 0
#define TMC4331_RAMP_STATE_01_MASK                      0x80 // INTR_CONF // ---
#define TMC4331_RAMP_STATE_01_SHIFT                     7 // min.: 0, max.: 1, default: 0
#define TMC4331_RAMP_STATE_10_MASK                      0x0100 // INTR_CONF // ---
#define TMC4331_RAMP_STATE_10_SHIFT                     8 // min.: 0, max.: 1, default: 0
#define TMC4331_MAX_PHASE_TRAP_MASK                     0x0200 // INTR_CONF // ---
#define TMC4331_MAX_PHASE_TRAP_SHIFT                    9 // min.: 0, max.: 1, default: 0
#define TMC4331_STOPL_EVENT_MASK                        0x0800 // INTR_CONF // ---
#define TMC4331_STOPL_EVENT_SHIFT                       11 // min.: 0, max.: 1, default: 0
#define TMC4331_STOPR_EVENT_MASK                        0x1000 // INTR_CONF // ---
#define TMC4331_STOPR_EVENT_SHIFT                       12 // min.: 0, max.: 1, default: 0
#define TMC4331_VSTOPL_ACTIVE_MASK                      0x2000 // INTR_CONF // ---
#define TMC4331_VSTOPL_ACTIVE_SHIFT                     13 // min.: 0, max.: 1, default: 0
//#define TMC4331_VSTOPL_ACTIVE_MASK                    0x4000 // INTR_CONF // ---
//#define TMC4331_VSTOPL_ACTIVE_SHIFT                   14 // min.: 0, max.: 1, default: 0
#define TMC4331_HOME_ERROR_MASK                         0x8000 // INTR_CONF // ---
#define TMC4331_HOME_ERROR_SHIFT                        15 // min.: 0, max.: 1, default: 0
#define TMC4331_XLATCH_DONE_MASK                        0x010000 // INTR_CONF // ---
#define TMC4331_XLATCH_DONE_SHIFT                       16 // min.: 0, max.: 1, default: 0
#define TMC4331_FS_ACTIVE_MASK                          0x020000 // INTR_CONF // ---
#define TMC4331_FS_ACTIVE_SHIFT                         17 // min.: 0, max.: 1, default: 0
#define TMC4331_COVER_DONE_MASK                         0x02000000 // INTR_CONF // ---
#define TMC4331_COVER_DONE_SHIFT                        25 // min.: 0, max.: 1, default: 0
//#define TMC4331_STOP_ON_STALL_MASK                    0x20000000 // INTR_CONF // ---
//#define TMC4331_STOP_ON_STALL_SHIFT                   29 // min.: 0, max.: 1, default: 0
#define TMC4331_MOTOR_EV_MASK                           0x40000000 // INTR_CONF // ---
#define TMC4331_MOTOR_EV_SHIFT                          30 // min.: 0, max.: 1, default: 0
#define TMC4331_RST_EV_MASK                             0x80000000 // INTR_CONF // ---
#define TMC4331_RST_EV_SHIFT                            31 // min.: 0, max.: 1, default: 0
#define TMC4331_TARGET_REACHED_MASK                     0x01 // EVENTS // XACTUAL has matched XTARGET
#define TMC4331_TARGET_REACHED_SHIFT                    0 // min.: 0, max.: 1, default: 0
#define TMC4331_POS_COMP_REACHED_MASK                   0x02 // EVENTS // XACTUAL has matched POS_COMP
#define TMC4331_POS_COMP_REACHED_SHIFT                  1 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_REACHED_MASK                        0x04 // EVENTS // VACTUAL has reached VMAX
#define TMC4331_VEL_REACHED_SHIFT                       2 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_STATE_00_MASK                       0x08 // EVENTS // VEL_STATE_F = 00 was triggered
#define TMC4331_VEL_STATE_00_SHIFT                      3 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_STATE_01_MASK                       0x10 // EVENTS // VEL_STATE_F = 01 was triggered
#define TMC4331_VEL_STATE_01_SHIFT                      4 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_STATE_10_MASK                       0x20 // EVENTS // VEL_STATE_F = 10 was triggered
#define TMC4331_VEL_STATE_10_SHIFT                      5 // min.: 0, max.: 1, default: 0
#define TMC4331_RAMP_STATE_00_MASK                      0x40 // EVENTS // RAMP_STATE_F = 00 was triggered
#define TMC4331_RAMP_STATE_00_SHIFT                     6 // min.: 0, max.: 1, default: 0
#define TMC4331_RAMP_STATE_01_MASK                      0x80 // EVENTS // RAMP_STATE_F = 01 was triggered
#define TMC4331_RAMP_STATE_01_SHIFT                     7 // min.: 0, max.: 1, default: 0
#define TMC4331_RAMP_STATE_10_MASK                      0x0100 // EVENTS // RAMP_STATE_F = 10 was triggered
#define TMC4331_RAMP_STATE_10_SHIFT                     8 // min.: 0, max.: 1, default: 0
#define TMC4331_MAX_PHASE_TRAP_MASK                     0x0200 // EVENTS // abs(VACTUAL) > VBREAK
#define TMC4331_MAX_PHASE_TRAP_SHIFT                    9 // min.: 0, max.: 1, default: 0
#define TMC4331_STOPL_EVENT_MASK                        0x0800 // EVENTS // STOPL was triggered
#define TMC4331_STOPL_EVENT_SHIFT                       11 // min.: 0, max.: 1, default: 0
#define TMC4331_STOPR_EVENT_MASK                        0x1000 // EVENTS // STOPR was triggered
#define TMC4331_STOPR_EVENT_SHIFT                       12 // min.: 0, max.: 1, default: 0
#define TMC4331_VSTOPL_ACTIVE_MASK                      0x2000 // EVENTS // Left virtual switch was triggered
#define TMC4331_VSTOPL_ACTIVE_SHIFT                     13 // min.: 0, max.: 1, default: 0
//#define TMC4331_VSTOPL_ACTIVE_MASK                    0x4000 // EVENTS // Right virtual switch was triggered
//#define TMC4331_VSTOPL_ACTIVE_SHIFT                   14 // min.: 0, max.: 1, default: 0
#define TMC4331_HOME_ERROR_MASK                         0x8000 // EVENTS // Unmatched HOME_REF polarity
#define TMC4331_HOME_ERROR_SHIFT                        15 // min.: 0, max.: 1, default: 0
#define TMC4331_XLATCH_DONE_MASK                        0x010000 // EVENTS // Homing process finished or X_LATCH was rewritten
#define TMC4331_XLATCH_DONE_SHIFT                       16 // min.: 0, max.: 1, default: 0
#define TMC4331_FS_ACTIVE_MASK                          0x020000 // EVENTS // Fullstep motion was activated
#define TMC4331_FS_ACTIVE_SHIFT                         17 // min.: 0, max.: 1, default: 0
#define TMC4331_COVER_DONE_MASK                         0x02000000 // EVENTS // SPI datagram received from driver
#define TMC4331_COVER_DONE_SHIFT                        25 // min.: 0, max.: 1, default: 0
//#define TMC4331_STOP_ON_STALL_MASK                    0x20000000 // EVENTS // Motor stall detected. Motor was stopped
//#define TMC4331_STOP_ON_STALL_SHIFT                   29 // min.: 0, max.: 1, default: 0
#define TMC4331_MOTOR_EV_MASK                           0x40000000 // EVENTS // One or more of the selected motor event were triggered
#define TMC4331_MOTOR_EV_SHIFT                          30 // min.: 0, max.: 1, default: 0
#define TMC4331_RST_EV_MASK                             0x80000000 // EVENTS // Motion controller was reset
#define TMC4331_RST_EV_SHIFT                            31 // min.: 0, max.: 1, default: 0
#define TMC4331_TARGET_REACHED_F_MASK                   0x01 // STATUS //
#define TMC4331_TARGET_REACHED_F_SHIFT                  0 // min.: 0, max.: 1, default: 0
#define TMC4331_POS_COMP_REACHED_F_MASK                 0x02 // STATUS //
#define TMC4331_POS_COMP_REACHED_F_SHIFT                1 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_REACHED_F_MASK                      0x04 // STATUS //
#define TMC4331_VEL_REACHED_F_SHIFT                     2 // min.: 0, max.: 1, default: 0
#define TMC4331_VEL_STATE_F_MASK                        0x18 // STATUS // Actual velocity status
#define TMC4331_VEL_STATE_F_SHIFT                       3 // min.: 0, max.: 2, default: 0
#define TMC4331_RAMP_STATE_F_MASK                       0x60 // STATUS // Actual ramp status
#define TMC4331_RAMP_STATE_F_SHIFT                      5 // min.: 0, max.: 2, default: 0
#define TMC4331_STOPL_ACTIVE_F_MASK                     0x80 // STATUS //
#define TMC4331_STOPL_ACTIVE_F_SHIFT                    7 // min.: 0, max.: 1, default: 0
#define TMC4331_STOPR_ACTIVE_F_MASK                     0x0100 // STATUS //
#define TMC4331_STOPR_ACTIVE_F_SHIFT                    8 // min.: 0, max.: 1, default: 0
#define TMC4331_VSTOPL_ACTIVE_F_MASK                    0x0200 // STATUS //
#define TMC4331_VSTOPL_ACTIVE_F_SHIFT                   9 // min.: 0, max.: 1, default: 0
#define TMC4331_VSTOPR_ACTIVE_F_MASK                    0x0400 // STATUS //
#define TMC4331_VSTOPR_ACTIVE_F_SHIFT                   10 // min.: 0, max.: 1, default: 0
#define TMC4331_ACTIVE_STALL_F_MASK                     0x0800 // STATUS //
#define TMC4331_ACTIVE_STALL_F_SHIFT                    11 // min.: 0, max.: 1, default: 0
#define TMC4331_HOME_ERROR_F_MASK                       0x1000 // STATUS //
#define TMC4331_HOME_ERROR_F_SHIFT                      12 // min.: 0, max.: 1, default: 0
#define TMC4331_FS_ACTIVE_F_MASK                        0x2000 // STATUS //
#define TMC4331_FS_ACTIVE_F_SHIFT                       13 // min.: 0, max.: 1, default: 0
//#define TMC4331_SG_MASK                               0x01000000 // STATUS //
//#define TMC4331_SG_SHIFT                              24 // min.: 0, max.: 1, default: 0
//#define TMC4331_OT_MASK                               0x02000000 // STATUS //
//#define TMC4331_OT_SHIFT                              25 // min.: 0, max.: 1, default: 0
//#define TMC4331_OTPW_MASK                             0x04000000 // STATUS //
//#define TMC4331_OTPW_SHIFT                            26 // min.: 0, max.: 1, default: 0
//#define TMC4331_S2GA_MASK                             0x08000000 // STATUS //
//#define TMC4331_S2GA_SHIFT                            27 // min.: 0, max.: 1, default: 0
//#define TMC4331_S2GB_MASK                             0x10000000 // STATUS //
//#define TMC4331_S2GB_SHIFT                            28 // min.: 0, max.: 1, default: 0
//#define TMC4331_OLA_MASK                              0x20000000 // STATUS //
//#define TMC4331_OLA_SHIFT                             29 // min.: 0, max.: 1, default: 0
//#define TMC4331_OLB_MASK                              0x40000000 // STATUS //
//#define TMC4331_OLB_SHIFT                             30 // min.: 0, max.: 1, default: 0
//#define TMC4331_STST_MASK                             0x80000000 // STATUS // Standstill
//#define TMC4331_STST_SHIFT                            31 // min.: 0, max.: 1, default: 0
//#define TMC4331_SG_MASK                               0x01000000 // STATUS //
//#define TMC4331_SG_SHIFT                              24 // min.: 0, max.: 1, default: 0
//#define TMC4331_UV_SF_MASK                            0x01000000 // STATUS //
//#define TMC4331_UV_SF_SHIFT                           24 // min.: 0, max.: 1, default: 0
//#define TMC4331_UV_SF_MASK                            0x01000000 // STATUS //
//#define TMC4331_UV_SF_SHIFT                           24 // min.: 0, max.: 1, default: 0
//#define TMC4331_OTPW_MASK                             0x04000000 // STATUS //
//#define TMC4331_OTPW_SHIFT                            26 // min.: 0, max.: 1, default: 0
//#define TMC4331_OCA_MASK                              0x08000000 // STATUS //
//#define TMC4331_OCA_SHIFT                             27 // min.: 0, max.: 1, default: 0
//#define TMC4331_OCB_MASK                              0x10000000 // STATUS //
//#define TMC4331_OCB_SHIFT                             28 // min.: 0, max.: 1, default: 0
//#define TMC4331_OLA_MASK                              0x20000000 // STATUS //
//#define TMC4331_OLA_SHIFT                             29 // min.: 0, max.: 1, default: 0
//#define TMC4331_OLB_MASK                              0x40000000 // STATUS //
//#define TMC4331_OLB_SHIFT                             30 // min.: 0, max.: 1, default: 0
//#define TMC4331_OCHS_MASK                             0x80000000 // STATUS // Standstill
//#define TMC4331_OCHS_SHIFT                            31 // min.: 0, max.: 1, default: 0
#define TMC4331_STP_LENGTH_ADD_MASK                     0xFFFF // STP_LENGTH_ADD / DIR_SETUP_TIME // Additional length [# clock cycles] for active step polarity to indicate an active output step at STPOUT
#define TMC4331_STP_LENGTH_ADD_SHIFT                    0 // min.: 0, max.: 65535, default: 0
#define TMC4331_DIR_SETUP_TIME_MASK                     0xFFFF0000 // STP_LENGTH_ADD / DIR_SETUP_TIME // Delay [# clock cycles] between DIROUT and STPOUT voltage level changes
#define TMC4331_DIR_SETUP_TIME_SHIFT                    16 // min.: 0, max.: 65535, default: 0
#define TMC4331_START_OUT_ADD_MASK                      0xFFFFFFFF // START_OUT_ADD // Active start signal length = 1+START_OUT_ADD
#define TMC4331_START_OUT_ADD_SHIFT                     0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_GEAR_RATIO_MASK                         0xFFFFFFFF // GEAR_RATIO // integer, 8 digits, 24 decimals
#define TMC4331_GEAR_RATIO_SHIFT                        0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_START_DELAY_MASK                        0xFFFFFFFF // START_DELAY //
#define TMC4331_START_DELAY_SHIFT                       0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_CLK_GATING_DELAY_MASK                   0xFFFFFFFF // CLK_GATING_DELAY //
#define TMC4331_CLK_GATING_DELAY_SHIFT                  0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_STDBY_DELAY_MASK                        0xFFFFFFFF // STDBY_DELAY //
#define TMC4331_STDBY_DELAY_SHIFT                       0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_FREEWHEEL_DELAY_MASK                    0xFFFFFFFF // FREEWHEEL_DELAY //
#define TMC4331_FREEWHEEL_DELAY_SHIFT                   0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_VDRV_SCALE_LIMIT_MASK                   0xFFFFFF // VDRV_SCALE_LIMIT / PWM_VMAX // DRV2_SCALE_VAL is active beyond this value, else DRV1_SCALE_VAL
#define TMC4331_VDRV_SCALE_LIMIT_SHIFT                  0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_PWM_VMAX_MASK                           0xFFFFFF // VDRV_SCALE_LIMIT / PWM_VMAX //
#define TMC4331_PWM_VMAX_SHIFT                          0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_UP_SCALE_DELAY_MASK                     0xFFFFFF // UP_SCALE_DELAY //
#define TMC4331_UP_SCALE_DELAY_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_HOLD_SCALE_DELAY_MASK                   0xFFFFFF // HOLD_SCALE_DELAY //
#define TMC4331_HOLD_SCALE_DELAY_SHIFT                  0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_DRV_SCALE_DELAY_MASK                    0xFFFFFF // DRV_SCALE_DELAY //
#define TMC4331_DRV_SCALE_DELAY_SHIFT                   0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_BOOST_TIME_MASK                         0xFFFFFF // BOOST_TIME //
#define TMC4331_BOOST_TIME_SHIFT                        0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SPI_SWITCH_VEL_MASK                     0xFFFFFF // SPI_SWITCH_VEL / DAC ADDR // [pps]
#define TMC4331_SPI_SWITCH_VEL_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_DAC_ADDR_A_MASK                         0xFFFF // SPI_SWITCH_VEL / DAC ADDR // CURRENTA_SPI value
#define TMC4331_DAC_ADDR_A_SHIFT                        0 // min.: 0, max.: 65535, default: 0
#define TMC4331_DAC_ADDR_B_MASK                         0xFFFF0000 // SPI_SWITCH_VEL / DAC ADDR // CURRENTB_SPI value
#define TMC4331_DAC_ADDR_B_SHIFT                        16 // min.: 0, max.: 65535, default: 0
#define TMC4331_HOME_SAFETY_MARGIN_MASK                 0xFFFF // HOME_SAFETY_MARGIN //
#define TMC4331_HOME_SAFETY_MARGIN_SHIFT                0 // min.: 0, max.: 65535, default: 0
#define TMC4331_PWM_FREQ_MASK                           0xFFFF // PWM_FREQ / CHOPSYNC_DIV //
#define TMC4331_PWM_FREQ_SHIFT                          0 // min.: 0, max.: 65535, default: 0
#define TMC4331_CHOPSYNC_DIV_MASK                       0x0FFF // PWM_FREQ / CHOPSYNC_DIV //  fOSC = fCLK /CHOPSYNC_DIV
#define TMC4331_CHOPSYNC_DIV_SHIFT                      0 // min.: 96, max.: 818, default: 0
#define TMC4331_OPERATION_MODE_MASK                     0x04 // RAMPMODE // Operation mode
#define TMC4331_OPERATION_MODE_SHIFT                    2 // min.: 0, max.: 1, default: 0
#define TMC4331_RAMP_PROFILE_MASK                       0x03 // RAMPMODE // Ramp profile
#define TMC4331_RAMP_PROFILE_SHIFT                      0 // min.: 0, max.: 2, default: 0
#define TMC4331_XACTUAL_MASK                            0xFFFFFFFF // XACTUAL //
#define TMC4331_XACTUAL_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_VACTUAL_MASK                            0xFFFFFFFF // VACTUAL //
#define TMC4331_VACTUAL_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_AACTUAL_MASK                            0xFFFFFFFF // AACTUAL //
#define TMC4331_AACTUAL_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_VMAX_MASK                               0xFFFFFFFF // VMAX //
#define TMC4331_VMAX_SHIFT                              0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_VMAX_MASK                               0xFFFFFFFF // VMAX //
#define TMC4331_VMAX_SHIFT                              0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_VSTART_MASK                             0x7FFFFFFF // VSTART //
#define TMC4331_VSTART_SHIFT                            0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_VSTOP_MASK                              0x7FFFFFFF // VSTOP // If VBREAK /= 0, set VSTOP < VBREAK!
#define TMC4331_VSTOP_SHIFT                             0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_VSTOP_MASK                              0x7FFFFFFF // VSTOP //
#define TMC4331_VSTOP_SHIFT                             0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_VBREAK_MASK                             0x7FFFFFFF // VBREAK // if abs(VACTUAL)<VBREAK, ASTART/DFINAL are used, else AMAX/DMAX
#define TMC4331_VBREAK_SHIFT                            0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_FREQUENCY_MODE_MASK                     0xFFFFFF // AMAX // [pps²]: 22 digits, 2 decimals
#define TMC4331_FREQUENCY_MODE_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_DIRECT_MODE_MASK                        0xFFFFFF // AMAX // [delta_v per clock cycle]: AMAX[pps²]=AMAX/2^37*f_clk²
#define TMC4331_DIRECT_MODE_SHIFT                       0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_FREQUENCY_MODE_MASK                     0xFFFFFF // DMAX // [pps²]: 22 digits, 2 decimals
#define TMC4331_FREQUENCY_MODE_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_DIRECT_MODE_MASK                        0xFFFFFF // DMAX // [delta_v per clock cycle]: DMAX[pps²]=DMAX/2^37*f_clk²
#define TMC4331_DIRECT_MODE_SHIFT                       0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_FREQUENCY_MODE_MASK                     0xFFFFFF // ASTART // [pps²]: 22 digits, 2 decimals
#define TMC4331_FREQUENCY_MODE_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SIGN_AACT_MASK                          0x10000000 // ASTART // Sign of AACTUAL after switching from external to internal step control
#define TMC4331_SIGN_AACT_SHIFT                         32 // min.: 0, max.: 1, default: 0
#define TMC4331_DIRECT_MODE_MASK                        0xFFFFFF // ASTART // [delta_v per clock cycle]: ASTART[pps²]=ASTART/2^37*f_clk²
#define TMC4331_DIRECT_MODE_SHIFT                       0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SIGN_AACT_MASK                          0x10000000 // ASTART // Sign of AACTUAL after switching from external to internal step control
#define TMC4331_SIGN_AACT_SHIFT                         32 // min.: 0, max.: 1, default: 0
#define TMC4331_FREQUENCY_MODE_MASK                     0xFFFFFF // DFINAL // [pps²]: 22 digits, 2 decimals
#define TMC4331_FREQUENCY_MODE_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_DIRECT_MODE_MASK                        0xFFFFFF // DFINAL // [delta_v per clock cycle]: DFINAL[pps²]=DFINAL/2^37*f_clk²
#define TMC4331_DIRECT_MODE_SHIFT                       0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_FREQUENCY_MODE_MASK                     0xFFFFFF // DSTOP // [pps²]: 22 digits, 2 decimals
#define TMC4331_FREQUENCY_MODE_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_DIRECT_MODE_MASK                        0xFFFFFF // DSTOP // [delta_v per clock cycle]: DSTOP[pps²]=DSTOP/2^37*f_clk²
#define TMC4331_DIRECT_MODE_SHIFT                       0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_FREQUENCY_MODE_MASK                     0xFFFFFF // BOW1 // [pps³]: 24 digits, no decimals
#define TMC4331_FREQUENCY_MODE_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_DIRECT_MODE_MASK                        0xFFFFFF // BOW1 // [delta_a per clock cycle]: BOW1[pps³]=BOW1/2^53*f_clk³
#define TMC4331_DIRECT_MODE_SHIFT                       0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_FREQUENCY_MODE_MASK                     0xFFFFFF // BOW2 // [pps³]: 24 digits, no decimals
#define TMC4331_FREQUENCY_MODE_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_DIRECT_MODE_MASK                        0xFFFFFF // BOW2 // [delta_a per clock cycle]: BOW2[pps³]=BOW2/2^53*f_clk³
#define TMC4331_DIRECT_MODE_SHIFT                       0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_FREQUENCY_MODE_MASK                     0xFFFFFF // BOW3 // [pps³]: 24 digits, no decimals
#define TMC4331_FREQUENCY_MODE_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_DIRECT_MODE_MASK                        0xFFFFFF // BOW3 // [delta_a per clock cycle]: BOW3[pps³]=BOW3/2^53*f_clk³
#define TMC4331_DIRECT_MODE_SHIFT                       0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_FREQUENCY_MODE_MASK                     0xFFFFFF // BOW4 // [pps³]: 24 digits, no decimals
#define TMC4331_FREQUENCY_MODE_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_DIRECT_MODE_MASK                        0xFFFFFF // BOW4 // [delta_a per clock cycle]: BOW4[pps³]=BOW4/2^53*f_clk³
#define TMC4331_DIRECT_MODE_SHIFT                       0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_CLK_FREQ_MASK                           0x01FFFFFF // CLK_FREQ // [Hz]
#define TMC4331_CLK_FREQ_SHIFT                          0 // min.: 4000000, max.: 32000000, default: 0
#define TMC4331_POS_COMP_MASK                           0xFFFFFFFF // POS_COMP //
#define TMC4331_POS_COMP_SHIFT                          0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_VIRT_STOP_LEFT_MASK                     0xFFFFFFFF // VIRT_STOP_LEFT //
#define TMC4331_VIRT_STOP_LEFT_SHIFT                    0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_VIRT_STOP_RIGHT_MASK                    0xFFFFFFFF // VIRT_STOP_RIGHT //
#define TMC4331_VIRT_STOP_RIGHT_SHIFT                   0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_X_HOME_MASK                             0xFFFFFFFF // X_HOME //
#define TMC4331_X_HOME_SHIFT                            0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_X_LATCH_MASK                            0xFFFFFFFF // X_LATCH / REV_CNT / X_RANGE //
#define TMC4331_X_LATCH_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_REV_CNT_MASK                            0xFFFFFFFF // X_LATCH / REV_CNT / X_RANGE //
#define TMC4331_REV_CNT_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_X_RANGE_MASK                            0xFFFFFFFF // X_LATCH / REV_CNT / X_RANGE // -X_RANGE = X_ACTUAL = X_RANGE - 1
#define TMC4331_X_RANGE_SHIFT                           0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_XTARGET_MASK                            0xFFFFFFFF // XTARGET //
#define TMC4331_XTARGET_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_X_PIPE0_MASK                            0xFFFFFFFF // X_PIPE0 //
#define TMC4331_X_PIPE0_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_X_PIPE1_MASK                            0xFFFFFFFF // X_PIPE1 //
#define TMC4331_X_PIPE1_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_X_PIPE2_MASK                            0xFFFFFFFF // X_PIPE2 //
#define TMC4331_X_PIPE2_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_X_PIPE3_MASK                            0xFFFFFFFF // X_PIPE3 //
#define TMC4331_X_PIPE3_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_X_PIPE4_MASK                            0xFFFFFFFF // X_PIPE4 //
#define TMC4331_X_PIPE4_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_X_PIPE5_MASK                            0xFFFFFFFF // X_PIPE5 //
#define TMC4331_X_PIPE5_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_X_PIPE6_MASK                            0xFFFFFFFF // X_PIPE6 //
#define TMC4331_X_PIPE6_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_X_PIPE7_MASK                            0xFFFFFFFF // X_PIPE7 //
#define TMC4331_X_PIPE7_SHIFT                           0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_SH_REG0_VMAX_MASK                       0xFFFFFFFF // SH_REG0 // 1st VMAX shadow register
#define TMC4331_SH_REG0_VMAX_SHIFT                      0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_SH_REG1_AMAX_MASK                       0xFFFFFF // SH_REG1 // [pps²]: 22 digits, 2 decimals
#define TMC4331_SH_REG1_AMAX_SHIFT                      0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG1_AMAX_MASK                       0xFFFFFF // SH_REG1 // [delta_v per clock cycle]: AMAX[pps²]=AMAX/2^37*f_clk²
#define TMC4331_SH_REG1_AMAX_SHIFT                      0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG2_DMAX_MASK                       0xFFFFFF // SH_REG2 // [pps²]: 22 digits, 2 decimals
#define TMC4331_SH_REG2_DMAX_SHIFT                      0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG2_DMAX_MASK                       0xFFFFFF // SH_REG2 // [delta_v per clock cycle]: DMAX[pps²]=DMAX/2^37*f_clk²
#define TMC4331_SH_REG2_DMAX_SHIFT                      0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG3_ASTART_MASK                     0xFFFFFF // SH_REG3 // [pps²]: 22 digits, 2 decimals
#define TMC4331_SH_REG3_ASTART_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG3_ASTART_MASK                     0xFFFFFF // SH_REG3 // [delta_v per clock cycle]: ASTART[pps²]=ASTART/2^37*f_clk²
#define TMC4331_SH_REG3_ASTART_SHIFT                    0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG3_BOW1_MASK                       0xFFFFFF // SH_REG3 // [pps³]: 24 digits, no decimals
#define TMC4331_SH_REG3_BOW1_SHIFT                      0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG3_BOW1_MASK                       0xFFFFFF // SH_REG3 // [delta_a per clock cycle]: BOW1[pps³]=BOW1/2^53*f_clk³
#define TMC4331_SH_REG3_BOW1_SHIFT                      0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG3_ASTART_MASK                     0xFFFFFF // SH_REG3 // [pps²]: 22 digits, 2 decimals
#define TMC4331_SH_REG3_ASTART_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG3_ASTART_MASK                     0xFFFFFF // SH_REG3 // [delta_v per clock cycle]: ASTART[pps²]=ASTART/2^37*f_clk²
#define TMC4331_SH_REG3_ASTART_SHIFT                    0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG4_DFINAL_MASK                     0xFFFFFF // SH_REG4 // [pps²]: 22 digits, 2 decimals
#define TMC4331_SH_REG4_DFINAL_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG4_DFINAL_MASK                     0xFFFFFF // SH_REG4 // [delta_v per clock cycle]: DFINAL[pps²]=DFINAL/2^37*f_clk²
#define TMC4331_SH_REG4_DFINAL_SHIFT                    0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG4_BOW2_MASK                       0xFFFFFF // SH_REG4 // [pps³]: 24 digits, no decimals
#define TMC4331_SH_REG4_BOW2_SHIFT                      0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG4_BOW2_MASK                       0xFFFFFF // SH_REG4 // [delta_a per clock cycle]: BOW2[pps³]=BOW2/2^53*f_clk³
#define TMC4331_SH_REG4_BOW2_SHIFT                      0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG4_DFINAL_MASK                     0xFFFFFF // SH_REG4 // [pps²]: 22 digits, 2 decimals
#define TMC4331_SH_REG4_DFINAL_SHIFT                    0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG4_DFINAL_MASK                     0xFFFFFF // SH_REG4 // [delta_v per clock cycle]: DFINAL[pps²]=DFINAL/2^37*f_clk²
#define TMC4331_SH_REG4_DFINAL_SHIFT                    0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG5_VBREAK_MASK                     0x7FFFFFFF // SH_REG5 // 1st VBREAK shadow register
#define TMC4331_SH_REG5_VBREAK_SHIFT                    0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_SH_REG5_BOW3_MASK                       0xFFFFFF // SH_REG5 // [pps³]: 24 digits, no decimals
#define TMC4331_SH_REG5_BOW3_SHIFT                      0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG5_BOW3_MASK                       0xFFFFFF // SH_REG5 // [delta_a per clock cycle]: BOW3[pps³]=BOW3/2^53*f_clk³
#define TMC4331_SH_REG5_BOW3_SHIFT                      0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG5_VBREAK_MASK                     0x7FFFFFFF // SH_REG5 // 1st VBREAK shadow register
#define TMC4331_SH_REG5_VBREAK_SHIFT                    0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_SH_REG6_VSTART_MASK                     0x7FFFFFFF // SH_REG6 // 1st VSTART shadow register
#define TMC4331_SH_REG6_VSTART_SHIFT                    0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_SH_REG6_BOW4_MASK                       0xFFFFFF // SH_REG6 // [pps³]: 24 digits, no decimals
#define TMC4331_SH_REG6_BOW4_SHIFT                      0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG6_BOW4_MASK                       0xFFFFFF // SH_REG6 // [delta_a per clock cycle]: BOW4[pps³]=BOW4/2^53*f_clk³
#define TMC4331_SH_REG6_BOW4_SHIFT                      0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG6_VSTART_MASK                     0x7FFFFFFF // SH_REG6 // 1st VSTART shadow register
#define TMC4331_SH_REG6_VSTART_SHIFT                    0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_SH_REG6_VSTOP_MASK                      0x7FFFFFFF // SH_REG6 // 1st VSTOP shadow register
#define TMC4331_SH_REG6_VSTOP_SHIFT                     0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_SH_REG7_VSTOP_MASK                      0xFFFFFFFF // SH_REG7 // VSTOP shadow register
#define TMC4331_SH_REG7_VSTOP_SHIFT                     0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_SH_REG7_VMAX_MASK                       0xFFFFFFFF // SH_REG7 // 2nd VMAX shadow register
#define TMC4331_SH_REG7_VMAX_SHIFT                      0 // min.: -2147483648, max.: 2147483647, default: 0
#define TMC4331_SH_REG8_BOW1_MASK                       0xFFFFFF // SH_REG8 // [pps³]: 24 digits, no decimals
#define TMC4331_SH_REG8_BOW1_SHIFT                      0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG8_BOW1_MASK                       0xFFFFFF // SH_REG8 // [delta_a per clock cycle]: BOW1[pps³]=BOW1/2^53*f_clk³
#define TMC4331_SH_REG8_BOW1_SHIFT                      0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG8_AMAX_MASK                       0xFFFFFF // SH_REG8 // [pps²]: 22 digits, 2 decimals
#define TMC4331_SH_REG8_AMAX_SHIFT                      0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG8_AMAX_MASK                       0xFFFFFF // SH_REG8 // [delta_v per clock cycle]: AMAX[pps²]=AMAX/2^37*f_clk²
#define TMC4331_SH_REG8_AMAX_SHIFT                      0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG9_BOW2_MASK                       0xFFFFFF // SH_REG9 // [pps³]: 24 digits, no decimals
#define TMC4331_SH_REG9_BOW2_SHIFT                      0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG9_BOW2_MASK                       0xFFFFFF // SH_REG9 // [delta_a per clock cycle]: BOW2[pps³]=BOW2/2^53*f_clk³
#define TMC4331_SH_REG9_BOW2_SHIFT                      0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG9_DMAX_MASK                       0xFFFFFF // SH_REG9 // [pps²]: 22 digits, 2 decimals
#define TMC4331_SH_REG9_DMAX_SHIFT                      0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG9_DMAX_MASK                       0xFFFFFF // SH_REG9 // [delta_v per clock cycle]: DMAX[pps²]=DMAX/2^37*f_clk²
#define TMC4331_SH_REG9_DMAX_SHIFT                      0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG10_BOW3_MASK                      0xFFFFFF // SH_REG10 // [pps³]: 24 digits, no decimals
#define TMC4331_SH_REG10_BOW3_SHIFT                     0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG10_BOW3_MASK                      0xFFFFFF // SH_REG10 // [delta_a per clock cycle]: BOW3[pps³]=BOW3/2^53*f_clk³
#define TMC4331_SH_REG10_BOW3_SHIFT                     0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG10_BOW1_MASK                      0xFFFFFF // SH_REG10 // [pps³]: 24 digits, no decimals
#define TMC4331_SH_REG10_BOW1_SHIFT                     0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG10_BOW1_MASK                      0xFFFFFF // SH_REG10 // [delta_a per clock cycle]: BOW1[pps³]=BOW1/2^53*f_clk³
#define TMC4331_SH_REG10_BOW1_SHIFT                     0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG10_ASTART_MASK                    0xFFFFFF // SH_REG10 // [pps²]: 22 digits, 2 decimals
#define TMC4331_SH_REG10_ASTART_SHIFT                   0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG10_ASTART_MASK                    0xFFFFFF // SH_REG10 // [delta_v per clock cycle]: ASTART[pps²]=ASTART/2^37*f_clk²
#define TMC4331_SH_REG10_ASTART_SHIFT                   0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG11_BOW4_MASK                      0xFFFFFF // SH_REG11 // [pps³]: 24 digits, no decimals
#define TMC4331_SH_REG11_BOW4_SHIFT                     0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG11_BOW4_MASK                      0xFFFFFF // SH_REG11 // [delta_a per clock cycle]: BOW4[pps³]=BOW4/2^53*f_clk³
#define TMC4331_SH_REG11_BOW4_SHIFT                     0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG11_BOW2_MASK                      0xFFFFFF // SH_REG11 // [pps³]: 24 digits, no decimals
#define TMC4331_SH_REG11_BOW2_SHIFT                     0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG11_BOW2_MASK                      0xFFFFFF // SH_REG11 // [delta_a per clock cycle]: BOW2[pps³]=BOW2/2^53*f_clk³
#define TMC4331_SH_REG11_BOW2_SHIFT                     0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG11_DFINAL_MASK                    0xFFFFFF // SH_REG11 // [pps²]: 22 digits, 2 decimals
#define TMC4331_SH_REG11_DFINAL_SHIFT                   0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG11_DFINAL_MASK                    0xFFFFFF // SH_REG11 // [delta_v per clock cycle]: DFINAL[pps²]=DFINAL/2^37*f_clk²
#define TMC4331_SH_REG11_DFINAL_SHIFT                   0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_OPERATION_MODE_MASK                     0x04 // SH_REG12 // Operation mode
#define TMC4331_OPERATION_MODE_SHIFT                    2 // min.: 0, max.: 1, default: 0
#define TMC4331_RAMP_PROFILE_MASK                       0x03 // SH_REG12 // Ramp profile
#define TMC4331_RAMP_PROFILE_SHIFT                      0 // min.: 0, max.: 2, default: 0
#define TMC4331_SH_REG12_BOW3_MASK                      0xFFFFFF // SH_REG12 // [pps³]: 24 digits, no decimals
#define TMC4331_SH_REG12_BOW3_SHIFT                     0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG12_BOW3_MASK                      0xFFFFFF // SH_REG12 // [delta_a per clock cycle]: BOW3[pps³]=BOW3/2^53*f_clk³
#define TMC4331_SH_REG12_BOW3_SHIFT                     0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG12_VBREAK_MASK                    0x7FFFFFFF // SH_REG12 // 2nd VBREAK shadow register
#define TMC4331_SH_REG12_VBREAK_SHIFT                   0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_SH_REG13_BOW4_MASK                      0xFFFFFF // SH_REG13 // [pps³]: 24 digits, no decimals
#define TMC4331_SH_REG13_BOW4_SHIFT                     0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_SH_REG13_BOW4_MASK                      0xFFFFFF // SH_REG13 // [delta_a per clock cycle]: BOW4[pps³]=BOW4/2^53*f_clk³
#define TMC4331_SH_REG13_BOW4_SHIFT                     0 // min.: 0, max.: 1048576, default: 0
#define TMC4331_SH_REG13_VSTART_MASK                    0x7FFFFFFF // SH_REG13 // 2nd VSTART shadow register
#define TMC4331_SH_REG13_VSTART_SHIFT                   0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_SH_REG13_VSTOP_MASK                     0x7FFFFFFF // SH_REG13 // 2nd VSTOP shadow register
#define TMC4331_SH_REG13_VSTOP_SHIFT                    0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_CLK_GATING_REG_MASK                     0x07 // CLK Gating / SW Reset // Clk Gating Activation
#define TMC4331_CLK_GATING_REG_SHIFT                    0 // min.: 0, max.: 7, default: 0
#define TMC4331_RESET_REG_MASK                          0xFFFFFF00 // CLK Gating / SW Reset // SW Reset
#define TMC4331_RESET_REG_SHIFT                         8 // min.: 0, max.: 5395284, default: 0
#define TMC4331_FS_VEL_MASK                             0xFFFFFF // FS_VEL / DC_VEL // In case abs(VACTUAL) > FS_VEL fullstep operation is active, if enabled
#define TMC4331_FS_VEL_SHIFT                            0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_DC_VEL_MASK                             0xFFFFFF // FS_VEL / DC_VEL // In case abs(VACTUAL) > DC_VEL fullstep operation is active, if enabled
#define TMC4331_DC_VEL_SHIFT                            0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_DC_TIME_MASK                            0xFF // DC_TIME / DC_SG / DC_BLKTIME // Upper PWM on-time limit for commutation
#define TMC4331_DC_TIME_SHIFT                           0 // min.: 0, max.: 255, default: 0
#define TMC4331_DC_SG_MASK                              0xFF00 // DC_TIME / DC_SG / DC_BLKTIME // Maximum PWM on-time [# clock cycles*16] for step loss detection
#define TMC4331_DC_SG_SHIFT                             8 // min.: 0, max.: 255, default: 0
#define TMC4331_DC_BLKTIME_MASK                         0xFFFF0000 // DC_TIME / DC_SG / DC_BLKTIME // Blank time [# clock cycles] after fullstep release when no signal comparison should happen
#define TMC4331_DC_BLKTIME_SHIFT                        16 // min.: 0, max.: 65535, default: 0
#define TMC4331_DC_LSPTM_MASK                           0xFFFFFFFF // DC_LSPTM // [# clock cycles]
#define TMC4331_DC_LSPTM_SHIFT                          0 // min.: 0, max.: 2147483647, default: 0
#define TMC4331_VSTALL_LIMIT_MASK                       0xFFFFFF // VSTALL_LIMIT // Only above this limit [pps] an active stall leads to a stop on stall, if enabled
#define TMC4331_VSTALL_LIMIT_SHIFT                      0 // min.: 0, max.: 16777215, default: 0
#define TMC4331_POLLING_STATUS_MASK                     0xFFFFFFFF // COVER_LOW / POLLING_STATUS // DRV_STATUS response of TMC driver
#define TMC4331_POLLING_STATUS_SHIFT                    0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_COVER_LOW_MASK                          0xFFFFFFFF // COVER_LOW / POLLING_STATUS // Lower configuration bits of SPI orders
#define TMC4331_COVER_LOW_SHIFT                         0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_POLLING_STATUS_MASK                     0xFFFFFFFF // COVER_LOW / POLLING_STATUS // DRV_STATUS response of TMC driver
#define TMC4331_POLLING_STATUS_SHIFT                    0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_COVER_LOW_MASK                          0xFFFFFFFF // COVER_LOW / POLLING_STATUS // Value which sent in case abs(VACTUAL) crosses SPI_SWITCH_VEL downwards
#define TMC4331_COVER_LOW_SHIFT                         0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_POLLING_REG_GSTAT_MASK                  0xF0000000 // COVER_HIGH / POLLING_REG // TMC2130: GSTAT
#define TMC4331_POLLING_REG_GSTAT_SHIFT                 28 // min.: 0, max.: 7, default: 0
#define TMC4331_POLLING_REG_PWM_SCALE_MASK              0x0FF00000 // COVER_HIGH / POLLING_REG // TMC2130: PWM_SCALE
#define TMC4331_POLLING_REG_PWM_SCALE_SHIFT             20 // min.: 0, max.: 255, default: 0
#define TMC4331_POLLING_REG_LOST_STEPS_MASK             0xFFFFFFFF // COVER_HIGH / POLLING_REG // TMC2130: LOST_STEPS
#define TMC4331_POLLING_REG_LOST_STEPS_SHIFT            0 // min.: 0, max.: 1048575, default: 0
#define TMC4331_COVER_HIGH_MASK                         0xFFFFFFFF // COVER_HIGH / POLLING_REG // Upper configuration bits of SPI orders
#define TMC4331_COVER_HIGH_SHIFT                        0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_POLLING_REG_GSTAT_MASK                  0xF0000000 // COVER_HIGH / POLLING_REG // TMC2130: GSTAT
#define TMC4331_POLLING_REG_GSTAT_SHIFT                 28 // min.: 0, max.: 7, default: 0
#define TMC4331_POLLING_REG_PWM_SCALE_MASK              0x0FF00000 // COVER_HIGH / POLLING_REG // TMC2130: PWM_SCALE
#define TMC4331_POLLING_REG_PWM_SCALE_SHIFT             20 // min.: 0, max.: 255, default: 0
#define TMC4331_POLLING_REG_LOST_STEPS_MASK             0xFFFFFFFF // COVER_HIGH / POLLING_REG // TMC2130: LOST_STEPS
#define TMC4331_POLLING_REG_LOST_STEPS_SHIFT            0 // min.: 0, max.: 1048575, default: 0
#define TMC4331_COVER_HIGH_MASK                         0xFFFFFFFF // COVER_HIGH / POLLING_REG // Value which sent in case abs(VACTUAL) crosses SPI_SWITCH_VEL upwards
#define TMC4331_COVER_HIGH_SHIFT                        0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_COVER_DRV_LOW_MASK                      0xFFFFFFFF // COVER_DRV_LOW //
#define TMC4331_COVER_DRV_LOW_SHIFT                     0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_COVER_DRV_HIGH_MASK                     0xFFFFFFFF // COVER_DRV_HIGH //
#define TMC4331_COVER_DRV_HIGH_SHIFT                    0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_MSLUT_0_MASK                            0xFFFFFFFF // MSLUT[0] //
#define TMC4331_MSLUT_0_SHIFT                           0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_MSLUT_1_MASK                            0xFFFFFFFF // MSLUT[1] //
#define TMC4331_MSLUT_1_SHIFT                           0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_MSLUT_2_MASK                            0xFFFFFFFF // MSLUT[2] //
#define TMC4331_MSLUT_2_SHIFT                           0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_MSLUT_3_MASK                            0xFFFFFFFF // MSLUT[3] //
#define TMC4331_MSLUT_3_SHIFT                           0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_MSLUT_4_MASK                            0xFFFFFFFF // MSLUT[4] //
#define TMC4331_MSLUT_4_SHIFT                           0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_MSLUT_5_MASK                            0xFFFFFFFF // MSLUT[5] //
#define TMC4331_MSLUT_5_SHIFT                           0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_MSLUT_6_MASK                            0xFFFFFFFF // MSLUT[6] //
#define TMC4331_MSLUT_6_SHIFT                           0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_MSLUT_7_MASK                            0xFFFFFFFF // MSLUT[7] //
#define TMC4331_MSLUT_7_SHIFT                           0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_MSLUTSEL_MASK                           0xFFFFFFFF // MSLUTSEL //
#define TMC4331_MSLUTSEL_SHIFT                          0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_MSCNT_MASK                              0x03FF // MSCNT / MSOFFSET //
#define TMC4331_MSCNT_SHIFT                             0 // min.: 0, max.: 1023, default: 0
#define TMC4331_MSOFFSET_MASK                           0x03FF // MSCNT / MSOFFSET // Microstep offset for PWM mode
#define TMC4331_MSOFFSET_SHIFT                          0 // min.: 0, max.: 1023, default: 0
#define TMC4331_CURRENTA_MASK                           0x01FF // CURRENTA/B // coilA
#define TMC4331_CURRENTA_SHIFT                          0 // min.: -256, max.: 255, default: 0
#define TMC4331_CURRENTB_MASK                           0x01FF0000 // CURRENTA/B // coilB
#define TMC4331_CURRENTB_SHIFT                          16 // min.: -256, max.: 255, default: 0
#define TMC4331_CURRENTA_SPI_MASK                       0x01FF // CURRENTA/B_SPI / TZEROWAIT // coilA
#define TMC4331_CURRENTA_SPI_SHIFT                      0 // min.: -256, max.: 255, default: 0
#define TMC4331_CURRENTB_SPI_MASK                       0x01FF0000 // CURRENTA/B_SPI / TZEROWAIT // coilB
#define TMC4331_CURRENTB_SPI_SHIFT                      16 // min.: -256, max.: 255, default: 0
#define TMC4331_TZEROWAIT_MASK                          0xFFFFFFFF // CURRENTA/B_SPI / TZEROWAIT // Standstill phase after reaching v=0
#define TMC4331_TZEROWAIT_SHIFT                         0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_SCALE_PARAM_MASK                        0x01FF // SCALE_PARAM / CIRCULAR_DEC //
#define TMC4331_SCALE_PARAM_SHIFT                       0 // min.: 0, max.: 511, default: 0
#define TMC4331_CIRCULAR_DEC_MASK                       0xFFFFFFFF // SCALE_PARAM / CIRCULAR_DEC // if one revolution is not exactly mapped to an even number of µSteps per revolution
#define TMC4331_CIRCULAR_DEC_SHIFT                      0 // min.: 0, max.: 4294967295, default: 0
#define TMC4331_START_SIN_MASK                          0xFF // START_SIN... / DAC_OFFSET // Start value for sine waveform
#define TMC4331_START_SIN_SHIFT                         0 // min.: 0, max.: 255, default: 0
#define TMC4331_START_SIN90_120_MASK                    0xFF0000 // START_SIN... / DAC_OFFSET // Start value for cosine waveform
#define TMC4331_START_SIN90_120_SHIFT                   16 // min.: 0, max.: 255, default: 0
#define TMC4331_DAC_OFFSET_MASK                         0xFF000000 // START_SIN... / DAC_OFFSET //
#define TMC4331_DAC_OFFSET_SHIFT                        24 // min.: 0, max.: 255, default: 0
#define TMC4331_DAC_OFFSET_MASK                         0xFF000000 // START_SIN... / DAC_OFFSET //
#define TMC4331_DAC_OFFSET_SHIFT                        24 // min.: -128, max.: 127, default: 0
#define TMC4331_VERSION_NO_MASK                         0x0F // VERSION_NO //
#define TMC4331_VERSION_NO_SHIFT                        0 // min.: 0, max.: 15, default: 0

#endif /* TMC4331_FIELDS_H */
