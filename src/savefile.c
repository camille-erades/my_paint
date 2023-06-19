/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** savefile.c
*/

#include "../include/my.h"

void savefile(pri_v *val)
{
    if (buttons_status(val->save, val) == 2) {
        val->screen = sfRenderWindow_capture(val->wind);
        sfImage_saveToFile(val->screen, "drawing.jpg");
    }
}
