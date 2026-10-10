#pragma once
// Motor physical parameters:
#define POLE_PAIRS 7                    // Pole pairs
// Circuit parameters:
#define R_SHUNT 0.02                    // Current shunt resistor, unit: Ohm
#define OP_GAIN 50                      // Op-amp gain
#define MAX_CURRENT 2                   // Maximum q-axis current, unit: A
#define ADC_REFERENCE_VOLT 3.3          // ADC reference voltage for current sampling, unit: V
#define ADC_BITS 12                     // ADC resolution, unit: bit
// MCU configuration parameters:
#define motor_pwm_freq 20000            // PWM frequency of driver bridge, unit: Hz
#define motor_speed_calc_freq 1000      // Open-loop control update frequency, unit: Hz

// Open-loop startup values; tune gradually while monitoring motor current and temperature.
#define OPEN_LOOP_ALIGN_TIME_MS 500U
#define OPEN_LOOP_BLEND_TIME_MS 500U
#define OPEN_LOOP_ALIGN_D 0.30f
#define OPEN_LOOP_START_Q 0.30f
#define OPEN_LOOP_TARGET_Q 0.40f
#define OPEN_LOOP_Q_RAMP_PER_SEC 0.10f
#define OPEN_LOOP_TARGET_ELECTRICAL_HZ 2.0f
#define OPEN_LOOP_FREQ_RAMP_HZ_PER_SEC 1.0f

#define OPEN_LOOP_ALIGN_TICKS ((motor_speed_calc_freq * OPEN_LOOP_ALIGN_TIME_MS) / 1000U)
#define OPEN_LOOP_BLEND_TICKS ((motor_speed_calc_freq * OPEN_LOOP_BLEND_TIME_MS) / 1000U)
// Software parameters:
#define position_cycle (6 * 3.14159265358979) // Multi-turn position cycle, sum of positive and negative half cycles
