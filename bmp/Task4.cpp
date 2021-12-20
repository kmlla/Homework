#include "BmpStructures.h"
#include "ImgFunctions.h"

int main(int argc, char const* argv[])
{
    auto image = readRgbImg("kidsnoise.bmp");

    double kernel[3][3] = { {0, -1, 0},
                           {-1, 5, -1},
                           {0, -1, 0} };

    double* kernel_ptr[3] = { kernel[0],
                             kernel[1],
                             kernel[2] };

    auto image_1 = convolution(image, 3, kernel_ptr);
    auto image_2 = convolution(image_1, 5);

    writeRgbImg("kidsnoise_processed.bmp", image_2);

    deleteRgbImg(image_2);
    deleteRgbImg(image_1);
    deleteRgbImg(image);

    return 0;
