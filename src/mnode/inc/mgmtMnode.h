/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TDENGINE_MGMT_MNODE_H
#define TDENGINE_MGMT_MNODE_H

#ifdef __cplusplus
extern "C" {
#endif

bool mgmtCheckRedirect(void *handle);

int32_t mgmtAddMnode(uint32_t privateIp, uint32_t publicIp);
int32_t mgmtRemoveMnode(uint32_t privateIp);

#ifdef __cplusplus
}
#endif

#endif
