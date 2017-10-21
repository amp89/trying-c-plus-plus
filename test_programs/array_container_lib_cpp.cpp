#include <iostream>
#include <array>


int main()
{
        std::array<int,23> someArray = {32451,3451,3245,3245};

        for (int idx = 0; idx < someArray.size(); idx++)
        {
            std::cout << "idx " << idx << " value " << someArray[idx];
            if(idx<someArray.size() -1){
                std::cout << ", ";
            }else{
                std::cout << std::endl;
            }
        }

}
