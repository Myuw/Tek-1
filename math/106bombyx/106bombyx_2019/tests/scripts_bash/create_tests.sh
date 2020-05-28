##
## EPITECH PROJECT, 2020
## functional_test
## File description:
## 106bombyx
##

#!/bin/sh

################################################################################
#                               CREATE TESTS                                   #
################################################################################

echo -e "\\$DEFAULT\n [i]\\$LIGHT_MAGENTA CREATE TESTS:\n\\$RESET_ALL"

echo -e "\\$LIGHT_YELLOW [!] Create test help [!]\n\\$RESET_ALL"

###########
#test help#
###########

echo -e "\\$LIGHT_CYAN Create test help\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx -h > tests/help

###########################
#normal tests logistic map#
###########################

echo -e "\\$LIGHT_YELLOW [!] Create test logistic map [!]\n\\$RESET_ALL"

echo -e "\\$LIGHT_CYAN Create test logistic map n°1\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1 1 > tests/test_n°1

echo -e "\\$LIGHT_CYAN Create test logistic map n°2\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10 1 > tests/test_n°2

echo -e "\\$LIGHT_CYAN Create test logistic map n°3\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 100 1 > tests/test_n°3

echo -e "\\$LIGHT_CYAN Create test logistic map n°4\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1000 1 > tests/test_n°4

echo -e "\\$LIGHT_CYAN Create test logistic map n°5\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10000 1 > tests/test_n°5

echo -e "\\$LIGHT_CYAN Create test logistic map n°6\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1 2 > tests/test_n°6

echo -e "\\$LIGHT_CYAN Create test logistic map n°7\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10 2 > tests/test_n°7

echo -e "\\$LIGHT_CYAN Create test logistic map n°8\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 100 2 > tests/test_n°8

echo -e "\\$LIGHT_CYAN Create test logistic map n°9\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1000 2 > tests/test_n°9

echo -e "\\$LIGHT_CYAN Create test logistic map n°10\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10000 2 > tests/test_n°10

echo -e "\\$LIGHT_CYAN Create test logistic map n°11\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1 3 > tests/test_n°11

echo -e "\\$LIGHT_CYAN Create test logistic map n°12\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10 3 > tests/test_n°12

echo -e "\\$LIGHT_CYAN Create test logistic map n°13\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 100 3 > tests/test_n°13

echo -e "\\$LIGHT_CYAN Create test logistic map n°14\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1000 3 > tests/test_n°14

echo -e "\\$LIGHT_CYAN Create test logistic map n°15\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10000 3 > tests/test_n°15

echo -e "\\$LIGHT_CYAN Create test logistic map n°16\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1 4 > tests/test_n°16

echo -e "\\$LIGHT_CYAN Create test logistic map n°17\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10 4 > tests/test_n°17

echo -e "\\$LIGHT_CYAN Create test logistic map n°18\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 100 4 > tests/test_n°18

echo -e "\\$LIGHT_CYAN Create test logistic map n°19\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1000 4 > tests/test_n°19

echo -e "\\$LIGHT_CYAN Create test logistic map n°20\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10000 4 > tests/test_n°20

#########################
#float test logistic map#
#########################

echo -e "\\$LIGHT_CYAN Create test logistic map n°21\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1 1.5 > tests/test_n°21

echo -e "\\$LIGHT_CYAN Create test logistic map n°22\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10 1.5 > tests/test_n°22

echo -e "\\$LIGHT_CYAN Create test logistic map n°23\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 100 1.5 > tests/test_n°23

echo -e "\\$LIGHT_CYAN Create test logistic map n°24\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1000 1.5 > tests/test_n°24

echo -e "\\$LIGHT_CYAN Create test logistic map n°25\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10000 1.5 > tests/test_n°25

echo -e "\\$LIGHT_CYAN Create test logistic map n°26\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1 2.5 > tests/test_n°26

echo -e "\\$LIGHT_CYAN Create test logistic map n°27\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10 2.5 > tests/test_n°27

echo -e "\\$LIGHT_CYAN Create test logistic map n°28\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 100 2.5 > tests/test_n°28

echo -e "\\$LIGHT_CYAN Create test logistic map n°29\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1000 2.5 > tests/test_n°29

echo -e "\\$LIGHT_CYAN Create test logistic map n°30\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10000 2.5 > tests/test_n°30

echo -e "\\$LIGHT_CYAN Create test logistic map n°31\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1 3.5 > tests/test_n°31

echo -e "\\$LIGHT_CYAN Create test logistic map n°32\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10 3.5 > tests/test_n°32

echo -e "\\$LIGHT_CYAN Create test logistic map n°33\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 100 3.5 > tests/test_n°33

echo -e "\\$LIGHT_CYAN Create test logistic map n°34\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1000 3.5 > tests/test_n°34

echo -e "\\$LIGHT_CYAN Create test logistic map n°35\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10000 3.5 > tests/test_n°35

echo -e "\\$LIGHT_CYAN Create test logistic map n°36\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1 1.1 > tests/test_n°36

echo -e "\\$LIGHT_CYAN Create test logistic map n°37\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10 2.2 > tests/test_n°37

echo -e "\\$LIGHT_CYAN Create test logistic map n°38\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 100 3.3 > tests/test_n°38

echo -e "\\$LIGHT_CYAN Create test logistic map n°39\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1000 1.2 > tests/test_n°39

echo -e "\\$LIGHT_CYAN Create test logistic map n°40\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10000 2.3 > tests/test_n°40

##################################
#Create tests bifurcation diagram#
##################################

echo -e "\\$LIGHT_YELLOW [!] Create test bifurcation diagram [!]\n\\$RESET_ALL"

echo -e "\\$LIGHT_CYAN Create test bifurcation diagram n°41\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1 1 10 > tests/test_n°41

echo -e "\\$LIGHT_CYAN Create test bifurcation diagram n°42\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1 1 100 > tests/test_n°42

echo -e "\\$LIGHT_CYAN Create test bifurcation diagram n°43\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1 1 1000 > tests/test_n°43

echo -e "\\$LIGHT_CYAN Create test bifurcation diagram n°44\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10 1 10 > tests/test_n°44

echo -e "\\$LIGHT_CYAN Create test bifurcation diagram n°45\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10 1 100 > tests/test_n°45

echo -e "\\$LIGHT_CYAN Create test bifurcation diagram n°46\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 10 1 1000 > tests/test_n°46

echo -e "\\$LIGHT_CYAN Create test bifurcation diagram n°47\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 100 1 10 > tests/test_n°47

echo -e "\\$LIGHT_CYAN Create test bifurcation diagram n°48\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 100 1 100 > tests/test_n°48

echo -e "\\$LIGHT_CYAN Create test bifurcation diagram n°49\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 100 1 1000 > tests/test_n°49

echo -e "\\$LIGHT_CYAN Create test bifurcation diagram n°50\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1000 1 10 > tests/test_n°50

echo -e "\\$LIGHT_CYAN Create test bifurcation diagram n°51\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1000 1 100 > tests/test_n°51

echo -e "\\$LIGHT_CYAN Create test bifurcation diagram n°52\\$LIGHT_GREEN [OK]\n\\$RESET_ALL"
./106bombyx 1000 1 1000 > tests/test_n°52
