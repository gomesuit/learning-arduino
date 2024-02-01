PORT:=

# make flash PORT=/dev/cu.usbmodem13201
flash:
	tinygo flash -target arduino -port $(PORT) .

build:
	tinygo build -target=arduino -o ./main.hex ./main.go

# make upload PORT=/dev/cu.usbmodem13201
upload:
	arduino-cli upload -p $(PORT) --fqbn arduino:renesas_uno:unor4wifi -i ./main.hex
	# avrdude -v -patmega328p -carduino -P$(PORT) -b115200 -D -Uflash:w:./main.hex:i
