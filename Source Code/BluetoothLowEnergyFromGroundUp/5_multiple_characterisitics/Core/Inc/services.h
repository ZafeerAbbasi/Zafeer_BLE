/*
 * services.h
 *
 *  Created on: Dec 9, 2021
 *      Author: hussamaldean
 */

#ifndef INC_SERVICES_H_
#define INC_SERVICES_H_
#include "app_bluenrg.h"
#include "bluenrg_conf.h"
#include "bluenrg1_types.h"
#include "bluenrg1_gap.h"
#include "bluenrg1_aci.h"
#include "bluenrg1_hci_le.h"
#include "stdio.h"
#include "stdlib.h"

tBleStatus add_services(void);
void APP_UserEvtRx(void *pData);
void send_data(uint8_t *data_buffer, uint8_t no_byte);


#endif /* INC_SERVICES_H_ */
