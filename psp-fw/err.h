/** @file
 * PSP interface headers - Status codes as used in the off chip bootloader (supervisor part).
 */

/*
 * Copyright (C) 2019 Alexander Eichner <alexander.eichner@campus.tu-berlin.de>
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
#ifndef __include_err_h
#define __include_err_h


/**
 * Status codes used in the PSP bootloader (as POST code and function return values)
 *
 * Obtained from: https://dlsvr04.asus.com/pub/ASUS/server/RS720-E9-RS12-E/Manual/E14000_RS720-E9_SERIES_UM_WEB.pdf
 *
 * KEEP IN SYNC WITH DEFINE BELOW!!!
 */
typedef enum PSPSTATUS
{
    PSPSTATUS_SUCCESS                                                  = 0x00,
    PSPSTATUS_GENERAL_ERROR                                            = 0x01,
    PSPSTATUS_GENERAL_MEMORY_ERROR                                     = 0x02,
    PSPSTATUS_BUFFER_OVERFLOW                                          = 0x03,
    PSPSTATUS_INVALID_PARAMETER                                        = 0x04,
    PSPSTATUS_INVALID_DATA_LENGTH                                      = 0x05,
    PSPSTATUS_INVALID_DATA_ALIGNMENT                                   = 0x06,
    PSPSTATUS_INVALID_NULL_POINTER                                     = 0x07,
    PSPSTATUS_UNUSED_08h                                               = 0x08,
    PSPSTATUS_UNUSED_09h                                               = 0x09,
    PSPSTATUS_INVALID_ADDRESS                                          = 0x0a,
    PSPSTATUS_OUT_OF_RESOURCE                                          = 0x0b,
    PSPSTATUS_TIMEOUT                                                  = 0x0c,
    PSPSTATUS_DATA_ABRT_EXCEPTION                                      = 0x0d,
    PSPSTATUS_PREFETCH_ABRT_EXCEPTION                                  = 0x0e,
    PSPSTATUS_OUT_OF_BOUNDS                                            = 0x0f,
    PSPSTATUS_DATA_CORRUPTION                                          = 0x10,
    PSPSTATUS_INVALID_COMMAND                                          = 0x11,
    PSPSTATUS_INVALID_PACKAGE_TYPE_FROM_BR                             = 0x12,
    PSPSTATUS_FW_HDR_RETRIEVAL_FAILED_DURING_VALIDATION                = 0x13,
    PSPSTATUS_KEY_SIZE_NOT_SUPPORTED                                   = 0x14,
    PSPSTATUS_AGESA0_VERIFICATION_FAILED                               = 0x15,
    PSPSTATUS_SMU_FW_VERIFICATION_FAILED                               = 0x16,
    PSPSTATUS_OEM_SIGNING_KEY_VERIFICATION_FAILED                      = 0x17,
    PSPSTATUS_GENERIC_FW_VALIDATION_FAILED                             = 0x18,
    PSPSTATUS_RSA_OPERATION_FAILED_BOOTLOADER                          = 0x19,
    PSPSTATUS_CCP_PASSTHROUGH_OPERATION_FAILED                         = 0x1a,
    PSPSTATUS_AES_OPERATION_FAILED                                     = 0x1b,
    PSPSTATUS_CCP_STATE_SAVE_FAILED                                    = 0x1c,
    PSPSTATUS_CCP_STATE_RESTORE_FAILED                                 = 0x1d,
    PSPSTATUS_SHA256_OPERATION_FAILED                                  = 0x1e,
    PSPSTATUS_ZLIB_DECOMPRESSION_FAILED                                = 0x1f,
    PSPSTATUS_HMAC_SHA256_OPERATION_FAILED                             = 0x20,
    PSPSTATUS_BOOT_SOURCE_NOT_RECOGNIZED_BY_PSP                        = 0x21,
    PSPSTATUS_PSP_DIRECTORY_ENTRY_NOT_FOUND                            = 0x22,
    PSPSTATUS_SET_WRITE_ENABLE_LATCH_FAILED                            = 0x23,
    PSPSTATUS_PSP_TIMED_OUT_SPIROM_TOOK_TOO_LONG                       = 0x24,
    PSPSTATUS_BIOS_DIRECTORY_NOT_FOUND                                 = 0x25,
    PSPSTATUS_SPIROM_INVALID                                           = 0x26,
    PSPSTATUS_SLAVE_SEC_STATE_DIFFERS_FROM_MASTER                      = 0x27,
    PSPSTATUS_SMI_INTERFACE_INIT_FAILED                                = 0x28,
    PSPSTATUS_SMI_INTERFACE_GENERIC_ERROR                              = 0x29,
    PSPSTATUS_DIE_ID_INVALID_FOR_EXEC_MCM_FUNC                         = 0x2a,
    PSPSTATUS_MCM_CFG_READ_FROM_BOOTROM_INVALID                        = 0x2b,
    PSPSTATUS_BOOT_MODE_INVALID                                        = 0x2c,
    PSPSTATUS_NVSTOR_INIT_FAILED                                       = 0x2d,
    PSPSTATUS_NVSTOR_GENERIC_ERROR                                     = 0x2e,
    PSPSTATUS_MCM_ERROR_SLAVE_HAS_MORE_DATA_TO_SEND                    = 0x2f,
    PSPSTATUS_MCM_ERROR_32BYTES_EXCEEDED                               = 0x30,
    PSPSTATUS_MCM_SVC_CALL_CLIENT_ID_INVALID                           = 0x31,
    PSPSTATUS_MCM_SLAVE_STATUS_REG_INVALID_BITS                        = 0x32,
    PSPSTATUS_MCM_SVC_CALL_IN_SINGLE_DIE_ENV                           = 0x33,
    PSPSTATUS_PSP_SECURE_MAPPED_TO_INVALID_SEGMENT                     = 0x34,
    PSPSTATUS_NO_PHYSICAL_X86_CORES_ON_DIE                             = 0x35,
    PSPSTATUS_INSUFFICIENT_SPACE_FOR_SECURE_OS                         = 0x36,
    PSPSTATUS_SYSHUB_MAPPING_MEMORY_TARGET_NOT_SUPPORTED               = 0x37,
    PSPSTATUS_TLB_UNMAP_ATTEMPT_TO_PSP_SECURE_REGION                   = 0x38,
    PSPSTATUS_SMN_ADDRESS_TO_AXI_SPACE_MAPPING_FAILED                  = 0x39,
    PSPSTATUS_SYSHUB_ADDRESS_TO_AXI_SPACE_MAPPING_FAILED               = 0x3a,
    PSPSTATUS_INCONSISTENT_CCX_OR_CORE_COUNT_FROM_BOOTROM              = 0x3b,
    PSPSTATUS_UNCOMPRESSED_IMAGE_SIZE_MISMATCH_FROM_HEADER             = 0x3c,
    PSPSTATUS_COMPRESSION_OPTION_NOT_SUPPORTED                         = 0x3d,
    PSPSTATUS_FUSE_INFO_MISMATCH_ON_DIES                               = 0x3e,
    PSPSTATUS_SMU_REPORTED_ERROR_FOR_MESSAGE                           = 0x3f,
    PSPSTATUS_RUNPOSTX86RELEASEUNITTESTS_FAILED_IN_MEMCMP              = 0x40,
    PSPSTATUS_PSP_INTERFACE_TO_SMU_NOT_FOUND                           = 0x41,
    PSPSTATUS_TIMER_WAIT_PARAMETER_TOO_LARGE                           = 0x42,
    PSPSTATUS_TEST_HARNESS_MODULE_ERROR                                = 0x43,
    PSPSTATUS_X86_C2PMSG0_WRITE_INTERRUPTED_PSP                        = 0x44,
    PSPSTATUS_L3_REGISTER_WRITE_FAILED                                 = 0x45,
    PSPSTATUS_MINI_BL                                                  = 0x46,
    PSPSTATUS_MINI_BL_CCP_HMAC_UNIT_TEST_FAILED                        = 0x47,
    PSPSTATUS_MINI_BL_POTENTIAL_STACK_CORRUPTION_DETECTED              = 0x48,
    PSPSTATUS_AGESA_APOB_SVC_CALL_LOADING_AND_VALIDATION_FAILED        = 0x49,
    PSPSTATUS_DIAG_BL_INCORRECT_BITS_SET                               = 0x4a,
    PSPSTATUS_AGESA_MISSED_CALLING_UMCPROGRAMKEYS                      = 0x4b,
    PSPSTATUS_SECURE_UNLOCK_ERROR                                      = 0x4c,
    PSPSTATUS_SYSHUB_REGISTER_PROGRAMMING_MISMATCH_DURING_READBACK     = 0x4d,
    PSPSTATUS_INCORRECT_FAMILY_ID_IN_MP0_SFUSE_SEC                     = 0x4e,
    PSPSTATUS_FUNCTION_CAN_ONLY_GET_INVOKED_BY_GM                      = 0x4f,
    PSPSTATUS_ACQUIRING_HOST_CTRL_SEM_TO_CLAIM_SMB_OWNERSHIP_FAILED    = 0x50,
    PSPSTATUS_WAITING_FOR_HOST_COMPLETING_PENDING_XACT_TIMED_OUT       = 0x51,
    PSPSTATUS_WAITING_FOR_SLAVE_COMPLETING_PENDING_XACT_TIMED_OUT      = 0x52,
    PSPSTATUS_CANT_KILL_CURRENT_XACT_ON_HOST                           = 0x53,
    PSPSTATUS_ILLEGAL_COMMAND                                          = 0x54,
    PSPSTATUS_SMBUS_XACT_COLLISION_DETECTED                            = 0x55,
    PSPSTATUS_XACT_START_OR_PROCESSING_FAILED_BY_HOST                  = 0x56,
    PSPSTATUS_SMBUS_UNSOLICITED_INTERRUPT                              = 0x57,
    PSPSTATUS_PSP_SMU_MESSAGE_UNSUPPORTED                              = 0x58,
    PSPSTATUS_SMU_RESPONSE_ERROR_OR_DATA_CORRUPTION_DETECTED           = 0x59,
    PSPSTATUS_MCM_STEADY_STATE_UNIT_TEST_FAILED                        = 0x5a,
    PSPSTATUS_S3_ENTER_FAILED                                          = 0x5b,
    PSPSTATUS_AGESA_BL_FAILED_TO_SET_PSP_SMU_RSVD_ADDRESS_VIA_SVC_CALL = 0x5c,
    PSPSTATUS_UNUSED_5dh                                               = 0x5d,
    PSPSTATUS_CCX_SEC_BISI_EM_NOT_SET_IN_FUSE_RAM                      = 0x5e,
    PSPSTATUS_UNEXPECTED_RESULT_RECEIVED                               = 0x5f,
    PSPSTATUS_VMG_STOR_INIT_FAILED                                     = 0x60,
    PSPSTATUS_MBED_TLS_USER_APP_FAILED                                 = 0x61,
    PSPSTATUS_SMN_FUSE_REGISTER_MAPPING_FAULED                         = 0x62,
    PSPSTATUS_FUSE_BURN_OP_FAILED_DUE_TO_INTERNAL_SOC_ERROR            = 0x63,
    PSPSTATUS_FUSE_SENSE_OP_TIMED_OUT                                  = 0x64,
    PSPSTATUS_FUSE_BURN_OP_TIMED_OUT_WAITING_FOR_BURN_DONE             = 0x65,
    PSPSTATUS_SECURE_OS_FAILURE                                        = 0x66,
    PSPSTATUS_PSP_FW_REVOKED                                           = 0x67,
    PSPSTATUS_MODEL_VENDOR_ID_FUSE_VS_BIOS_PUBKEY_TOKEN_MISMATCH       = 0x68,
    PSPSTATUS_BIOS_OEM_PUBKEY_REVOKED_FOR_PLATFORM                     = 0x69,
    PSPSTATUS_PSP_LVL2_DIR_VALUE_UNEXPECTED                            = 0x6a,
    PSPSTATUS_BIOS_LVL2_DIR_VALUE_UNEXPECTED                           = 0x6b,
    PSPSTATUS_HVB_VALIDATION_FOR_BIOS_RTM_VOLUME_FAILED                = 0x6c,
    PSPSTATUS_CCP_HAL_INIT_FAILED                                      = 0x6d,
    PSPSTATUS_UNUSED_6eh                                               = 0x6e,
    PSPSTATUS_UNUSED_6fh                                               = 0x6f,
    PSPSTATUS_UNUSED_70h                                               = 0x70,
    PSPSTATUS_UNUSED_71h                                               = 0x71,
    PSPSTATUS_UNUSED_72h                                               = 0x72,
    PSPSTATUS_UNUSED_73h                                               = 0x73,
    PSPSTATUS_UNUSED_74h                                               = 0x74,
    PSPSTATUS_UNUSED_75h                                               = 0x75,
    PSPSTATUS_UNUSED_76h                                               = 0x76,
    PSPSTATUS_UNUSED_77h                                               = 0x77,
    PSPSTATUS_UNUSED_78h                                               = 0x78,
    PSPSTATUS_UNUSED_79h                                               = 0x79,
    PSPSTATUS_UNUSED_7ah                                               = 0x7a,
    PSPSTATUS_UNUSED_7bh                                               = 0x7b,
    PSPSTATUS_UNUSED_7ch                                               = 0x7c,
    PSPSTATUS_UNUSED_7dh                                               = 0x7d,
    PSPSTATUS_UNUSED_7eh                                               = 0x7e,
    PSPSTATUS_UNUSED_7fh                                               = 0x7f,
    PSPSTATUS_UNUSED_80h                                               = 0x80,
    PSPSTATUS_UNUSED_81h                                               = 0x81,
    PSPSTATUS_UNUSED_82h                                               = 0x82,
    PSPSTATUS_UNUSED_83h                                               = 0x83,
    PSPSTATUS_UNUSED_84h                                               = 0x84,
    PSPSTATUS_UNUSED_85h                                               = 0x85,
    PSPSTATUS_UNUSED_86h                                               = 0x86,
    PSPSTATUS_UNUSED_87h                                               = 0x87,
    PSPSTATUS_UNUSED_88h                                               = 0x88,
    PSPSTATUS_UNUSED_89h                                               = 0x89,
    PSPSTATUS_UNUSED_8ah                                               = 0x8a,
    PSPSTATUS_UNUSED_8bh                                               = 0x8b,
    PSPSTATUS_UNUSED_8ch                                               = 0x8c,
    PSPSTATUS_UNUSED_8dh                                               = 0x8d,
    PSPSTATUS_UNUSED_8eh                                               = 0x8e,
    PSPSTATUS_UNUSED_8fh                                               = 0x8f,
    PSPSTATUS_UNUSED_90h                                               = 0x90,
    PSPSTATUS_UNUSED_91h                                               = 0x91,
    PSPSTATUS_UNUSED_92h                                               = 0x92,
    PSPSTATUS_UNUSED_93h                                               = 0x93,
    PSPSTATUS_KNOLL_IDLE_AFTER_RESET_FAILED                            = 0x94,
    PSPSTATUS_KNOLL_BAD_STATUS_FROM_I2CKNOLLCHECK                      = 0x95,
    PSPSTATUS_KNOLL_NACK_ON_GENERAL_CALL_NO_KNOLL_DEV_ON_I2C_BUS       = 0x96,
    PSPSTATUS_KNOLL_INVALID_NULL_POINTE_TO_I2CKNOLLCHECK               = 0x97,
    PSPSTATUS_KNOLL_INVALID_DEVICE_ID_DURING_AUTHENTICATION            = 0x98,
    PSPSTATUS_KNOLL_PROM_KEY_DERIV_FAILED                              = 0x99,
    PSPSTATUS_CRYPTO_INVALID_NULL_POINTER                              = 0x9a,
    PSPSTATUS_KNOLL_PROM_KEYS_INVALID_CHKSUM_INVALID                   = 0x9b,
    PSPSTATUS_KNOLL_RESPONSE_INVALID_FOR_COMMAND                       = 0x9c,
    PSPSTATUS_KNOLL_SEND_COMMAND_FAILED                                = 0x9d,
    PSPSTATUS_KNOLL_DEVICE_NOT_FOUND_BY_VERIFIYING_MAC                 = 0x9e,
    PSPSTATUS_UNUSED_9fh                                               = 0x9f,
    PSPSTATUS_BOOTLOADER_SUCCESSFULLY_ENTERED_C_MAIN                   = 0xa0,
    PSPSTATUS_C2P_MASTER_INITIALIZED_SLAVE_WAITED_FOR_MASTER           = 0xa1,
    PSPSTATUS_HMAC_KEY_DERIVED_SUCCESSFULLY                            = 0xa2,
    PSPSTATUS_MASTER_GOT_BOOT_MODE_AND_SENT_TO_ALL_SLAVES              = 0xa3,
    PSPSTATUS_SPIROM_INITIALIZED_SUCCESSFULLY                          = 0xa4,
    PSPSTATUS_BIOS_DIRECTORY_READ_FROM_SPI_TO_SRAM                     = 0xa5,
    PSPSTATUS_EARLY_UNLOCK_CHECK                                       = 0xa6,
    PSPSTATUS_INLINE_AES_KEY_DERIVED_SUCCESSFULLY                      = 0xa7,
    PSPSTATUS_INLINE_AES_KEY_PROGRAMMING_DONE                          = 0xa8,
    PSPSTATUS_INLINE_AES_KEY_WRAPPER_DERIVATION_DONE                   = 0xa9,
    PSPSTATUS_BOOTLOADER_LOADED_HW_IP_CFG_VALUES_SUCCESSFULLY          = 0xaa,
    PSPSTATUS_BOOTLOADER_PROGRAMMED_MBAT_TABLE_SUCCESSFULLY            = 0xab,
    PSPSTATUS_BOOTLOADER_LOADED_SMU_FW_SUCCESSFULLY                    = 0xac,
    PSPSTATUS_PSP_AND_SMU_CONFIGURED_WAFFLE                            = 0xad,
    PSPSTATUS_USR_MODE_TEST_HARNESS_COMPLETED_SUCCESSFULLY             = 0xae,
    PSPSTATUS_BOOTLOADER_LOADED_AGESA0_FROM_SPIROM_SUCCESSFULLY        = 0xaf,
    PSPSTATUS_AGESA_PHASE_COMPLETED                                    = 0xb0,
    PSPSTATUS_RUN_POST_DRAM_TRAINING_TESTS_COMPLETED_SUCCESSFULLY      = 0xb1,
    PSPSTATUS_SMU_FW_LOADED_TO_SMU_SECURE_RAM_SUCCESSFULLY             = 0xb2,
    PSPSTATUS_SENT_ALL_REQUIRED_BOOT_TIME_MESSAGES_TO_SMU              = 0xb3,
    PSPSTATUS_SECURITY_GASKET_BINARY_VALIDATED_AND_EXECUTED            = 0xb4,
    PSPSTATUS_UMC_KEYS_GENERATED_AND_PROGRAMMED                        = 0xb5,
    PSPSTATUS_INLINE_AES_KEY_WRAPPER_STORED_IN_DRAM                    = 0xb6,
    PSPSTATUS_FW_VALIDATION_COMPLETED                                  = 0xb7,
    PSPSTATUS_FW_VALIDATION_2_COMPLETED                                = 0xb8,
    PSPSTATUS_BIOS_COPY_FROM_SPI_TO_DRAM_COMPLETE                      = 0xb9,
    PSPSTATUS_FW_VALIDATION_3_COMPLETED                                = 0xba,
    PSPSTATUS_BIOS_LOAD_PROCESS_COMPLETED                              = 0xbb,
    PSPSTATUS_BOOTLOADER_RELEASED_X86_SUCCESSFULLY                     = 0xbc,
    PSPSTATUS_EARLY_SECURE_DEBUG_COMPLETED                             = 0xbd,
    PSPSTATUS_GET_FW_VERSION_CMD_RECVD_FROM_BIOS_COMPLETED             = 0xbe,
    PSPSTATUS_SMI_INFO_CMD_RECVD_FROM_BIOS_COMPLETED                   = 0xbf,
    PSPSTATUS_WARM_BOOT_RESUME_ENTERED_SUCCESSFULLY                    = 0xc0,
    PSPSTATUS_COPIED_SECUREOS_TO_SRAM_SUCCESSFULLY                     = 0xc1,
    PSPSTATUS_COPIED_TRUSTLETS_TO_PSP_SECURE_MEMORY_SUCCESSFULLY       = 0xc2,
    PSPSTATUS_ABOUT_TO_JUMP_TO_SECUREOS                                = 0xc3,
    PSPSTATUS_CCP_AND_UMC_STATE_RESTORED_SUCCESSFULLY_ON_S3_RESUME     = 0xc4,
    PSPSTATUS_MINI_BL_PSP_SRAM_HMAC_VALIDATED_SUCCESSFULLY             = 0xc5,
    PSPSTATUS_MINI_BL_ABOUT_TO_JUMP_TO_T_BASE                          = 0xc6,
    PSPSTATUS_VMG_ECDH_UNIT_TEST_STARTED                               = 0xc7,
    PSPSTATUS_VMG_ECDH_UNIT_TEST_PASSED                                = 0xc8,
    PSPSTATUS_VMG_ECC_CDH_PRIMITIVE_UNIT_TEST_STARTED                  = 0xc9,
    PSPSTATUS_VMG_ECC_CDH_PRIMITIVE_UNIT_TEST_PASSED                   = 0xca,
    PSPSTATUS_VMG_SP800_108_KDF_CTR_HMAC_UNIT_TEST_STARTED             = 0xcb,
    PSPSTATUS_VMG_SP800_108_KDF_CTR_HMAC_UNIT_TEST_PASSED              = 0xcc,
    PSPSTATUS_VMG_LAUNCH_TEST_STARTED                                  = 0xcd,
    PSPSTATUS_VMG_LAUNCH_TEST_PASSED                                   = 0xce,
    PSPSTATUS_MP1_TAKEN_OUT_OF_RESET                                   = 0xcf,
    PSPSTATUS_PSP_AND_SMU_RESERVED_ADDRESS_CORRECT                     = 0xd0,
    PSPSTATUS_NAPLES_STEADY_STATE_WFI_LOOP_REACHED                     = 0xd1,
    PSPSTATUS_KNOLL_DEVICE_INITIALIZED_SUCCESSFULLY                    = 0xd2,
    PSPSTATUS_KNOLL_32BYTE_RAND_OUT_RETURNED_SUCCESSFULLY              = 0xd3,
    PSPSTATUS_KNOLL_32BYTE_MAC_RECEIVED_SUCCESSFULLY                   = 0xd4,
    PSPSTATUS_KNOLL_DEVICE_VERIFIED_SUCCESSFULLY                       = 0xd5,
    PSPSTATUS_KNOLL_DEVICE_POWER_ON_DONE                               = 0xd6,
    PSPSTATUS_RECOVERY_MODE_ENTERED_DUE_TO_TRUSTLET_VALIDATION_FAIL    = 0xd7,
    PSPSTATUS_RECOVERY_MODE_ENTERED_DUE_TO_OS_VALIDATION_FAIL          = 0xd8,
    PSPSTATUS_RECOVERY_MODE_ENTERED_DUE_TO_OEM_PUBKEY_NOT_FOUND        = 0xd9
} PSPSTATUS;


/**
 * Macro containing the PSP status as a human readable string in the correct order.
 * Useful to put into an static array for status code translation.
 *
 * KEEP IN SYNC WITH ABOVE ENUM!!!
 */
#define PSPSTATUS_STR_TBL \
    "PSPSTATUS_SUCCESS",                                                  \
    "PSPSTATUS_GENERAL_ERROR",                                            \
    "PSPSTATUS_GENERAL_MEMORY_ERROR",                                     \
    "PSPSTATUS_BUFFER_OVERFLOW",                                          \
    "PSPSTATUS_INVALID_PARAMETER",                                        \
    "PSPSTATUS_INVALID_DATA_LENGTH",                                      \
    "PSPSTATUS_INVALID_DATA_ALIGNMENT",                                   \
    "PSPSTATUS_INVALID_NULL_POINTER",                                     \
    "PSPSTATUS_UNUSED_08h",                                               \
    "PSPSTATUS_UNUSED_09h",                                               \
    "PSPSTATUS_INVALID_ADDRESS",                                          \
    "PSPSTATUS_OUT_OF_RESOURCE",                                          \
    "PSPSTATUS_TIMEOUT",                                                  \
    "PSPSTATUS_DATA_ABRT_EXCEPTION",                                      \
    "PSPSTATUS_PREFETCH_ABRT_EXCEPTION",                                  \
    "PSPSTATUS_OUT_OF_BOUNDS",                                            \
    "PSPSTATUS_DATA_CORRUPTION",                                          \
    "PSPSTATUS_INVALID_COMMAND",                                          \
    "PSPSTATUS_INVALID_PACKAGE_TYPE_FROM_BR",                             \
    "PSPSTATUS_FW_HDR_RETRIEVAL_FAILED_DURING_VALIDATION",                \
    "PSPSTATUS_KEY_SIZE_NOT_SUPPORTED",                                   \
    "PSPSTATUS_AGESA0_VERIFICATION_FAILED",                               \
    "PSPSTATUS_SMU_FW_VERIFICATION_FAILED",                               \
    "PSPSTATUS_OEM_SIGNING_KEY_VERIFICATION_FAILED",                      \
    "PSPSTATUS_GENERIC_FW_VALIDATION_FAILED",                             \
    "PSPSTATUS_RSA_OPERATION_FAILED_BOOTLOADER",                          \
    "PSPSTATUS_CCP_PASSTHROUGH_OPERATION_FAILED",                         \
    "PSPSTATUS_AES_OPERATION_FAILED",                                     \
    "PSPSTATUS_CCP_STATE_SAVE_FAILED",                                    \
    "PSPSTATUS_CCP_STATE_RESTORE_FAILED",                                 \
    "PSPSTATUS_SHA256_OPERATION_FAILED",                                  \
    "PSPSTATUS_ZLIB_DECOMPRESSION_FAILED",                                \
    "PSPSTATUS_HMAC_SHA256_OPERATION_FAILED",                             \
    "PSPSTATUS_BOOT_SOURCE_NOT_RECOGNIZED_BY_PSP",                        \
    "PSPSTATUS_PSP_DIRECTORY_ENTRY_NOT_FOUND",                            \
    "PSPSTATUS_SET_WRITE_ENABLE_LATCH_FAILED",                            \
    "PSPSTATUS_PSP_TIMED_OUT_SPIROM_TOOK_TOO_LONG",                       \
    "PSPSTATUS_BIOS_DIRECTORY_NOT_FOUND",                                 \
    "PSPSTATUS_SPIROM_INVALID",                                           \
    "PSPSTATUS_SLAVE_SEC_STATE_DIFFERS_FROM_MASTER",                      \
    "PSPSTATUS_SMI_INTERFACE_INIT_FAILED",                                \
    "PSPSTATUS_SMI_INTERFACE_GENERIC_ERROR",                              \
    "PSPSTATUS_DIE_ID_INVALID_FOR_EXEC_MCM_FUNC",                         \
    "PSPSTATUS_MCM_CFG_READ_FROM_BOOTROM_INVALID",                        \
    "PSPSTATUS_BOOT_MODE_INVALID",                                        \
    "PSPSTATUS_NVSTOR_INIT_FAILED",                                       \
    "PSPSTATUS_NVSTOR_GENERIC_ERROR",                                     \
    "PSPSTATUS_MCM_ERROR_SLAVE_HAS_MORE_DATA_TO_SEND",                    \
    "PSPSTATUS_MCM_ERROR_32BYTES_EXCEEDED",                               \
    "PSPSTATUS_MCM_SVC_CALL_CLIENT_ID_INVALID",                           \
    "PSPSTATUS_MCM_SLAVE_STATUS_REG_INVALID_BITS",                        \
    "PSPSTATUS_MCM_SVC_CALL_IN_SINGLE_DIE_ENV",                           \
    "PSPSTATUS_PSP_SECURE_MAPPED_TO_INVALID_SEGMENT",                     \
    "PSPSTATUS_NO_PHYSICAL_X86_CORES_ON_DIE",                             \
    "PSPSTATUS_INSUFFICIENT_SPACE_FOR_SECURE_OS",                         \
    "PSPSTATUS_SYSHUB_MAPPING_MEMORY_TARGET_NOT_SUPPORTED",               \
    "PSPSTATUS_TLB_UNMAP_ATTEMPT_TO_PSP_SECURE_REGION",                   \
    "PSPSTATUS_SMN_ADDRESS_TO_AXI_SPACE_MAPPING_FAILED",                  \
    "PSPSTATUS_SYSHUB_ADDRESS_TO_AXI_SPACE_MAPPING_FAILED",               \
    "PSPSTATUS_INCONSISTENT_CCX_OR_CORE_COUNT_FROM_BOOTROM",              \
    "PSPSTATUS_UNCOMPRESSED_IMAGE_SIZE_MISMATCH_FROM_HEADER",             \
    "PSPSTATUS_COMPRESSION_OPTION_NOT_SUPPORTED",                         \
    "PSPSTATUS_FUSE_INFO_MISMATCH_ON_DIES",                               \
    "PSPSTATUS_SMU_REPORTED_ERROR_FOR_MESSAGE",                           \
    "PSPSTATUS_RUNPOSTX86RELEASEUNITTESTS_FAILED_IN_MEMCMP",              \
    "PSPSTATUS_PSP_INTERFACE_TO_SMU_NOT_FOUND",                           \
    "PSPSTATUS_TIMER_WAIT_PARAMETER_TOO_LARGE",                           \
    "PSPSTATUS_TEST_HARNESS_MODULE_ERROR",                                \
    "PSPSTATUS_X86_C2PMSG0_WRITE_INTERRUPTED_PSP",                        \
    "PSPSTATUS_L3_REGISTER_WRITE_FAILED",                                 \
    "PSPSTATUS_MINI_BL",                                                  \
    "PSPSTATUS_MINI_BL_CCP_HMAC_UNIT_TEST_FAILED",                        \
    "PSPSTATUS_MINI_BL_POTENTIAL_STACK_CORRUPTION_DETECTED",              \
    "PSPSTATUS_AGESA_APOB_SVC_CALL_LOADING_AND_VALIDATION_FAILED",        \
    "PSPSTATUS_DIAG_BL_INCORRECT_BITS_SET",                               \
    "PSPSTATUS_AGESA_MISSED_CALLING_UMCPROGRAMKEYS",                      \
    "PSPSTATUS_SECURE_UNLOCK_ERROR",                                      \
    "PSPSTATUS_SYSHUB_REGISTER_PROGRAMMING_MISMATCH_DURING_READBACK",     \
    "PSPSTATUS_INCORRECT_FAMILY_ID_IN_MP0_SFUSE_SEC",                     \
    "PSPSTATUS_FUNCTION_CAN_ONLY_GET_INVOKED_BY_GM",                      \
    "PSPSTATUS_ACQUIRING_HOST_CTRL_SEM_TO_CLAIM_SMB_OWNERSHIP_FAILED",    \
    "PSPSTATUS_WAITING_FOR_HOST_COMPLETING_PENDING_XACT_TIMED_OUT",       \
    "PSPSTATUS_WAITING_FOR_SLAVE_COMPLETING_PENDING_XACT_TIMED_OUT",      \
    "PSPSTATUS_CANT_KILL_CURRENT_XACT_ON_HOST",                           \
    "PSPSTATUS_ILLEGAL_COMMAND",                                          \
    "PSPSTATUS_SMBUS_XACT_COLLISION_DETECTED",                            \
    "PSPSTATUS_XACT_START_OR_PROCESSING_FAILED_BY_HOST",                  \
    "PSPSTATUS_SMBUS_UNSOLICITED_INTERRUPT",                              \
    "PSPSTATUS_PSP_SMU_MESSAGE_UNSUPPORTED",                              \
    "PSPSTATUS_SMU_RESPONSE_ERROR_OR_DATA_CORRUPTION_DETECTED",           \
    "PSPSTATUS_MCM_STEADY_STATE_UNIT_TEST_FAILED",                        \
    "PSPSTATUS_S3_ENTER_FAILED",                                          \
    "PSPSTATUS_AGESA_BL_FAILED_TO_SET_PSP_SMU_RSVD_ADDRESS_VIA_SVC_CALL", \
    "PSPSTATUS_UNUSED_5dh",                                               \
    "PSPSTATUS_CCX_SEC_BISI_EM_NOT_SET_IN_FUSE_RAM",                      \
    "PSPSTATUS_UNEXPECTED_RESULT_RECEIVED",                               \
    "PSPSTATUS_VMG_STOR_INIT_FAILED",                                     \
    "PSPSTATUS_MBED_TLS_USER_APP_FAILED",                                 \
    "PSPSTATUS_SMN_FUSE_REGISTER_MAPPING_FAULED",                         \
    "PSPSTATUS_FUSE_BURN_OP_FAILED_DUE_TO_INTERNAL_SOC_ERROR",            \
    "PSPSTATUS_FUSE_SENSE_OP_TIMED_OUT",                                  \
    "PSPSTATUS_FUSE_BURN_OP_TIMED_OUT_WAITING_FOR_BURN_DONE",             \
    "PSPSTATUS_SECURE_OS_FAILURE",                                        \
    "PSPSTATUS_PSP_FW_REVOKED",                                           \
    "PSPSTATUS_MODEL_VENDOR_ID_FUSE_VS_BIOS_PUBKEY_TOKEN_MISMATCH",       \
    "PSPSTATUS_BIOS_OEM_PUBKEY_REVOKED_FOR_PLATFORM",                     \
    "PSPSTATUS_PSP_LVL2_DIR_VALUE_UNEXPECTED",                            \
    "PSPSTATUS_BIOS_LVL2_DIR_VALUE_UNEXPECTED",                           \
    "PSPSTATUS_HVB_VALIDATION_FOR_BIOS_RTM_VOLUME_FAILED",                \
    "PSPSTATUS_CCP_HAL_INIT_FAILED",                                      \
    "PSPSTATUS_UNUSED_6eh",                                               \
    "PSPSTATUS_UNUSED_6fh",                                               \
    "PSPSTATUS_UNUSED_70h",                                               \
    "PSPSTATUS_UNUSED_71h",                                               \
    "PSPSTATUS_UNUSED_72h",                                               \
    "PSPSTATUS_UNUSED_73h",                                               \
    "PSPSTATUS_UNUSED_74h",                                               \
    "PSPSTATUS_UNUSED_75h",                                               \
    "PSPSTATUS_UNUSED_76h",                                               \
    "PSPSTATUS_UNUSED_77h",                                               \
    "PSPSTATUS_UNUSED_78h",                                               \
    "PSPSTATUS_UNUSED_79h",                                               \
    "PSPSTATUS_UNUSED_7ah",                                               \
    "PSPSTATUS_UNUSED_7bh",                                               \
    "PSPSTATUS_UNUSED_7ch",                                               \
    "PSPSTATUS_UNUSED_7dh",                                               \
    "PSPSTATUS_UNUSED_7eh",                                               \
    "PSPSTATUS_UNUSED_7fh",                                               \
    "PSPSTATUS_UNUSED_80h",                                               \
    "PSPSTATUS_UNUSED_81h",                                               \
    "PSPSTATUS_UNUSED_82h",                                               \
    "PSPSTATUS_UNUSED_83h",                                               \
    "PSPSTATUS_UNUSED_84h",                                               \
    "PSPSTATUS_UNUSED_85h",                                               \
    "PSPSTATUS_UNUSED_86h",                                               \
    "PSPSTATUS_UNUSED_87h",                                               \
    "PSPSTATUS_UNUSED_88h",                                               \
    "PSPSTATUS_UNUSED_89h",                                               \
    "PSPSTATUS_UNUSED_8ah",                                               \
    "PSPSTATUS_UNUSED_8bh",                                               \
    "PSPSTATUS_UNUSED_8ch",                                               \
    "PSPSTATUS_UNUSED_8dh",                                               \
    "PSPSTATUS_UNUSED_8eh",                                               \
    "PSPSTATUS_UNUSED_8fh",                                               \
    "PSPSTATUS_UNUSED_90h",                                               \
    "PSPSTATUS_UNUSED_91h",                                               \
    "PSPSTATUS_UNUSED_92h",                                               \
    "PSPSTATUS_UNUSED_93h",                                               \
    "PSPSTATUS_KNOLL_IDLE_AFTER_RESET_FAILED",                            \
    "PSPSTATUS_KNOLL_BAD_STATUS_FROM_I2CKNOLLCHECK",                      \
    "PSPSTATUS_KNOLL_NACK_ON_GENERAL_CALL_NO_KNOLL_DEV_ON_I2C_BUS",       \
    "PSPSTATUS_KNOLL_INVALID_NULL_POINTE_TO_I2CKNOLLCHECK",               \
    "PSPSTATUS_KNOLL_INVALID_DEVICE_ID_DURING_AUTHENTICATION",            \
    "PSPSTATUS_KNOLL_PROM_KEY_DERIV_FAILED",                              \
    "PSPSTATUS_CRYPTO_INVALID_NULL_POINTER",                              \
    "PSPSTATUS_KNOLL_PROM_KEYS_INVALID_CHKSUM_INVALID",                   \
    "PSPSTATUS_KNOLL_RESPONSE_INVALID_FOR_COMMAND",                       \
    "PSPSTATUS_KNOLL_SEND_COMMAND_FAILED",                                \
    "PSPSTATUS_KNOLL_DEVICE_NOT_FOUND_BY_VERIFIYING_MAC",                 \
    "PSPSTATUS_UNUSED_9fh",                                               \
    "PSPSTATUS_BOOTLOADER_SUCCESSFULLY_ENTERED_C_MAIN",                   \
    "PSPSTATUS_C2P_MASTER_INITIALIZED_SLAVE_WAITED_FOR_MASTER",           \
    "PSPSTATUS_HMAC_KEY_DERIVED_SUCCESSFULLY",                            \
    "PSPSTATUS_MASTER_GOT_BOOT_MODE_AND_SENT_TO_ALL_SLAVES",              \
    "PSPSTATUS_SPIROM_INITIALIZED_SUCCESSFULLY",                          \
    "PSPSTATUS_BIOS_DIRECTORY_READ_FROM_SPI_TO_SRAM",                     \
    "PSPSTATUS_EARLY_UNLOCK_CHECK",                                       \
    "PSPSTATUS_INLINE_AES_KEY_DERIVED_SUCCESSFULLY",                      \
    "PSPSTATUS_INLINE_AES_KEY_PROGRAMMING_DONE",                          \
    "PSPSTATUS_INLINE_AES_KEY_WRAPPER_DERIVATION_DONE",                   \
    "PSPSTATUS_BOOTLOADER_LOADED_HW_IP_CFG_VALUES_SUCCESSFULLY",          \
    "PSPSTATUS_BOOTLOADER_PROGRAMMED_MBAT_TABLE_SUCCESSFULLY",            \
    "PSPSTATUS_BOOTLOADER_LOADED_SMU_FW_SUCCESSFULLY",                    \
    "PSPSTATUS_PSP_AND_SMU_CONFIGURED_WAFFLE",                            \
    "PSPSTATUS_USR_MODE_TEST_HARNESS_COMPLETED_SUCCESSFULLY",             \
    "PSPSTATUS_BOOTLOADER_LOADED_AGESA0_FROM_SPIROM_SUCCESSFULLY",        \
    "PSPSTATUS_AGESA_PHASE_COMPLETED",                                    \
    "PSPSTATUS_RUN_POST_DRAM_TRAINING_TESTS_COMPLETED_SUCCESSFULLY",      \
    "PSPSTATUS_SMU_FW_LOADED_TO_SMU_SECURE_RAM_SUCCESSFULLY",             \
    "PSPSTATUS_SENT_ALL_REQUIRED_BOOT_TIME_MESSAGES_TO_SMU",              \
    "PSPSTATUS_SECURITY_GASKET_BINARY_VALIDATED_AND_EXECUTED",            \
    "PSPSTATUS_UMC_KEYS_GENERATED_AND_PROGRAMMED",                        \
    "PSPSTATUS_INLINE_AES_KEY_WRAPPER_STORED_IN_DRAM",                    \
    "PSPSTATUS_FW_VALIDATION_COMPLETED",                                  \
    "PSPSTATUS_FW_VALIDATION_2_COMPLETED",                                \
    "PSPSTATUS_BIOS_COPY_FROM_SPI_TO_DRAM_COMPLETE",                      \
    "PSPSTATUS_FW_VALIDATION_3_COMPLETED",                                \
    "PSPSTATUS_BIOS_LOAD_PROCESS_COMPLETED",                              \
    "PSPSTATUS_BOOTLOADER_RELEASED_X86_SUCCESSFULLY",                     \
    "PSPSTATUS_EARLY_SECURE_DEBUG_COMPLETED",                             \
    "PSPSTATUS_GET_FW_VERSION_CMD_RECVD_FROM_BIOS_COMPLETED",             \
    "PSPSTATUS_SMI_INFO_CMD_RECVD_FROM_BIOS_COMPLETED",                   \
    "PSPSTATUS_WARM_BOOT_RESUME_ENTERED_SUCCESSFULLY",                    \
    "PSPSTATUS_COPIED_SECUREOS_TO_SRAM_SUCCESSFULLY",                     \
    "PSPSTATUS_COPIED_TRUSTLETS_TO_PSP_SECURE_MEMORY_SUCCESSFULLY",       \
    "PSPSTATUS_ABOUT_TO_JUMP_TO_SECUREOS",                                \
    "PSPSTATUS_CCP_AND_UMC_STATE_RESTORED_SUCCESSFULLY_ON_S3_RESUME",     \
    "PSPSTATUS_MINI_BL_PSP_SRAM_HMAC_VALIDATED_SUCCESSFULLY",             \
    "PSPSTATUS_MINI_BL_ABOUT_TO_JUMP_TO_T_BASE",                          \
    "PSPSTATUS_VMG_ECDH_UNIT_TEST_STARTED",                               \
    "PSPSTATUS_VMG_ECDH_UNIT_TEST_PASSED",                                \
    "PSPSTATUS_VMG_ECC_CDH_PRIMITIVE_UNIT_TEST_STARTED",                  \
    "PSPSTATUS_VMG_ECC_CDH_PRIMITIVE_UNIT_TEST_PASSED",                   \
    "PSPSTATUS_VMG_SP800_108_KDF_CTR_HMAC_UNIT_TEST_STARTED",             \
    "PSPSTATUS_VMG_SP800_108_KDF_CTR_HMAC_UNIT_TEST_PASSED",              \
    "PSPSTATUS_VMG_LAUNCH_TEST_STARTED",                                  \
    "PSPSTATUS_VMG_LAUNCH_TEST_PASSED",                                   \
    "PSPSTATUS_MP1_TAKEN_OUT_OF_RESET",                                   \
    "PSPSTATUS_PSP_AND_SMU_RESERVED_ADDRESS_CORRECT",                     \
    "PSPSTATUS_NAPLES_STEADY_STATE_WFI_LOOP_REACHED",                     \
    "PSPSTATUS_KNOLL_DEVICE_INITIALIZED_SUCCESSFULLY",                    \
    "PSPSTATUS_KNOLL_32BYTE_RAND_OUT_RETURNED_SUCCESSFULLY",              \
    "PSPSTATUS_KNOLL_32BYTE_MAC_RECEIVED_SUCCESSFULLY",                   \
    "PSPSTATUS_KNOLL_DEVICE_VERIFIED_SUCCESSFULLY",                       \
    "PSPSTATUS_KNOLL_DEVICE_POWER_ON_DONE",                               \
    "PSPSTATUS_RECOVERY_MODE_ENTERED_DUE_TO_TRUSTLET_VALIDATION_FAIL",    \
    "PSPSTATUS_RECOVERY_MODE_ENTERED_DUE_TO_OS_VALIDATION_FAIL",          \
    "PSPSTATUS_RECOVERY_MODE_ENTERED_DUE_TO_OEM_PUBKEY_NOT_FOUND"

#endif
