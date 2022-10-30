#include <iostream>

#include "stdio.h"
#include "stdint.h"

//
//typedef union {
//	struct
//	{
//		uint8_t WakeUpRTC	: 1;                    //!< Get out of sleep mode if wakeup signal received from RTC
//		uint8_t Reset		: 1;
//		uint8_t WarmStart	: 1;
//		uint8_t Reserved	: 5;
//	}Fields;
//	uint8_t Value;
//}typdef_unionSleepParams_t;
//
//
//void takeUnionFromUint8t(uint8_t* value)
//{
//
//	printf("%X \n", *value);
//
//}

//#ifndef RADIO_OUTPUTPOWER_22DBM		/* Value in SetTxParams -> 22dB */
//#define	RADIO_OUTPUTPOWER_22DBM		\
//		{                                 \
//			.paDutyCycle	=	()0x04  ,       \
//			.hpMax			=	0x07  ,       \
//			.deviceSel		=	0x00  ,       \
//			.paLut			=	0x01  ,       \
//		}
//#endif
//
//#ifndef RADIO_OUTPUTPOWER_20DBM		/* Value in SetTxParams -> 22dB */
//#define	RADIO_OUTPUTPOWER_20DBM		\
//		{                                 \
//			.paDutyCycle	 =	0x03  ,       \
//			.hpMax				 =	0x05  ,       \
//			.deviceSel     =	0x00  ,       \
//			.paLut         =	0x01  ,       \
//		}
//#endif
//
//#ifndef RADIO_OUTPUTPOWER_17DBM		/* Value in SetTxParams -> 22dB */
//#define	RADIO_OUTPUTPOWER_17DBM		\
//		{                                 \
//			.paDutyCycle	 =	0x02  ,       \
//			.hpMax				 =	0x03  ,       \
//			.deviceSel     =	0x00  ,       \
//			.paLut         =	0x01  ,       \
//		}
//#endif
//
//#ifndef RADIO_OUTPUTPOWER_14DBM		/* Value in SetTxParams -> 22dB */
//#define	RADIO_OUTPUTPOWER_14DBM		\
//		{                                 \
//			.paDutyCycle	 =	0x02  ,       \
//			.hpMax				 =	0x02  ,       \
//			.deviceSel     =	0x00  ,       \
//			.paLut         =	0x01  ,       \
//		}
//#endif

//@INFO: Power Amplifier ayarlarinin yapilacagi Opcommand Struct
typedef struct
{
	uint8_t paDutyCycle;
	uint8_t hpMax;
	uint8_t	deviceSel;
	uint8_t	paLut;
}RadioPaCommand_t;


int main()
{
	//typdef_unionSleepParams_t configVal = { 0 };
	//configVal.Value = 0x01;

	//takeUnionFromUint8t( (uint8_t*)&configVal.Value );

	//printf("%X \n", configVal.Value);

	RadioPaCommand_t  value_st		= { 0x02 , 0x03 , 0x04 , 0x05 };
	uint8_t			 value_u8[5]	= { 0x02 , 0x03 , 0x04 , 0x05 };


	printf( " %p -> %d \n ", &value_u8[0] , value_u8[0] );
	printf(" %p -> %d \n ", &value_u8[1], value_u8[1]);
	printf(" %p -> %d \n ", &value_u8[2], value_u8[2]);
	printf(" %p -> %d \n ", &value_u8[3], value_u8[3]);

	printf("\n\n");

	printf(" %p -> %d \n ", &value_st.paDutyCycle, value_st.paDutyCycle);
	printf(" %p -> %d \n ", &value_st.hpMax, value_st.hpMax);
	printf(" %p -> %d \n ", &value_st.deviceSel, value_st.deviceSel);
	printf(" %p -> %d \n ", &value_st.paLut, value_st.paLut);

}

