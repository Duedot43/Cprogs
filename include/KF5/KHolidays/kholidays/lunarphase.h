/*
    This file is part of the kholidays library.

    SPDX-FileCopyrightText: 2004, 2007, 2009 Allen Winter <winter@kde.org>

    SPDX-License-Identifier: LGPL-2.0-or-later
*/

#ifndef KHOLIDAYS_LUNARPHASE_H
#define KHOLIDAYS_LUNARPHASE_H

#include "kholidays_export.h"

class QDate;
class QString;

namespace KHolidays
{
/**
  Represents and manages a Lunar Phase

  A Lunar Phase can be one of the following:

   + "new": the moon is not visible; or traditionally: first visible
            crescent of the Moon.  For religious purposes, the new
            month begins when the first crescent moon can be seen.
            Thus, it is impossible to be certain in advance of when
            months will begin; in particular, the exact date on which
            Ramadan will begin is not known in advance. In Saudi Arabia,
            observers are sent up in airplanes if the weather is cloudy
            when the new moon is expected.
   + "first quarter": the right 50% of the moon is visible.
   + "full": the moon is fully visible.
   + "last quarter": the left 50% of the moon is visible.

   A very good description of the lunar phases can be read at the Wikipedia,
     https://en.wikipedia.org/wiki/Lunar_phase

   Note that crescent and gibbous phases are not currently supported.
*/
class KHOLIDAYS_EXPORT LunarPhase // krazy:exclude=dpointer
{
public:
    /**
      Phases of the moon, in traditional English notation. The
      phase @c None is used only as an error indicator, for instance
      in phase().
    */
    enum Phase {
        NewMoon, ///< New moon phase
        FirstQuarter, ///< First quarter of moon phase
        LastQuarter, ///< Last quarter of moon phase
        FullMoon, ///< Full moon phase
        None, ///< Indication for error
    };

    /**
       Return the lunar phase for the specified Gregorian date.
       The enum 'None' is returned if one of the supported phases
       does not occur on the date.

       @param date compute the lunar phase for the specified Gregorian date.
    */
    static Phase phaseAtDate(const QDate &date);

    /**
       Return the lunar phase as a text string for the specified date.
       A null string is returned if one of the supported phases does
       not occur on the date.

       @param date compute the lunar phase for the specified Gregorian date.
    */
    static QString phaseNameAtDate(const QDate &date);

    /**
       Return the string representation of phase.

       @param phase the lunar phase.
    */
    static QString phaseName(Phase phase);
};

}

#endif
