/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2015-2019 Jason A. Donenfeld <Jason@zx2c4.com>. All Rights Reserved.
 */

#ifndef _WG_COMPATASM_H
#define _WG_COMPATASM_H

#include <linux/linkage.h>

#define SYM_FUNC_START ENTRY
#define SYM_FUNC_END ENDPROC

#define blake2s_compress_ssse3 zinc_blake2s_compress_ssse3
#define blake2s_compress_avx512 zinc_blake2s_compress_avx512
#define poly1305_init_arm zinc_poly1305_init_arm
#define poly1305_blocks_arm zinc_poly1305_blocks_arm
#define poly1305_emit_arm zinc_poly1305_emit_arm
#define poly1305_blocks_neon zinc_poly1305_blocks_neon
#define poly1305_emit_neon zinc_poly1305_emit_neon
#define poly1305_init_mips zinc_poly1305_init_mips
#define poly1305_blocks_mips zinc_poly1305_blocks_mips
#define poly1305_emit_mips zinc_poly1305_emit_mips
#define poly1305_init_x86_64 zinc_poly1305_init_x86_64
#define poly1305_blocks_x86_64 zinc_poly1305_blocks_x86_64
#define poly1305_emit_x86_64 zinc_poly1305_emit_x86_64
#define poly1305_emit_avx zinc_poly1305_emit_avx
#define poly1305_blocks_avx zinc_poly1305_blocks_avx
#define poly1305_blocks_avx2 zinc_poly1305_blocks_avx2
#define poly1305_blocks_avx512 zinc_poly1305_blocks_avx512
#define curve25519_neon zinc_curve25519_neon
#define hchacha20_ssse3 zinc_hchacha20_ssse3
#define chacha20_ssse3 zinc_chacha20_ssse3
#define chacha20_avx2 zinc_chacha20_avx2
#define chacha20_avx512 zinc_chacha20_avx512
#define chacha20_avx512vl zinc_chacha20_avx512vl
#define chacha20_mips zinc_chacha20_mips
#define chacha20_arm zinc_chacha20_arm
#define hchacha20_arm zinc_hchacha20_arm
#define chacha20_neon zinc_chacha20_neon

#endif /* _WG_COMPATASM_H */
