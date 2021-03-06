/* Copyright (c) 2015 Wojciech Owczarek,
 *
 * All Rights Reserved
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file   cck_types.h
 * @date   Sat Jan 9 16:14:10 2016
 *
 * @brief  LibCCK-specific data types
 *
 */

#ifndef CCK_TYPES_H_
#define CCK_TYPES_H_

#include <stdint.h>

#include <libcck/log_handler.h>

/* LibCCK bool type */
typedef enum {CCK_FALSE=0, CCK_TRUE=1} CckBool;


/* Generic integer types */

typedef uint8_t 		CckUShort;
typedef unsigned char 		CckUChar;
typedef unsigned char 		CckOctet;

typedef uint8_t 		CckU8;
typedef int8_t 			CckI8;
typedef uint16_t 		CckU16;
typedef int16_t 		CckI16;
typedef uint32_t 		CckU32;
typedef int32_t 		CckI32;

typedef struct {
	int32_t		seconds;
	int32_t		nanoseconds;
} CckTimestamp;

#endif /* CCK_TYPES_H_ */
