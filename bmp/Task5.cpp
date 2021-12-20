#include "BmpStructures.h"
#include "ImgFunctions.h"
#include <algorithm> 

typedef unsigned long ulong;

RgbImg medianFilter(RgbImg const& image, ulong kernel_size)
{
    RgbImg imgCopy = copyRgbImg(image);
    ulong const height = image.height;
    ulong const width = image.width;
    ulong const half = kernel_size / 2;
    ulong const kernel_count = kernel_size * kernel_size;

    double* blues = new double[kernel_count];
    double* greens = new double[kernel_count];
    double* reds = new double[kernel_count];

    auto median_element_index = kernel_count / 2;

    for (ulong row = half; row < height - half; ++row)
        for (ulong col = half; col < width - half; ++col)
        {
            for (ulong k_row = 0; k_row < kernel_size; ++k_row)
                for (ulong k_col = 0; k_col < kernel_size; ++k_col)
                {
                    ulong const res_row = row + k_row - half;
                    ulong const res_col = col + k_col - half;
                    RGB const& pixel = image.pixels[res_row][res_col];
                    auto idx = (k_row * kernel_size) + k_col;

                    blues[idx] = pixel.Blue;
                    greens[idx] = pixel.Green;
                    reds[idx] = pixel.Red;
                }

            RGB& pixel = imgCopy.pixels[row][col];

            std::sort(blues, blues + (int)kernel_count);
            std::sort(greens, greens + (int)kernel_count);
            std::sort(reds, reds + (int)kernel_count);

            auto median_blue = blues[median_element_index];
            auto median_green = greens[median_element_index];
            auto median_red = reds[median_element_index];

            pixel.Blue = median_blue;
            pixel.Green = median_green;
            pixel.Red = median_red;
        }

    delete[] blues;
    delete[] greens;
    delete[] reds;

    return imgCopy;
}

int main(int argc, char const* argv[])
{
    auto image = readRgbImg("kidsnoise.bmp");
    auto medianed = medianFilter(image, 3);

    writeRgbImg("kidsnoise_1.bmp", medianed);

    deleteRgbImg(image);
    deleteRgbImg(medianed);

    return 0;
}
