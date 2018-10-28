Digital filter test

---

Necessary for work:

* Matlab 2017a
* MSVS 2017 
* FilterSolution 2015

---

Algorithm:

* Generate filter in FilterSolution or in another way
* Insert filter in filter.cpp: filter_test\filter.cpp
* Compile filter_test.cpp: \filter_test\filter_test.cpp
* Generate data_in.txt: \matlab\Filter_test_gen.m 
* Run filter_test.exe with argument -data_in.txt -data_out.txt: \x64\Debug\filter_test.exe
* Visualisation data_out.txt: \matlab\Filter_test_visualisation.m 

Note: don't forget edit files path
