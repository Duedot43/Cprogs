
/* GENERATED CODE... DO NOT EDIT */

/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2013 - 2018 Aleksander Morgado <aleksander@aleksander.es>
 */


#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>

#include "mbim-message.h"
#include "mbim-device.h"
#include "mbim-enums.h"

#ifndef __LIBMBIM_GLIB_MBIM_MS_BASIC_CONNECT_EXTENSIONS__
#define __LIBMBIM_GLIB_MBIM_MS_BASIC_CONNECT_EXTENSIONS__

G_BEGIN_DECLS

/*****************************************************************************/
/* Struct: MbimPcoValue */

/**
 * MbimPcoValue:
 * @session_id: a #guint32.
 * @pco_data_size: a #guint32.
 * @pco_data_type: a #guint32.
 * @pco_data_buffer: an array of #guint8 values.
 *
 * Since: 1.18
 */
typedef struct {
    guint32 session_id;
    guint32 pco_data_size;
    guint32 pco_data_type;
    guint8 *pco_data_buffer;
} MbimPcoValue;

/**
 * mbim_pco_value_free:
 * @var: a #MbimPcoValue.
 *
 * Frees the memory allocated for the #MbimPcoValue.
 *
 * Since: 1.18
 */
void mbim_pco_value_free (MbimPcoValue *var);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimPcoValue, mbim_pco_value_free)

/*****************************************************************************/
/* Struct: MbimLteAttachConfiguration */

/**
 * MbimLteAttachConfiguration:
 * @ip_type: a #guint32.
 * @roaming: a #guint32.
 * @source: a #guint32.
 * @access_string: a string.
 * @user_name: a string.
 * @password: a string.
 * @compression: a #guint32.
 * @auth_protocol: a #guint32.
 *
 * Since: 1.18
 */
typedef struct {
    guint32 ip_type;
    guint32 roaming;
    guint32 source;
    gchar *access_string;
    gchar *user_name;
    gchar *password;
    guint32 compression;
    guint32 auth_protocol;
} MbimLteAttachConfiguration;

/**
 * MbimLteAttachConfigurationArray:
 *
 * A NULL-terminated array of MbimLteAttachConfiguration elements.
 *
 * Since: 1.24
 */
typedef MbimLteAttachConfiguration *MbimLteAttachConfigurationArray;
/**
 * mbim_lte_attach_configuration_array_free:
 * @array: a #NULL terminated array of #MbimLteAttachConfiguration structs.
 *
 * Frees the memory allocated for the array of #MbimLteAttachConfiguration structs.
 *
 * Since: 1.18
 */
void mbim_lte_attach_configuration_array_free (MbimLteAttachConfigurationArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimLteAttachConfigurationArray, mbim_lte_attach_configuration_array_free)

/*****************************************************************************/
/* Struct: MbimSlot */

/**
 * MbimSlot:
 * @slot: a #guint32.
 *
 * Since: 1.26
 */
typedef struct {
    guint32 slot;
} MbimSlot;

/**
 * MbimSlotArray:
 *
 * A NULL-terminated array of MbimSlot elements.
 *
 * Since: 1.26
 */
typedef MbimSlot *MbimSlotArray;
/**
 * mbim_slot_array_free:
 * @array: a #NULL terminated array of #MbimSlot structs.
 *
 * Frees the memory allocated for the array of #MbimSlot structs.
 *
 * Since: 1.26
 */
void mbim_slot_array_free (MbimSlotArray *array);
G_DEFINE_AUTOPTR_CLEANUP_FUNC (MbimSlotArray, mbim_slot_array_free)

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions PCO */

/**
 * mbim_message_ms_basic_connect_extensions_pco_query_new:
 * @pco_value: (in): the 'PcoValue' field, given as a #MbimPcoValue.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'PCO' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.18
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_pco_query_new (
    const MbimPcoValue *pco_value,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions PCO */

/**
 * mbim_message_ms_basic_connect_extensions_pco_response_parse:
 * @message: the #MbimMessage.
 * @out_pco_value: (out)(optional)(transfer full): return location for a newly allocated #MbimPcoValue, or %NULL if the 'PcoValue' field is not needed. Free the returned value with mbim_pco_value_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'PCO' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean mbim_message_ms_basic_connect_extensions_pco_response_parse (
    const MbimMessage *message,
    MbimPcoValue **out_pco_value,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect Extensions PCO */

/**
 * mbim_message_ms_basic_connect_extensions_pco_notification_parse:
 * @message: the #MbimMessage.
 * @out_pco_value: (out)(optional)(transfer full): return location for a newly allocated #MbimPcoValue, or %NULL if the 'PcoValue' field is not needed. Free the returned value with mbim_pco_value_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'PCO' notification command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean mbim_message_ms_basic_connect_extensions_pco_notification_parse (
    const MbimMessage *message,
    MbimPcoValue **out_pco_value,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Lte Attach Configuration */

/**
 * mbim_message_ms_basic_connect_extensions_lte_attach_configuration_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Lte Attach Configuration' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.18
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_lte_attach_configuration_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Ms Basic Connect Extensions Lte Attach Configuration */

/**
 * mbim_message_ms_basic_connect_extensions_lte_attach_configuration_set_new:
 * @operation: (in): the 'Operation' field, given as a #MbimLteAttachContextOperation.
 * @configuration_count: (in): the 'ConfigurationCount' field, given as a #guint32.
 * @configurations: (in): the 'Configurations' field, given as an array of #MbimLteAttachConfiguration items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Lte Attach Configuration' set command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.18
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_lte_attach_configuration_set_new (
    MbimLteAttachContextOperation operation,
    guint32 configuration_count,
    const MbimLteAttachConfiguration *const *configurations,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Lte Attach Configuration */

/**
 * mbim_message_ms_basic_connect_extensions_lte_attach_configuration_response_parse:
 * @message: the #MbimMessage.
 * @out_configuration_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ConfigurationCount' field is not needed.
 * @out_configurations: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimLteAttachConfiguration): return location for a newly allocated array of #MbimLteAttachConfiguration items, or %NULL if the 'Configurations' field is not needed. Free the returned value with mbim_lte_attach_configuration_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Lte Attach Configuration' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean mbim_message_ms_basic_connect_extensions_lte_attach_configuration_response_parse (
    const MbimMessage *message,
    guint32 *out_configuration_count,
    MbimLteAttachConfigurationArray **out_configurations,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect Extensions Lte Attach Configuration */

/**
 * mbim_message_ms_basic_connect_extensions_lte_attach_configuration_notification_parse:
 * @message: the #MbimMessage.
 * @out_configuration_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ConfigurationCount' field is not needed.
 * @out_configurations: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimLteAttachConfiguration): return location for a newly allocated array of #MbimLteAttachConfiguration items, or %NULL if the 'Configurations' field is not needed. Free the returned value with mbim_lte_attach_configuration_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Lte Attach Configuration' notification command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.18
 */
gboolean mbim_message_ms_basic_connect_extensions_lte_attach_configuration_notification_parse (
    const MbimMessage *message,
    guint32 *out_configuration_count,
    MbimLteAttachConfigurationArray **out_configurations,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Lte Attach Info */

/**
 * mbim_message_ms_basic_connect_extensions_lte_attach_info_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Lte Attach Info' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_lte_attach_info_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Lte Attach Info */

/**
 * mbim_message_ms_basic_connect_extensions_lte_attach_info_response_parse:
 * @message: the #MbimMessage.
 * @out_lte_attach_state: (out)(optional)(transfer none): return location for a #MbimLteAttachState, or %NULL if the 'LteAttachState' field is not needed.
 * @out_ip_type: (out)(optional)(transfer none): return location for a #MbimContextIpType, or %NULL if the 'IpType' field is not needed.
 * @out_access_string: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'AccessString' field is not needed. Free the returned value with g_free().
 * @out_user_name: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'UserName' field is not needed. Free the returned value with g_free().
 * @out_password: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'Password' field is not needed. Free the returned value with g_free().
 * @out_compression: (out)(optional)(transfer none): return location for a #MbimCompression, or %NULL if the 'Compression' field is not needed.
 * @out_auth_protocol: (out)(optional)(transfer none): return location for a #MbimAuthProtocol, or %NULL if the 'AuthProtocol' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Lte Attach Info' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_basic_connect_extensions_lte_attach_info_response_parse (
    const MbimMessage *message,
    MbimLteAttachState *out_lte_attach_state,
    MbimContextIpType *out_ip_type,
    gchar **out_access_string,
    gchar **out_user_name,
    gchar **out_password,
    MbimCompression *out_compression,
    MbimAuthProtocol *out_auth_protocol,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect Extensions Lte Attach Info */

/**
 * mbim_message_ms_basic_connect_extensions_lte_attach_info_notification_parse:
 * @message: the #MbimMessage.
 * @out_lte_attach_state: (out)(optional)(transfer none): return location for a #MbimLteAttachState, or %NULL if the 'LteAttachState' field is not needed.
 * @out_ip_type: (out)(optional)(transfer none): return location for a #MbimContextIpType, or %NULL if the 'IpType' field is not needed.
 * @out_access_string: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'AccessString' field is not needed. Free the returned value with g_free().
 * @out_user_name: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'UserName' field is not needed. Free the returned value with g_free().
 * @out_password: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'Password' field is not needed. Free the returned value with g_free().
 * @out_compression: (out)(optional)(transfer none): return location for a #MbimCompression, or %NULL if the 'Compression' field is not needed.
 * @out_auth_protocol: (out)(optional)(transfer none): return location for a #MbimAuthProtocol, or %NULL if the 'AuthProtocol' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Lte Attach Info' notification command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_basic_connect_extensions_lte_attach_info_notification_parse (
    const MbimMessage *message,
    MbimLteAttachState *out_lte_attach_state,
    MbimContextIpType *out_ip_type,
    gchar **out_access_string,
    gchar **out_user_name,
    gchar **out_password,
    MbimCompression *out_compression,
    MbimAuthProtocol *out_auth_protocol,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Sys Caps */

/**
 * mbim_message_ms_basic_connect_extensions_sys_caps_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Sys Caps' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_sys_caps_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Sys Caps */

/**
 * mbim_message_ms_basic_connect_extensions_sys_caps_response_parse:
 * @message: the #MbimMessage.
 * @out_number_of_executors: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NumberOfExecutors' field is not needed.
 * @out_number_of_slots: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'NumberOfSlots' field is not needed.
 * @out_concurrency: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'Concurrency' field is not needed.
 * @out_modem_id: (out)(optional)(transfer none): return location for a #guint64, or %NULL if the 'ModemId' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Sys Caps' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_basic_connect_extensions_sys_caps_response_parse (
    const MbimMessage *message,
    guint32 *out_number_of_executors,
    guint32 *out_number_of_slots,
    guint32 *out_concurrency,
    guint64 *out_modem_id,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Slot Info Status */

/**
 * mbim_message_ms_basic_connect_extensions_slot_info_status_query_new:
 * @slot_index: (in): the 'SlotIndex' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Slot Info Status' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_slot_info_status_query_new (
    guint32 slot_index,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Slot Info Status */

/**
 * mbim_message_ms_basic_connect_extensions_slot_info_status_response_parse:
 * @message: the #MbimMessage.
 * @out_slot_index: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SlotIndex' field is not needed.
 * @out_state: (out)(optional)(transfer none): return location for a #MbimUiccSlotState, or %NULL if the 'State' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Slot Info Status' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_basic_connect_extensions_slot_info_status_response_parse (
    const MbimMessage *message,
    guint32 *out_slot_index,
    MbimUiccSlotState *out_state,
    GError **error);

/*****************************************************************************/
/* Message (Notification): MBIM Message Ms Basic Connect Extensions Slot Info Status */

/**
 * mbim_message_ms_basic_connect_extensions_slot_info_status_notification_parse:
 * @message: the #MbimMessage.
 * @out_slot_index: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'SlotIndex' field is not needed.
 * @out_state: (out)(optional)(transfer none): return location for a #MbimUiccSlotState, or %NULL if the 'State' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Slot Info Status' notification command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_basic_connect_extensions_slot_info_status_notification_parse (
    const MbimMessage *message,
    guint32 *out_slot_index,
    MbimUiccSlotState *out_state,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Device Slot Mappings */

/**
 * mbim_message_ms_basic_connect_extensions_device_slot_mappings_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Device Slot Mappings' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_device_slot_mappings_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Ms Basic Connect Extensions Device Slot Mappings */

/**
 * mbim_message_ms_basic_connect_extensions_device_slot_mappings_set_new:
 * @map_count: (in): the 'MapCount' field, given as a #guint32.
 * @slot_map: (in): the 'SlotMap' field, given as an array of #MbimSlot items.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Device Slot Mappings' set command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_device_slot_mappings_set_new (
    guint32 map_count,
    const MbimSlot *const *slot_map,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Device Slot Mappings */

/**
 * mbim_message_ms_basic_connect_extensions_device_slot_mappings_response_parse:
 * @message: the #MbimMessage.
 * @out_map_count: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MapCount' field is not needed.
 * @out_slot_map: (out)(optional)(transfer full)(array zero-terminated=1)(element-type MbimSlot): return location for a newly allocated array of #MbimSlot items, or %NULL if the 'SlotMap' field is not needed. Free the returned value with mbim_slot_array_free().
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Device Slot Mappings' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_basic_connect_extensions_device_slot_mappings_response_parse (
    const MbimMessage *message,
    guint32 *out_map_count,
    MbimSlotArray **out_slot_map,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message Ms Basic Connect Extensions Device Caps */

/**
 * mbim_message_ms_basic_connect_extensions_device_caps_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Device Caps' query command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_ms_basic_connect_extensions_device_caps_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Ms Basic Connect Extensions Device Caps */

/**
 * mbim_message_ms_basic_connect_extensions_device_caps_response_parse:
 * @message: the #MbimMessage.
 * @out_device_type: (out)(optional)(transfer none): return location for a #MbimDeviceType, or %NULL if the 'DeviceType' field is not needed.
 * @out_cellular_class: (out)(optional)(transfer none): return location for a #MbimCellularClass, or %NULL if the 'CellularClass' field is not needed.
 * @out_voice_class: (out)(optional)(transfer none): return location for a #MbimVoiceClass, or %NULL if the 'VoiceClass' field is not needed.
 * @out_sms_class: (out)(optional)(transfer none): return location for a #MbimSimClass, or %NULL if the 'SmsClass' field is not needed.
 * @out_data_class: (out)(optional)(transfer none): return location for a #MbimDataClass, or %NULL if the 'DataClass' field is not needed.
 * @out_sms_caps: (out)(optional)(transfer none): return location for a #MbimSmsCaps, or %NULL if the 'SmsCaps' field is not needed.
 * @out_control_caps: (out)(optional)(transfer none): return location for a #MbimCtrlCaps, or %NULL if the 'ControlCaps' field is not needed.
 * @out_max_sessions: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MaxSessions' field is not needed.
 * @out_custom_data_class: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'CustomDataClass' field is not needed. Free the returned value with g_free().
 * @out_device_id: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'DeviceId' field is not needed. Free the returned value with g_free().
 * @out_firmware_info: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'FirmwareInfo' field is not needed. Free the returned value with g_free().
 * @out_hardware_info: (out)(optional)(transfer full): return location for a newly allocated string, or %NULL if the 'HardwareInfo' field is not needed. Free the returned value with g_free().
 * @out_executor_index: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'ExecutorIndex' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Device Caps' response command in the 'Ms Basic Connect Extensions' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_ms_basic_connect_extensions_device_caps_response_parse (
    const MbimMessage *message,
    MbimDeviceType *out_device_type,
    MbimCellularClass *out_cellular_class,
    MbimVoiceClass *out_voice_class,
    MbimSimClass *out_sms_class,
    MbimDataClass *out_data_class,
    MbimSmsCaps *out_sms_caps,
    MbimCtrlCaps *out_control_caps,
    guint32 *out_max_sessions,
    gchar **out_custom_data_class,
    gchar **out_device_id,
    gchar **out_firmware_info,
    gchar **out_hardware_info,
    guint32 *out_executor_index,
    GError **error);

/*****************************************************************************/
/* Service helper for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_ms_basic_connect_extensions_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_MS_BASIC_CONNECT_EXTENSIONS__ */
