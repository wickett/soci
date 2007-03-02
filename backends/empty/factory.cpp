//
// Copyright (C) 2004-2006 Maciej Sobczak, Stephen Hutton
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

#define SOCI_EMPTY_SOURCE
#include "soci.h"
#include "soci-empty.h"

#ifdef _MSC_VER
#pragma warning(disable:4355)
#endif

using namespace soci;
using namespace soci::details;


// concrete factory for Empty concrete strategies
empty_session_backend * empty_backend_factory::make_session(
     std::string const &connectString) const
{
     return new empty_session_backend(connectString);
}

empty_backend_factory const soci::empty;
