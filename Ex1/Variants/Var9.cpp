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
        Mat img = imread("Lenna.png");

	    // Добавила текст
	    putText(img,"Elizaveta",Point(180,450),FONT_HERSHEY_SCRIPT_COMPLEX,2.5,Scalar(254,20,200),3);

	   // Добавила маркеры
        
        drawMarker
        (img,Point(260,480),Scalar(139,0,139),MARKER_DIAMOND,22,4);

        drawMarker
        (img,Point(290,480),Scalar(139,0,139),MARKER_DIAMOND,22,4);
        
        drawMarker
        (img,Point(320,480),Scalar(139,0,139),MARKER_DIAMOND,22,4);
        
	    // отображаем в окне
		namedWindow("Hi :)", CV_WINDOW_AUTOSIZE);
		imshow("Hi :)",img);

        //Сохраняю
        imwrite("Var9.png",img);
        
		waitKey(0);	
    
} 
