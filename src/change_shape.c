/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** change_shape.c
*/

#include "../include/my.h"

void change_shape(pri_v *val)
{
    if (buttons_status(val->shaprnd, val) == 2)
        val->eramod = 1;
    if (buttons_status(val->shapsqr, val) == 2)
        val->eramod = 0;
}
