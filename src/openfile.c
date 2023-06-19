/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** openfile.c
*/

#include "../include/my.h"

void openfile(pri_v *val)
{
    if (buttons_status(val->open, val) == 2){
        val->newtexture = sfTexture_createFromFile("drawing.jpg", NULL);
        sfSprite_setTexture(val->newfile, val->newtexture, sfTrue);
    }
}
