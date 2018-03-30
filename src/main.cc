#include <iostream>

#ifdef USE_CUDA
#include "gpu.hpp"
#endif
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main()
{
    std::cout << "Hello, world!" << std::endl;

#ifdef USE_CUDA
    std::cout << "CUDA: On" << std::endl;
    printCudaVersion();
#else
    std::cout << "CUDA: Off" << std::endl;
#endif
	Mat seed = imread("seeds.png", 0);
	if (seed.empty())
	{
		cout << "error reading image, get NULL" << endl;
	}
	waitKey();
    return 0;
}
