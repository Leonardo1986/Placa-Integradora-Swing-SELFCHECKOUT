#ifndef VERSION_H_
#define VERSION_H_

#include "sw_config.h"

// Selfcheckout é um projeto separado
#define SELFCHECKOUT 1
//#define EVO		 2
//#define SLIM       3
//#define CLASSIC    4
//#define COMPACT    5

#if(SW_OPERATION_CUSTOM_MODE == SW_OPERATION_CUSTOM_TENDA)
	#define MODE_OPERATION   SW_OPERATION_CUSTOM_TENDA
	#warning "Modo de funcionamento com tempos reduzidos TENDA"
#else
	#define MODE_OPERATION   SW_OPERATION_PADRAO
	#warning "Modo de funcionamento PADRÃO"
#endif

#define FIRMWARE_VERSION_MAJOR SELFCHECKOUT   // Especifica PRODUTO
#define FIRMWARE_VERSION_MINOR MODE_OPERATION // Especifica alguma customização
#define FIRMWARE_VERSION_PATCH 10

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define FIRMWARE_VERSION_STRING STR(FIRMWARE_VERSION_MAJOR) "." \
                                STR(FIRMWARE_VERSION_MINOR) "." \
                                STR(FIRMWARE_VERSION_PATCH)

#define WARNING_MESSAGE "Versão do Firmware: " FIRMWARE_VERSION_STRING

#pragma message(WARNING_MESSAGE)
// Console '#pragma message: VersÃ£o do Firmware: 1.1.10'

#endif /* VERSION_H_ */
