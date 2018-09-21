class TextureWrapper
{
public:
    TextureWrapper();

    ~TextureWrapper();

    bool loadFromFile(std::string path);

    void free();

    void render(int x, int y);

    int getWidth();
    int getHeight();

private:
    SDL_Texture *mTexture;

    int mWidth;
    int mHeight;
};
