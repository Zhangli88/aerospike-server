/*
 * index_ce.c
 *
 * Copyright (C) 2016 Aerospike, Inc.
 *
 * Portions may be licensed to Aerospike, Inc. under one or more contributor
 * license agreements.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Affero General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option) any
 * later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/
 */

//==========================================================
// Includes.
//

#include "base/index.h"

#include "arenax.h"
#include "fault.h"

#include "base/datamodel.h"


//==========================================================
// Public API.
//

as_index_tree *
as_index_tree_resume(cf_arenax *arena, as_index_value_destructor destructor,
		void *destructor_udata, as_treex *p_treex)
{
	cf_crash(AS_INDEX, "CE code called as_index_tree_resume()");
	return NULL;
}


void
as_index_reduce_live(as_index_tree *tree, as_index_reduce_fn cb, void *udata)
{
	as_index_reduce(tree, cb, udata);
}


void
as_index_reduce_partial_live(as_index_tree *tree, uint32_t sample_count,
		as_index_reduce_fn cb, void *udata)
{
	as_index_reduce_partial(tree, sample_count, cb, udata);
}
