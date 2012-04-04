#ifndef SPROUT_RANGE_ALGORITHM_IS_HEAP_UNTIL_HPP
#define SPROUT_RANGE_ALGORITHM_IS_HEAP_UNTIL_HPP

#include <sprout/config.hpp>
#include <sprout/container/functions.hpp>
#include <sprout/utility/operation.hpp>
#include <sprout/range/range_return.hpp>
#include <sprout/algorithm/is_heap_until.hpp>

namespace sprout {
	namespace range {
		// Copyright (C) 2011 RiSK (sscrisk)

		// 25.4.6.5 is_heap
		template<typename Range>
		inline SPROUT_CONSTEXPR typename sprout::range::range_return<Range>::type
		is_heap_until(Range&& range) {
			return sprout::range::range_return<Range>::pack(
				sprout::is_heap_until(
					sprout::begin(sprout::forward<Range>(range)),
					sprout::end(sprout::forward<Range>(range))
					),
				sprout::forward<Range>(range)
				);
		}

		template<typename Range, typename Compare>
		inline SPROUT_CONSTEXPR typename sprout::range::range_return<Range>::type
		is_heap_until(Range&& range, Compare comp) {
			return sprout::range::range_return<Range>::pack(
				sprout::is_heap_until(
					sprout::begin(sprout::forward<Range>(range)),
					sprout::end(sprout::forward<Range>(range)),
					comp
					),
				sprout::forward<Range>(range)
				);
		}

		template<sprout::range::range_return_value RetV, typename Range>
		inline SPROUT_CONSTEXPR typename sprout::range::range_return<Range, RetV>::type
		is_heap_until(Range&& range) {
			return sprout::range::range_return<Range, RetV>::pack(
				sprout::is_heap_until(
					sprout::begin(sprout::forward<Range>(range)),
					sprout::end(sprout::forward<Range>(range))
					),
				sprout::forward<Range>(range)
				);
		}

		template<sprout::range::range_return_value RetV, typename Range, typename Compare>
		inline SPROUT_CONSTEXPR typename sprout::range::range_return<Range, RetV>::type
		is_heap_until(Range&& range, Compare comp) {
			return sprout::range::range_return<Range, RetV>::pack(
				sprout::is_heap_until(
					sprout::begin(sprout::forward<Range>(range)),
					sprout::end(sprout::forward<Range>(range)),
					comp
					),
				sprout::forward<Range>(range)
				);
		}
	}	// namespace range
}	// namespace sprout

#endif	// #ifndef SPROUT_RANGE_ALGORITHM_IS_HEAP_UNTIL_HPP
