# Owner: larryhe
package(default_visibility = ["//visibility:public"])


cc_library(
    name = "leptjson",
    srcs = [
        "leptjson.cc",
    ],
    hdrs = [
	    "leptjson.h",
    ],
    deps = [],
)


cc_test(
    name = "json_test",
    srcs = [
        "test.cc",
    ],
    deps = [
        ":leptjson",
    ],
    linkstatic = True,
)

