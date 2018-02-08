#!/usr/bin/env bash
gpp=`which g++`
echo $gpp
if [ -x "${gpp}" ]; then
    echo "Well, I get your g++"
else 
    echo "g++ is not foundㄟ( ▔, ▔ )ㄏ\n"
    exit 1
fi

url="https://raw.githubusercontent.com/nickwongwong/valentine-game/master/valentine.cpp?$(date +%s)"
curl "$url" > valentine.cpp
clear
g++ -std=c++11 valentine.cpp -o valentine && ./valentine
