
#ifndef UART_LINKING_CONFIG_H_
#define UART_LINKING_CONFIG_H_

/****************** AVAILABLE OPTIONS *******************/

/* UART MODE */
typedef enum{
	ASYNC_MODE,
	SYNC_MODE
}en_UART_Mode_t;

/* BAUD RATE */
typedef enum{
	BAUD_RATE_2400,
	BAUD_RATE_4800,
	BAUD_RATE_9600,
	BAUD_RATE_14400,
	BAUD_RATE_19200,
	BAUD_RATE_28800,
	BAUD_RATE_38400,
	BAUD_RATE_57600
}en_UART_baudRate_t;


/* PARITY OPTIONS */
typedef enum{
	PARITY_MODE_DISABLED,
	EVEN_PARITY_MODE,
	ODD_PARITY_MODE,
}en_UART_parityMode_t;


/* SPEED MODES */
typedef enum{
	SPEED_NORMAL,
	SPEED_DOUBLE
}en_UART_speedMode_t;


/* Multiprocessor Comm Mode */
typedef enum{
	MPCM_DISABLED,
	MPCM_ENABLED 
}en_UART_multiProcMode_t;

/* Data Length */
typedef enum{
	DATA_5_BITS,
	DATA_6_BITS,
	DATA_7_BITS,
	DATA_8_BITS,
	DATA_9_BITS
}en_UART_dataLength_t;

/* Stop Bits */
typedef enum{
	ONE_STOP_BIT,
	TWO_STOP_BITS
}en_UART_stopBitsCount_t;

/* Interrupts */

typedef enum{
	TX_DISABLED,
	TX_ENABLED 
}en_UART_transmitInterrupt_INT_t;

typedef enum{
	RX_DISABLED,
	RX_ENABLED  
}en_UART_receiveInterrupt_INT_t;

typedef enum{
	UDRE_INT_DISABLED,
	UDRE_INT_ENABLED
}en_UART_dataEmptyInterrupt_t;


/****************** UART CONFIGURATION *******************/
typedef struct {
	en_UART_Mode_t          UART_MODE,
	en_UART_baudRate_t      UART_BAUD_RATE,
	en_UART_parityMode_t    UART_PARITY_MODE,
	en_UART_speedMode_t     UART_SPEED_MODE,
	en_UART_multiProcMode_t UART_MULTI_PROC_MODE,
	en_UART_dataLength_t    UART_DATA_LENGTH,
	en_UART_stopBitsCount_t UART_STOP_BITS,
	en_UART_transmitInterrupt_INT_t    UART_TXI_INT_EN,
	en_UART_receiveInterrupt_INT_t     UART_RXI_INT_EN,
	en_UART_dataEmptyInterrupt_t       UART_DEI_INT_EN,
}st_UARTConfig_t;



#endif /* UART_LINKING_CONFIG_H_ */