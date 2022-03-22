#ifndef RISCV_XS_CUSTOM_ENCODING_H
#define RISCV_XS_CUSTOM_ENCODING_H

#define CSR_XS_CACHE_OP_BASE 0x5C5

#define COP_CHECK 0
#define COP_LOAD  1
#define COP_STORE 2
#define COP_FLUSH 3

#define COP_ID_ICACHE 0
#define COP_ID_DCACHE 1

#define COP_RESULT_CODE_IDLE 0
#define COP_RESULT_CODE_OK 1
#define COP_RESULT_CODE_ERROR 2

#define CSR_CACHE_OP_OFFSET 0
#define CSR_OP_FINISH_OFFSET 1
#define CSR_CACHE_LEVEL_OFFSET 2
#define CSR_CACHE_WAY_OFFSET 3
#define CSR_CACHE_IDX_OFFSET 4
#define CSR_CACHE_BANK_NUM_OFFSET 5
#define CSR_CACHE_TAG_ECC_OFFSET 6
#define CSR_CACHE_TAG_BITS_OFFSET 7
#define CSR_CACHE_TAG_LOW_OFFSET 8
#define CSR_CACHE_TAG_HIGH_OFFSET 9
#define CSR_CACHE_ECC_WIDTH_OFFSET 10
#define CSR_CACHE_DATA_ECC_OFFSET 11
#define CSR_CACHE_DATA_0_OFFSET 12
#define CSR_CACHE_DATA_1_OFFSET 13
#define CSR_CACHE_DATA_2_OFFSET 14
#define CSR_CACHE_DATA_3_OFFSET 15
#define CSR_CACHE_DATA_4_OFFSET 16
#define CSR_CACHE_DATA_5_OFFSET 17
#define CSR_CACHE_DATA_6_OFFSET 18
#define CSR_CACHE_DATA_7_OFFSET 19

#define CSR_CACHE_OP (CSR_XS_CACHE_OP_BASE + CSR_CACHE_OP_OFFSET)
#define CSR_OP_FINISH (CSR_XS_CACHE_OP_BASE + CSR_OP_FINISH_OFFSET)
#define CSR_CACHE_LEVEL (CSR_XS_CACHE_OP_BASE + CSR_CACHE_LEVEL_OFFSET)
#define CSR_CACHE_WAY (CSR_XS_CACHE_OP_BASE + CSR_CACHE_WAY_OFFSET)
#define CSR_CACHE_IDX (CSR_XS_CACHE_OP_BASE + CSR_CACHE_IDX_OFFSET)
#define CSR_CACHE_BANK_NUM (CSR_XS_CACHE_OP_BASE + CSR_CACHE_BANK_NUM_OFFSET)
#define CSR_CACHE_TAG_ECC (CSR_XS_CACHE_OP_BASE + CSR_CACHE_TAG_ECC_OFFSET)
#define CSR_CACHE_TAG_BITS (CSR_XS_CACHE_OP_BASE + CSR_CACHE_TAG_BITS_OFFSET)
#define CSR_CACHE_TAG_LOW (CSR_XS_CACHE_OP_BASE + CSR_CACHE_TAG_LOW_OFFSET)
#define CSR_CACHE_TAG_HIGH (CSR_XS_CACHE_OP_BASE + CSR_CACHE_TAG_HIGH_OFFSET)
#define CSR_CACHE_ECC_WIDTH (CSR_XS_CACHE_OP_BASE + CSR_CACHE_ECC_WIDTH_OFFSET)
#define CSR_CACHE_DATA_ECC (CSR_XS_CACHE_OP_BASE + CSR_CACHE_DATA_ECC_OFFSET)
#define CSR_CACHE_DATA_0 (CSR_XS_CACHE_OP_BASE + CSR_CACHE_DATA_0_OFFSET)
#define CSR_CACHE_DATA_1 (CSR_XS_CACHE_OP_BASE + CSR_CACHE_DATA_1_OFFSET)
#define CSR_CACHE_DATA_2 (CSR_XS_CACHE_OP_BASE + CSR_CACHE_DATA_2_OFFSET)
#define CSR_CACHE_DATA_3 (CSR_XS_CACHE_OP_BASE + CSR_CACHE_DATA_3_OFFSET)
#define CSR_CACHE_DATA_4 (CSR_XS_CACHE_OP_BASE + CSR_CACHE_DATA_4_OFFSET)
#define CSR_CACHE_DATA_5 (CSR_XS_CACHE_OP_BASE + CSR_CACHE_DATA_5_OFFSET)
#define CSR_CACHE_DATA_6 (CSR_XS_CACHE_OP_BASE + CSR_CACHE_DATA_6_OFFSET)
#define CSR_CACHE_DATA_7 (CSR_XS_CACHE_OP_BASE + CSR_CACHE_DATA_7_OFFSET)

#define cop_op CSR_CACHE_OP
#define cop_finish CSR_OP_FINISH
#define cop_level CSR_CACHE_LEVEL
#define cop_way CSR_CACHE_WAY
#define cop_index CSR_CACHE_IDX
#define cop_bank CSR_CACHE_BANK_NUM
#define cop_tag_ecc CSR_CACHE_TAG_ECC
#define cop_tag_bits CSR_CACHE_TAG_BITS
#define cop_tag_data CSR_CACHE_TAG_LOW
#define cop_tag_data_h CSR_CACHE_TAG_HIGH
#define cop_ecc_width CSR_CACHE_ECC_WIDTH
#define cop_data_ecc CSR_CACHE_DATA_ECC
#define cop_data_0 CSR_CACHE_DATA_0
#define cop_data_1 CSR_CACHE_DATA_1
#define cop_data_2 CSR_CACHE_DATA_2
#define cop_data_3 CSR_CACHE_DATA_3
#define cop_data_4 CSR_CACHE_DATA_4
#define cop_data_5 CSR_CACHE_DATA_5
#define cop_data_6 CSR_CACHE_DATA_6
#define cop_data_7 CSR_CACHE_DATA_7

#define COP_READ_TAG_ECC 0
#define COP_READ_DATA_ECC 1
#define COP_READ_TAG 2
#define COP_READ_DATA 3
#define COP_WRITE_TAG_ECC 4
#define COP_WRITE_DATA_ECC 5
#define COP_WRITE_TAG 6
#define COP_WRITE_DATA 7
#define COP_FLUSH_BLOCK 8

#endif