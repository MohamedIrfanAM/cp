#! /bin/zsh
nvim $1/[A-D]_*.cpp
if [ $? -ne 0 ]; then
    nvim $1/*.cpp
fi
