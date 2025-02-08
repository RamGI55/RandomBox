//
//  main.cpp
//  Random_Box

// Making Blue Archive Random box.
//
//  Created by Hyunsoo Park on 2/8/25.
//
#include <cstdlib>
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // random index 0 to 999.
    // pull the random number among them
    
    unsigned int pull;
    int prox = 120000;
    int SpendProx = 1200;
    int pullcount = 0;
    
    std::cout << "Sensei, you have " << prox << " pronxene! " << std::endl;

    std::cout << "please input how many you'd like to pull; 1 to 10 " << std::endl;
    while (prox > SpendProx)
    {
        std::cin >> pull;
        
        if (pull == 0 || pull >10)
        {
            std::cout << "invaild input, please try again";
            break;
            
        }
        
        else {
            prox = prox - SpendProx * pull;
            
            for (int i = 0; i < pull; i++ )
            {
                
                int randNumber = rand()%999;
                
                if (970 <=randNumber && randNumber<= 999)
                {
                    std::cout << "You've pulled 3* Character!!!!!!!!!!!!" <<std::endl;
                }
                else if (786 <= randNumber && randNumber <=969)
                {
                    std::cout <<"You've pulled 2* Character" << std::endl;
                }
                else
                {
                    std::cout << "You've pulled 1* character"<< std:: endl;
                    
                }
                pullcount ++;
            }
            
            std::cout<<pullcount<<std::endl;
            std::cout<<prox<<std::endl;
            
        }
        // print the results based on the index
    }
}
