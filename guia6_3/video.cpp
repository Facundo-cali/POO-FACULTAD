#include "video.h"
#include <iostream>
using namespace std;

video::video(char * desc, char * img, char * vid) : imagen(desc,img)
{
    this->vid = vid;
}

void video::mostrar()
{
    imagen::mostrar();
    cout << " " << this->vid;
}
