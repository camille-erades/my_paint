/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** button_status.c
*/

#include "../include/my.h"

int buttons_status(sfRectangleShape* button, pri_v *val)
{
    sfVector2f posi = sfRectangleShape_getPosition(button);
    sfVector2f len = sfRectangleShape_getSize(button);
    if (val->posi.x >= posi.x & val->posi.x <= (posi.x + len.x) &
    val->posi.y >= posi.y & val->posi.y <= (posi.y + len.y)){
        if (sfMouse_isButtonPressed(sfMouseLeft))
            return 2;
        return 1;
    }
    return 0;
}
