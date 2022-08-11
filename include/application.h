/**
 * @file application.h
 * @author Jean Mercier profjmer@gmail.com
 * @brief headers de application.cpp, le fichier de démarrage.
 * architecture jmObjean_2023
 * @version 1.0
 */
#ifndef INCLUDE_APPLICATION_H_
#define INCLUDE_APPLICATION_H_
	#define version_app "jmDASHmin_A2023"

	#include <SmingCore/SmingCore.h>
	#include <WString.h>
	#include <stdio.h>
	#include "../include/config_.h"	
	#include "../include/pin_.h"	

	#ifdef config_ow
		#include <Libraries/OneWire/OneWire.h>
	#endif
	#ifdef config_ds1820
		#include "../include/ds18s20.h"
	#endif
	#ifdef config_dht22	
		#include "../include/dht22_.h"
	#endif	
	#ifdef config_adc
		#include "../include/adc_.h"
	#endif	
	#ifdef config_param
   		#include "../include/param_.h"
	#endif
	#ifdef config_bme280	
		#include "../include/bme280_.h"	
	#endif
	#ifdef config_gpio	
		#include "../include/gpio_.h"
	#endif
	#ifdef config_i2c	
		#include "../include/i2c_.h"
	#endif
	#ifdef config_oled	
		#include "../include/oled_.h"
	#endif
	#ifdef config_ota		
		#include "../include/ota_.h"
	#endif
	#ifdef config_power	
		#include "../include/power_.h"
	#endif
	#ifdef config_pulse		
		#include "../include/pulse_.h"	
	#endif
	#ifdef config_routeur	
		#include "../include/routeur_.h"
	#endif
	#ifdef config_rtc		
		#include "../include/rtc_.h"	
	#endif
	#ifdef config_station	
		#include "../include/station_.h"
	#endif
	#ifdef config_timers	
		#include "../include/timers_.h"	
	#endif
	#ifdef config_spi		
		#include "../include/spi_.h"	
	#endif
	#ifdef config_tft	
		#include "../include/tft_.h"
	#endif
	#ifdef config_uart		
		#include "../include/uart_.h"
	#endif
	#ifdef config_udp	
		#include "../include/udp_.h"	
	#endif
	#ifdef config_web	
		#include "../include/web_.h"
	#endif
	#ifdef config_fur	
		#include "../include/fur_.h"
	#endif

#endif /* INCLUDE_APPLICATION_H_ */