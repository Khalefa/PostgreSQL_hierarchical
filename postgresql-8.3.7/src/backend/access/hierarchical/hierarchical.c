
#include "postgres.h"

#include "access/genam.h"
#include "catalog/index.h"
#include "commands/vacuum.h"
#include "storage/freespace.h"
#include "storage/ipc.h"
#include "storage/lmgr.h"
#include "utils/memutils.h"
#include "access/hierarchical.h"



/* Ordinarily the ambuild function will call IndexBuildHeapScan() */

Datum
hr_build(PG_FUNCTION_ARGS)
{
	printf("here in hr build\n");
	Relation	heap = (Relation) PG_GETARG_POINTER(0);
	Relation	index = (Relation) PG_GETARG_POINTER(1);
	IndexInfo  *indexInfo = (IndexInfo *) PG_GETARG_POINTER(2);
	IndexBuildResult *result;
	
	result = (IndexBuildResult *) palloc(sizeof(IndexBuildResult));

	result->heap_tuples = 0;
	result->index_tuples = 0;
	
	PG_RETURN_POINTER(result);
}




Datum
hr_insert(PG_FUNCTION_ARGS)
{
	printf("here in hr insert\n");
	Relation	rel = (Relation) PG_GETARG_POINTER(0);
	Datum	   *values = (Datum *) PG_GETARG_POINTER(1);
	bool	   *isnull = (bool *) PG_GETARG_POINTER(2);
	ItemPointer ht_ctid = (ItemPointer) PG_GETARG_POINTER(3);
	Relation	heapRel = (Relation) PG_GETARG_POINTER(4);
	bool		checkUnique = PG_GETARG_BOOL(5);

	PG_RETURN_BOOL(true);
}


Datum
hr_bulkdelete(PG_FUNCTION_ARGS)
{
	printf("here in hr builk delete\n");
	IndexVacuumInfo *info = (IndexVacuumInfo *) PG_GETARG_POINTER(0);
	IndexBulkDeleteResult *volatile stats = (IndexBulkDeleteResult *) PG_GETARG_POINTER(1);
	IndexBulkDeleteCallback callback = (IndexBulkDeleteCallback) PG_GETARG_POINTER(2);
	void	   *callback_state = (void *) PG_GETARG_POINTER(3);

	
	// PG_RETURN_POINTER(NULL);
	PG_RETURN_NULL();
}

Datum
hr_vacuumcleanup(PG_FUNCTION_ARGS)
{
	printf("here in hr vacuum cleanup\n");
	IndexVacuumInfo *info = (IndexVacuumInfo *) PG_GETARG_POINTER(0);
	IndexBulkDeleteResult *stats = (IndexBulkDeleteResult *) PG_GETARG_POINTER(1);

	// PG_RETURN_POINTER(NULL);
	PG_RETURN_NULL();
}






Datum
hr_options(PG_FUNCTION_ARGS)
{
	printf("here in hr options\n");
	Datum		reloptions = PG_GETARG_DATUM(0);
	bool		validate = PG_GETARG_BOOL(1);
	bytea	   *result;
	
	PG_RETURN_NULL();
}



Datum
hr_beginscan(PG_FUNCTION_ARGS)
{
	printf("here in hr begin scan\n");
	Relation	rel = (Relation) PG_GETARG_POINTER(0);
	int			keysz = PG_GETARG_INT32(1);
	ScanKey		scankey = (ScanKey) PG_GETARG_POINTER(2);
	IndexScanDesc scan;

	/* get the scan */
	scan = RelationGetIndexScan(rel, keysz, scankey);

	PG_RETURN_POINTER(scan);
}

/* should set the TID of the next tuple in the Xs_ctup which is in the IndexScanDesc */
Datum
hr_gettuple(PG_FUNCTION_ARGS)
{
	printf("here in hr get tuple\n");
	IndexScanDesc scan = (IndexScanDesc) PG_GETARG_POINTER(0);
	ScanDirection dir = (ScanDirection) PG_GETARG_INT32(1);
	
	bool		res = true;
	
	/* start */
	Relation r = (scan->heapRelation);
	
	int natts = (r->rd_att)->natts;

	Datum* values = (Datum *) palloc(natts * sizeof(Datum));
	bool* isnull = (bool *) palloc(natts * sizeof(bool));

	values[0]=200;
	values[1]=300;
	isnull[0] = false;
	isnull[1] = false;

	HeapTuple t= heap_form_tuple(RelationGetDescr(r),
				values,
				isnull);

	scan->xs_ctup = *t;
	pfree(values);
	pfree(isnull);
	/* end */

	PG_RETURN_BOOL(res);
}

/* returned_tids is pass by reference output parameter (input output parameter) */
Datum
hr_getmulti(PG_FUNCTION_ARGS)
{
	printf("here in hr get multi\n");
	IndexScanDesc scan = (IndexScanDesc) PG_GETARG_POINTER(0);
	ItemPointer tids = (ItemPointer) PG_GETARG_POINTER(1);
	int32		max_tids = PG_GETARG_INT32(2);
	int32	   *returned_tids = (int32 *) PG_GETARG_POINTER(3);
	
	bool		res = true;
	

	*returned_tids = 0;
	PG_RETURN_BOOL(res);
}



Datum
hr_rescan(PG_FUNCTION_ARGS)
{
	printf("here in hr rescan\n");
	IndexScanDesc scan = (IndexScanDesc) PG_GETARG_POINTER(0);
	ScanKey		scankey = (ScanKey) PG_GETARG_POINTER(1);
	

	PG_RETURN_VOID();
}

Datum
hr_endscan(PG_FUNCTION_ARGS)
{
	printf("here in hr end scan\n");
	IndexScanDesc scan = (IndexScanDesc) PG_GETARG_POINTER(0);

	PG_RETURN_VOID();
}

Datum
hr_markpos(PG_FUNCTION_ARGS)
{
	printf("here in hr markpos\n");
	IndexScanDesc scan = (IndexScanDesc) PG_GETARG_POINTER(0);
	
	PG_RETURN_VOID();
}


Datum
hr_restrpos(PG_FUNCTION_ARGS)
{
	printf("here in hr restr pos\n");
	IndexScanDesc scan = (IndexScanDesc) PG_GETARG_POINTER(0);

	PG_RETURN_VOID();
}

