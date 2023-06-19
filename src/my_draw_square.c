/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** my_draw_square.c
*/

#include "../include/my.h"

void compbrushcirc(int i, int j, int v, pri_v *val)
{
    for (j = val->posi.x - v; j <= val->posi.x + v; j++) {
        if (pow(j - val->posi.x, 2) + pow(i - val->posi.y, 2) <= pow(v, 2))
            my_put_pixel(val->framebuffer, j, i, val->pencol);
    }
}

void compbrushrect(int i, int j, int v, pri_v *val)
{
    for (j = -v; j <= v; j++){
        my_put_pixel(val->framebuffer, val->posi.x + j,
        val->posi.y + i, val->pencol);
    }
}

void my_brush(pri_v *val)
{
    int v = val->size / 2;
    int i = 0;
    int j = 0;
    if (val->posi.y < v || val->posi.x > (val->mode.width - v) ||
    val->posi.y > (val->mode.height - v) || val->posi.x < (v))
        return;
    if (val->eramod == 0){
        for (i = -v; i <= v; i++) {
            compbrushrect(i, j, v, val);
        }
    }
    if (val->eramod == 1){
        for (i = val->posi.y - v; i <= val->posi.y + v; i++) {
            compbrushcirc(i, j, v, val);
        }
    }
}
