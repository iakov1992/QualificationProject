file(REMOVE_RECURSE
  "x86_64-centos7-gcc8-opt/setup.sh"
  "x86_64-centos7-gcc8-opt/lib/WorkDir.rootmap"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/atlas_tests.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
