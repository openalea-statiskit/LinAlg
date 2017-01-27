#include "_ieigen.h"


namespace autowig
{
    void method_decorator_e5692e823c635ebabf12e61ca3fe9f8c(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, float  const & param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_6be3fefd6dca53a4b7db2d5ad9d50c18(class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_d35652a33204574eaebb5d765b57e622()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_d9d16100956055fbaffc1f9737c1b160)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::matrixQR;
    class ::Eigen::PermutationMatrix< 4, 4, int >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_fc614df6e02c5d1aaaafe966b625c402)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::colsPermutation;
    class ::Eigen::Matrix< long int, 1, 4, 1, 1, 4 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_286a5876ca29548ea71763ce19cbef3c)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::rowsTranspositions;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_124bc877ec5458879f7169d4bf8f8379)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::absDeterminant;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_2211b7b6d1675001a61330aaa9171324)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::logAbsDeterminant;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_4d2e06d6541a5d17a387f6630cbcd757)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::rank;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_04c1655b3d9a55209e989c9c29866f7c)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::dimensionOfKernel;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_c34bf3b665925b8eb7794febf9fac8b8)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isInjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_e956a140ef6355a0ba748aa92c7bc944)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isSurjective;
    bool  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_fecaab32a1495980adffc807fc1802f2)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::isInvertible;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_f4fde142b67954bfb2c2c3ff6a5a00ea)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::rows;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_c0f7a72effb55481b2dd2b5481d6fb9e)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::cols;
    class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >  const & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_001f8a29cde45c0aba93447ffa77d2ff)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::hCoeffs;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_e5692e823c635ebabf12e61ca3fe9f8c)(float  const &) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setThreshold;
    class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >  & (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_6be3fefd6dca53a4b7db2d5ad9d50c18)(enum ::Eigen::Default_t ) = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::setThreshold;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_3a5dbdb75bb15a6eb022495edcb3ad0f)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::threshold;
    long int  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_34f956cbdffe5aaca198165271c07a38)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::nonzeroPivots;
    float  (::Eigen::FullPivHouseholderQR< ::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 > >::*method_pointer_8e91bffdc7855ac387b2fb36ee407cb3)() const = &::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >::maxPivot;
    boost::python::class_< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::FullPivHouseholderQR< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > class_d35652a33204574eaebb5d765b57e622("_FullPivHouseholderQR_d35652a33204574eaebb5d765b57e622", "", boost::python::no_init);
    class_d35652a33204574eaebb5d765b57e622.def("matrix_qr", method_pointer_d9d16100956055fbaffc1f9737c1b160, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d35652a33204574eaebb5d765b57e622.def("cols_permutation", method_pointer_fc614df6e02c5d1aaaafe966b625c402, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d35652a33204574eaebb5d765b57e622.def("rows_transpositions", method_pointer_286a5876ca29548ea71763ce19cbef3c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d35652a33204574eaebb5d765b57e622.def("abs_determinant", method_pointer_124bc877ec5458879f7169d4bf8f8379, "");
    class_d35652a33204574eaebb5d765b57e622.def("log_abs_determinant", method_pointer_2211b7b6d1675001a61330aaa9171324, "");
    class_d35652a33204574eaebb5d765b57e622.def("rank", method_pointer_4d2e06d6541a5d17a387f6630cbcd757, "");
    class_d35652a33204574eaebb5d765b57e622.def("dimension_of_kernel", method_pointer_04c1655b3d9a55209e989c9c29866f7c, "");
    class_d35652a33204574eaebb5d765b57e622.def("is_injective", method_pointer_c34bf3b665925b8eb7794febf9fac8b8, "");
    class_d35652a33204574eaebb5d765b57e622.def("is_surjective", method_pointer_e956a140ef6355a0ba748aa92c7bc944, "");
    class_d35652a33204574eaebb5d765b57e622.def("is_invertible", method_pointer_fecaab32a1495980adffc807fc1802f2, "");
    class_d35652a33204574eaebb5d765b57e622.def("rows", method_pointer_f4fde142b67954bfb2c2c3ff6a5a00ea, "");
    class_d35652a33204574eaebb5d765b57e622.def("cols", method_pointer_c0f7a72effb55481b2dd2b5481d6fb9e, "");
    class_d35652a33204574eaebb5d765b57e622.def("h_coeffs", method_pointer_001f8a29cde45c0aba93447ffa77d2ff, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d35652a33204574eaebb5d765b57e622.def("set_threshold", method_pointer_e5692e823c635ebabf12e61ca3fe9f8c, boost::python::return_internal_reference<>(), "");
    class_d35652a33204574eaebb5d765b57e622.def("set_threshold", autowig::method_decorator_e5692e823c635ebabf12e61ca3fe9f8c);
    class_d35652a33204574eaebb5d765b57e622.def("set_threshold", method_pointer_6be3fefd6dca53a4b7db2d5ad9d50c18, boost::python::return_internal_reference<>(), "");
    class_d35652a33204574eaebb5d765b57e622.def("set_threshold", autowig::method_decorator_6be3fefd6dca53a4b7db2d5ad9d50c18);
    class_d35652a33204574eaebb5d765b57e622.def("threshold", method_pointer_3a5dbdb75bb15a6eb022495edcb3ad0f, "");
    class_d35652a33204574eaebb5d765b57e622.def("nonzero_pivots", method_pointer_34f956cbdffe5aaca198165271c07a38, "");
    class_d35652a33204574eaebb5d765b57e622.def("max_pivot", method_pointer_8e91bffdc7855ac387b2fb36ee407cb3, "");

}