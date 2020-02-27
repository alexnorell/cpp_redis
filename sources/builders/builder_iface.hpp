// The MIT License (MIT)
//
// Copyright (c) 2015-2017 Simon Ninon <simon.ninon@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef CPP_REDIS_BUILDERS_BUILDER_IFACE_HPP_
#define CPP_REDIS_BUILDERS_BUILDER_IFACE_HPP_

#include <memory>
#include <string>

#include "reply.hpp"

namespace cpp_redis {

namespace builders {

/**
		 * @brief interface inherited by all builders
		 */
class builder_iface {
public:
  virtual ~builder_iface() = default;

  /**
				 * take data as parameter which is consumed to build the reply
				 * every bytes used to build the reply must be removed from the buffer passed as parameter
				 *
				 * @param data data to be consumed
				 * @return current instance
				 *
				 */
  virtual builder_iface& operator<<(std::string& data) = 0;

  /**
				 * @return whether the reply could be built
				 *
				 */
  virtual bool reply_ready() const = 0;

  /**
				 * @return reply object
				 *
				 */
  virtual reply get_reply() const = 0;
};

} // namespace builders

} // namespace cpp_redis

#endif