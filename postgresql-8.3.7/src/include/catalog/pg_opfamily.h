/*-------------------------------------------------------------------------
 *
 * pg_opfamily.h
 *	  definition of the system "opfamily" relation (pg_opfamily)
 *	  along with the relation's initial contents.
 *
 *
 * Portions Copyright (c) 1996-2008, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $PostgreSQL: pgsql/src/include/catalog/pg_opfamily.h,v 1.7 2008/01/01 19:45:57 momjian Exp $
 *
 * NOTES
 *	  the genbki.sh script reads this file and generates .bki
 *	  information from the DATA() statements.
 *
 *-------------------------------------------------------------------------
 */
#ifndef PG_OPFAMILY_H
#define PG_OPFAMILY_H

/* ----------------
 *		postgres.h contains the system type definitions and the
 *		CATALOG(), BKI_BOOTSTRAP and DATA() sugar words so this file
 *		can be read by both genbki.sh and the C compiler.
 * ----------------
 */

/* ----------------
 *		pg_opfamily definition. cpp turns this into
 *		typedef struct FormData_pg_opfamily
 * ----------------
 */
#define OperatorFamilyRelationId  2753

CATALOG(pg_opfamily,2753)
{
	Oid			opfmethod;		/* index access method opfamily is for */
	NameData	opfname;		/* name of this opfamily */
	Oid			opfnamespace;	/* namespace of this opfamily */
	Oid			opfowner;		/* opfamily owner */
} FormData_pg_opfamily;

/* ----------------
 *		Form_pg_opfamily corresponds to a pointer to a tuple with
 *		the format of pg_opfamily relation.
 * ----------------
 */
typedef FormData_pg_opfamily *Form_pg_opfamily;

/* ----------------
 *		compiler constants for pg_opfamily
 * ----------------
 */
#define Natts_pg_opfamily				4
#define Anum_pg_opfamily_opfmethod		1
#define Anum_pg_opfamily_opfname		2
#define Anum_pg_opfamily_opfnamespace	3
#define Anum_pg_opfamily_opfowner		4

/* ----------------
 *		initial contents of pg_opfamily
 * ----------------
 */

DATA(insert OID =  421 (	403		abstime_ops		PGNSP PGUID ));
DATA(insert OID =  397 (	403		array_ops		PGNSP PGUID ));
DATA(insert OID =  423 (	403		bit_ops			PGNSP PGUID ));
DATA(insert OID =  424 (	403		bool_ops		PGNSP PGUID ));
#define BOOL_BTREE_FAM_OID 424
DATA(insert OID =  426 (	403		bpchar_ops		PGNSP PGUID ));
#define BPCHAR_BTREE_FAM_OID 426
DATA(insert OID =  427 (	405		bpchar_ops		PGNSP PGUID ));
DATA(insert OID =  428 (	403		bytea_ops		PGNSP PGUID ));
#define BYTEA_BTREE_FAM_OID 428
DATA(insert OID =  429 (	403		char_ops		PGNSP PGUID ));
DATA(insert OID =  431 (	405		char_ops		PGNSP PGUID ));
DATA(insert OID =  434 (	403		datetime_ops	PGNSP PGUID ));
DATA(insert OID =  435 (	405		date_ops		PGNSP PGUID ));
DATA(insert OID = 1970 (	403		float_ops		PGNSP PGUID ));
DATA(insert OID = 1971 (	405		float_ops		PGNSP PGUID ));
DATA(insert OID = 1974 (	403		network_ops		PGNSP PGUID ));
#define NETWORK_BTREE_FAM_OID 1974
DATA(insert OID = 1975 (	405		network_ops		PGNSP PGUID ));
DATA(insert OID = 1976 (	403		integer_ops		PGNSP PGUID ));
#define INTEGER_BTREE_FAM_OID 1976
DATA(insert OID = 1977 (	405		integer_ops		PGNSP PGUID ));
DATA(insert OID = 1982 (	403		interval_ops	PGNSP PGUID ));
DATA(insert OID = 1983 (	405		interval_ops	PGNSP PGUID ));
DATA(insert OID = 1984 (	403		macaddr_ops		PGNSP PGUID ));
DATA(insert OID = 1985 (	405		macaddr_ops		PGNSP PGUID ));
DATA(insert OID = 1986 (	403		name_ops		PGNSP PGUID ));
#define NAME_BTREE_FAM_OID 1986
DATA(insert OID = 1987 (	405		name_ops		PGNSP PGUID ));
DATA(insert OID = 1988 (	403		numeric_ops		PGNSP PGUID ));
DATA(insert OID = 1998 (	405		numeric_ops		PGNSP PGUID ));
DATA(insert OID = 1989 (	403		oid_ops			PGNSP PGUID ));
#define OID_BTREE_FAM_OID 1989
DATA(insert OID = 1990 (	405		oid_ops			PGNSP PGUID ));
DATA(insert OID = 1991 (	403		oidvector_ops	PGNSP PGUID ));
DATA(insert OID = 1992 (	405		oidvector_ops	PGNSP PGUID ));
DATA(insert OID = 1994 (	403		text_ops		PGNSP PGUID ));
#define TEXT_BTREE_FAM_OID 1994
DATA(insert OID = 1995 (	405		text_ops		PGNSP PGUID ));
DATA(insert OID = 1996 (	403		time_ops		PGNSP PGUID ));
DATA(insert OID = 1997 (	405		time_ops		PGNSP PGUID ));
DATA(insert OID = 1999 (	405		timestamptz_ops PGNSP PGUID ));
DATA(insert OID = 2000 (	403		timetz_ops		PGNSP PGUID ));
DATA(insert OID = 2001 (	405		timetz_ops		PGNSP PGUID ));
DATA(insert OID = 2002 (	403		varbit_ops		PGNSP PGUID ));
DATA(insert OID = 2040 (	405		timestamp_ops	PGNSP PGUID ));
DATA(insert OID = 2095 (	403		text_pattern_ops	PGNSP PGUID ));
#define TEXT_PATTERN_BTREE_FAM_OID 2095
DATA(insert OID = 2097 (	403		bpchar_pattern_ops	PGNSP PGUID ));
#define BPCHAR_PATTERN_BTREE_FAM_OID 2097
DATA(insert OID = 2098 (	403		name_pattern_ops	PGNSP PGUID ));
#define NAME_PATTERN_BTREE_FAM_OID 2098
DATA(insert OID = 2099 (	403		money_ops		PGNSP PGUID ));
DATA(insert OID = 2222 (	405		bool_ops		PGNSP PGUID ));
#define BOOL_HASH_FAM_OID 2222
DATA(insert OID = 2223 (	405		bytea_ops		PGNSP PGUID ));
DATA(insert OID = 2224 (	405		int2vector_ops	PGNSP PGUID ));
DATA(insert OID = 2789 (	403		tid_ops			PGNSP PGUID ));
DATA(insert OID = 2225 (	405		xid_ops			PGNSP PGUID ));
DATA(insert OID = 2226 (	405		cid_ops			PGNSP PGUID ));
DATA(insert OID = 2227 (	405		abstime_ops		PGNSP PGUID ));
DATA(insert OID = 2228 (	405		reltime_ops		PGNSP PGUID ));
DATA(insert OID = 2229 (	405		text_pattern_ops	PGNSP PGUID ));
DATA(insert OID = 2231 (	405		bpchar_pattern_ops	PGNSP PGUID ));
DATA(insert OID = 2232 (	405		name_pattern_ops	PGNSP PGUID ));
DATA(insert OID = 2233 (	403		reltime_ops		PGNSP PGUID ));
DATA(insert OID = 2234 (	403		tinterval_ops	PGNSP PGUID ));
DATA(insert OID = 2235 (	405		aclitem_ops		PGNSP PGUID ));
DATA(insert OID = 2593 (	783		box_ops			PGNSP PGUID ));
DATA(insert OID = 2594 (	783		poly_ops		PGNSP PGUID ));
DATA(insert OID = 2595 (	783		circle_ops		PGNSP PGUID ));
DATA(insert OID = 2745 (	2742	array_ops		PGNSP PGUID ));
DATA(insert OID = 2968 (	403		uuid_ops		PGNSP PGUID ));
DATA(insert OID = 2969 (	405		uuid_ops		PGNSP PGUID ));
DATA(insert OID = 3522 (	403		enum_ops		PGNSP PGUID ));
DATA(insert OID = 3523 (	405		enum_ops		PGNSP PGUID ));
DATA(insert OID = 3626 (	403		tsvector_ops	PGNSP PGUID ));
DATA(insert OID = 3655 (	783		tsvector_ops	PGNSP PGUID ));
DATA(insert OID = 3659 (	2742	tsvector_ops	PGNSP PGUID ));
DATA(insert OID = 3683 (	403		tsquery_ops		PGNSP PGUID ));
DATA(insert OID = 3702 (	783		tsquery_ops		PGNSP PGUID ));
DATA(insert OID =  3015 (	3000		array_ops		PGNSP PGUID ));
DATA(insert OID =  3014 (	3000		abstime_ops		PGNSP PGUID ));
DATA(insert OID =  3016 (	3000		bit_ops			PGNSP PGUID ));
DATA(insert OID =  3017 (	3000		bool_ops		PGNSP PGUID ));
#define BOOL_HIERARCHICAL_FAM_OID 3017
DATA(insert OID =  3018 (	3000		bpchar_ops		PGNSP PGUID ));
#define BPCHAR_HIERARCHICAL_FAM_OID 3018
DATA(insert OID =  3019 (	3000		bytea_ops		PGNSP PGUID ));
#define BYTEA_HIERARCHICAL_FAM_OID 3019
DATA(insert OID =  3020 (	3000		char_ops		PGNSP PGUID ));
DATA(insert OID =  3021 (	3000		datetime_ops	PGNSP PGUID ));
DATA(insert OID = 3022 (	3000		float_ops		PGNSP PGUID ));
DATA(insert OID = 3023 (	3000		network_ops		PGNSP PGUID ));
#define NETWORK_HIERARCHICAL_FAM_OID 3023
DATA(insert OID = 3024 (	3000		integer_ops		PGNSP PGUID ));
#define INTEGER_HIERARCHICAL_FAM_OID 3024
DATA(insert OID = 3025 (	3000		interval_ops	PGNSP PGUID ));
DATA(insert OID = 3026 (	3000		macaddr_ops		PGNSP PGUID ));
DATA(insert OID = 3027 (	3000		name_ops		PGNSP PGUID ));
#define NAME_HIERARCHICAL_FAM_OID 3027
DATA(insert OID = 3028 (	3000		numeric_ops		PGNSP PGUID ));
DATA(insert OID = 3029 (	3000		oid_ops			PGNSP PGUID ));
#define OID_HIERARCHICAL_FAM_OID 3029
DATA(insert OID = 3030 (	3000		oidvector_ops	PGNSP PGUID ));
DATA(insert OID = 3031 (	3000		text_ops		PGNSP PGUID ));
#define TEXT_HIERARCHICAL_FAM_OID 3031
DATA(insert OID = 3032 (	3000		time_ops		PGNSP PGUID ));
DATA(insert OID = 3033 (	3000		timetz_ops		PGNSP PGUID ));
DATA(insert OID = 3034 (	3000		varbit_ops		PGNSP PGUID ));
DATA(insert OID = 3035 (	3000		text_pattern_ops	PGNSP PGUID ));
#define TEXT_PATTERN_HIERARCHICAL_FAM_OID 3035
DATA(insert OID = 3036 (	3000		bpchar_pattern_ops	PGNSP PGUID ));
#define BPCHAR_PATTERN_HIERARCHICAL_FAM_OID 3036
DATA(insert OID = 3037 (	3000		name_pattern_ops	PGNSP PGUID ));
#define NAME_PATTERN_HIERARCHICAL_FAM_OID 3037
DATA(insert OID = 3038 (	3000		money_ops		PGNSP PGUID ));
DATA(insert OID = 3039 (	3000		tid_ops			PGNSP PGUID ));
DATA(insert OID = 3040 (	3000		reltime_ops		PGNSP PGUID ));
DATA(insert OID = 3041 (	3000		tinterval_ops	PGNSP PGUID ));
DATA(insert OID = 3042 (	3000		uuid_ops		PGNSP PGUID ));
DATA(insert OID = 3043 (	3000		enum_ops		PGNSP PGUID ));
DATA(insert OID = 3044 (	3000		tsvector_ops	PGNSP PGUID ));
DATA(insert OID = 3045 (	3000		tsquery_ops		PGNSP PGUID ));


#endif   /* PG_OPFAMILY_H */
