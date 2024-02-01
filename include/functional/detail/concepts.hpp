// Copyright (c) 2024 Bronek Kozicki
//
// Distributed under the ISC License. See accompanying file LICENSE.md
// or copy at https://opensource.org/licenses/ISC

#ifndef INCLUDE_FUNCTIONAL_DETAIL_CONCEPTS
#define INCLUDE_FUNCTIONAL_DETAIL_CONCEPTS

#include <expected>
#include <optional>

namespace fn::detail {
template <typename T> constexpr bool _is_some_expected = false;
template <typename T, typename Err> constexpr bool _is_some_expected<std::expected<T, Err> &> = true;
template <typename T, typename Err> constexpr bool _is_some_expected<std::expected<T, Err> const &> = true;

template <typename T> constexpr bool _is_some_optional = false;
template <typename T> constexpr bool _is_some_optional<std::optional<T> &> = true;
template <typename T> constexpr bool _is_some_optional<std::optional<T> const &> = true;
} // namespace fn::detail

#endif // INCLUDE_FUNCTIONAL_DETAIL_CONCEPTS
