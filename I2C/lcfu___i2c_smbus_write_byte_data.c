#ifndef LC_PROT_LCFU___I2C_SMBUS_WRITE_BYTE_DATA__C
#define LC_PROT_LCFU___I2C_SMBUS_WRITE_BYTE_DATA__C

#define DEBUG 1

#include <i2c-dev.h>
#if DEBUG==1
#include <stdio.h>
#endif

#include <lcfu___i2c_smbus_write_byte_data.h>

/*                            Functions                        */
void  lcfu___I2C_SMBUS_WRITE_BYTE_DATA(LC_TD_Function_I2C_SMBUS_WRITE_BYTE_DATA* LC_this, LC_TD_DINT LC_VD_FD, LC_TD_USINT LC_VD_COMMAND, LC_TD_USINT LC_VD_VALUE, struct _lcoplck_epdb_1_impl* pEPDB)
{
  LC_this->LC_VD_I2C_SMBUS_WRITE_BYTE_DATA = i2c_smbus_write_byte_data(LC_VD_FD, LC_VD_COMMAND, LC_VD_VALUE);
#if DEBUG==1
  	  printf("i2c_smbus_write_byte_data(%d, 0x%02X, 0x%02X)\n", LC_VD_FD, LC_VD_COMMAND, LC_VD_VALUE);
#endif
}

#endif
