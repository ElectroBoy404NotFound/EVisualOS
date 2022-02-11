#Makefile to set up all stuff to compile EVisualOS
all:
build:
	@cd EVisualOSBootloader && make bootloader && cd ../EVisualOSKernel && make && make buildimg
run:
	@cd EVisualOSKernel && make run