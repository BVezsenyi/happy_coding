FROM debian:latest

LABEL maintainer="Balint Vezsenyi"
LABEL Description="Image for build AVR projects"

WORKDIR /work

RUN apt-get update \
    && apt-get upgrade -y \
    && apt-get install -y \
    build-essential \
	gcc-avr \
	avr-libc \
	avrdude \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

