/* ========================================================================
 * Copyright 1988-2006 University of Washington
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * ========================================================================
 */

/*
 * Program:	Operating-system dependent routines -- Mint version (FreeMint)
 *
 * Author:	Mark Crispin
 *
 * Date:	10 September 1993
 * Last Edited:	30 August 2006
 */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/dir.h>
#include <fcntl.h>
#include <syslog.h>
#include <sys/file.h>
#include <time.h>
#include <portlib.h>

#define EAGAIN EWOULDBLOCK
#define FNDELAY O_NDELAY

/* MiNT gets this wrong */

#define setpgrp setpgid

#include "env_unix.h"
#include "fs.h"
#include "ftl.h"
#include "nl.h"
#include "tcp.h"
