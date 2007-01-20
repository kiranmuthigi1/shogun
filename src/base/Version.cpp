/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Written (W) 1999-2007 Soeren Sonnenburg
 * Copyright (C) 1999-2007 Fraunhofer Institute FIRST and Max-Planck-Society
 */

#include "base/Version.h"
#include "lib/io.h"
#include "lib/versionstring.h"

CVersion::CVersion()
{
	version_extra = VERSION_EXTRA;
	version_release = VERSION_RELEASE;
	version_revision = VERSION_REVISION;
	version_year = VERSION_YEAR;
	version_month = VERSION_MONTH;
	version_day = VERSION_DAY;
	version_hour = VERSION_HOUR;
	version_minute = VERSION_MINUTE;

#ifndef HAVE_SWIG
	SG_SPRINT( "shogun (%s/%s/%s-%d)\n\n (W) 2000-2006 Soeren Sonnenburg, Gunnar Raetsch\n\n", TARGET, MACHINE, VERSION_RELEASE, version_revision);
	SG_SPRINT( "( configure options: \"%s\" compile flags: \"%s\" link flags: \"%s\" )\n", CONFIGURE_OPTIONS, COMPFLAGS_CPP, LINKFLAGS);
#endif
}


CVersion::~CVersion()
{
}
