# CLI Bars

> A customizable bars on console

**CLIBars** is a easy to use and customizable library

## Requirements

- CMake 3.9+

## Setup

1. git clone this repo

   ```sh
   $ git clone https://github.com/tbhaxor/cpp-clibars.git
   ```

2. change directory
   ```sh
   $ cd cpp-clibars
   ```
3. make a directory and change directory

   ```sh
   $ mkdir build && cd build
   ```

4. configure the project

   ```sh
   $ cmake .. -DCMAKE_INSTALL_PREFIX=/usr -DCMAKE_BUILD_TYPE=Release
   ```

   **Note:** You can use any install prefix, make sure it is added in `$PATH`

5. install the project
   ```sh
   $ make && sudo make install
   ```
6. copy the include file from `includes/clibars.hpp` to `/usr/include/clibars.hpp`

   ```sh
   $ sudo cp ../includes/clibars.hpp /usr/include/clibars.hpp
   ```

7. clean the build
   ```sh
   $ make clean
   ```

## Example

```cpp
/**
 * compiling
 * $ g++ example.cpp -o example -lclibars
 *
 * running
 * $ ./example
 */
#include <clibars.hpp>
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
```

## API

## Contact

Email : tbhaxor@gmail.com
