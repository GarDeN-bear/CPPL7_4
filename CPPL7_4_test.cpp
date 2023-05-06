#include <iostream>
#include "CPPL7_4.h"

#include <catch2/catch_template_test_macros.hpp>
#include <catch2/catch_session.hpp>

TEST_CASE("list CPPL7_4_1", "[CPPL7_4_1]") {
	List list;
	INFO("list is empty");
	CHECK(list.Empty() == true);
	list.PushBack(1);
	list.PushBack(2);
	INFO("list's size is equal to 2");
	CHECK(list.Size() == 2);
	list.Clear();
	INFO("list's size is equal 0 aftear using method 'clear'");
	CHECK(list.Empty());
}
TEST_CASE("CPPL7_4_2", "[CPPL7_4_2]") {
	List list;
	list.PushBack(1);
	list.PushBack(2);
	list.PushFront(3);
	INFO("list's size is equal to 3");
	CHECK(list.Size() == 3);
	list.PopBack();
	INFO("list's size is equal to 2");
	CHECK(list.Size() == 2);
	list.PopFront();
	INFO("list's size is equal to 1");
	CHECK(list.Size() == 1);
	list.PopBack();
	SECTION("using PopBack on empty list") {
		INFO("using PopBack on empty list");
		list.PopBack();
		CHECK(list.Empty() == true);
	}
	SECTION("using PopFront on empty list") {
		INFO("using PopFront on empty list");
		list.PopFront();
		CHECK(list.Empty() == true);
	}
}

int main() {
	return Catch::Session().run();
}