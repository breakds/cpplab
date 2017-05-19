workspace(name = "cpplab")

# GTest/GMock
new_http_archive(
    name = "gtest",
    url = "https://github.com/google/googletest/archive/release-1.8.0.zip",
    build_file = "third_party/gtest.BUILD",
    strip_prefix = "googletest-release-1.8.0",
)

# gflags
git_repository(
    name = "com_github_gflags_gflags",
    remote = "https://github.com/gflags/gflags.git",
    tag = "v2.2.0",
)

bind(
    name = "gflags",
    actual = "@com_github_gflags_gflags//:gflags",
)

# glog
new_git_repository(
    name = "glog",
    remote = "https://github.com/google/glog.git",
    commit = "b6a5e0524c28178985f0d228e9eaa43808dbec3c",
    build_file = "third_party/glog.BUILD"
)

new_http_archive(
    name = "websocketpp",
    url = "https://github.com/zaphoyd/websocketpp/archive/0.7.0.tar.gz",
    sha256 = "07b3364ad30cda022d91759d4b83ff902e1ebadb796969e58b59caa535a03923",
    build_file = "third_party/websocketpp.BUILD",
    strip_prefix = "websocketpp-0.7.0",
)
