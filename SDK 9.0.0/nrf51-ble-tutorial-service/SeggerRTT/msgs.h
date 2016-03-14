

#ifndef MSGS_H__
#define MSGS_H__

#include <stdint.h>
#include "SEGGER_RTT.h"
#include "ble.h"

extern const char *msgs_adv_events[];

extern const char *msgs_gap_events[];

extern const char *msgs_gatts_events[];

extern const char *msgs_errors[];

extern const char *msgs_disconnect_reasons[];

void print_evt(ble_evt_t *p_ble_evt);

void print_error(uint32_t err_code);

void print_adv_evt(ble_adv_evt_t adv_evt);

#endif // MSGS_H__
