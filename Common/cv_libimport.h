
#ifndef _OPENCV_LIB_IMPORT_H_
#define _OPENCV_LIB_IMPORT_H_

#include <opencv/cv.h>

#ifndef OPENCV_LIB_NAME
    #define _OPENCV_LIB_NAME(PREFIX, MAJOR, MINOR, SUBMINOR, FINALFIX)     #PREFIX###MAJOR###MINOR###SUBMINOR###FINALFIX
    #ifdef _DEBUG
        #define OPENCV_LIB_NAME(PREFIX, MAJOR, MINOR, SUBMINOR)     _OPENCV_LIB_NAME(PREFIX, MAJOR, MINOR, SUBMINOR, "d.lib")
    #else
        #define OPENCV_LIB_NAME(PREFIX, MAJOR, MINOR, SUBMINOR)     _OPENCV_LIB_NAME(PREFIX, MAJOR, MINOR, SUBMINOR, ".lib")
    #endif
#endif

#pragma comment(lib, OPENCV_LIB_NAME("opencv_core", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_imgproc", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_highgui", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_calib3d", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_contrib", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_features2d", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_flann", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_gpu", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_legacy", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_ml", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_nonfree", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_objdetect", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_photo", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_stitching", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_ts", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_video", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_videostab", CV_MAJOR_VERSION, CV_MINOR_VERSION, CV_SUBMINOR_VERSION))
#pragma comment(lib, OPENCV_LIB_NAME("opencv_haartraining_engine", "", "", ""))

#endif