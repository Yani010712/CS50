#include <stdio.h>

bool valid_triangle(float x, float y, float z);

bool valid_triangle(float x, float y, float z)
{
    // check for all positive sides
    if (x <= 0 || y <= 0 || z<= 0)
    {
        return false;
    }
    //check that sum of any two sides greater than third
    if ((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        return false;
    }
    // if passed both tests, we are good!
    return true;

}