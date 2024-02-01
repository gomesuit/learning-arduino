PORT:=/dev/cu.usbmodemF412FA9F9B282

compile:
	# arduino-cli compile --fqbn arduino:renesas_uno:unor4wifi .
	arduino-cli compile --fqbn arduino:renesas_uno:unor4wifi -e .

upload:
	# arduino-cli upload -p $(PORT) --fqbn arduino:renesas_uno:unor4wifi MyFirstSketch.ino
	arduino-cli upload -p $(PORT) --fqbn arduino:renesas_uno:unor4wifi -i build/arduino.renesas_uno.unor4wifi/MyFirstSketch.ino.hex
