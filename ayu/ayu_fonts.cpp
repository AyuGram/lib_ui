// This is the source code of AyuGram for Desktop.
//
// We do not and cannot prevent the use of our code,
// but be respectful and credit the original author.
//
// Copyright @Radolyn, 2024
#include "ayu_fonts.h"

#include <utility>

namespace AyuFonts {

QString monoFont;

void setMonoFont(QString newFont) {
	monoFont = std::move(newFont);
}

QString getMonoFont() {
	return monoFont;
}

}
