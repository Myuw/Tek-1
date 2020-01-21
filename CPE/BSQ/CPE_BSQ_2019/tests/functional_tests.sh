#!/bin/bash

##pass, fail and nbr_tests initialisation
pass=0
fail=0
nbr_tests=0

##compilation
make re

echo -e "\e[0m\n[i] \e[95mRunning tests with time\e[0m"

##running tests
echo -e "\e[96m\n100x100\e[0m"
time ./bsq mouli_maps/intermediate_map_100_100 > tests/test_100x100

echo -e "\e[96m\n10000x10000\e[0m"
time ./bsq mouli_maps/intermediate_map_10000_10000 > tests/test_10000x10000

echo -e "\e[96m\n34x137_75pc\e[0m"
time ./bsq mouli_maps/intermediate_map_34_137_with_obstacles_75pc > tests/test_34x137_75pc

echo -e "\e[96m\n1000x1000\e[0m"
time ./bsq mouli_maps/intermediate_map_1000_1000 > tests/test_1000x1000

echo -e "\e[96m\n2000x2000\e[0m"
time ./bsq mouli_maps/intermediate_map_2000_2000 > tests/test_2000x2000

echo -e "\e[96m\n5000x5000\e[0m"
time ./bsq mouli_maps/intermediate_map_5000_5000 > tests/test_5000x5000

echo -e "\e[96m\n500x500\e[0m"
time ./bsq mouli_maps/intermediate_map_500_500 > tests/test_500x500

echo -e "\e[96m\n187x187_75pc\e[0m"
time ./bsq mouli_maps/intermediate_map_187_187_with_obstacles_75pc > tests/test_187x187_75pc

echo -e "\e[96m\n97x21_75pc\e[0m"
time ./bsq mouli_maps/intermediate_map_97_21_with_obstacles_75pc > tests/test_97x21_75pc

echo -e "\e[0m\n[i] \e[95mDiff between mouli solved map and resolved mouli map\n\e[0m"

##running diff
echo -e "\e[96mDiff_100x100\e[0m"
diff tests/test_100x100 mouli_maps_solved/intermediate_map_100_100

if (($? == 0))
then
    echo -e "\e[92mTest passed\n"
    pass=$((pass + 1))
    nbr_tests=$((nbr_tests + 1))
else
    echo -e "\e[5m\e[91mTest failed\n\e[0m"
    fail=$((fail + 1))
    nbr_tests=$((nbr_tests + 1))
fi

echo -e "\e[96mDiff_10000x10000\e[0m"
diff tests/test_10000x10000 mouli_maps_solved/intermediate_map_10000_10000

if (($? == 0))
then
    echo -e "\e[92mTest passed\n"
    pass=$((pass + 1))
    nbr_tests=$((nbr_tests + 1))
else
    echo -e "\e[5m\e[91mTest failed\n\e[0m"
    fail=$((fail + 1))
    nbr_tests=$((nbr_tests + 1))
fi

echo -e "\e[96mDiff_34x137_75pc\e[0m"
diff tests/test_34x137_75pc mouli_maps_solved/intermediate_map_34_137_with_obstacles_75pc

if (($? == 0))
then
    echo -e "\e[92mTest passed\n"
    pass=$((pass + 1))
    nbr_tests=$((nbr_tests + 1))
else
    echo -e "\e[5m\e[91mTest failed\n\e[0m"
    fail=$((fail + 1))
    nbr_tests=$((nbr_tests + 1))
fi

echo -e "\e[96mDiff1000x1000\e[0m"
diff tests/test_1000x1000 mouli_maps_solved/intermediate_map_1000_1000

if (($? == 0))
then
    echo -e "\e[92mTest passed\n"
    pass=$((pass + 1))
    nbr_tests=$((nbr_tests + 1))
else
    echo -e "\e[5m\e[91mTest failed\n\e[0m"
    fail=$((fail + 1))
    nbr_tests=$((nbr_tests + 1))
fi

echo -e "\e[96mDiff_2000x2000\e[0m"
diff tests/test_2000x2000 mouli_maps_solved/intermediate_map_2000_2000

if (($? == 0))
then
    echo -e "\e[92mTest passed\n"
    pass=$((pass + 1))
    nbr_tests=$((nbr_tests + 1))
else
    echo -e "\e[5m\e[91mTest failed\n\e[0m"
    fail=$((fail + 1))
    nbr_tests=$((nbr_tests + 1))
fi

echo -e "\e[96mDiff_5000x5000\e[0m"
diff tests/test_5000x5000 mouli_maps_solved/intermediate_map_5000_5000

if (($? == 0))
then
    echo -e "\e[92mTest passed\n"
    pass=$((pass + 1))
    nbr_tests=$((nbr_tests + 1))
else
    echo -e "\e[5m\e[91mTest failed\n\e[0m"
    fail=$((fail + 1))
    nbr_tests=$((nbr_tests + 1))
fi

echo -e "\e[96mDiff_500x500\e[0m"
diff tests/test_187x187_75pc mouli_maps_solved/intermediate_map_187_187_with_obstacles_75pc

if (($? == 0))
then
    echo -e "\e[92mTest passed\n"
    pass=$((pass + 1))
    nbr_tests=$((nbr_tests + 1))
else
    echo -e "\e[5m\e[91mTest failed\n\e[0m"
    fail=$((fail + 1))
    nbr_tests=$((nbr_tests + 1))
fi

echo -e "\e[96mDiff_97x21_75pc\e[0m"
diff tests/test_97x21_75pc mouli_maps_solved/intermediate_map_97_21_with_obstacles_75pc

if (($? == 0))
then
    echo -e "\e[92mTest passed\n"
    pass=$((pass + 1))
    nbr_tests=$((nbr_tests + 1))
else
    echo -e "\e[5m\e[91mTest failed\n\e[0m"
    fail=$((fail + 1))
    nbr_tests=$((nbr_tests + 1))
fi

##nbr of tests passed and failed
echo -e "\e[0m\n[i] \e[95mTOTAL :\e[0m"
echo -e "\n\e[94mTestings : $nbr_tests \e[92mPassing : $pass \e[91mFailling : $fail\n"

##mr_clean
cl
