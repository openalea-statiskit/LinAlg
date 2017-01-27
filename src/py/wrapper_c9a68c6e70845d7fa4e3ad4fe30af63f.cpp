#include "_ieigen.h"


namespace autowig
{
    void method_decorator_0f96a79a1b395ff39bc84c7c26a642f5(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, double  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_e1d852e68b6553f5adf6ccdb53c439d5(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_c9a68c6e70845d7fa4e3ad4fe30af63f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_60ce12abd11e58308e128bd685d37cdd)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::matrixQR;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_d4c5e0b54aca5d0fa051e6006924e2a5)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, 4, 1, 1, 4 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_2132590e8f5553fb9bd129b48f67f195)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::rowsTranspositions;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_c6cd290c5b4353c490af5c891183505b)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::absDeterminant;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_89491add950f5a96a445e67246e4f0f0)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_a114f4b354fb5a12b3ef9c1502a9e508)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_f63304fc074b598fbad7a7c491d2a082)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_43e2aeb1c8ba5132818e2dc2d2e73270)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_7351d638f7245a1e90899c52507a51ad)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_46290553df055ee3a19e043a087c3a53)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_f8a98efb276f52c794e22fc1024660cb)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_b80a8f91dcef57e2bc44cc43043108d3)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_bad1d8ae8409532b8224bcb0bbbfe979)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_0f96a79a1b395ff39bc84c7c26a642f5)(double  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_e1d852e68b6553f5adf6ccdb53c439d5)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::setThreshold;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_a2962ecf3af65cceb80d31a22238b707)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_ddee53dc11705c8199bb5776cfd2bb52)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::nonzeroPivots;
    double  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 > >::*method_pointer_fd18b6edff935988aff1c12820734d30)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 > > > > class_c9a68c6e70845d7fa4e3ad4fe30af63f("_FullPivHouseholderQR_c9a68c6e70845d7fa4e3ad4fe30af63f", "", boost::python::no_init);
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("matrix_qr", method_pointer_60ce12abd11e58308e128bd685d37cdd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("cols_permutation", method_pointer_d4c5e0b54aca5d0fa051e6006924e2a5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("rows_transpositions", method_pointer_2132590e8f5553fb9bd129b48f67f195, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("abs_determinant", method_pointer_c6cd290c5b4353c490af5c891183505b, "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("log_abs_determinant", method_pointer_89491add950f5a96a445e67246e4f0f0, "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("rank", method_pointer_a114f4b354fb5a12b3ef9c1502a9e508, "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("dimension_of_kernel", method_pointer_f63304fc074b598fbad7a7c491d2a082, "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("is_injective", method_pointer_43e2aeb1c8ba5132818e2dc2d2e73270, "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("is_surjective", method_pointer_7351d638f7245a1e90899c52507a51ad, "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("is_invertible", method_pointer_46290553df055ee3a19e043a087c3a53, "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("rows", method_pointer_f8a98efb276f52c794e22fc1024660cb, "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("cols", method_pointer_b80a8f91dcef57e2bc44cc43043108d3, "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("h_coeffs", method_pointer_bad1d8ae8409532b8224bcb0bbbfe979, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("set_threshold", method_pointer_0f96a79a1b395ff39bc84c7c26a642f5, boost::python::return_internal_reference<>(), "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("set_threshold", autowig::method_decorator_0f96a79a1b395ff39bc84c7c26a642f5);
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("set_threshold", method_pointer_e1d852e68b6553f5adf6ccdb53c439d5, boost::python::return_internal_reference<>(), "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("set_threshold", autowig::method_decorator_e1d852e68b6553f5adf6ccdb53c439d5);
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("threshold", method_pointer_a2962ecf3af65cceb80d31a22238b707, "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("nonzero_pivots", method_pointer_ddee53dc11705c8199bb5776cfd2bb52, "");
    class_c9a68c6e70845d7fa4e3ad4fe30af63f.def("max_pivot", method_pointer_fd18b6edff935988aff1c12820734d30, "");

}