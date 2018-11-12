#ifndef PINS_H
#define PINS_H

#define X_MS1_PIN -1
#define X_MS2_PIN -1
#define Y_MS1_PIN -1
#define Y_MS2_PIN -1
#define Z_MS1_PIN -1
#define Z_MS2_PIN -1
#define E0_MS1_PIN -1
#define E0_MS2_PIN -1
#define E1_MS1_PIN -1
#define E1_MS2_PIN -1
#define DIGIPOTSS_PIN -1

	#define KNOWN_BOARD 1
	#define RAMPS_V_1_3
	  #define LARGE_FLASH true

	    #define X_STEP_PIN         54
	    #define X_DIR_PIN          55
	    #define X_ENABLE_PIN       38
	    #define X_MIN_PIN           3
	    #define X_MAX_PIN           2
	
	    #define Y_STEP_PIN         60
	    #define Y_DIR_PIN          61
	    #define Y_ENABLE_PIN       56
	    #define Y_MIN_PIN          14
	    #define Y_MAX_PIN          15
	
	    #define Z_STEP_PIN         46
	    #define Z_DIR_PIN          48
	    #define Z_ENABLE_PIN       62
	    #define Z_MIN_PIN          18
	    #define Z_MAX_PIN          19
	
	    #define Y2_STEP_PIN        36
	    #define Y2_DIR_PIN         34
	    #define Y2_ENABLE_PIN      30
	
	    #define Z2_STEP_PIN        36
	    #define Z2_DIR_PIN         34
	    #define Z2_ENABLE_PIN      30
	
	    #define E0_STEP_PIN        26
	    #define E0_DIR_PIN         28
	    #define E0_ENABLE_PIN      24
	
	    #define E1_STEP_PIN        36
	    #define E1_DIR_PIN         34
	    #define E1_ENABLE_PIN      30
	
	    #define SDPOWER            -1	 //<-- oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
	    #define SDSS               53	 //<-- oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
	    #define LED_PIN            13	 //<-- oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo

	    #define FAN_PIN            9 // (Sprinter config)	 //<-- oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo

	    #define KILL_PIN           41	 //<-- oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
	  #define PS_ON_PIN          -1 // Default disabled for Sharebot

	    #define HEATER_0_PIN       10   // EXTRUDER 1	 //<-- oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
	    #define HEATER_1_PIN       9    // EXTRUDER 2 (FAN On Sprinter)	 //<-- ooooooooooooooooooooooooooooooooooooooooooo
	  #define HEATER_2_PIN       -1 	 //<-- oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
	  #define TEMP_0_PIN         13   // ANALOG NUMBERING     <-- oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
	  #define TEMP_1_PIN         15   // ANALOG NUMBERING	 //<-- oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
	    #define TEMP_2_PIN         -1   // ANALOG NUMBERING	 //<-- oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo
	      #define HEATER_BED_PIN     8    // BED   <-- ooooooooooooooooooooooooooooooooooooooooooooooooooooo   
	  #define TEMP_BED_PIN       14   // ANALOG NUMBERING <-- oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo

//--------------------------------------------------------------
// LCD

	      #define LCD_PINS_RS 16 
	      #define LCD_PINS_ENABLE 17
	      #define LCD_PINS_D4 23
	      #define LCD_PINS_D5 25 
	      #define LCD_PINS_D6 27
	      #define LCD_PINS_D7 29
	
	        #define BEEPER 37
	
	        #define BTN_EN1 31
	        #define BTN_EN2 33
	        #define BTN_ENC 35
	
	        #define SDCARDDETECT 49

#ifndef SDSUPPORT
// these pins are defined in the SD library if building with SD support  
  #define MAX_SCK_PIN          52
  #define MAX_MISO_PIN         50
  #define MAX_MOSI_PIN         51
  #define MAX6675_SS       53
#else
  #define MAX6675_SS       49
#endif





//List of pins which to ignore when asked to change by gcode, 0 and 1 are RX and TX, do not mess with those!

	#define _E0_PINS E0_STEP_PIN, E0_DIR_PIN, E0_ENABLE_PIN, HEATER_0_PIN,
		#if EXTRUDERS > 1
		  #define _E1_PINS E1_STEP_PIN, E1_DIR_PIN, E1_ENABLE_PIN, HEATER_1_PIN,
		#else
		  #define _E1_PINS
		#endif
		#if EXTRUDERS > 2
		  #define _E2_PINS E2_STEP_PIN, E2_DIR_PIN, E2_ENABLE_PIN, HEATER_2_PIN,
		#else
		  #define _E2_PINS
		#endif
		
		#ifdef X_STOP_PIN
		  #if X_HOME_DIR < 0
		    #define X_MIN_PIN X_STOP_PIN
		    #define X_MAX_PIN -1
		  #else
		    #define X_MIN_PIN -1
		    #define X_MAX_PIN X_STOP_PIN
		  #endif
		#endif

		#ifdef Y_STOP_PIN
		  #if Y_HOME_DIR < 0
		    #define Y_MIN_PIN Y_STOP_PIN
		    #define Y_MAX_PIN -1
		  #else
		    #define Y_MIN_PIN -1
		    #define Y_MAX_PIN Y_STOP_PIN
		  #endif
		#endif
		
		#ifdef Z_STOP_PIN
		  #if Z_HOME_DIR < 0
		    #define Z_MIN_PIN Z_STOP_PIN
		    #define Z_MAX_PIN -1
		  #else
		    #define Z_MIN_PIN -1
		    #define Z_MAX_PIN Z_STOP_PIN
		  #endif
		#endif
		
		#ifdef DISABLE_MAX_ENDSTOPS
		  #define X_MAX_PIN          -1
		  #define Y_MAX_PIN          -1
		  #define Z_MAX_PIN          -1
		#endif
		
		#ifdef DISABLE_MIN_ENDSTOPS
		  #define X_MIN_PIN          -1
		  #define Y_MIN_PIN          -1
		  #define Z_MIN_PIN          -1
		#endif

#define SENSITIVE_PINS {0, 1, X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN, X_MIN_PIN, X_MAX_PIN, Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN, Y_MIN_PIN, Y_MAX_PIN, 
							Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN, Z_MIN_PIN, Z_MAX_PIN, 
							PS_ON_PIN, HEATER_BED_PIN, FAN_PIN,
							_E0_PINS _E1_PINS _E2_PINS 
							analogInputToDigitalPin(TEMP_0_PIN), 
							analogInputToDigitalPin(TEMP_1_PIN), 
							analogInputToDigitalPin(TEMP_2_PIN), 
							analogInputToDigitalPin(TEMP_BED_PIN) }
#endif