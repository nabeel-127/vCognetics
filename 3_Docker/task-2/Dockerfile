FROM ubuntu:20.04

WORKDIR /app

COPY . /app

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update \
    && apt-get install -y cmake make python python3 python3-pip libboost-all-dev git gcc \
    && g++ -o DummyTask main.cpp

CMD ["./DummyTask"]
