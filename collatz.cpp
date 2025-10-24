#include <ios>
#include <iostream>
#include <limits>
#include <vector>

int collatzEven() {
    
}


int main() {
    int userNum;
    int userEven;
    int userOdd; 
    int finalOdd;
    int finalEven;
    
        std::cin.clear();

        std::cout << "\nColatz Conjecture Calculator\n\nWhat integer do you want to calculate?: ";
        std::cin >> userNum;
    while (true) {
        if (std::cin.fail()) {
            std::cout << "That is not an integer." << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return 0;
            continue;
        } else if(userNum % 2 == 0){
           userEven = userNum / 2;
           std::cout << userEven;
        } else {
            userOdd = userNum * 3;
            finalOdd = userOdd + 1;
           std::cout << finalOdd;
        }


        break;
    }
    
    

}
