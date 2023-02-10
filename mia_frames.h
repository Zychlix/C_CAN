#pragma once
#include "stdint.h"

#define MIA_EGV_CMD_ID = 0x301;

typedef struct MIA_EGV_CMD_VAR
{
    int16_t discharge_current;  //INVOLVE MAX CURRENT!
    int16_t regen_current;
    uint16_t max_torque_ratio;
    uint16_t motor_fan_cmd;
} MIA_EGV_CMD_VAR_T;

typedef struct MIA_EGV_ACCEL_VAR
{
    uint16_t accel_set_point; //0-255
    uint16_t regen;             // 0
    int forward : 1;
    int reverse : 1;
    int footbrake : 1;
    int drivebility_select_1 :1;
    int fs :1;
    int drivebility_select_2 :1;
    int unused :1;
} MIA_EGV_ACCEL_VAR_T;