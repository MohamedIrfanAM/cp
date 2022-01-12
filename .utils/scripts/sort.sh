#! /bin/zsh
# Codeforces
CP_PATH="/run/media/irfan/cp"
solutions=$(find $CP_PATH/Codeforces*/*cpp)
if [ $? -eq 0 ]; then
  while IFS= read -r solution; do
    if ! [[ $(diff -d -q -I '^/' -I '^ /' $solution $CP_PATH/.utils/template.cpp) ]]; then
      solution_name=$(echo $solution | sed -e 's/.cpp//')
      rm -fr $solution_name.*
    fi
  done <<< "$solutions"
fi

mv $CP_PATH/Codeforc* $CP_PATH/codeforces 
mmv -r $CP_PATH/codeforces/CodeforcesCodeforces\* \#1
mmv -r $CP_PATH/codeforces/'CodeforcesEducationalCodeforcesRound*Ratedfor*' 'EducationalRound#1#2'
cd $CP_PATH/codeforces/ && perl-rename 's/Round(\d+)Div\.(\d+)/Round_$1_Div\.$2/' */* && rmdir $CP_PATH/codeforces/*ound[0-9]**[0-9]Di*
perl-rename 's/Round(\d+)/Round_$1/' */* && rmdir *ound[0-9]*
cd -
# mmv -r /run/media/irfan/Programming/cp/codeforces/'*ound[0-9]**[0-9]Div*' '#1ound_#2#3#4#5_Div#6' 

# CSES
csespath=$(cd $CP_PATH/CSES-CSESProblemSet/ ; find *cpp  | sed -e 's/.cpp//')
names=($(echo "$csespath"))
for name in $names
do
  echo $name
  mkdir $CP_PATH/cses/$name; mv $CP_PATH/CSES-CSESProblemSet/$name* $CP_PATH/cses/$name/
done
rm -fr $CP_PATH/CSES-CSESProblemSet

# Removing all executables
rm -fr $CP_PATH/*.exe
clear
