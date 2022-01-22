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
g++ -std=gnu++17 $2 -o validator || { echo ${bold}${orange}Compilation Error${reset} in $2; exit 1; }

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

    ./original < input > original_output

    ./validator < input > validator_output

    if [ "${validator_output:0:2}" != "OK" ]; then
        echo "${orange}test_case #$i: ${bold}${green}passed${reset}"
    else
        echo "${orange}test_case #$i: ${bold}${red}failed${reset}"
        wrong_answer=1
        break
    fi
    i=$((i+1))
done

if [ $wrong_answer -eq 1 ]
then
    echo "${blue}Input: ${reset}"
    cat input
    echo ""

    echo "${blue}Output: ${reset}"
    cat original_output
    echo ""

    echo "${blue}Expected: ${reset}"
    cat validator_output
    echo ""
fi

rm input
rm generator
rm original
rm validator
rm original_output
rm validator_output
