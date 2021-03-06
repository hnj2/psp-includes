/** @file
 * PSP hardware - CCP definitions.
 */

/*
 * Copyright (C) 2020 Alexander Eichner <alexander.eichner@campus.tu-berlin.de>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef INCLUDED_psp_ccp_h
#define INCLUDED_psp_ccp_h

/*********************************************************************************************************************************
*   Header Files                                                                                                                 *
*********************************************************************************************************************************/

#include <common/cdefs.h>


/*********************************************************************************************************************************
*   Defined Constants And Macros                                                                                                 *
*********************************************************************************************************************************/
/** @name CCP engine defines.
 * @{ */
/** AES engine. */
#define CCP_V5_ENGINE_AES                           0
/** XTS-AES128 engine. */
#define CCP_V5_ENGINE_XTS_AES128                    1
/** DES3 engine. */
#define CCP_V5_ENGINE_DES3                          2
/** SHA engine. */
#define CCP_V5_ENGINE_SHA                           3
/** RSA engine. */
#define CCP_V5_ENGINE_RSA                           4
/** PASSTHRU engine. */
#define CCP_V5_ENGINE_PASSTHRU                      5
/** ZLIB decompression engine. */
#define CCP_V5_ENGINE_ZLIB_DECOMP                   6
/** ECC engine. */
#define CCP_V5_ENGINE_ECC                           7
/** Return the engine from the given dword. */
#define CCP_V5_ENGINE_GET(a_Dw0)                    (((a_Dw0) >> 20) & 0xf)
/** Return the engine specific function from the given dword. */
#define CCP_V5_ENGINE_FUNC_GET(a_Dw0)               (((a_Dw0) >> 5) & 0x7fff)
/** Return the end of message field from the given dword. */
#define CCP_V5_ENGINE_EOM_GET(a_Dw0)                (((a_Dw0) >> 4) & 0x1)
/** Return the init field from the given dword. */
#define CCP_V5_ENGINE_INIT_GET(a_Dw0)               (((a_Dw0) >> 3) & 0x1)
/** @} */

/** @name AES engine specific defines.
 * @{ */
/** AES ECB mode. */
#define CCP_V5_ENGINE_AES_MODE_ECB                  0
/** AES CBC mode. */
#define CCP_V5_ENGINE_AES_MODE_CBC                  1
/** AES OFB mode. */
#define CCP_V5_ENGINE_AES_MODE_OFB                  2
/** AES CFB mode. */
#define CCP_V5_ENGINE_AES_MODE_CFB                  3
/** AES CTR mode. */
#define CCP_V5_ENGINE_AES_MODE_CTR                  4
/** AES CMAC mode. */
#define CCP_V5_ENGINE_AES_MODE_CMAC                 5
/** AES GHASH mode. */
#define CCP_V5_ENGINE_AES_MODE_GHASH                6
/** AES GCTR mode. */
#define CCP_V5_ENGINE_AES_MODE_GCTR                 7
/** AES GCM mode. */
#define CCP_V5_ENGINE_AES_MODE_GCM                  8
/** AES GMAC mode. */
#define CCP_V5_ENGINE_AES_MODE_GMAC                 9
/** Return the AES mode from the given function. */
#define CCP_V5_ENGINE_AES_MODE_GET(a_Func)          (((a_Func) >> 8) & 0x1f)

/** AES128 type. */
#define CCP_V5_ENGINE_AES_TYPE_128                  0
/** AES192 type. */
#define CCP_V5_ENGINE_AES_TYPE_192                  1
/** AES256 type. */
#define CCP_V5_ENGINE_AES_TYPE_256                  2
/** Return the AES type from the given function. */
#define CCP_V5_ENGINE_AES_TYPE_GET(a_Func)          (((a_Func) >> 13) & 0x3)

/** Return the AES encrypt/decrypt flag from the given function. */
#define CCP_V5_ENGINE_AES_ENCRYPT_GET(a_Func)       (!!(((a_Func) >> 7) & 0x1))
/** Return the AES size from the given function. */
#define CCP_V5_ENGINE_AES_SZ_GET(a_Func)            ((a_Func) & 0x7f)
/** @} */

/** @name SHA engine specific defines.
 * @{ */
/** SHA1 type. */
#define CCP_V5_ENGINE_SHA_TYPE_1                    1
/** SHA224 type. */
#define CCP_V5_ENGINE_SHA_TYPE_224                  2
/** SHA256 type. */
#define CCP_V5_ENGINE_SHA_TYPE_256                  3
/** SHA384 type. */
#define CCP_V5_ENGINE_SHA_TYPE_384                  4
/** SHA512 type. */
#define CCP_V5_ENGINE_SHA_TYPE_512                  5
/** Return the SHA type from the given function. */
#define CCP_V5_ENGINE_SHA_TYPE_GET(a_Func)          (((a_Func) >> 10) & 0xf)
/** @} */

/** @name PASSTHRU engine specific defines.
 * @{ */
/** Bitwise no-op. */
#define CCP_V5_ENGINE_PASSTHRU_BITWISE_NOOP         0
/** Bitwise and. */
#define CCP_V5_ENGINE_PASSTHRU_BITWISE_AND          1
/** Bitwise or. */
#define CCP_V5_ENGINE_PASSTHRU_BITWISE_OR           2
/** Bitwise xor. */
#define CCP_V5_ENGINE_PASSTHRU_BITWISE_XOR          3
/** Bitwise mask. */
#define CCP_V5_ENGINE_PASSTHRU_BITWISE_MASK         4
/** Return the PASSTHRU bitwise operation from the given function. */
#define CCP_V5_ENGINE_PASSTHRU_BITWISE_GET(a_Func)  (((a_Func) >> 2) & 0x7)

/** Byteswap no-op. */
#define CCP_V5_ENGINE_PASSTHRU_BYTESWAP_NOOP        0
/** Byteswap 32bit. */
#define CCP_V5_ENGINE_PASSTHRU_BYTESWAP_32BIT       1
/** Byteswap 256bit. */
#define CCP_V5_ENGINE_PASSTHRU_BYTESWAP_256BIT      2
/** Return the PASSTHRU byteswap operation from the given function. */
#define CCP_V5_ENGINE_PASSTHRU_BYTESWAP_GET(a_Func) ((a_Func) & 0x3)

/** Return the PASSTHRU reflect operation from the given function. */
#define CCP_V5_ENGINE_PASSTHRU_REFLECT_GET(a_Func)  (((a_Func) >> 5) & 0x3)
/** @} */

/** @name RSA engine specific defines.
 * @{ */
/** Returns the RSA mode. */
#define CCP_V5_ENGINE_RSA_MODE_GET(a_Func)          ((a_Func) & 0x7)
/** Returns the RSA size. */
#define CCP_V5_ENGINE_RSA_SZ_GET(a_Func)            (((a_Func) >> 3) & 0xfff)
/** @} */

/** @name Available memory types.
 * @{ */
/** System memory (DRAM). */
#define CCP_V5_MEM_TYPE_SYSTEM                      0
/** Local storage buffer. */
#define CCP_V5_MEM_TYPE_SB                          1
/** Local PSP SRAM. */
#define CCP_V5_MEM_TYPE_LOCAL                       2
/** Retrieve the memory type from the given 16bit word. */
#define CCP_V5_MEM_TYPE_GET(a_MemType)              ((a_MemType) & 0x3)
/** Retrieve the LSB context ID from the given 16bit word. */
#define CCP_V5_MEM_LSB_CTX_ID_GET(a_MemType)        (((a_MemType) >> 2) & 0xff)
/** Retrieve the LSB context ID from the given 16bit word. */
#define CCP_V5_MEM_LSB_FIXED_GET(a_MemType)         (((a_MemType) >> 16) & 0x1)
/** @} */

/** @name Queue register offsets.
 * @{ */
/** Start offset of the first queue in MMIO space. */
#define CCP_V5_Q_OFFSET                             _4K
/** Size of a single queue MMIO area in bytes. */
#define CCP_V5_Q_SIZE                               _4K
/** Control register. */
#define CCP_V5_Q_REG_CTRL                           0x0
/** The RUN bit, which makes the CCP process requests. */
# define CCP_V5_Q_REG_CTRL_RUN                      BIT(0)
/** The HALT bit, which indicates whether the queue is currently processing requests. */
# define CCP_V5_Q_REG_CTRL_HALT                     BIT(1)
/** Request queue head register. */
#define CCP_V5_Q_REG_HEAD                           0x4
/** Request queue tail register. */
#define CCP_V5_Q_REG_TAIL                           0x8
/** Status register. */
#define CCP_V5_Q_REG_STATUS                         0x100
/** Status register success indicator. */
# define CCP_V5_Q_REG_STATUS_SUCCESS                0
/** Status register error indicator. */
# define CCP_V5_Q_REG_STATUS_ERROR                  1
/** @} */

/** @name CCP status codes contained in the status register (extracted from Linux kernel driver).
 * @{ */
#define CCP_V5_STATUS_SUCCESS                       0
#define CCP_V5_STATUS_ILLEGAL_ENGINE                1
#define CCP_V5_STATUS_ILLEGAL_KEY_ID                2
#define CCP_V5_STATUS_ILLEGAL_FUNCTION_TYPE         3
#define CCP_V5_STATUS_ILLEGAL_FUNCTION_MODE         4
#define CCP_V5_STATUS_ILLEGAL_FUNCTION_ENCRYPT      5
#define CCP_V5_STATUS_ILLEGAL_FUNCTION_SIZE         6
#define CCP_V5_STATUS_ZLIB_MISSING_INIT_EOM         7
#define CCP_V5_STATUS_ILLEGAL_RUNCTION_RSVD         8
#define CCP_V5_STATUS_ILLEGAL_BUFFER_LENGTH         9
#define CCP_V5_STATUS_VLSB_FAULT                   10
#define CCP_V5_STATUS_ILLEGAL_MEM_ADDR             11
#define CCP_V5_STATUS_ILLEGAL_MEM_SEL              12
#define CCP_V5_STATUS_ILLEGAL_CONTEXT_ID           13
#define CCP_V5_STATUS_ILLEGAL_KEY_ADDR             14
#define CCP_V5_STATUS_RSVD                         15
#define CCP_V5_STATUS_ZLIB_ILLEGAL_MULTI_QUEUE     16
#define CCP_V5_STATUS_ZLIB_ILLEGAL_JOBID_CHANGE    17
#define CCP_V5_STATUS_CMD_TIMEOUT                  18
#define CCP_V5_STATUS_IDMA0_AXI_SLVERR             19
#define CCP_V5_STATUS_IDMA0_AXI_DECERR             20
#define CCP_V5_STATUS_RSVD1                        21
#define CCP_V5_STATUS_IDMA1_AXI_SLAVE_FAULT        22
#define CCP_V5_STATUS_IDMA1_AXI_DECERR             23
#define CCP_V5_STATUS_RSVD2                        24
#define CCP_V5_STATUS_ZLIBVHB_AXI_SLVERR           25
#define CCP_V5_STATUS_ZLIBVHB_AXI_DECERR           26
#define CCP_V5_STATUS_RSVD3                        27
#define CCP_V5_STATUS_ZLIB_UNEXPECTED_EOM          28
#define CCP_V5_STATUS_ZLIB_EXTRA_DATA              29
#define CCP_V5_STATUS_ZLIB_BTYPE                   30
#define CCP_V5_STATUS_ZLIB_UNDEFINED_SYMBOL        31
#define CCP_V5_STATUS_ZLIB_UNDEFINED_DISTANCE_S    32
#define CCP_V5_STATUS_ZLIB_CODE_LENGTH_SYMBOL      33
#define CCP_V5_STATUS_ZLIB_VHB_ILLEGAL_FETCH       34
#define CCP_V5_STATUS_ZLIB_UNCOMPRESSED_LEN        35
#define CCP_V5_STATUS_ZLIB_LIMIT_REACHED           36
#define CCP_V5_STATUS_ZLIB_CHECKSUM_MISMATCH       37
#define CCP_V5_STATUS_ODMA0_AXI_SLVERR             38
#define CCP_V5_STATUS_ODMA0_AXI_DECERR             39
#define CCP_V5_STATUS_RSVD4                        40
#define CCP_V5_STATUS_ODMA1_AXI_SLVERR             41
#define CCP_V5_STATUS_ODMA1_AXI_DECERR             42
#define CCP_V5_STATUS_LSB_PARITY_ERR               43
/** @} */

/** The CCP MMIO address. */
#define CCP_V5_MMIO_ADDRESS                         0x03000000

/** A second region for which the purpose is mostly unknown so far. */
#define CCP_V5_MMIO_ADDRESS_2                       0x03006000
#define CCP_V5_MMIO_SIZE_2                          _4K


/*********************************************************************************************************************************
*   Structures and Typedefs                                                                                                      *
*********************************************************************************************************************************/

/**
 * Request descriptor.
 */
typedef struct CCP5REQ
{
    /** Control bits, function, engine. */
    uint32_t                        u32Dw0;
    /** Length of source data. */
    uint32_t                        cbSrc;
    /** Low 32bit of address of source data. */
    uint32_t                        u32AddrSrcLow;
    /** High 16bit of address of source data. */
    uint16_t                        u16AddrSrcHigh;
    /** Source memory type. */
    uint16_t                        u16SrcMemType;
    /** Operation dependent data. */
    union
    {
        /** Non SHA operation. */
        struct
        {
            /** Low 32bit of destination buffer address. */
            uint32_t                u32AddrDstLow;
            /** High 16bits of destination buffer address. */
            uint16_t                u16AddrDstHigh;
            /** Destination memory type. */
            uint16_t                u16DstMemType;
        } NonSha;
        /** SHA operation. */
        struct
        {
            /** Low 32bit of the message bitlength. */
            uint32_t                u32ShaBitsLow;
            /** High 32bit of the message bitlength. */
            uint32_t                u32ShaBitsHigh;
        } Sha;
    } Op;
    /** Low 32bit of address of key data. */
    uint32_t                        u32AddrKeyLow;
    /** High 16bit of address of key data. */
    uint16_t                        u16AddrKeyHigh;
    /** Key memory type. */
    uint16_t                        u16KeyMemType;
} CCP5REQ;
/** Pointer to a request descriptor. */
typedef CCP5REQ *PCCP5REQ;
/** Pointer to a const request descriptor. */
typedef const CCP5REQ *PCCCP5REQ;

#endif /* !INCLUDED_psp_ccp_h */

