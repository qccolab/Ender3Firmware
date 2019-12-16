// QC Co-Lab Ender 3 (#1)
#ifdef LAB_ENDER_1
  #define CUSTOM_MACHINE_NAME "Ender-3Pro (1)"
  #define MACHINE_UUID "20d18e38-8607-4ee9-9abd-c24427ad16da"
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
  #define BLTOUCH
  #define NOZZLE_TO_PROBE_OFFSET { -43, -8, -2.400 }
  #define AUTO_BED_LEVELING_BILINEAR
  //#define SDSUPPORT
  #if ANY(LAB_ENDER_2,LAB_ENDER_3)
    #error You can only define one LAB_ENDER_# printer at a time
  #endif
#endif

// QC Co-Lab Ender 3 (#2)
#ifdef LAB_ENDER_2
  #define CUSTOM_MACHINE_NAME "Ender-3Pro (2)"
  #define MACHINE_UUID "bc2921b4-00b8-4113-85f3-b5288d0f6303"
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 86.51 }
  #define BLTOUCH
  #define NOZZLE_TO_PROBE_OFFSET { -43, -8, -1.850 }
  #define AUTO_BED_LEVELING_BILINEAR
  //#define SDSUPPORT
  #if ANY(LAB_ENDER_1,LAB_ENDER_3)
    #error You can only define one LAB_ENDER_# printer at a time
  #endif
#endif

// QC Co-Lab Ender 3 (#3)
#ifdef LAB_ENDER_3
  #define CUSTOM_MACHINE_NAME "Ender-3Pro (3)"
  #define MACHINE_UUID "abd439ed-5d0b-4565-8515-7358103c0c7d"
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
  #define BLTOUCH
  #define NOZZLE_TO_PROBE_OFFSET { -43, -8, -1.630 }
  #define AUTO_BED_LEVELING_BILINEAR
  //#define SDSUPPORT
  #if ANY(LAB_ENDER_1,LAB_ENDER_2)
    #error You can only define one LAB_ENDER_# printer at a time
  #endif
#endif

// Brian Schultz
#ifdef BRIAN_ENDER_3
  #define CUSTOM_MACHINE_NAME "Ender-3 Pro"
  #define MACHINE_UUID "7d24371e-f94d-411f-8175-c4242e104d61"
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
  #define BLTOUCH
  #define NOZZLE_TO_PROBE_OFFSET { -43, -8, -1.630 }
  #define AUTO_BED_LEVELING_BILINEAR
  //#define SDSUPPORT
  #if ANY(LAB_ENDER_1,LAB_ENDER_2)
    #error You can only define one LAB_ENDER_# printer at a time
  #endif
#endif

// Brendon Telman
#ifdef BRENDON_ENDER_3
  #define CUSTOM_MACHINE_NAME "Ender-3 Pro"
  #define MACHINE_UUID "7d096e07-5805-4b25-a628-0e029acbe162"
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 80.47 }
  //#define BLTOUCH
  #define NOZZLE_TO_PROBE_OFFSET { -43, -8, -1.630 }
  #define SDSUPPORT
  #if ANY(LAB_ENDER_1,LAB_ENDER_2)
    #error You can only define one LAB_ENDER_# printer at a time
  #endif
#endif

// Ryan Weekly
#ifdef RYAN_ENDER_3
  #define CUSTOM_MACHINE_NAME "Ender-3"
  #define MACHINE_UUID "7d096e07-5805-4b25-a628-0e029acbe162"
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
  //#define BLTOUCH
  #define NOZZLE_TO_PROBE_OFFSET { -43, -8, -1.630 }
  #define SDSUPPORT
  #if ANY(LAB_ENDER_1,LAB_ENDER_2)
    #error You can only define one LAB_ENDER_# printer at a time
  #endif
#endif
