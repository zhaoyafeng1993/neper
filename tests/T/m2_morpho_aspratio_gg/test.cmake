# This file is part of the Neper software package.
# Copyright(C) 2003-2022, Romain Quey.
# See the COPYING file in the top-level directory.

set (test_command -T -n 2::2 -morpho "aspratio(2,1,1),gg::aspratio(1,2,3),gg" -morphooptistop itermax=10::itermax=10 -o test)
include(../../test.cmake)
