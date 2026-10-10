//motor_runtime_param.h
#pragma once
#include "conf.h"
#define rotor_phy_angle (encoder_angle - rotor_zero_angle)     // Rotor physical angle
#define rotor_logic_angle (rotor_phy_angle * POLE_PAIRS)       // Rotor electrical multi-turn angle
extern float motor_i_u;
extern float motor_i_v;
extern float motor_i_d;
extern float motor_i_q;
extern float motor_speed;
extern float motor_logic_angle; // Motor multi-turn electrical angle
extern float encoder_angle;     // Raw angle read from encoder
extern float rotor_zero_angle;  // Encoder angle when rotor d-axis aligns with stator d-axis
