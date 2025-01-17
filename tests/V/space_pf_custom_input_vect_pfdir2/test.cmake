# This file is part of the Neper software package.
# Copyright(C) 2003-2022, Romain Quey.
# See the COPYING file in the top-level directory.

set (test_command -V "mydata(type=vector):file(myvects)" -space pf -pfmode density,symbol -pfgridsize 50 -pfdir z:y -print test)
include(../../test.cmake)
