/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.wamp (standalone).
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V0_TESTCASES_EXAMPLE77_Example_Interface_WAMP_TYPES_SUPPORT_HPP_
#define V0_TESTCASES_EXAMPLE77_Example_Interface_WAMP_TYPES_SUPPORT_HPP_


#include <v0/testcases/example77/ExampleInterface.hpp>

#include <msgpack.hpp>

namespace msgpack {
MSGPACK_API_VERSION_NAMESPACE(MSGPACK_DEFAULT_API_NS) {
namespace adaptor {

template<>
struct convert<::v0::testcases::example77::ExampleInterface::Summands> {
	msgpack::object const& operator()(msgpack::object const& o, ::v0::testcases::example77::ExampleInterface::Summands& v) const {
		if (o.type != msgpack::type::ARRAY) throw msgpack::type_error();
		if (o.via.array.size != 2) throw msgpack::type_error();
		v = ::v0::testcases::example77::ExampleInterface::Summands (
			o.via.array.ptr[0].as<uint64_t>(),
			o.via.array.ptr[1].as<uint64_t>()
        );
		return o;
	}
};

template<>
struct object_with_zone<::v0::testcases::example77::ExampleInterface::Summands> {
	void operator()(msgpack::object::with_zone& o, ::v0::testcases::example77::ExampleInterface::Summands const& v) const {
		o.type = type::ARRAY;
		o.via.array.size = 2;
		o.via.array.ptr = static_cast<msgpack::object*>(
		o.zone.allocate_align(sizeof(msgpack::object) * o.via.array.size));
		o.via.array.ptr[0] = msgpack::object(v.getLeft(), o.zone);
		o.via.array.ptr[1] = msgpack::object(v.getRight(), o.zone);
	}
};

template<>
struct convert<::v0::testcases::example77::ExampleInterface::Params> {
	msgpack::object const& operator()(msgpack::object const& o, ::v0::testcases::example77::ExampleInterface::Params& v) const {
		if (o.type != msgpack::type::ARRAY) throw msgpack::type_error();
		if (o.via.array.size != 2) throw msgpack::type_error();
		v = ::v0::testcases::example77::ExampleInterface::Params (
			o.via.array.ptr[0].as<::v0::testcases::example77::ExampleInterface::Summands>(),
			o.via.array.ptr[1].as<uint64_t>()
        );
		return o;
	}
};

template<>
struct object_with_zone<::v0::testcases::example77::ExampleInterface::Params> {
	void operator()(msgpack::object::with_zone& o, ::v0::testcases::example77::ExampleInterface::Params const& v) const {
		o.type = type::ARRAY;
		o.via.array.size = 2;
		o.via.array.ptr = static_cast<msgpack::object*>(
		o.zone.allocate_align(sizeof(msgpack::object) * o.via.array.size));
		o.via.array.ptr[0] = msgpack::object(v.getSs(), o.zone);
		o.via.array.ptr[1] = msgpack::object(v.getX(), o.zone);
	}
};

template<>
struct convert<::v0::testcases::example77::ExampleInterface::SumDiff> {
	msgpack::object const& operator()(msgpack::object const& o, ::v0::testcases::example77::ExampleInterface::SumDiff& v) const {
		if (o.type != msgpack::type::ARRAY) throw msgpack::type_error();
		if (o.via.array.size != 2) throw msgpack::type_error();
		v = ::v0::testcases::example77::ExampleInterface::SumDiff (
			o.via.array.ptr[0].as<uint64_t>(),
			o.via.array.ptr[1].as<uint64_t>()
        );
		return o;
	}
};

template<>
struct object_with_zone<::v0::testcases::example77::ExampleInterface::SumDiff> {
	void operator()(msgpack::object::with_zone& o, ::v0::testcases::example77::ExampleInterface::SumDiff const& v) const {
		o.type = type::ARRAY;
		o.via.array.size = 2;
		o.via.array.ptr = static_cast<msgpack::object*>(
		o.zone.allocate_align(sizeof(msgpack::object) * o.via.array.size));
		o.via.array.ptr[0] = msgpack::object(v.getSum(), o.zone);
		o.via.array.ptr[1] = msgpack::object(v.getDiff(), o.zone);
	}
};

} // namespace adaptor
} // MSGPACK_API_VERSION_NAMESPACE(MSGPACK_DEFAULT_API_NS)
} // namespace msgpack

#endif // V0_TESTCASES_EXAMPLE77_Example_Interface_WAMP_TYPES_SUPPORT_HPP_

