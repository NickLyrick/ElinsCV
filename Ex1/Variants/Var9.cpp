// opencv header files
#include "opencv2/highgui/highgui.hpp" 
#include "opencv2/core/core.hpp"
#include "opencv2/imgproc/imgproc.hpp" 
#include "Var9.h"

// namespaces declaration
using namespace cv;
using namespace std; 

void var9()
{
    
    //Mat img = imread("Lenna.png");
    //putText
        //( img,   "Pleshko Lizaveta" ,  Point(img.cols/4,img.rows/4*3), FONT_HERSHEY_SIMPLEX, 3,Scalar(0,255,0),2);
          
          //fontScale, blue, thickness = 3, lineType = LINE_8, bottomLeftOrigin = false
        
    //namedWindow("Display");
    //imshow("Display",img);
    
    Mat img = imread("Lenna.png");

	    // Добавляем текст
	    putText(img,"yaskovMC",Point(img.cols/4,img.rows/4*3),FONT_HERSHEY_PLAIN,3,Scalar(0,255,0),2);

	   

	    // отображаем в окне
		namedWindow("Display", CV_WINDOW_AUTOSIZE);
		imshow("Display",img);


		waitKey(0);	
    
} 
