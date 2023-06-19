/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** hiders.c
*/

#include "../include/my.h"

void file_hider(pri_v *val)
{
    sfRectangleShape_setSize(val->filehider, (sfVector2f){50, 300});
    sfRectangleShape_setOutlineThickness(val->filehider, 1);
    sfRectangleShape_setOutlineColor(val->filehider, sfWhite);
    sfRectangleShape_setFillColor(val->filehider, sfWhite);
    sfRectangleShape_setPosition(val->filehider, (sfVector2f){1, 25});
}

void edit_hider(pri_v *val)
{
    sfRectangleShape_setSize(val->edithider, (sfVector2f){50, 300});
    sfRectangleShape_setOutlineThickness(val->edithider, 1);
    sfRectangleShape_setOutlineColor(val->edithider, sfWhite);
    sfRectangleShape_setFillColor(val->edithider, sfWhite);
    sfRectangleShape_setPosition(val->edithider, (sfVector2f){70, 25});
}

void help_hider(pri_v *val)
{
    sfRectangleShape_setSize(val->helphider, (sfVector2f){200, 489});
    sfRectangleShape_setOutlineThickness(val->helphider, 1);
    sfRectangleShape_setOutlineColor(val->helphider, sfWhite);
    sfRectangleShape_setFillColor(val->helphider, sfWhite);
    sfRectangleShape_setPosition(val->helphider, (sfVector2f){1, 25});
}
