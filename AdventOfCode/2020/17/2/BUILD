cc_library(
    name = "AOC20_17_2",
    srcs = glob(["src/*.cpp"]),
    hdrs = glob(["include/*.h"]),
    linkopts = ["-pthread"],
    strip_include_prefix = "include",
    visibility = ["//visibility:public"],
)

cc_test(
    name = "AOC20_17_2_test",
    srcs = glob(["test/*.cpp"]),
    deps = [
        "//AdventOfCode/2020/17/2:AOC20_17_2",
        "@gtest//:gtest_main",
    ],
    data = glob(["data/*.txt"]),
)

cc_binary(
    name = "AOC20_17_2_bin",
    deps = [
        "//AdventOfCode/2020/17/2:AOC20_17_2",
    ],
)
