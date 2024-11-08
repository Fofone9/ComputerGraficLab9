#include "Texture.h"

void Texture::load(string src) {
	ilBindImage(texIndex);
	wchar_t unicodeString[256];
	wsprintf(unicodeString, L"%S", src.c_str());
	bool result = ilLoadImage(unicodeString);
}

void Texture::apply(TextureFilter texFilter) {

}
void Texture::disableAll() {

}