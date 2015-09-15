#ifndef HIERARCHICAL_H
#define HIERARCHICAL_H

#include "access/itup.h"
#include "access/relscan.h"
#include "access/sdir.h"
#include "access/xlogutils.h"


extern Datum hr_build(PG_FUNCTION_ARGS);
extern Datum hr_insert(PG_FUNCTION_ARGS);
extern Datum hr_beginscan(PG_FUNCTION_ARGS);
extern Datum hr_gettuple(PG_FUNCTION_ARGS);
extern Datum hr_getmulti(PG_FUNCTION_ARGS);
extern Datum hr_rescan(PG_FUNCTION_ARGS);
extern Datum hr_endscan(PG_FUNCTION_ARGS);
extern Datum hr_markpos(PG_FUNCTION_ARGS);
extern Datum hr_restrpos(PG_FUNCTION_ARGS);
extern Datum hr_bulkdelete(PG_FUNCTION_ARGS);
extern Datum hr_vacuumcleanup(PG_FUNCTION_ARGS);
extern Datum hr_options(PG_FUNCTION_ARGS);

//extern Datum hr_costestimate(PG_FUNCTION_ARGS); added in /src/include/utils/selfuncs.h

#endif   /* HIERARCHICAL_H */
