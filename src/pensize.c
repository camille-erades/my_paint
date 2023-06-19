/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** pensize.c
*/

#include "../include/my.h"

void pensize(pri_v *val)
{
    if (buttons_status(val->pensizel, val) == 2 && val->size > 1)
        val->size--;
    if (buttons_status(val->pensizem, val) == 2)
        val->size++;
}
