for i in {2..20}; do
  ./test-gen > "testcases/input$(printf "%03d" $i).txt" &
  ./ans-gen < "testcases/input$(printf "%03d" $i).txt" > "testcases/output$(printf "%03d" $i).txt"
  sleep 1
done