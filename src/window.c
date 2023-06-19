/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** window.c
*/

#include "../include/my.h"

void showsize(pri_v *val)
{
    sfRectangleShape_setSize(val->rect, (sfVector2f){val->size, val->size});
    sfRectangleShape_setOutlineThickness(val->rect, 1);
    sfRectangleShape_setOutlineColor(val->rect, val->pencol);
    sfRectangleShape_setFillColor(val->rect, sfTransparent);
    sfRectangleShape_setOrigin(val->rect,
    (sfVector2f){val->size / 2, val->size / 2});
    sfRectangleShape_setPosition(val->rect,
    (sfVector2f){val->posi.x, val->posi.y});
    sfRenderWindow_drawRectangleShape(val->wind, val->rect, NULL);
}

void showwind(pri_v *val)
{
    sfRenderWindow_clear(val->wind, sfWhite);
    while (sfRenderWindow_pollEvent(val->wind, &val->event))
        closed(val);
    val->posi = sfMouse_getPositionRenderWindow(val->wind);
    sfRenderWindow_drawSprite(val->wind, val->newfile, NULL);
    sfRenderWindow_drawSprite(val->wind, val->sprite, NULL);
    sfTexture_updateFromPixels(val->texture, val->framebuffer->pixels,
    1920, 1080, 0, 0);
    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue)
        my_brush(val);
    showsize(val);
    sfRenderWindow_display(val->wind);
}

void showwindmenu(pri_v *val)
{
    val->posi = sfMouse_getPositionRenderWindow(val->windmenu);
    colors(val);
    pensize(val);
    change_shape(val);
    newfile(val);
    savefile(val);
    openfile(val);
    show_buttons(val);
    show_buttons_text(val);
    filebutton(val);
    editbutton(val);
    helpbutton(val);
    sfRenderWindow_drawText(val->windmenu, val->tuto, NULL);
    sfRenderWindow_display(val->windmenu);
    sfRenderWindow_clear(val->windmenu, sfWhite);
}

void window(pri_v *val)
{
    while (sfRenderWindow_isOpen(val->wind) &&
    sfRenderWindow_isOpen(val->windmenu)){
        if (sfRenderWindow_hasFocus(val->wind) == sfTrue)
            showwind(val);
        else
            showwindmenu(val);
    }
}
