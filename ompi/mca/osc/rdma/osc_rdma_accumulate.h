/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil -*- */
/*
 * Copyright (c) 2014-2015 Los Alamos National Security, LLC.  All rights
 *                         reserved.
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 */

#if !defined(OSC_RDMA_ACCUMULATE_H)
#define OSC_RDMA_ACCUMULATE_H

#include "osc_rdma.h"

int ompi_osc_rdma_compare_and_swap (const void *origin_addr, const void *compare_addr,
                                    void *result_addr, struct ompi_datatype_t *dt,
                                    int target, OPAL_PTRDIFF_TYPE target_disp,
                                    struct ompi_win_t *win);

int ompi_osc_rdma_accumulate (const void *origin_addr, int origin_count,
                              struct ompi_datatype_t *origin_dt,
                              int target, OPAL_PTRDIFF_TYPE target_disp,
                              int target_count, struct ompi_datatype_t *target_dt,
                              struct ompi_op_t *op, struct ompi_win_t *win);
int ompi_osc_rdma_fetch_and_op (const void *origin_addr, void *result_addr,
                                struct ompi_datatype_t *dt, int target,
                                OPAL_PTRDIFF_TYPE target_disp,
                                struct ompi_op_t *op, struct ompi_win_t *win);

int ompi_osc_rdma_get_accumulate (const void *origin_addr, int origin_count,
                                  struct ompi_datatype_t *origin_datatype,
                                  void *result_addr, int result_count,
                                  struct ompi_datatype_t *result_datatype,
                                  int target_rank, MPI_Aint target_disp,
                                  int target_count, struct ompi_datatype_t *target_datatype,
                                  struct ompi_op_t *op, struct ompi_win_t *win);

int ompi_osc_rdma_raccumulate (const void *origin_addr, int origin_count,
                               struct ompi_datatype_t *origin_dt,
                               int target, OPAL_PTRDIFF_TYPE target_disp,
                               int target_count, struct ompi_datatype_t *target_dt,
                               struct ompi_op_t *op, struct ompi_win_t *win,
                               struct ompi_request_t **request);

int ompi_osc_rdma_rget_accumulate (const void *origin_addr, int origin_count,
                                   struct ompi_datatype_t *origin_datatype,
                                   void *result_addr, int result_count,
                                   struct ompi_datatype_t *result_datatype,
                                   int target_rank, MPI_Aint target_disp,
                                   int target_count, struct ompi_datatype_t *target_datatype,
                                   struct ompi_op_t *op, struct ompi_win_t *win,
                                   struct ompi_request_t **request);


#endif /* OSC_RDMA_ACCUMULATE_H */
