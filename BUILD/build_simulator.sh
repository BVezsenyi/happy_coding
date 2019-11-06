#!/bin/bash

 #check if simulator_img docker image is exist
    #if does not -> build docker image: docker build simulator_img -f ../DOCKER/SIMULATOR/Dockerfile

docker run -ti --rm -v "$(pwd)/../":/work/Dev simulator_img /bin/bash -c "cd Dev; make -f application.mk simulator"
