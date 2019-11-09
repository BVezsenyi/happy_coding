#Flash TARGET/TBIRD/tbird.hex to T-Bird

sudo avrdude -p atmega128 -c jtagmkI -U flash:w:../TARGET/tbird.hex:i -F -P /dev/ttyUSB0