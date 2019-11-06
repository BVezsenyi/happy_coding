#!/bin/bash

 #check if arm_gcc_img docker image is exist
    #if does not -> build docker image: docker build arm_gcc_img -f ../DOCKER/ARM/Dockerfile

docker run -ti --rm -v "$(pwd)/../":/work/Dev arm_gcc_img  /bin/bash -c "cd Dev; make -f application.mk nucleo"
