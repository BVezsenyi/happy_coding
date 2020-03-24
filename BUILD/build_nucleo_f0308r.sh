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

function run_build_in_docker()
{
    docker run -ti --rm --privileged -v "$(pwd)/../":/work/Dev $IMG_NAME /bin/bash -c "cd Dev; make -f application.mk nucleo_f0308r"
}

#Main: 
build_docker_image_if_needed
run_build_in_docker