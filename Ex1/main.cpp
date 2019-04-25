 // opencv header files
#include "opencv2/highgui/highgui.hpp" 
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp" 

#include <iostream>
#include <vector>
#include <cstdlib>

// namespaces declaration
using namespace cv;
using namespace std; 

#include "Variants/Variants.h"

vector<void (*)()> functions = {(void (*)())var1, (void (*)())var2, (void (*)())var3, (void (*)())var4};
                                // var5, var6, var7, var8,
                                // var9, var10, var11, var12,
                                // var13, var14, var15, var16,
                                // var17, var18, var19, var20};

int main( int argc, char** argv ) 
{
    if(argc != 2)
    {
        cerr << "Введите номер варианта" << endl;
        return 1;
    }

    int var = atoi(argv[1]);

    functions[var - 1]();

    waitKey(0);
    return 0; 
}
