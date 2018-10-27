default: bin

.PHONY: clean

bin:
	particle compile p --saveTo build/dorothi.bin

clean:
	rm build/dorothi.bin
