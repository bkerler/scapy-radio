/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(add_gr_header.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(1c378c37901a2eece105670e029e56a8)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/scapy_radio/add_gr_header.h>
// pydoc.h is automatically generated in the build directory
#include <add_gr_header_pydoc.h>

void bind_add_gr_header(py::module& m)
{

    using add_gr_header    = ::gr::scapy_radio::add_gr_header;


    py::class_<add_gr_header, gr::block, gr::basic_block,
        std::shared_ptr<add_gr_header>>(m, "add_gr_header", D(add_gr_header))

        .def(py::init(&add_gr_header::make),
           py::arg("protocol_id"),
           D(add_gr_header,make)
        )
        




        
        .def("protocol_id",&add_gr_header::protocol_id,       
            D(add_gr_header,protocol_id)
        )


        
        .def("set_protocol_id",&add_gr_header::set_protocol_id,       
            py::arg("protocol_id"),
            D(add_gr_header,set_protocol_id)
        )

        ;




}







