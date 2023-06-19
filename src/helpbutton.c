/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** helpbutton.c
*/

#include "../include/my.h"

void helpbutton(pri_v *val)
{
    sfRenderWindow_drawRectangleShape(val->windmenu, val->helphider, NULL);
    if (buttons_status(val->help, val) == 2){
        if (val->helpmanstat == 0){
            sfRectangleShape_setSize(val->helphider, (sfVector2f){1, 1});
            sfText_setPosition(val->tuto, (sfVector2f){210, 25});
            val->helpmanstat = 1;
        } else {
            sfRectangleShape_setSize(val->helphider, (sfVector2f){200, 490});
            sfText_setPosition(val->tuto, (sfVector2f){1, 25});
            val->helpmanstat = 0;
        }
        return;
    }
}
