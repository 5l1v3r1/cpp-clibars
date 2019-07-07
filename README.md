# CLI Bars ![](https://img.shields.io/badge/version-1.0.0-yellow.svg) ![Travis (.org)](https://img.shields.io/travis/tbhaxor/cpp-clibars.svg?style=flat) ![GitHub All Releases](https://img.shields.io/github/downloads/tbhaxor/cpp-clibars/total.svg?style=flat) ![GitHub issues by-label](https://img.shields.io/github/issues/tbhaxor/cpp-clibars/bug.svg?label=bugs%20reported) ![GitHub](https://img.shields.io/github/license/tbhaxor/cpp-clibars.svg) ![GitHub contributors](https://img.shields.io/github/contributors/tbhaxor/cpp-clibars.svg) ![GitHub last commit (branch)](https://img.shields.io/github/last-commit/tbhaxor/cpp-clibars/master.svg)

> A customizable bars on console

**CLIBars** is a easy to use and customizable library to show elegant ascii progress bars on the terminal. For more details see the [api](#api)

## Requirements

- CMake 3.9+
- gcc 8+

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

### Constructing the object

- **`CLIBars(std::string label, int length, float total, char fill, char empty, char lborder, char rborder)`**

    <table>
  <thead>
  <tr>
  <th align="center">Parameter</th>
  <th align="center">Default</th>
  <th align="left">Description</th>
  </tr>
  </thead>
  <tbody>
  <tr>
  <td align="center">label</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the label of the progress bar</td>
  </tr>
  <tr>
  <td align="center">length</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the ength of progress bar</td>
  </tr>
  <tr>
  <td align="center">total</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the total length of the input</td>
  </tr>
  <tr>
  <td align="center">fill</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the fill character</td>
  </tr>
  <tr>
  <td align="center">empty</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the empty character</td>
  </tr>
  <tr>
  <td align="center">lborder</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the left border character</td>
  </tr>
  <tr>
  <td align="center">rborder</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the right border character</td>
  </tr>
  </tbody>
  </table>

* **`CLIBars(int length, float total, char fill, char empty, char lborder, char rborder)`**

    <table>
  <thead>
  <tr>
  <th align="center">Parameter</th>
  <th align="center">Default</th>
  <th align="left">Description</th>
  </tr>
  </thead>
  <tbody>
  <tr>
  <td align="center">label</td>
  <td align="center"><em>empty string</em></td>
  <td align="left">Sets the label of the progress bar</td>
  </tr>
  <tr>
  <td align="center">length</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the ength of progress bar</td>
  </tr>
  <tr>
  <td align="center">total</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the total length of the input</td>
  </tr>
  <tr>
  <td align="center">fill</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the fill character</td>
  </tr>
  <tr>
  <td align="center">empty</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the empty character</td>
  </tr>
  <tr>
  <td align="center">lborder</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the left border character</td>
  </tr>
  <tr>
  <td align="center">rborder</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the right border character</td>
  </tr>
  </tbody>
  </table>

* **`CLIBars(int length, float total, char fill, char empty)`**

    <table>
  <thead>
  <tr>
  <th align="center">Parameter</th>
  <th align="center">Default</th>
  <th align="left">Description</th>
  </tr>
  </thead>
  <tbody>
  <tr>
  <td align="center">label</td>
  <td align="center"><em>empty string</em></td>
  <td align="left">Sets the label of the progress bar</td>
  </tr>
  <tr>
  <td align="center">length</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the ength of progress bar</td>
  </tr>
  <tr>
  <td align="center">total</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the total length of the input</td>
  </tr>
  <tr>
  <td align="center">fill</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the fill character</td>
  </tr>
  <tr>
  <td align="center">empty</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the empty character</td>
  </tr>
  <tr>
  <td align="center">lborder</td>
  <td align="center"><em>empty character</em></td>
  <td align="left">Sets the left border character</td>
  </tr>
  <tr>
  <td align="center">rborder</td>
  <td align="center"><em>empty character</em></td>
  <td align="left">Sets the right border character</td>
  </tr>
  </tbody>
  </table>

* **`CLIBars(int length, float total, char fill)`**

    <table>
  <thead>
  <tr>
  <th align="center">Parameter</th>
  <th align="center">Default</th>
  <th align="left">Description</th>
  </tr>
  </thead>
  <tbody>
  <tr>
  <td align="center">label</td>
  <td align="center"><em>empty string</em></td>
  <td align="left">Sets the label of the progress bar</td>
  </tr>
  <tr>
  <td align="center">length</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the ength of progress bar</td>
  </tr>
  <tr>
  <td align="center">total</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the total length of the input</td>
  </tr>
  <tr>
  <td align="center">fill</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the fill character</td>
  </tr>
  <tr>
  <td align="center">empty</td>
  <td align="center"><em>white space</em> (<code>' '</code>)</td>
  <td align="left">Sets the empty character</td>
  </tr>
  <tr>
  <td align="center">lborder</td>
  <td align="center"><em>null character</em> (<code>'\0'</code>)</td>
  <td align="left">Sets the left border character</td>
  </tr>
  <tr>
  <td align="center">rborder</td>
  <td align="center"><em>null character</em> (<code>'\0'</code>)</td>
  <td align="left">Sets the right border character</td>
  </tr>
  </tbody>
  </table>

* **`CLIBars(int length, float total)`**

    <table>
  <thead>
  <tr>
  <th align="center">Parameter</th>
  <th align="center">Default</th>
  <th align="left">Description</th>
  </tr>
  </thead>
  <tbody>
  <tr>
  <td align="center">label</td>
  <td align="center"><em>empty string</em></td>
  <td align="left">Sets the label of the progress bar</td>
  </tr>
  <tr>
  <td align="center">length</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the ength of progress bar</td>
  </tr>
  <tr>
  <td align="center">total</td>
  <td align="center"><code>nil</code></td>
  <td align="left">Sets the total length of the input</td>
  </tr>
  <tr>
  <td align="center">fill</td>
  <td align="center"><em>pound sign</em> (<code>'#'</code>)</td>
  <td align="left">Sets the fill character</td>
  </tr>
  <tr>
  <td align="center">empty</td>
  <td align="center"><em>white space</em> (<code>' '</code>)</td>
  <td align="left">Sets the empty character</td>
  </tr>
  <tr>
  <td align="center">lborder</td>
  <td align="center"><em>null character</em> (<code>'\0'</code>)</td>
  <td align="left">Sets the left border character</td>
  </tr>
  <tr>
  <td align="center">rborder</td>
  <td align="center"><em>null character</em> (<code>'\0'</code>)</td>
  <td align="left">Sets the right border character</td>
  </tr>
  </tbody>
  </table>

### Hide / Show Percentage

- **`showPercentage()`**
  - if called, show the percentage
  - percentage is shown by default
- **`hidePercentage()`**
  - if called, hide the trailing percentage
  - should be called once before progressing

### Progress

- **`progress(float value)`**
  - accepts only one value of float type
  - the value that changes on progress will update the state of progress

## Contribution

### Rules

1. commit message should describe the change
2. pull request on master branch directly won't be merged

### Scope

1. enhancing the documentation
2. more features in the library (_if worthy, it will be merged_)

## Contact

Email : tbhaxor@gmail.com
