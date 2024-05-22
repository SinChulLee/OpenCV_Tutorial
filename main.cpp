#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    // std::string imagePath = "C:\\Users\\dltls\\OpenCV_C++\\cat.jpg";
    std::string imagePath = "C:\\Users\\dltls\\OpenCV_C++\\dog.jpg";
    cv::Mat image = cv::imread(imagePath, cv::IMREAD_COLOR);
    cv::imshow("Display window", image);
    cv::waitKey(0);
    return 0;
}