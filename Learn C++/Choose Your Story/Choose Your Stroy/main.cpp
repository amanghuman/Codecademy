#include <iostream>

int main() {
    int choice1;
    int choice2;
    bool validChoice1 = false;
    bool validChoice2 = false;
    while (!validChoice1) {
        std::cout << "Welcome to my domain!\nNow tell me what you desire?\n\n";
        std::cout << "1) Wealth\n2) Fame\n3) Love\n4) World Peace\n\n";
        std::cout << "Enter your choice(1-4):";
        std::cin >> choice1;
        if (choice1 > 0 && choice1 <= 4) {
            validChoice1 = true;
        }
        else {
            std::cout << "\nInvalid Output! Try Again!\n\n";
        }

        switch (choice1) {
        case 1:
            while (!validChoice2) {
                std::cout << "So you choose wealth huh? Intersting!\nNow tell me what kind of wealth you want?\n\n";
                std::cout << "1) Money/Cash\n2) Gold\n3) Healthy Body\n\n";
                std::cout << "Enter your choice(1-3):";
                std::cin >> choice2;
                if (choice2 > 1 && choice2 <= 3) {
                    validChoice2 = true;
                }
                else {
                    std::cout << "\nInvalid Output! Try Again!\n\n";
                }
            }
            if (choice2 == 1) {
                std::cout << "You received $100,000,000,000.\nBut because of your sudden wealth all of it is taken away by governement.\n";
            }
            if (choice2 == 2) {
                std::cout << "You received 1000 Gold Bars.\nBut because of no way to exhange it, you are still poor.\n";
            }
            if (choice2 == 3) {
                std::cout << "You received a healthy body that will never grow old or get sick.\n But because of that, you will live forever and see the deaths of your precious ones.\n";
            }
            break;
        case 2:
            while (!validChoice2) {
                std::cout << "So you choose fame huh? Intersting!\nNow tell me what kind of fame you want?\n\n";
                std::cout << "1) Actor\n2) Singer\n3) Noble Prize Winner\n\n";
                std::cout << "Enter your choice(1-3):";
                std::cin >> choice2;
                if (choice2 > 1 && choice2 <= 3) {
                    validChoice2 = true;
                }
                else {
                    std::cout << "\nInvalid Output! Try Again!\n\n";
                }
            }
            if (choice2 == 1) {
                std::cout << "You are now an actor.\nBut you are now surrounded by scandals and are very depressed.\n";
            }
            if (choice2 == 2) {
                std::cout << "You are now a singer.\nBut you are a flop singer, you are not able to produce any good hits.\n";
            }
            if (choice2 == 3) {
                std::cout << "You are now a Noble Prize Winner.\nBut because of your inventions, millions of people die.\n";
            }
            break;
        case 3:
            while (!validChoice2) {
                std::cout << "So you choose love huh? Intersting!\nNow tell me what kind of love you want?\n\n";
                std::cout << "1) Partner\n2) Family\n3) Love with the World\n\n";
                std::cout << "Enter your choice(1-3):";
                std::cin >> choice2;
                if (choice2 > 1 && choice2 <= 3) {
                    validChoice2 = true;
                }
                else {
                    std::cout << "\nInvalid Output! Try Again!\n\n";
                }
            }
            if (choice2 == 1) {
                std::cout << "You met Love of Your Life.\nUnfortunately, your love doesn't love you back and is happily married.\n";
            }
            if (choice2 == 2) {
                std::cout << "You have a good relationship with your family.\nUnfortunately, your family passes away in an unfortunate accident.\n";
            }
            if (choice2 == 3) {
                std::cout << "You are now in love with the world.\nUnfortunately, you don't have any money to fulfill your desire to travel the world.\n";
            }
            break;
        case 4:
            while (!validChoice2) {
                std::cout << "So you choose world peace huh? Intersting!\nNow tell me what kind of world peace you want?\n\n";
                std::cout << "1) No Wars\n2) Erase World Hunger\n 3) No Prejudice\n\n";
                std::cout << "Enter your choice(1-3):";
                std::cin >> choice2;
                if (choice2 > 1 && choice2 <= 3) {
                    validChoice2 = true;
                }
                else {
                    std::cout << "\nInvalid Output! Try Again!\n\n";
                }
            }
            if (choice2 == 1) {
                std::cout << "There are No wars in the world.\nBut no wars doesn't mean peace, people are dying daily of hunger.\n";
            }
            if (choice2 == 2) {
                std::cout << "You erase the world hunger.\nBut because of greed of humans, countries are always at war to increase their resources.\n";
            }
            if (choice2 == 3) {
                std::cout << "You ended the prejudice from the world.\nBut because of no prejudice, there is no unity in the world, there are wars everywhere to show who is superior and people are dying of hunger.\n";
            }
            break;
        }
        if (validChoice1 && validChoice2) {
            std::cout << "\nMwahahahahaha, there is never any easy way to change something.\nChange is supposed to be slow and steady.\nIf it changes in an instant it means it was never supposed to be.\n";
            std::cout << "Remember: Slow and Steady is infinitely better than Quick and Unstable.\n\n";
        }
    }
    return 0;
}