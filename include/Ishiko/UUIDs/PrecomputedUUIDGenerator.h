/*
    Copyright (c) 2021-2022 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#ifndef _ISHIKO_CPP_UUIDS_PRECOMPUTEDUUIDGENERATOR_H_
#define _ISHIKO_CPP_UUIDS_PRECOMPUTEDUUIDGENERATOR_H_

#include "UUID.h"
#include "UUIDGenerator.h"
#include <initializer_list>
#include <vector>

namespace Ishiko
{

class PrecomputedUUIDGenerator : public UUIDGenerator
{
public:
    PrecomputedUUIDGenerator();
    PrecomputedUUIDGenerator(const std::vector<UUID>& uuids);
    PrecomputedUUIDGenerator(std::initializer_list<UUID> uuids);

    UUID generate(Error& error) override;

private:
    std::vector<UUID> m_uuids;
    size_t m_index;
};

}

#endif
