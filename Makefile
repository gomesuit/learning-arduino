PORT:=

# make flash PORT=/dev/cu.usbmodem13201
flash:
	tinygo flash -target arduino -port $(PORT)
