/*
** EPITECH PROJECT, 2022
** B-MUL-200-LYN-2-1-mypaint-camille.erades
** File description:
** prepare_all.c
*/

#include "../include/my.h"

void init_buttons(pri_v *val)
{
    val->file = sfRectangleShape_create();
    val->save = sfRectangleShape_create();
    val->new = sfRectangleShape_create();
    val->open = sfRectangleShape_create();
    val->edit = sfRectangleShape_create();
    val->pen = sfRectangleShape_create();
    val->eraser = sfRectangleShape_create();
    val->colblack = sfRectangleShape_create();
    val->colred = sfRectangleShape_create();
    val->colgreen = sfRectangleShape_create();
    val->colblue = sfRectangleShape_create();
    val->shapsqr = sfRectangleShape_create();
    val->shaprnd = sfRectangleShape_create();
    val->pensizem = sfRectangleShape_create();
    val->pensizel = sfRectangleShape_create();
    val->help = sfRectangleShape_create();
    val->filehider = sfRectangleShape_create();
    val->edithider = sfRectangleShape_create();
    val->helphider = sfRectangleShape_create();
}

void prepare_flat_all(pri_v *val)
{
    sfVideoMode modetest = {1920, 1080, 32}, modetest2 = {210, 350, 32};
    val->mode = modetest; val->mode2 = modetest2;
    val->wind = sfRenderWindow_create(val->mode, "my_paint",
    sfResize | sfClose, NULL);
    val->windmenu = sfRenderWindow_create(val->mode2, "menu",
    sfResize, NULL); val->framebuffer = framebuffer_create(1920, 1080);
    val->texture = sfTexture_create(1920, 1080);
    val->sprite = sfSprite_create();
    val->newtexture = sfTexture_create(1920, 1080);
    val->newfile = sfSprite_create();
    val->pencol = sfBlack; val->screen = NULL;
    val->size = 10;
    val->eramod = 0;
    val->rect = sfRectangleShape_create();
    val->tuto = sfText_create();
    val->font = sfFont_createFromFile("DefaultSans-Regular.ttf");
    val->buffer = malloc(sizeof(char) * 400);
    val->fd = open("src/helper.txt", O_RDONLY);
    read(val->fd, val->buffer, 400);
    init_buttons(val); init_buttons_text(val);
}

void construct_button(sfRectangleShape *button, sfVector2f butposi, pri_v *val,
sfColor color)
{
    sfRectangleShape_setSize(button, (sfVector2f){50, 20});
    sfRectangleShape_setOutlineThickness(button, 1);
    sfRectangleShape_setOutlineColor(button, sfBlack);
    sfRectangleShape_setFillColor(button, color);
    sfRectangleShape_setPosition(button, butposi);
}

void prepare_all_buttons(pri_v *val)
{
    construct_button(val->file, (sfVector2f){1, 1}, val, sfWhite);
    construct_button(val->save, (sfVector2f){1, 30}, val, sfWhite);
    construct_button(val->new, (sfVector2f){1, 60}, val, sfWhite);
    construct_button(val->open, (sfVector2f){1, 90}, val, sfWhite);
    construct_button(val->edit, (sfVector2f){70, 1}, val, sfWhite);
    construct_button(val->pen, (sfVector2f){70, 30}, val, sfWhite);
    construct_button(val->eraser, (sfVector2f){70, 60}, val, sfWhite);
    construct_button(val->colblack, (sfVector2f){70, 90}, val, sfBlack);
    construct_button(val->colred, (sfVector2f){70, 120}, val, sfRed);
    construct_button(val->colgreen, (sfVector2f){70, 150}, val, sfGreen);
    construct_button(val->colblue, (sfVector2f){70, 180}, val, sfBlue);
    construct_button(val->shapsqr, (sfVector2f){70, 210}, val, sfWhite);
    construct_button(val->shaprnd, (sfVector2f){70, 240}, val, sfWhite);
    construct_button(val->pensizem, (sfVector2f){70, 270}, val, sfWhite);
    construct_button(val->pensizel, (sfVector2f){70, 300}, val, sfWhite);
    construct_button(val->help, (sfVector2f){139, 1}, val, sfWhite);
}

void prepare_all(pri_v *val)
{
    prepare_flat_all(val);
    val->filemanstat = 1;
    val->editmanstat = 1;
    val->helpmanstat = 1;
    file_hider(val);
    edit_hider(val);
    help_hider(val);
    sfSprite_setTexture(val->sprite, val->texture, sfTrue);
    sfSprite_setTexture(val->newfile, val->newtexture, sfTrue);
    sfRenderWindow_setFramerateLimit(val->wind, 60);
    sfRenderWindow_setFramerateLimit(val->windmenu, 15);
    sfText_setFont(val->tuto, val->font);
    sfText_setCharacterSize(val->tuto, 10);
    sfText_setString(val->tuto, val->buffer);
    sfText_setColor(val->tuto, sfBlack);
    sfText_setPosition(val->tuto, (sfVector2f){1, 25});
    prepare_all_buttons(val);
    prepare_buttons_text(val);
}
