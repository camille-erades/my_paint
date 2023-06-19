/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** editbutton.c
*/

#include "../include/my.h"

void editbutton(pri_v *val)
{
    sfRenderWindow_drawRectangleShape(val->windmenu, val->edithider, NULL);
    if (buttons_status(val->edit, val) == 2){
        if (val->editmanstat == 0){
            sfRectangleShape_setSize(val->edithider, (sfVector2f){1, 1});
            val->editmanstat = 1;
        } else {
            sfRectangleShape_setSize(val->edithider, (sfVector2f){50, 300});
            val->editmanstat = 0;
        }
        return;
    }
}
