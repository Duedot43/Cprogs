
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

#ifndef __LIBMBIM_GLIB_MBIM_QDU__
#define __LIBMBIM_GLIB_MBIM_QDU__

G_BEGIN_DECLS

/*****************************************************************************/
/* Message (Query): MBIM Message QDU Update Session */

/**
 * mbim_message_qdu_update_session_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Update Session' query command in the 'QDU' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_qdu_update_session_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message QDU Update Session */

/**
 * mbim_message_qdu_update_session_set_new:
 * @session_action: (in): the 'SessionAction' field, given as a #MbimQduSessionAction.
 * @session_type: (in): the 'SessionType' field, given as a #MbimQduSessionType.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Update Session' set command in the 'QDU' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_qdu_update_session_set_new (
    MbimQduSessionAction session_action,
    MbimQduSessionType session_type,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message QDU Update Session */

/**
 * mbim_message_qdu_update_session_response_parse:
 * @message: the #MbimMessage.
 * @out_current_session_type: (out)(optional)(transfer none): return location for a #MbimQduSessionType, or %NULL if the 'CurrentSessionType' field is not needed.
 * @out_current_session_status: (out)(optional)(transfer none): return location for a #MbimQduSessionStatus, or %NULL if the 'CurrentSessionStatus' field is not needed.
 * @out_last_session_type: (out)(optional)(transfer none): return location for a #MbimQduSessionType, or %NULL if the 'LastSessionType' field is not needed.
 * @out_last_session_result: (out)(optional)(transfer none): return location for a #MbimQduSessionResult, or %NULL if the 'LastSessionResult' field is not needed.
 * @out_last_session_error_offset: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'LastSessionErrorOffset' field is not needed.
 * @out_last_session_error_size: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'LastSessionErrorSize' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Update Session' response command in the 'QDU' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_qdu_update_session_response_parse (
    const MbimMessage *message,
    MbimQduSessionType *out_current_session_type,
    MbimQduSessionStatus *out_current_session_status,
    MbimQduSessionType *out_last_session_type,
    MbimQduSessionResult *out_last_session_result,
    guint32 *out_last_session_error_offset,
    guint32 *out_last_session_error_size,
    GError **error);

/*****************************************************************************/
/* Message (Query): MBIM Message QDU File Open */

/**
 * mbim_message_qdu_file_open_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'File Open' query command in the 'QDU' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_qdu_file_open_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message QDU File Open */

/**
 * mbim_message_qdu_file_open_set_new:
 * @file_type: (in): the 'FileType' field, given as a #MbimQduFileType.
 * @file_size: (in): the 'FileSize' field, given as a #guint32.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'File Open' set command in the 'QDU' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_qdu_file_open_set_new (
    MbimQduFileType file_type,
    guint32 file_size,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message QDU File Open */

/**
 * mbim_message_qdu_file_open_response_parse:
 * @message: the #MbimMessage.
 * @out_max_transfer_size: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MaxTransferSize' field is not needed.
 * @out_max_window_size: (out)(optional)(transfer none): return location for a #guint32, or %NULL if the 'MaxWindowSize' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'File Open' response command in the 'QDU' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_qdu_file_open_response_parse (
    const MbimMessage *message,
    guint32 *out_max_transfer_size,
    guint32 *out_max_window_size,
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message QDU File Write */

/**
 * mbim_message_qdu_file_write_set_new:
 * @data_buffer_size: (in): size of the data_buffer array.
 * @data_buffer: (in)(element-type guint8)(array length=data_buffer_size): the 'DataBuffer' field, given as an array of #guint8 values.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'File Write' set command in the 'QDU' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26
 */
MbimMessage *mbim_message_qdu_file_write_set_new (
    const guint32 data_buffer_size,
    const guint8 *data_buffer,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message QDU File Write */

/**
 * mbim_message_qdu_file_write_response_parse:
 * @message: the #MbimMessage.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'File Write' response command in the 'QDU' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26
 */
gboolean mbim_message_qdu_file_write_response_parse (
    const MbimMessage *message,
    GError **error);

/*****************************************************************************/
/* Service helper for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_qdu_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_QDU__ */
