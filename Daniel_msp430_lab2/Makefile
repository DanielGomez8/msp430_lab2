# makfile configuration
COMMON_OBJECTS  = 
CPU             = msp430g2553
CFLAGS          = -mmcu=${CPU} -I../h
LDFLAGS		= -L/opt/ti/msp430_gcc/include

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-as

all: button.elf 

#additional rules for files
button.elf: ${COMMON_OBJECTS}wdInterruptHandler.o led.o song.o buzzer.o switches.o buttonMain.o ../lib/libTimer.a
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^

load: button.elf
	mspdebug rf2500 "prog button.elf"

clean:
	rm -f *.o *.elf

buttonMain.o: buzzer.h switches.h led.h song.h
led.o: switches.h led.h
switches.o: switches.h buzzer.h song.h led.h
buzzer.o: buzzer.h
wdInterruptHandler.o: switches.h
song.o: song.h buzzer.h
