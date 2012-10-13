#ifndef __CONFIGURATION_H
#define __CONFIGURATION_H
#define STRING_VERSION_CONFIG_H "Marlin-Tue, 4 Sep 2012 08:20:27 +0200 - abf0693e8e970311cfb66244bb622b092c3fe603"
#define STRING_CONFIG_H_AUTHOR "Build-Me-Marlin"
#define BAUDRATE 250000
#define __ARDUINO_NR__ 4
#define EXTRUDERS 1
<<<<<<< HEAD
#define MINIMUM_PLANNER_SPEED 0.05
#define MOTHERBOARD 7
=======

// Frequency limit
// See nophead's blog for more info
// Not working O
//#define XY_FREQUENCY_LIMIT  15

// Minimum planner junction speed. Sets the default minimum speed the planner plans for at the end
// of the buffer and all stops. This should not be much greater than zero and should only be changed
// if unwanted behavior is observed on a user's machine when running at very slow speeds.
#define MINIMUM_PLANNER_SPEED 2.0 // (mm/sec)

// BASIC SETTINGS: select your board type, thermistor type, axis scaling, and endstop configuration

//// The following define selects which electronics board you have. Please choose the one that matches your setup
// MEGA/RAMPS up to 1.2 = 3,
// RAMPS 1.3 = 33
// Gen6 = 5,
// Sanguinololu 1.2 and above = 62
// Ultimaker = 7,
// Teensylu = 8
#define MOTHERBOARD 33

//===========================================================================
//=============================Thermal Settings  ============================
//===========================================================================

//// Thermistor settings:
// 1 is 100k thermistor
// 2 is 200k thermistor
// 3 is mendel-parts thermistor
// 4 is 10k thermistor
// 5 is ParCan supplied 104GT-2 100K
// 6 is EPCOS 100k
// 7 is 100k Honeywell thermistor 135-104LAG-J01

//#define THERMISTORHEATER_0 3
//#define THERMISTORHEATER_1 1
//#define THERMISTORHEATER_2 1

//#define HEATER_0_USES_THERMISTOR
//#define HEATER_1_USES_THERMISTOR
//#define HEATER_2_USES_THERMISTOR
>>>>>>> origin/origin/Marlin_v1
#define HEATER_0_USES_AD595
#define HEATER_0_MINTEMP 5
#define HEATER_0_MAXTEMP 275
#define BED_CHECK_INTERVAL 5000
#define TEMP_RESIDENCY_TIME 10
#define TEMP_HYSTERESIS 3
#define TEMP_WINDOW 1
#define TEMP_SENSOR_AD595_OFFSET 0.000000
#define TEMP_SENSOR_AD595_GAIN   1.000000
#define CooldownNoWait true
#define HEATING_EARLY_FINISH_DEG_OFFSET 1
#define PIDTEMP
#define PID_MAX 255
#define PID_INTEGRAL_DRIVE_MAX 255
#define K1 0.95
#define PID_dT 0.128
#define PID_PID
#define  DEFAULT_Kp 22.2
#define  DEFAULT_Ki 1.08
#define  DEFAULT_Kd 114
#define PID_ADD_EXTRUSION_RATE
#define  DEFAULT_Kc (1)
#define ENDSTOPPULLUPS
#define ENDSTOPPULLUP_XMAX
#define ENDSTOPPULLUP_YMAX
#define ENDSTOPPULLUP_ZMAX
#define ENDSTOPPULLUP_XMIN
#define ENDSTOPPULLUP_YMIN
#define ENDSTOPPULLUP_ZMIN
const bool X_ENDSTOPS_INVERTING = true;
const bool Y_ENDSTOPS_INVERTING = true;
const bool Z_ENDSTOPS_INVERTING = true;
#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define E_ENABLE_ON 0
#define DISABLE_X false
#define DISABLE_Y false
#define DISABLE_Z false
#define DISABLE_E false
#define INVERT_X_DIR true
#define INVERT_Y_DIR false
#define INVERT_Z_DIR true
#define INVERT_E0_DIR false
#define INVERT_E1_DIR false
#define INVERT_E2_DIR false
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1
#define min_software_endstops false
#define max_software_endstops false
#define X_MAX_POS 205
#define X_MIN_POS 0
#define Y_MAX_POS 205
#define Y_MIN_POS 0
#define Z_MAX_POS 200
#define Z_MIN_POS 0
#define X_MAX_LENGTH (X_MAX_POS - X_MIN_POS)
#define Y_MAX_LENGTH (Y_MAX_POS - Y_MIN_POS)
#define Z_MAX_LENGTH (Z_MAX_POS - Z_MIN_POS)
#define X_HOME_POS 0
#define Y_HOME_POS 0
#define Z_HOME_POS 0
#define NUM_AXIS 4
#define HOMING_FEEDRATE {50*60, 50*60, 4*60, 0}
#define X_HOME_RETRACT_MM 5
#define Y_HOME_RETRACT_MM 5
#define Z_HOME_RETRACT_MM 1
#define QUICK_HOME
#define AXIS_RELATIVE_MODES {false, false, false, false}
#define MAX_STEP_FREQUENCY 40000
#define DEFAULT_AXIS_STEPS_PER_UNIT   {78.7402,78.7402,533.333333333,865.888}
#define DEFAULT_MAX_FEEDRATE          {250, 250, 5, 45}
#define DEFAULT_MAX_ACCELERATION      {9000,9000,100,10000}
#define DEFAULT_ACCELERATION          3000
#define DEFAULT_RETRACT_ACCELERATION  3000
#define DEFAULT_MINIMUMFEEDRATE       0.0
#define DEFAULT_MINTRAVELFEEDRATE     0.0
#define DEFAULT_MINSEGMENTTIME        20000
#define DEFAULT_XYJERK                20.0
#define DEFAULT_ZJERK                 0.4
#define DEFAULT_EJERK                 5.0
#define SLOWDOWN
#define DEFAULT_STEPPER_DEACTIVE_TIME 60
#define DEFAULT_STEPPER_DEACTIVE_COMMAND "M84 X Y E"
#define EEPROM_SETTINGS
#define EEPROM_CHITCHAT
<<<<<<< HEAD
#define SDSUPPORT
#define SD_FINISHED_STEPPERRELEASE true
#define SD_FINISHED_RELEASECOMMAND "M84 X Y E"
#define ULTIPANEL
#define NEWPANEL
#define ULTIMAKERCONTROLLER
#define ULTRA_LCD
#define LCD_WIDTH 20
#define LCD_HEIGHT 4
#define PLA_PREHEAT_HOTEND_TEMP 180
#define PLA_PREHEAT_HPB_TEMP 70
#define PLA_PREHEAT_FAN_SPEED 255
#define ABS_PREHEAT_HOTEND_TEMP 240
#define ABS_PREHEAT_HPB_TEMP 100
#define ABS_PREHEAT_FAN_SPEED 255
=======


// The hardware watchdog should halt the Microcontroller, in case the firmware gets stuck somewhere. However:
// the Watchdog is not working well, so please only enable this for testing
// this enables the watchdog interrupt.
//#define USE_WATCHDOG
//#ifdef USE_WATCHDOG
  // you cannot reboot on a mega2560 due to a bug in he bootloader. Hence, you have to reset manually, and this is done hereby:
//#define RESET_MANUAL
//#define WATCHDOG_TIMEOUT 4  //seconds
//#endif

// extruder advance constant (s2/mm3)
//
// advance (steps) = STEPS_PER_CUBIC_MM_E * EXTUDER_ADVANCE_K * cubic mm per second ^ 2
//
// hooke's law says:		force = k * distance
// bernoulli's priniciple says:	v ^ 2 / 2 + g . h + pressure / density = constant
// so: v ^ 2 is proportional to number of steps we advance the extruder
#define ADVANCE

#ifdef ADVANCE
  #define EXTRUDER_ADVANCE_K .0

  #define D_FILAMENT 2.85
  #define STEPS_MM_E 836
  #define EXTRUTION_AREA (0.25 * D_FILAMENT * D_FILAMENT * 3.14159)
  #define STEPS_PER_CUBIC_MM_E (axis_steps_per_unit[E_AXIS]/ EXTRUTION_AREA)

#endif // ADVANCE


//LCD and SD support
//#define ULTRA_LCD  //general lcd support, also 16x2
//#define SDSUPPORT // Enable SD Card Support in Hardware Console
#define SD_FINISHED_STEPPERRELEASE true  //if sd support and the file is finished: disable steppers?
#define SD_FINISHED_RELEASECOMMAND "M84 X Y E" // no z because of layer shift.

//#define ULTIPANEL
#ifdef ULTIPANEL
  //#define NEWPANEL  //enable this if you have a click-encoder panel
  #define SDSUPPORT
  #define ULTRA_LCD
  #define LCD_WIDTH 20
  #define LCD_HEIGHT 4
#else //no panel but just lcd 
  #ifdef ULTRA_LCD
    #define LCD_WIDTH 16
    #define LCD_HEIGHT 2
  #endif
#endif

// A debugging feature to compare calculated vs performed steps, to see if steps are lost by the software.
//#define DEBUG_STEPS


// Arc interpretation settings:
>>>>>>> origin/origin/Marlin_v1
#define MM_PER_ARC_SEGMENT 1
#define N_ARC_CORRECTION 25
#define PREVENT_DANGEROUS_EXTRUDE
#define PREVENT_LENGTHY_EXTRUDE
#define EXTRUDE_MINTEMP 170
#define EXTRUDE_MAXLENGTH (X_MAX_LENGTH+Y_MAX_LENGTH)
const int dropsegments=5;
#define FAST_PWM_FAN
#define BLOCK_BUFFER_SIZE 16
#define MAX_CMD_SIZE 96
#define BUFSIZE 4
#define INVERT_X_STEP_PIN false
#define INVERT_Y_STEP_PIN false
#define INVERT_Z_STEP_PIN false
#define INVERT_E_STEP_PIN false
#include "thermistortables.h"
#endif //__CONFIGURATION_H
