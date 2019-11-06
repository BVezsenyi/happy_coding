FROM ubuntu:16.04

MAINTAINER Balint Vezsenyi

LABEL Description="Image for building Atmel AVR GNU toolchain for Linux"

RUN apt-get update \
    && apt-get upgrade -y \
    && apt-get install -y \
        git \
        wget \
        autoconf2.64 \
        build-essential \
	gcc-avr \
	avr-libc \
	avrdude \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*
WORKDIR /work

ADD . /work
