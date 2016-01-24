Maximilan test, RP

How to compile on the Raspberry PI:

g++ -std=c++11 -D__LINUX_ALSA__ -o testApp main.cpp RtAudio.cpp player.cpp maximilian.cpp -lpthread


