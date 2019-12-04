#!/bin/bash

DOCKERFILE=../DOCKER/ARM/Dockerfile
IMG_NAME="arm_gcc_img"
IMG_RET=`docker images | grep $IMG_NAME`

function build_docker_image()
{
    if [ "$IMG_RET" = "" ]; then
        echo "$IMG_NAME: Image does not exist. It should be generated"
        docker build -f $DOCKERFILE -t $IMG_NAME .
    else 
        echo "$IMG_NAME is exist."
    fi;
}

function run_build_in_docker()
{
    docker run -ti --rm -v "$(pwd)/../":/work/Dev $IMG_NAME /bin/bash -c "cd Dev; make -f application.mk nucleo"
}

#Main: 
build_docker_image
run_build_in_docker