#ifndef CLIBARS_HPP
#define CLIBARS_HPP

#pragma once

#include <iostream>

class CLIBars
{
    int length;
    float total;
    char fill;
    char empty;
    char lborder;
    char rborder;
    bool pV;
    std::string label;

    /**
     * @brief method to repeat a char
     * 
     * @param s 
     * @param times 
     * @return std::string 
     */
    std::string repeat(char s, int times);

public:
    /**
     * @brief Construct a new CLIBars object
     * 
     * @param length 
     * @param total 
     */
    CLIBars(int length, float total);

    /**
     * @brief Construct a new CLIBars object
     * 
     * @param length 
     * @param total 
     * @param fill 
     */
    CLIBars(int length, float total, char fill);

    /**
     * @brief Construct a new CLIBars object
     * 
     * @param length 
     * @param total 
     * @param fill 
     * @param empty 
     */
    CLIBars(int length, float total, char fill, char empty);

    /**
     * @brief Construct a new CLIBars object
     * 
     * @param length 
     * @param total 
     * @param fill 
     * @param empty 
     * @param border 
     */
    CLIBars(int length, float total, char fill, char empty, char lborder, char rborder);

    /**
     * @brief Construct a new CLIBars object
     * 
     * @param label 
     * @param length 
     * @param total 
     * @param fill 
     * @param empty 
     * @param border 
     */
    CLIBars(std::string label, int length, float total, char fill, char empty, char lborder, char rborder);

    /**
     * @brief method to hide the percentage
     * 
     */
    void hidePercentage();

    /**
     * @brief method to show percentage
     * 
     */
    void showPercentage();

    /**
     * @brief method to increment
     * 
     * @param value 
     */
    void progress(float value);
};

#endif