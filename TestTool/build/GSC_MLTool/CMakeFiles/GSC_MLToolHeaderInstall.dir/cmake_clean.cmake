file(REMOVE_RECURSE
  "../x86_64-centos7-gcc8-opt/include/GSC_MLTool"
  "../x86_64-centos7-gcc8-opt/data/GSC_MLTool/neural_net.json"
  "../x86_64-centos7-gcc8-opt/include/GSC_MLTool"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/GSC_MLToolHeaderInstall.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
