#ifndef LC_PROT_LCFU___I2C_SMBUS_READ_BLOCK_DATA__C
#define LC_PROT_LCFU___I2C_SMBUS_READ_BLOCK_DATA__C

#define DEBUG 1

#include "i2c-dev.h"
#if DEBUG==1
#include <stdio.h>
#endif

#include <lcfu___i2c_smbus_read_block_data.h>

/*                            Functions                        */
void  lcfu___I2C_SMBUS_READ_BLOCK_DATA(LC_TD_Function_I2C_SMBUS_READ_BLOCK_DATA* LC_this, LC_TD_DINT LC_VD_FD, LC_TD_USINT LC_VD_COMMAND, LC_TD_USINT LC_VD_LEN, struct _lcoplck_epdb_1_impl* pEPDB)
{
	LC_this->LC_VD_I2C_SMBUS_READ_BLOCK_DATA =
			i2c_smbus_read_i2c_block_data(
					LC_VD_FD, LC_VD_COMMAND, LC_VD_LEN > sizeof(LC_this->LC_VD_VALUES) ? sizeof(LC_this->LC_VD_VALUES) : LC_VD_LEN, LC_this->LC_VD_VALUES);
#if DEBUG==1
	printf("i2c_smbus_read_block_data(%d, 0x%02X)\n", LC_VD_FD, LC_VD_COMMAND);
#endif
}

#endif
