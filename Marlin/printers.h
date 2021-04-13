// QC Co-Lab Ender 3 (#1)
#ifdef LAB_ENDER_1
  #define CUSTOM_MACHINE_NAME "Ender-3Pro (1)"
  #define MACHINE_UUID "20d18e38-8607-4ee9-9abd-c24427ad16da"
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
  #define BLTOUCH
  #define NOZZLE_TO_PROBE_OFFSET { -43, -8, -2.77 }
  #define IS_CE3_PRO
  #define IS_SKR_MINI
  #define FILAMENT_RUNOUT_SENSOR
  //#define SDSUPPORT
#endif

// QC Co-Lab Ender 3 (#2)
#ifdef LAB_ENDER_2
  #ifdef CUSTOM_MACHINE_NAME
    #error You can only define one printer at a time
  #endif
  #define CUSTOM_MACHINE_NAME "Ender-3Pro (2)"
  #define MACHINE_UUID "bc2921b4-00b8-4113-85f3-b5288d0f6303"
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
  #define BLTOUCH
  #define NOZZLE_TO_PROBE_OFFSET { -43, -8, -2.250 }
  #define IS_CE3_PRO
  #define IS_SKR_MINI
  #define FILAMENT_RUNOUT_SENSOR
  //#define SDSUPPORT
#endif

// QC Co-Lab Ender 3 (#3)
#ifdef LAB_ENDER_3
  #ifdef CUSTOM_MACHINE_NAME
    #error You can only define one printer at a time
  #endif
  #define CUSTOM_MACHINE_NAME "Ender-3Pro (3)"
  #define MACHINE_UUID "abd439ed-5d0b-4565-8515-7358103c0c7d"
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
  #define BLTOUCH
  #define NOZZLE_TO_PROBE_OFFSET { -43, -8, -2.025 }
  #define IS_CE3_PRO
  #define IS_SKR_MINI
  #define FILAMENT_RUNOUT_SENSOR
#endif

// Brian Schultz
#ifdef BRIAN_ENDER_3
  #ifdef CUSTOM_MACHINE_NAME
    #error You can only define one printer at a time
  #endif
  #define CUSTOM_MACHINE_NAME "Ender-3 Pro"
  #define MACHINE_UUID "7d24371e-f94d-411f-8175-c4242e104d61"
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
  #define BLTOUCH
  #define NOZZLE_TO_PROBE_OFFSET { -43, -8, -1.630 }
  #define IS_CE3_PRO
  #define AUTO_BED_LEVELING_BILINEAR
  //#define SDSUPPORT
#endif

// Brendon Telman
#ifdef BRENDON_ENDER_3
  #ifdef CUSTOM_MACHINE_NAME
    #error You can only define one printer at a time
  #endif
  #define CUSTOM_MACHINE_NAME "Ender-3 Pro"
  #define MACHINE_UUID "7d096e07-5805-4b25-a628-0e029acbe162"
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 80.47 }
  //#define BLTOUCH
  #define NOZZLE_TO_PROBE_OFFSET { -43, -8, -1.630 }
  #define Z_HOMING_HEIGHT 2
  #define SDSUPPORT
#endif

// Ryan Weekly
#ifdef RYAN_ENDER_3
  #ifdef CUSTOM_MACHINE_NAME
    #error You can only define one printer at a time
  #endif
  #define CUSTOM_MACHINE_NAME "Ender-3"
  #define MACHINE_UUID "959dc340-1f4b-47f2-ab20-07d5ee03d233"
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
  #define BLTOUCH
  #define NOZZLE_TO_PROBE_OFFSET { -43, -8, -2.630 }
  #undef ARC_SUPPORT
  #define SDSUPPORT
  #define PRINTCOUNTER
#endif

// Noah Berkland
#ifdef NOAH_ENDER_3
  #ifdef CUSTOM_MACHINE_NAME
    #error You can only define one printer at a time
  #endif
  #define CUSTOM_MACHINE_NAME "Ender-3 Pro"
  #define MACHINE_UUID "959dc340-1f4b-47f2-ab20-07d5ee03d233"
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
  //#define NOZZLE_TO_PROBE_OFFSET { -43, -8, -1.630 }
  #define Z_HOMING_HEIGHT 2
  #define IS_CE3_PRO
  #define SDSUPPORT
  #define PRINTCOUNTER
#endif




// Don't change anything below this line //

#ifdef BLTOUCH
  #define Z_SAFE_HOMING
  #ifdef IS_SKR_MINI
    #define SERVO0_PIN PA1
  #else
    #define SERVO0_PIN 27
  #endif
  #define BLTOUCH_DELAY 500   // (ms) Enable and increase if needed
  #define AUTO_BED_LEVELING_BILINEAR
#endif

#ifdef IS_SKR_MINI
  #define MOTHERBOARD BOARD_BTT_SKR_MINI_E3_V2_0
  #define BINARY_FILE_TRANSFER
  #define SDSUPPORT
  #define SERIAL_PORT -1
  #define SERIAL_PORT_2 2
  #ifdef FILAMENT_RUNOUT_SENSOR
    #define ADVANCED_PAUSE_FEATURE
    #define NOZZLE_PARK_FEATURE
    #define ADVANCED_PAUSE_FEATURE
    #define FILAMENT_RUNOUT_DISTANCE_MM 8
    #define FILAMENT_MOTION_SENSOR
  #endif
  #define USE_CONTROLLER_FAN
  #define X_DRIVER_TYPE  TMC2209
  #define Y_DRIVER_TYPE  TMC2209
  #define Z_DRIVER_TYPE  TMC2209
  #define E0_DRIVER_TYPE TMC2209
  #define  X_SLAVE_ADDRESS 0
  #define  Y_SLAVE_ADDRESS 2
  #define  Z_SLAVE_ADDRESS 1
  #define E0_SLAVE_ADDRESS 3
#endif