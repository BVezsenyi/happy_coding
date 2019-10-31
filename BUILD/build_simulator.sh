docker run -ti --rm -v "$(pwd)/../":/work/Dev stronglytyped/arm-none-eabi-gcc /bin/bash -c "cd Dev; make -f application.mk simulator"
