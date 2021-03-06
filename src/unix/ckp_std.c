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
 * Program:	Standard check password
 *
 * Author:	Mark Crispin
 *
 * Date:	1 August 1988
 * Last Edited:	30 August 2006
 */

/* Check password
 * Accepts: login passwd struct
 *          password string
 *          argument count
 *          argument vector
 * Returns: passwd struct if password validated, NIL otherwise
 */

struct passwd *checkpw(struct passwd *pw, char *pass, int argc, char *argv[])
{
    return (pw->pw_passwd && pw->pw_passwd[0] && pw->pw_passwd[1] &&
            !strcmp(pw->pw_passwd, (char *)crypt(pass, pw->pw_passwd)))
               ? pw
               : NIL;
}
