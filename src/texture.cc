// File: texture.cc
// Date: Mon Jun 10 00:52:28 2013 +0800
// Author: Yuxin Wu <ppwwyyxxc@gmail.com>

#include "material/texture.hh"
using namespace std;

const GridTexture
	GridTexture::BLACK_WHITE(1, Surface::BLACK_REFL, Surface::WHITE_REFL);

const HomoTexture
	HomoTexture::BLUE(Surface::BLUE_REFL);


