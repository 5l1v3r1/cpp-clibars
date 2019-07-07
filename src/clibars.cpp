#include "clibars.hpp"
#include <sstream>
#include <cmath>

/**
 * @brief Construct a new CLIBars::CLIBars object
 * 
 * @param label 
 * @param length 
 * @param total 
 * @param fill 
 * @param empty 
 * @param border 
 */
CLIBars::CLIBars(std::string label, int length, float total, char fill, char empty, char lborder, char rborder)
{
    this->pV = true;
    this->label = label;
    this->length = length;
    this->lborder = lborder;
    this->rborder = rborder;
    this->total = total;
    this->fill = fill;
    this->empty = empty;
}

/**
 * @brief Construct a new CLIBars::CLIBars object
 * 
 * @param length 
 * @param total 
 * @param fill 
 * @param empty 
 * @param border 
 */
CLIBars::CLIBars(int length, float total, char fill, char empty, char lborder, char rborder)
{
    this->pV = true;
    this->label = "";
    this->length = length;
    this->lborder = lborder;
    this->rborder = rborder;
    this->total = total;
    this->fill = fill;
    this->empty = empty;
}

/**
 * @brief Construct a new CLIBars::CLIBars object
 * 
 * @param length 
 * @param total 
 * @param fill 
 * @param empty 
 */
CLIBars::CLIBars(int length, float total, char fill, char empty)
{
    this->pV = true;
    this->label = "";
    this->length = length;
    this->lborder = '\0';
    this->rborder = '\0';
    this->total = total;
    this->fill = fill;
    this->empty = empty;
}

/**
 * @brief Construct a new CLIBars::CLIBars object
 * 
 * @param length 
 * @param total 
 * @param fill 
 */
CLIBars::CLIBars(int length, float total, char fill)
{
    this->pV = true;
    this->label = "";
    this->length = length;
    this->lborder = this->rborder = '\0';
    this->total = total;
    this->fill = fill;
    this->empty = ' ';
}

/**
 * @brief Construct a new CLIBars::CLIBars object
 * 
 * @param length 
 * @param total 
 */
CLIBars::CLIBars(int length, float total)
{
    this->pV = true;
    this->label = "";
    this->length = length;
    this->lborder = this->rborder = '\0';
    this->total = total;
    this->fill = '#';
    this->empty = ' ';
}

/**
 * @brief method to show percentage
 * 
 */
void CLIBars::showPercentage()
{
    this->pV = true;
}

/**
 * @brief method to hide percentage
 * 
 */
void CLIBars::hidePercentage()
{
    this->pV = false;
}

std::string CLIBars::repeat(char s, int times)
{
    std::string str = "";
    for (int i = 0; i < times; i++)
    {
        str += s;
    }
    return str;
}

/**
 * @brief method to progress the bar
 * 
 * @param value 
 */
void CLIBars::progress(float value)
{
    // getting percentage
    float perc = (value * 100) / this->total;
    perc = (int)(perc * 100 + .5);
    perc = (float)perc / 100;

    if (perc > 100)
    {
        perc = 100;
        return;
    }

    int hash = int((round(perc) * this->length) / 100);
    int Hash = this->length - hash;
    std::string empty = this->repeat(this->empty, Hash);
    std::string fill = this->repeat(this->fill, hash);
    std::string inside = fill + empty;
    std::cout << hash;

    if (this->pV)
        std::cout << "\r" << this->label << ' ' << this->lborder << inside << this->rborder << " " << perc << " %  \b\b" << std::flush;
    else
        std::cout << "\r" << this->label << ' ' << this->lborder << inside << this->rborder << "  \b\b" << std::flush;
}