#include <iostream>
#include "BmpStructures.h"
#include "ImgFunctions.h"


RgbImg rotate_90(RgbImg const& image, bool clockwise = true)
{
    RgbImg result = createRgbImg(image.width, image.height);

    if (clockwise == false)
    {
        for (size_t row = 0; row < image.height; ++row)
            for (size_t col = 0; col < image.width; ++col)
                result.pixels[col][image.height - row - 1] = image.pixels[row][col];
    }
    else
    {
        for (size_t row = 0; row < image.height; ++row)
            for (size_t col = 0; col < image.width; ++col)
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
        for (size_t row = 0; row < image.height; ++row)
            for (size_t col = 0; col < image.width; ++col)
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
    rotate("rainbow.bmp", "90_rainbow1.bmp", 90);
    rotate("rainbow.bmp", "180_rainbow1.bmp", 180);
    rotate("rainbow.bmp", "270_rainbow1.bmp", 270);
    rotate("rainbow.bmp", "360_rainbow1.bmp", 360);
    return 0;
}
