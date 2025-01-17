/* This file is part of the Neper software package. */
/* Copyright (C) 2003-2022, Romain Quey. */
/* See the COPYING file in the top-level directory. */

#ifdef __cplusplus
extern "C"
{
#endif

#ifndef STRUCTPOINT_H
#define STRUCTPOINT_H

  struct POINT
  {
    char *Name;

    char *Type;
    int Dim;

    int Qty;
    double **Coo;

    double *Rad;

    // pointer to SIM structure
    struct SIM *pSim;
  };
  typedef struct POINT POINT;

#endif				/* STRUCTPOINT_H */

#ifdef __cplusplus
}
#endif
