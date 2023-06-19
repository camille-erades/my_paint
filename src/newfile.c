/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** newfile.c
*/

#include "../include/my.h"

void secnewfile(pri_v *val, int i)
{
    for (int j = 0; j < 1080; ++j)
        my_put_pixel(val->framebuffer, i, j, sfWhite);
}

void newfile(pri_v *val)
{
    if (buttons_status(val->new, val) == 2){
        for (int i = 0; i < 1920; ++i)
            secnewfile(val, i);
    }
}
