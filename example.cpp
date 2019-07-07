/**
 * @file example.cpp
 * @author Gurkirat Singh (tbhaxor@gmail.com)
 * @brief The example file for CLIBars
 * @version 1.0.0
 * @date 2019-07-07
 * 
 * 
 * compiling
 * $ g++ example.cpp -o example -lclibars
 * 
 * running
 * $ ./example
 */
#include "../includes/clibars.hpp"
#include <unistd.h>

int main()
{
    // instancing the object
    CLIBars *bar = new CLIBars("Downloading", 40, 100, '#', '_', '[', ']');

    for (size_t i = 0; i <= 100; i++)
    {
        // writing the
        bar->progress(i);

        // giving the sleep od 200ms
        usleep(200000);
    }

    // deallocating the memory
    delete bar;
}