/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** prepbutton.c
*/

#include "../include/my.h"

void init_buttons_text(pri_v *val)
{
    val->txtfile = sfText_create();
    val->txtsave = sfText_create();
    val->txtnew = sfText_create();
    val->txtopen = sfText_create();
    val->txtedit = sfText_create();
    val->txtpen = sfText_create();
    val->txteraser = sfText_create();
    val->txtshapsqr = sfText_create();
    val->txtshaprnd = sfText_create();
    val->txtpensizem = sfText_create();
    val->txtpensizel = sfText_create();
    val->txthelp = sfText_create();
}

void construct_button_text(sfText *buttext, sfVector2f butposi, pri_v *val,
char *txt)
{
    sfText_setFont(buttext, val->font);
    sfText_setCharacterSize(buttext, 15);
    sfText_setString(buttext, txt);
    sfText_setColor(buttext, sfBlack);
    sfText_setPosition(buttext, butposi);
}

void prepare_buttons_text(pri_v *val)
{
    construct_button_text(val->txtfile, (sfVector2f){1, 1}, val, "file");
    construct_button_text(val->txtsave, (sfVector2f){1, 30}, val, "save");
    construct_button_text(val->txtnew, (sfVector2f){1, 60}, val, "new");
    construct_button_text(val->txtopen, (sfVector2f){1, 90}, val, "open");
    construct_button_text(val->txtedit, (sfVector2f){70, 1}, val, "edit");
    construct_button_text(val->txtpen, (sfVector2f){70, 30}, val, "pen");
    construct_button_text(val->txteraser, (sfVector2f){70, 60}, val,
    "eraser");
    construct_button_text(val->txtshapsqr, (sfVector2f){70, 210}, val,
    "square");
    construct_button_text(val->txtshaprnd, (sfVector2f){70, 240}, val,
    "circle");
    construct_button_text(val->txtpensizem, (sfVector2f){70, 270}, val,
    "size+");
    construct_button_text(val->txtpensizel, (sfVector2f){70, 300}, val,
    "size-");
    construct_button_text(val->txthelp, (sfVector2f){139, 1}, val, "help");
}

void show_buttons(pri_v *val)
{
    sfRenderWindow_drawRectangleShape(val->windmenu, val->file, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->save, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->new, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->open, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->edit, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->pen, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->eraser, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->colblack, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->colblue, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->colgreen, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->colred, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->shaprnd, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->shapsqr, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->pensizem, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->pensizel, NULL);
    sfRenderWindow_drawRectangleShape(val->windmenu, val->help, NULL);
}

void show_buttons_text(pri_v *val)
{
    sfRenderWindow_drawText(val->windmenu, val->txtfile, NULL);
    sfRenderWindow_drawText(val->windmenu, val->txtsave, NULL);
    sfRenderWindow_drawText(val->windmenu, val->txtnew, NULL);
    sfRenderWindow_drawText(val->windmenu, val->txtopen, NULL);
    sfRenderWindow_drawText(val->windmenu, val->txtedit, NULL);
    sfRenderWindow_drawText(val->windmenu, val->txtpen, NULL);
    sfRenderWindow_drawText(val->windmenu, val->txteraser, NULL);
    sfRenderWindow_drawText(val->windmenu, val->txtshaprnd, NULL);
    sfRenderWindow_drawText(val->windmenu, val->txtshapsqr, NULL);
    sfRenderWindow_drawText(val->windmenu, val->txtpensizem, NULL);
    sfRenderWindow_drawText(val->windmenu, val->txtpensizel, NULL);
    sfRenderWindow_drawText(val->windmenu, val->txthelp, NULL);
}
