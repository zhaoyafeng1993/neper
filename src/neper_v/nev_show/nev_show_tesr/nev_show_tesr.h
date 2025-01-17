/* This file is part of the Neper software package. */
/* Copyright (C) 2003-2022, Romain Quey. */
/* See the COPYING file in the top-level directory. */

extern void nev_show_tesr (char **argv, int *pi, struct PRINT *pPrint);
extern void nev_show_tesr_cell (char **argv, int *pi, struct TESR Tesr,
				struct PRINT *pPrint);
extern void nev_show_tesr_vox (char *option, char **argv, int *pi, struct TESR Tesr,
                               struct PRINT *pPrint);

extern void nev_show_tesr_edge (char **argv, int *pi, struct PRINT *pPrint);
