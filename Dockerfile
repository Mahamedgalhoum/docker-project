
FROM gcc:latest
COPY . /usr/src/psr
WORKDIR /usr/src/psr
RUN g++ -o play main.cpp
CMD ["./play"]