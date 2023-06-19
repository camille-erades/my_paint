/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** colors.c
*/

#include "../include/my.h"

void colors(pri_v *val)
{
    if (buttons_status(val->pen, val) == 2)
        val->pencol = sfBlack;
    if (buttons_status(val->colblack, val) == 2)
        val->pencol = sfBlack;
    if (buttons_status(val->colred, val) == 2)
        val->pencol = sfRed;
    if (buttons_status(val->colgreen, val) == 2)
        val->pencol = sfGreen;
    if (buttons_status(val->colblue, val) == 2)
        val->pencol = sfBlue;
    if (buttons_status(val->eraser, val) == 2)
        val->pencol = sfWhite;
}
