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
    copts=[
        "-O3",
        "-fPIC",
        "-std=c++17",
        "-fopenmp",
    ],
    linkopts = [
        "-pthread",
        "-fopenmp",
    ],
    deps = [
        "@com_github_google_glog//:glog",
        "@com_github_google_benchmark//:benchmark",
        ":leptjson",
    ],
    linkstatic = True,
)

