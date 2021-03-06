#pragma once
/**
 * @file phbank.hpp
 * @brief Master-manager
 */
#ifndef PHBANK_HPP
#define PHBANK_HPP

#include "save_manager.hpp"
#include "data_manager.hpp"
#include "font_manager.hpp"
#include "texture_manager.hpp"

// TODO Rename back to PHBank
namespace PHBanku
{
	extern SaveManager* save;
	extern DataManager* data;
	extern FontManager* font;
	extern TextureManager* texture;
}

#endif // PHBANK_HPP
