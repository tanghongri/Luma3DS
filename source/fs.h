/*
*   fs.h
*       by Reisyukaku / Aurora Wright
*   Copyright (c) 2016 All Rights Reserved
*/

#pragma once

#include "types.h"

u32 mountFs(void);
u32 fileRead(void *dest, const char *path, u32 size);
u32 fileWrite(const void *buffer, const char *path, u32 size);
u32 fileSize(const char *path);
u32 defPayloadExists(void);
void firmRead(void *dest, const char *firmFolder);