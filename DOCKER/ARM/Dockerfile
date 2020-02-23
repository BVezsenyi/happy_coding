FROM debian:latest

LABEL maintainer="Balint Vezsenyi"
LABEL Description="Image for build ARM projects"

WORKDIR /work

RUN apt-get update \
 &&	apt-get upgrade -y \
 && apt-get install -y build-essential \
	wget \
	git \
	cmake \
	usbutils \
	libusb-1.0-0-dev \
 && apt clean  


RUN wget https://developer.arm.com/-/media/Files/downloads/gnu-rm/9-2019q4/RC2.1/gcc-arm-none-eabi-9-2019-q4-major-x86_64-linux.tar.bz2 \
&& tar -xjf  gcc-arm-none-eabi-9-2019-q4-major-x86_64-linux.tar.bz2 \
&& rm gcc-arm-none-eabi-9-2019-q4-major-x86_64-linux.tar.bz2

RUN cd $HOME \
&& git clone https://github.com/texane/stlink.git \
&& cd stlink \
&& make release \
&& cd build/Release && make install DESTDIR=_install


ENV PATH="/work/gcc-arm-none-eabi-9-2019-q4-major/bin/:${PATH}"
ENV PATH="$HOME/stlink/build/Release/_install/usr/local/bin:${PATH}"
ENV LD_LIBRARY_PATH="$HOME/stlink/build/Release/_install/usr/local/lib:${LD_LIBRARY_PATH}"



