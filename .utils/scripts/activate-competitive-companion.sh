#! /bin/zsh
DISPLAY=$(ps -ef | awk '/ Xvfb :[1-9]+/ {print $9}')
xdotool key --window 2097154 ctrl+shift+u
