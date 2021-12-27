#include <iostream>
#include "BmpStructures.h"
#include "ImgFunctions.h"

RgbImg Gray(RgbImg const& image)
{
    RgbImg output = copyRgbImg(image);

    for (size_t row = 0; row < image.height; ++row)
    {
        for (size_t col = 0; col < image.width; ++col)
        {
            RGB const pixel = image.pixels[row][col];
            unsigned char const gray = (char)((pixel.Blue + pixel.Green + pixel.Red) / 3);
            output.pixels[row][col] = { gray, gray, gray };
        }
    }

    return output;
}

int main(int argc, char const* argv[])
{
    RgbImg input = readRgbImg("rainbow.bmp");
    RgbImg gray = Gray(input);

    writeRgbImg("rainbow_gray2.bmp", gray);

    deleteRgbImg(input);
    deleteRgbImg(gray);

    return 0;
}
