#!/bin/bash

#Check if 'docker_avr_toolchain' image is exist:
    #Build if not

#docker run -ti --rm -v "$(pwd)/../":/work/Dev docker_avr_toolchain /bin/bash -c "cd Dev; make -f application.mk tbird"


docker run -ti --rm -v "$(pwd)/../":/work/Dev my_docker_img /bin/bash -c "cd Dev; make -f application.mk tbird"