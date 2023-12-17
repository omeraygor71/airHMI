/**
 * @file AirPicture.h
 *
 * The definition of class AirPicture. 
 *
 * @author Omer Aygor (email:oaygor@eyzateknoloji.com)
 * @date 2023/12/14
 *
 * @copyright 
 * Copyright (C) 2022-2023 Eyza Teknoloji ve Nava Bilişim \n
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#ifndef __AIRPICTURE_H__
#define __AIRPICTURE_H__

#include "AirTouch.h"
#include "AirHardware.h"
/**
 * @addtogroup Component 
 * @{ 
 */

/**
 * AirPicture component. 
 */
class AirPicture: public AirTouch
{
public: /* methods */

AirPicture::AirPicture( const char *name);

uint32_t AirPicture::Get_visible(uint32_t *number);

uint32_t AirPicture::Get_left(uint32_t *number);

uint32_t AirPicture::Get_top(uint32_t *number);

uint32_t AirPicture::Get_width(uint32_t *number);

uint32_t AirPicture::Get_height(uint32_t *number);

uint32_t AirPicture::Set_Image_File(String imgName);

uint32_t AirPicture::Set_active(uint32_t number);

uint32_t AirPicture::Set_visible(uint32_t number);

uint32_t AirPicture::Set_left(uint32_t number);

uint32_t AirPicture::Set_top(uint32_t number);

uint32_t AirPicture::Set_width(uint32_t number);

uint32_t AirPicture::Set_height(uint32_t number);
};

#endif /* #ifndef __AIRPICTURE_H__ */
