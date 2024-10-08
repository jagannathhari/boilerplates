#ifndef MAIN_UI_H
#define MAIN_UI_H
#ifndef NK_NUKLEAR_H_
#include <nuklear.h>
#include <SDL.h>
#endif
typedef struct {
    struct nk_context *ctx;
    SDL_Renderer *renderer;
    int (*handle_event)(SDL_Event *evt);
    int should_close;
    int w;
    int h;
}WinData;

void main_ui(WinData *windata);

#endif // MAIN_UI_H
