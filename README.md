# Homework. 2: Guessing Game
## Modern C++ for Computer Vision and Image Processing 
## Institute of Geodesy and Geoinformation

Tejas Acharya [Twitter](https://twitter.com/achte_te)

[Assignment](https://www.ipb.uni-bonn.de/html/teaching/modern-cpp/homeworks/homework_2.pdf)

A guessing game written in C++.


To Run:
```sh
git clone git@github.com:achte-2022/Modern_CPP_2_A.git
cd Modern_CPP_2_A
bash install.sh
./bin/task_1
```

To Test:
```sh
bats test_task_1.sh
```

Correct code gives the following output after running test_task_1.sh
```sh
✓ [task_1] Check bin/task_1 existance 
✓ [task_1] Check error handling 
✓ [task_1] Check input between [0-99] 
✓ [task_1] Check random number betwwen [0-99] 
✓ [task_1] Check randomness 

5 tests, 0 failures
```