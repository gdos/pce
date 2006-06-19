/*****************************************************************************
 * pce                                                                       *
 *****************************************************************************/

/*****************************************************************************
 * File name:     src/arch/sims32/main.h                                     *
 * Created:       2004-09-28 by Hampa Hug <hampa@hampa.ch>                   *
 * Last modified: 2006-06-19 by Hampa Hug <hampa@hampa.ch>                   *
 * Copyright:     (C) 2004-2006 Hampa Hug <hampa@hampa.ch>                   *
 *****************************************************************************/

/*****************************************************************************
 * This program is free software. You can redistribute it and / or modify it *
 * under the terms of the GNU General Public License version 2 as  published *
 * by the Free Software Foundation.                                          *
 *                                                                           *
 * This program is distributed in the hope  that  it  will  be  useful,  but *
 * WITHOUT  ANY   WARRANTY,   without   even   the   implied   warranty   of *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU  General *
 * Public License for more details.                                          *
 *****************************************************************************/

/* $Id$ */


#ifndef PCE_SIMS32_MAIN_H
#define PCE_SIMS32_MAIN_H 1


#include <lib/cmd.h>
#include <lib/console.h>

#include "sims32.h"
#include "sercons.h"
#include "cmd_s32.h"


extern int      par_verbose;

extern unsigned par_xlat;

extern sims32_t *par_sim;

extern unsigned par_sig_int;


void prt_sep (FILE *fp, const char *str, ...);

void prt_state (sims32_t *sim, FILE *fp, const char *str);

void pce_start (void);
void pce_stop (void);
void pce_run (void);


#endif
