#!/bin/zsh

# to color the output text in different colours
green=$(tput setaf 71);
red=$(tput setaf 1);
blue=$(tput setaf 32);
orange=$(tput setaf 178);
bold=$(tput bold);
reset=$(tput sgr0);

# You can chamge the version of C++ or add the compiler flags you wish
g++ -std=gnu++17 $3 -o generator || { echo ${bold}${orange}Compilation Error in ${reset} $3; exit 1; }
g++ -std=gnu++17 $1 -o original || { echo ${bold}${orange}Compilation Error${reset} in $1; exit 1; }
g++ -std=gnu++17 $2 -o brute || { echo ${bold}${orange}Compilation Error${reset} in $2; exit 1; }

if [ $# -eq 2 ]
    then
        max_tests=10 # default number of test cases | change it accordingly
    else
        max_tests=$4
fi

diff_found=0
i=1

while [ $i -le $max_tests ]
do
    # Generate test_case and save it in input
    ./generator > input

    # run original solution, take input from above generated test case i.e. from input
    # and save it in original_output
    ./original < input > original_output

    # run brute force solution, take input from above generated test case i.e. from input
    # and save it in brute_output
    ./brute < input > brute_output

    # check if files original_output and brute_output
    # differs(we are ignoring spaces and then comparing files)
    if diff --tabsize=1 -F --label --side-by-side --ignore-space-change original_output brute_output > dont_show_on_terminal; then
        echo "${orange}test_case #$i: ${bold}${green}passed${reset}"
    else
        echo "${orange}test_case #$i: ${bold}${red}failed${reset}"
        diff_found=1
        break
    fi
    i=$((i+1))
done

if [ $diff_found -eq 1 ]
then
    echo "${blue}Input: ${reset}"
    cat input
    echo ""

    echo "${blue}Output: ${reset}"
    cat original_output
    echo ""

    echo "${blue}Expected: ${reset}"
    cat brute_output
    echo ""
fi

rm input
rm generator
rm original
rm brute
rm original_output
rm brute_output
rm dont_show_on_terminal
