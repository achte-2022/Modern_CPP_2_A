//Header Files
#include <iostream>
#include <cstdlib>
#include <random>

//Constants
const int kMinNumber = 0;
const int kMaxNumber = 99;

//Main Function
int main(){
    //Random Number Generator
    std::random_device rd;
    std::uniform_int_distribution<int> rd_distribution(kMinNumber, kMaxNumber);
    int computer_guess = rd_distribution(rd);

    //User Guess
    int user_guess = kMinNumber;
    
    //Turning on the game
    bool is_game_on = true;
    while (is_game_on){
        std::cout << "Enter your guess: ";
        std::cin >> user_guess;
        if (std::cin.fail()){
            std::cout << "Error encountered, exiting..." << std::endl;
            std::cout << computer_guess;
            return EXIT_FAILURE;
        }
        else if ((user_guess < kMinNumber) || (user_guess > kMaxNumber)){
            std::cerr << "[WARNING] : Number must be between 0 and 99"<<std::endl;
        }
        else {
            if (user_guess < computer_guess){
                std::cout << "Your guess is smaller than the actual guess." <<std::endl;
            }
            else if (user_guess > computer_guess){
                std::cout << "Your guess is larger than the actual guess." <<std::endl;
            }
            else {
                std::cout << "You have guessed correctly." << std::endl;
                is_game_on = false;
            }
        }
    }
    std::cout << computer_guess;
    return EXIT_SUCCESS;
}