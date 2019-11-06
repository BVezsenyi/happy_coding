FROM debian:latest

LABEL maintainer="Balint Vezsenyi"
LABEL Description="Image for build ARM projects"

WORKDIR /work

RUN apt-get update \
 &&	apt-get upgrade -y \
 && apt-get install -y build-essential \
	wget \
 && apt clean  


RUN wget https://developer.arm.com/-/media/Files/downloads/gnu-rm/9-2019q4/RC2.1/gcc-arm-none-eabi-9-2019-q4-major-x86_64-linux.tar.bz2 \
&&	tar -xjf  gcc-arm-none-eabi-9-2019-q4-major-x86_64-linux.tar.bz2 \
&& 	export PATH="gcc-arm-none-eabi-9-2019-q4-major/bin/:$PATH"

