#!/bin/bash

DOCKERFILE=../DOCKER/ARM/Dockerfile
IMG_NAME="arm_gcc_img"
IMG_RET=`docker images | grep $IMG_NAME`

function build_docker_image_if_needed()
{
    if [ "$IMG_RET" = "" ]; then
        echo "$IMG_NAME: Image does not exist. Genarate image!"
        docker build -f $DOCKERFILE -t $IMG_NAME .
    else 
        echo "$IMG_NAME: Image exists."
    fi;
}

function flash_target_from_docker()
{
    docker run -ti --rm --privileged -v "$(pwd)/../":/work/Dev $IMG_NAME /bin/bash -c "/root/stlink/build/Release/st-flash write ./Dev/TARGET/nucleo_f0308r.hex 0x8000000"
}

#Main: 
build_docker_image_if_needed
flash_target_from_docker