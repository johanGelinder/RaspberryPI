
How to compile on the Raspberry PI:

g++ -std=c++11 -D__LINUX_ALSA__ -o testApp main.cpp RtAudio.cpp player.cpp maximilian.cpp -lpthread

How to compile on MACOSX

g++ -Wall -D__MACOSX_CORE__ -o testApp main.cpp RtAudio.cpp player.cpp maximilian.cpp -framework CoreAudio -framework CoreFoundation -lpthread -stdlib=libstdc++
