/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** filebutton.c
*/

#include "../include/my.h"

void filebutton(pri_v *val)
{
    sfRenderWindow_drawRectangleShape(val->windmenu, val->filehider, NULL);
    if (buttons_status(val->file, val) == 2){
        if (val->filemanstat == 0){
            sfRectangleShape_setSize(val->filehider, (sfVector2f){1, 1});
            val->filemanstat = 1;
        } else {
            sfRectangleShape_setSize(val->filehider, (sfVector2f){50, 300});
            val->filemanstat = 0;
        }
        return;
    }
}
