// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };


    const std::initializer_list<CheckpointData> CHECKPOINTS = {
        {0, "e7002321b105399a224dde56ad40dabccbf6ce19d29455249d4387686a9a199a"},
        {3, "72ea8a88a33e8851d332cb77f0f894e96240f44b8bd9b64f2985c1a4a33e985a"},
        {4, "a4a81b1225e2dd18d6e8ed699ba35006ffcf9817702aecd2766568b25390199c"},
        {7, "4ba1f903e48a85a8ea5a487ccf33ad9ea7886bcb03491366d001e4fcbb7b7b88"},
        {1000, "90adba8ef72692a94b704eb2f49aa509e0eb736fbb64bf846109d3677314aa99"}};
        
} // namespace CryptoNote

