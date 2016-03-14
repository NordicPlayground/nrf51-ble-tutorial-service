

#ifndef MSGS_H__
#define MSGS_H__

#include <stdint.h>
#include "SEGGER_RTT.h"
#include "ble.h"
#include "ble_advertising.h"

char *msgs_adv_events[] = 
{
    "BLE_ADV_EVT_IDLE"               /**< Idle; no connectable advertising is ongoing.*/
    "BLE_ADV_EVT_DIRECTED"           /**< Direct advertising mode has started. */
    "BLE_ADV_EVT_DIRECTED_SLOW"      /**< Directed advertising (low duty cycle) has started. */
    "BLE_ADV_EVT_FAST"               /**< Fast advertising mode has started. */
    "BLE_ADV_EVT_SLOW"               /**< Slow advertising mode has started.*/
    "BLE_ADV_EVT_FAST_WHITELIST"     /**< Fast advertising mode using the whitelist has started. */
    "BLE_ADV_EVT_SLOW_WHITELIST"     /**< Slow advertising mode using the whitelist has started.*/
    "BLE_ADV_EVT_WHITELIST_REQUEST"  /**< Request a whitelist from the main application. For whitelist advertising to work"the whitelist must be set when this event occurs. */
    "BLE_ADV_EVT_PEER_ADDR_REQUEST"    /**< Request a peer address from the main application. For directed advertising to work, the peer address must be set when this event occurs. */
};

char *msgs_gap_events[] = 
{
  "BLE_GAP_EVT_CONNECTED\n",    /**< Connection established. @ref ble_gap_evt_connected_t */
  "BLE_GAP_EVT_DISCONNECTED\n",                     /**< Disconnected from peer. @ref ble_gap_evt_disconnected_t */
  "BLE_GAP_EVT_CONN_PARAM_UPDATE\n",                /**< Connection Parameters updated. ble_gap_evt_conn_param_update_t */
  "BLE_GAP_EVT_SEC_PARAMS_REQUEST\n",               /**< Request to provide security parameters. @ref ble_gap_evt_sec_params_request_t */
  "BLE_GAP_EVT_SEC_INFO_REQUEST\n",                 /**< Request to provide security information. @ref ble_gap_evt_sec_info_request_t */
  "BLE_GAP_EVT_PASSKEY_DISPLAY\n",                  /**< Request to display a passkey to the user. @ref ble_gap_evt_passkey_display_t */
  "BLE_GAP_EVT_AUTH_KEY_REQUEST\n",                 /**< Request to provide an authentication key. @ref ble_gap_evt_auth_key_request_t */
  "BLE_GAP_EVT_AUTH_STATUS\n",                      /**< Authentication procedure completed with status. @ref ble_gap_evt_auth_status_t */
  "BLE_GAP_EVT_CONN_SEC_UPDATE\n",                  /**< Connection security updated. @ref ble_gap_evt_conn_sec_update_t */
  "BLE_GAP_EVT_TIMEOUT\n",                          /**< Timeout expired. @ref ble_gap_evt_timeout_t */
  "BLE_GAP_EVT_RSSI_CHANGED\n",                     /**< RSSI report. @ref ble_gap_evt_rssi_changed_t */
  "BLE_GAP_EVT_ADV_REPORT\n",                       /**< Advertising report. @ref ble_gap_evt_adv_report_t */
  "BLE_GAP_EVT_SEC_REQUEST\n",                      /**< Security Request. @ref ble_gap_evt_sec_request_t */
  "BLE_GAP_EVT_CONN_PARAM_UPDATE_REQUEST\n",        /**< Connection Parameter Update Request. @ref ble_gap_evt_conn_param_update_request_t */
  "BLE_GAP_EVT_SCAN_REQ_REPORT"                  /**< Scan request report. @ref ble_gap_evt_scan_req_report_t */
};

char *msgs_gatts_events[] = 
{
  "BLE_GATTS_EVT_WRITE\n",       /**< Write operation performed. @ref ble_gatts_evt_write_t */
  "BLE_GATTS_EVT_RW_AUTHORIZE_REQUEST\n",             /**< Read/Write Authorization request.@ref ble_gatts_evt_rw_authorize_request_t */
  "BLE_GATTS_EVT_SYS_ATTR_MISSING\n",                 /**< A persistent system attribute access is pending, awaiting a sd_ble_gatts_sys_attr_set(). @ref ble_gatts_evt_sys_attr_missing_t */
  "BLE_GATTS_EVT_HVC\n",                              /**< Handle Value Confirmation. @ref ble_gatts_evt_hvc_t */
  "BLE_GATTS_EVT_SC_CONFIRM\n",                       /**< Service Changed Confirmation. No additional event structure applies. */
  "BLE_GATTS_EVT_TIMEOUT"                           /**< Timeout. @ref ble_gatts_evt_timeout_t */
};

char *msgs_errors[] = 
{
    "NRF_SUCCESS\n", //0)  ///< Successful command
    "NRF_ERROR_SVC_HANDLER_MISSING\n", //1)  ///< SVC handler is missing
    "NRF_ERROR_SOFTDEVICE_NOT_ENABLED\n", //2)  ///< SoftDevice has not been enabled
    "NRF_ERROR_INTERNAL\n", //3)  ///< Internal Error
    "NRF_ERROR_NO_MEM\n", //4)  ///< No Memory for operation
    "NRF_ERROR_NOT_FOUND\n", //5)  ///< Not found
    "NRF_ERROR_NOT_SUPPORTED\n", //6)  ///< Not supported
    "NRF_ERROR_INVALID_PARAM\n", //7)  ///< Invalid Parameter
    "NRF_ERROR_INVALID_STATE\n", //8)  ///< Invalid state, operation disallowed in this state
    "NRF_ERROR_INVALID_LENGTH\n", //9)  ///< Invalid Length
    "NRF_ERROR_INVALID_FLAGS\n", //10) ///< Invalid Flags
    "NRF_ERROR_INVALID_DATA\n", //11) ///< Invalid Data
    "NRF_ERROR_DATA_SIZE\n", //12) ///< Data size exceeds limit
    "NRF_ERROR_TIMEOUT\n", //13) ///< Operation timed out
    "NRF_ERROR_NULL\n", //14) ///< Null Pointer
    "NRF_ERROR_FORBIDDEN\n", //15) ///< Forbidden Operation
    "NRF_ERROR_INVALID_ADDR\n", //16) ///< Bad Memory Address
    "NRF_ERROR_BUSY\n" //17) ///< Busy
};

char *msgs_disconnect_reasons[] = 
{
    "BLE_HCI_STATUS_CODE_INVALID_BTLE_COMMAND_PARAMETERS",//12  /**< Invalid BLE Command Parameters. */
    "BLE_HCI_REMOTE_USER_TERMINATED_CONNECTION",//13  /**< Remote User Terminated Connection. */
    "BLE_HCI_REMOTE_DEV_TERMINATION_DUE_TO_LOW_RESOURCES",//14  /**< Remote Device Terminated Connection due to low resources.*/
    "BLE_HCI_REMOTE_DEV_TERMINATION_DUE_TO_POWER_OFF",//15  /**< Remote Device Terminated Connection due to power off. */
    "BLE_HCI_LOCAL_HOST_TERMINATED_CONNECTION" /**< Local Host Terminated Connection. */
};

static void gap_event_decode(ble_evt_t *p_ble_evt){
    SEGGER_RTT_printf(0, "\nGAP Evt: %s", msgs_gap_events[p_ble_evt->header.evt_id - BLE_GAP_EVT_BASE]);
    SEGGER_RTT_printf(0, "\tConn handle: 0x%#02x\n", p_ble_evt->evt.gap_evt.conn_handle);
    switch(p_ble_evt->header.evt_id){
        case BLE_GAP_EVT_CONNECTED:
            //SEGGER_RTT_printf(0, "\tMax int: %d\n", (uint16_t)(p_ble_evt->evt.gap_evt.params.connected.conn_params.max_conn_interval * 1.25));
            SEGGER_RTT_printf(0, "\tMIN_CONN_INTERVAL: %d\n", (uint16_t)(p_ble_evt->evt.gap_evt.params.connected.conn_params.min_conn_interval * 1.25));
            SEGGER_RTT_printf(0, "\tCONN_SUP_TIMEOUT: %d\n", p_ble_evt->evt.gap_evt.params.connected.conn_params.conn_sup_timeout * 10);
            SEGGER_RTT_printf(0, "\tSLAVE_LATENCY: %d\n", p_ble_evt->evt.gap_evt.params.connected.conn_params.slave_latency);
            break;
        case BLE_GAP_EVT_CONN_PARAM_UPDATE:
            //SEGGER_RTT_printf(0, "\tMax int: %d\n", (uint16_t)(p_ble_evt->evt.gap_evt.params.conn_param_update.conn_params.max_conn_interval * 1.25));
            SEGGER_RTT_printf(0, "\tMIN_CONN_INTERVAL: %d\n", (uint16_t)(p_ble_evt->evt.gap_evt.params.conn_param_update.conn_params.min_conn_interval * 1.25));
            SEGGER_RTT_printf(0, "\tCONN_SUP_TIMEOUT: %d\n", p_ble_evt->evt.gap_evt.params.conn_param_update.conn_params.conn_sup_timeout * 10);
            SEGGER_RTT_printf(0, "\tSLAVE_LATENCY: %d\n", p_ble_evt->evt.gap_evt.params.conn_param_update.conn_params.slave_latency);
            break;
        case BLE_GAP_EVT_DISCONNECTED:
            SEGGER_RTT_printf(0, "\t%s\n", msgs_disconnect_reasons[p_ble_evt->evt.gap_evt.params.disconnected.reason - 0x12]);
            break;
        default:
            break;
    }
}

void print_evt(ble_evt_t *p_ble_evt){
    
    uint32_t evt = p_ble_evt->header.evt_id;

    if( (evt >= BLE_GAP_EVT_BASE)  &&  (evt <= (BLE_GAP_EVT_BASE + BLE_GAP_EVT_SCAN_REQ_REPORT)) )
    {
        gap_event_decode(p_ble_evt);
        //SEGGER_RTT_printf(0, "Evt: 0x%#02x, %s", evt, msgs_gap_events[p_ble_evt->header.evt_id - BLE_GAP_EVT_BASE]);
    }
    else if( (evt >= BLE_GATTS_EVT_BASE)  &&  (evt <= (BLE_GATTS_EVT_BASE + BLE_GATTS_EVT_TIMEOUT)) )
    {
        SEGGER_RTT_printf(0, "Evt: 0x%#02x, %s", evt, msgs_gatts_events[p_ble_evt->header.evt_id - BLE_GATTS_EVT_BASE]);
    } 
    else
        SEGGER_RTT_WriteString(0, "Undefined event\r\n");
}

void print_adv_evt(ble_adv_evt_t adv_evt){
    
    uint32_t evt = adv_evt;

    if( evt <= BLE_ADV_EVT_PEER_ADDR_REQUEST )
        SEGGER_RTT_printf(0, "ADV Evt: %s\n", msgs_adv_events[adv_evt]);
    else
        SEGGER_RTT_WriteString(0, "Undefined adv event\n");
}


#endif // MSGS_H__
