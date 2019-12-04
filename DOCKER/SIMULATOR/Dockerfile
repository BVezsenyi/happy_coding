FROM debian:latest

LABEL maintainer="Balint Vezsenyi"
LABEL Description="Image for build SIMULATOR projects"

WORKDIR /work

RUN apt-get update \
    && apt-get upgrade -y \
    && apt-get install -y \
    build-essential \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*