#!/bin/bash

 #check if avr_gcc_img docker image is exist
    #if does not -> build docker image: docker build avr_gcc_img -f ../DOCKER/AVR/Dockerfile

docker run -ti --rm -v "$(pwd)/../":/work/Dev avr_gcc_img  /bin/bash -c "cd Dev; make -f application.mk tbird"