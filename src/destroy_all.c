/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** destroy_all.c
*/

#include "../include/my.h"

void destroy_all_text(pri_v *val)
{
    sfText_destroy(val->txtedit);
    sfText_destroy(val->txteraser);
    sfText_destroy(val->txtfile);
    sfText_destroy(val->txthelp);
    sfText_destroy(val->txtnew);
    sfText_destroy(val->txtopen);
    sfText_destroy(val->txtpen);
    sfText_destroy(val->txtpensizel);
    sfText_destroy(val->txtpensizem);
    sfText_destroy(val->txtsave);
    sfText_destroy(val->txtshaprnd);
    sfText_destroy(val->txtshapsqr);
}

void destroy_all_button(pri_v *val)
{
    sfRectangleShape_destroy(val->file);
    sfRectangleShape_destroy(val->save);
    sfRectangleShape_destroy(val->new);
    sfRectangleShape_destroy(val->open);
    sfRectangleShape_destroy(val->edit);
    sfRectangleShape_destroy(val->pen);
    sfRectangleShape_destroy(val->eraser);
    sfRectangleShape_destroy(val->colblack);
    sfRectangleShape_destroy(val->colblue);
    sfRectangleShape_destroy(val->colgreen);
    sfRectangleShape_destroy(val->colred);
    sfRectangleShape_destroy(val->shaprnd);
    sfRectangleShape_destroy(val->shapsqr);
    sfRectangleShape_destroy(val->pensizel);
    sfRectangleShape_destroy(val->pensizem);
    sfRectangleShape_destroy(val->help);
    sfRectangleShape_destroy(val->helphider);
    sfRectangleShape_destroy(val->filehider);
    sfRectangleShape_destroy(val->edithider);
    destroy_all_text(val);
}

void destroy_all(pri_v *val)
{
    sfSprite_destroy(val->sprite);
    sfTexture_destroy(val->texture);
    sfSprite_destroy(val->newfile);
    sfTexture_destroy(val->newtexture);
    sfText_destroy(val->tuto);
    sfFont_destroy(val->font);
    if (val->screen)
        sfImage_destroy(val->screen);
    sfRectangleShape_destroy(val->rect);
    sfRenderWindow_destroy(val->wind);
    sfRenderWindow_destroy(val->windmenu);
    framebuffer_destroy(val->framebuffer);
    destroy_all_button(val);
    free(val->buffer);
    close(val->fd);
}
