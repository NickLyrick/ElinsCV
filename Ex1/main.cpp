 // opencv header files
#include "opencv2/highgui/highgui.hpp" 
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp" 

#include <iostream>
#include <vector>
#include <string>

#include "Variants/Variants.h"

std::vector<void (*)()> functions = {var1, var2, var3, var4,
                                var5, var6, var7, var8,
                                var9, var10, var11, var12,
                                var13, var14, var15, var16,
                                var17, var18, var19, var20};

int main( int argc, char** argv ) 
{
    if(argc != 2)
    {
        std::cerr << "Введите номер варианта" << std::endl;
        return 1;
    }

    int var = std::stoi(argv[1], nullptr);
    
    if ((var <= 0) || (var > 20))
    {
    	std::cerr << "Введите номер варианта из промежутка 1-20" << std::endl;
    	return 1;
    }
    
    functions[var - 1]();

    return 0; 
}
