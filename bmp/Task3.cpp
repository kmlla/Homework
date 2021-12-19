#include <iostream>
#include "BmpStructures.h"
#include "ImgFunctions.h"

typedef unsigned long l;

RgbImg Gray(RgbImg const& image)
{
    RgbImg output = copyRgbImg(image);

    for (l row = 0; row < image.height; ++row)
    {
        for (l col = 0; col < image.width; ++col)
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

    writeRgbImg("rainbow_gray.bmp", gray);

    deleteRgbImg(input);
    deleteRgbImg(gray);

    return 0;
}
