/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** closed.c
*/

#include "../include/my.h"

void closed(pri_v *val)
{
    if (val->event.type == sfEvtClosed){
        sfRenderWindow_close(val->wind);
        sfRenderWindow_close(val->windmenu);
    }
}
