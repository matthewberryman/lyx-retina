// -*- C++ -*-
/**
 * \file bind.h
 * This file is part of LyX, the document processor.
 * Licence details can be found in the file COPYING.
 *
 * \author Peter Kümmel
 *
 * Full author contact details are available in file CREDITS.
 */

#ifndef LYX_BIND_H
#define LYX_BIND_H

#include "support/functional.h"

#ifdef LYX_USE_TR1

namespace lyx
{
	using std::bind;
	using std::placeholders::_1;
	using std::placeholders::_2;
	using std::ref;
}

#else

#include <boost/bind.hpp>

namespace lyx
{
	using boost::bind;
	using boost::ref;
}

#endif


#endif
