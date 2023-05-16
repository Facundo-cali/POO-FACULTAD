#ifndef VIDEO_H
#define VIDEO_H
#include "imagen.h"


class video : public imagen
{
private:
    char * vid;
public:
    video(char * texto,char * img, char * vid);
    void mostrar();
};

#endif // VIDEO_H
