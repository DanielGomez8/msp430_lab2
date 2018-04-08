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
button.elf: ${COMMON_OBJECTS}wdInterruptHandler.o song.o buzzer.o switches.o buttonMain.o ../lib/libTimer.a
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^

load: button.elf
	mspdebug rf2500 "prog button.elf"

clean:
	rm -f *.o *.elf

buttonMain.o: buzzer.h
switches.o: switches.h buzzer.h song.h
buzzer.o: buzzer.h
wdInterruptHandler.o: switches.h buzzer.h song.h
song.o: song.h
