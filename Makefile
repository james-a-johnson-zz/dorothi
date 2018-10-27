default: all

.PHONY: clean write

all: dorothi.bin


dorothi.bin:
	particle compile p --saveTo build/dorothi.bin

write: bin
	particle flash --usb build/dorothi.bin

clean:
	rm build/dorothi.bin
