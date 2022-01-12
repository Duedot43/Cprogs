
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

#ifndef __LIBMBIM_GLIB_MBIM_QUECTEL__
#define __LIBMBIM_GLIB_MBIM_QUECTEL__

G_BEGIN_DECLS

/*****************************************************************************/
/* Message (Query): MBIM Message Quectel Radio State */

/**
 * mbim_message_quectel_radio_state_query_new:
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Radio State' query command in the 'Quectel' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26.2
 */
MbimMessage *mbim_message_quectel_radio_state_query_new (
    GError **error);

/*****************************************************************************/
/* Message (Set): MBIM Message Quectel Radio State */

/**
 * mbim_message_quectel_radio_state_set_new:
 * @radio_state: (in): the 'RadioState' field, given as a #MbimQuectelRadioSwitchState.
 * @error: return location for error or %NULL.
 *
 * Create a new request for the 'Radio State' set command in the 'Quectel' service.
 *
 * Returns: a newly allocated #MbimMessage, which should be freed with mbim_message_unref().
 *
 * Since: 1.26.2
 */
MbimMessage *mbim_message_quectel_radio_state_set_new (
    MbimQuectelRadioSwitchState radio_state,
    GError **error);

/*****************************************************************************/
/* Message (Response): MBIM Message Quectel Radio State */

/**
 * mbim_message_quectel_radio_state_response_parse:
 * @message: the #MbimMessage.
 * @out_radio_state: (out)(optional)(transfer none): return location for a #MbimQuectelRadioSwitchState, or %NULL if the 'RadioState' field is not needed.
 * @error: return location for error or %NULL.
 *
 * Parses and returns parameters of the 'Radio State' response command in the 'Quectel' service.
 *
 * Returns: %TRUE if the message was correctly parsed, %FALSE if @error is set.
 *
 * Since: 1.26.2
 */
gboolean mbim_message_quectel_radio_state_response_parse (
    const MbimMessage *message,
    MbimQuectelRadioSwitchState *out_radio_state,
    GError **error);

/*****************************************************************************/
/* Service helper for printable fields */

#if defined (LIBMBIM_GLIB_COMPILATION)

G_GNUC_INTERNAL
gchar *
__mbim_message_quectel_get_printable_fields (
    const MbimMessage *message,
    const gchar *line_prefix,
    GError **error);

#endif

G_END_DECLS

#endif /* __LIBMBIM_GLIB_MBIM_QUECTEL__ */
