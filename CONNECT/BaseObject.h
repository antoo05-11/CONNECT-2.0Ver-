#pragma once

#include "GameSpecs.h"

class BaseObject
{
    SDL_Texture* object;
    SDL_Rect rect{};
    TTF_Font* font;
    int size;
public:
    BaseObject();
    ~BaseObject();

    BaseObject(const std::string &font_path, const int &size)
    {
        font = TTF_OpenFont(font_path.c_str(), size);
        if (font == nullptr) confirmError("TTF_OpenFont", true);
    }

    void LoadFont(const std::string& font_path, const int& size)
    {
        if (TTF_Init() != 0) confirmError("TTF_Init", true);
        font = TTF_OpenFont(font_path.c_str(), size);
        if (font == nullptr) confirmError("TTF_OpenFont", true);
    }
    void setRect(const int& x, const int& y) { rect.x = x; rect.y = y; }
    SDL_Rect getRect() { return rect; }
    SDL_Texture* getTexture() { return object; }

    void loadImage(const std::string& path, SDL_Renderer*& renderer, const SDL_Color* color = nullptr);
    int getWidth() const { return rect.w; }
    int getHeight() const { return rect.h; }
    void render(SDL_Renderer* renderer, const SDL_Rect* srcrect, const SDL_Rect* dstrect);

    void free();

    void loadText(std::string text, SDL_Color color, SDL_Renderer*& renderer, int length_wrapped = 0);
    void freeFont()
    {
        if(font!=nullptr)
            TTF_CloseFont(font);
    }
};

enum name_text_
{
    GET_NAME_REQUEST,
    PLAYER_NAME,
    RETURN_REQUEST,
    QUIT_REQUEST,
    LEADER,
    LEADER_ROUND,
};