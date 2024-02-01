PORT:=

# make flash PORT=/dev/cu.usbmodem13201
flash:
	tinygo flash -target arduino -port $(PORT)

build:
	tinygo build -target=arduino -o ./main.hex ./main.go

# make upload PORT=/dev/cu.usbmodem13201
upload:
	arduino-cli upload -b arduino:renesas_uno:unor4wifi -p $(PORT) -i ./main.hex
