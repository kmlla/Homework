#include <iostream>
#include "BmpStructures.h"
#include "ImgFunctions.h"


typedef unsigned long ulong;

RgbImg rotate_90(RgbImg const& image, bool clockwise = true)
{
    RgbImg result = createRgbImg(image.width, image.height);

    if (clockwise == false)
    {
        for (ulong row = 0; row < image.height; ++row)
            for (ulong col = 0; col < image.width; ++col)
                result.pixels[col][image.height - row - 1] = image.pixels[row][col];
    }
    else
    {
        for (ulong row = 0; row < image.height; ++row)
            for (ulong col = 0; col < image.width; ++col)
                result.pixels[image.width - col - 1][row] = image.pixels[row][col];
    }

    return result;
}

void rotate(char const* input, char const* output, unsigned int angle = 0)
{
    if (angle % 90 != 0)
    {
        std::cout << "Cannot rotate image on " << angle << std::endl;
        return;
    }

    RgbImg image = readRgbImg(input);

    if (angle % 360 == 0)
    {
        writeRgbImg(output, image);
        deleteRgbImg(image);
        return;
    }

    if (angle % 270 == 0)
    {
        RgbImg rotated = rotate_90(image, false);
        writeRgbImg(output, rotated);
        deleteRgbImg(image);
        deleteRgbImg(rotated);
        return;
    }

    if (angle % 180 == 0)
    {
        RgbImg rotated = createRgbImg(image.height, image.width);
        for (ulong row = 0; row < image.height; ++row)
            for (ulong col = 0; col < image.width; ++col)
                rotated.pixels[image.height - 1 - row][image.width - 1 - col] = image.pixels[row][col];

        writeRgbImg(output, rotated);
        deleteRgbImg(image);
        deleteRgbImg(rotated);
        return;
    }

    RgbImg rotated = rotate_90(image);
    writeRgbImg(output, rotated);
    deleteRgbImg(image);
    deleteRgbImg(rotated);
}

int main()
{
    rotate("rainbow.bmp", "90_rainbow.bmp", 90);
    rotate("rainbow.bmp", "180_rainbow.bmp", 180);
    rotate("rainbow.bmp", "270_rainbow.bmp", 270);
    rotate("rainbow.bmp", "360_rainbow.bmp", 360);
    return 0;
}
