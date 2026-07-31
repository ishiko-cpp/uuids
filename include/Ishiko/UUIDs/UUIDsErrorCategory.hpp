/*
    Copyright (c) 2021-2024 Xavier Leclercq
    Released under the MIT License
    See https://github.com/ishiko-cpp/uuids/blob/main/LICENSE.txt
*/

#ifndef GUARD_ISHIKO_CPP_UUIDS_UUIDSERRORCATEGORY_HPP
#define GUARD_ISHIKO_CPP_UUIDS_UUIDSERRORCATEGORY_HPP

#include <Ishiko/Errors.hpp>

namespace Ishiko
{

class UUIDsErrorCategory : public ErrorCategory
{
public:
    enum class Value
    {
        generic_error = -1,
        precomputed_uuid_list_exhausted = -2
    };

    static const UUIDsErrorCategory& Get() noexcept;

    const char* name() const noexcept override;
    const char* message(int ev, char* buffer, size_t len) const noexcept override;

private:
    UUIDsErrorCategory() noexcept;
};

void Fail(UUIDsErrorCategory::Value value, Error& error) noexcept;

}

#endif
