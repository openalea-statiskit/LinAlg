#include "_ieigen.h"


namespace autowig
{
}


void wrapper_645255f0a0ae5bda82ea573c8fbe3e67()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_25ccf4b4079a5649abc0359f58f2b6a1)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_c7afa67696925baf9625d6190418d4a5)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_ab677a9b13e75fc6b139c77679666966)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_1c1da0655bf85599be8f5faef717529a)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::coeffByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_fbb37d2abb075864af380583de33c7ca)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_74f13b6b0bdc5c15b7feb8b27d6b752b)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_36583eeed15d511faf2f1a14aa7319d8)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::operator[];
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_781aa0655cd856fab245f1483c9d4bbf)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_94974f3468f25810b396988828fb874a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::x;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_cdfb25be35725fb78c4a24c0aebb96f7)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::y;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::*method_pointer_e026c440797059e088e1382e60a3d14d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >::z;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > > > class_645255f0a0ae5bda82ea573c8fbe3e67("_DenseCoeffsBase_645255f0a0ae5bda82ea573c8fbe3e67", "", boost::python::no_init);
    class_645255f0a0ae5bda82ea573c8fbe3e67.def("row_index_by_outer_inner", method_pointer_25ccf4b4079a5649abc0359f58f2b6a1, "");
    class_645255f0a0ae5bda82ea573c8fbe3e67.def("col_index_by_outer_inner", method_pointer_c7afa67696925baf9625d6190418d4a5, "");
    class_645255f0a0ae5bda82ea573c8fbe3e67.def("coeff", method_pointer_ab677a9b13e75fc6b139c77679666966, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_645255f0a0ae5bda82ea573c8fbe3e67.def("coeff_by_outer_inner", method_pointer_1c1da0655bf85599be8f5faef717529a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_645255f0a0ae5bda82ea573c8fbe3e67.def("__call__", method_pointer_fbb37d2abb075864af380583de33c7ca, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_645255f0a0ae5bda82ea573c8fbe3e67.def("coeff", method_pointer_74f13b6b0bdc5c15b7feb8b27d6b752b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_645255f0a0ae5bda82ea573c8fbe3e67.def("__getitem__", method_pointer_36583eeed15d511faf2f1a14aa7319d8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_645255f0a0ae5bda82ea573c8fbe3e67.def("__call__", method_pointer_781aa0655cd856fab245f1483c9d4bbf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_645255f0a0ae5bda82ea573c8fbe3e67.def("x", method_pointer_94974f3468f25810b396988828fb874a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_645255f0a0ae5bda82ea573c8fbe3e67.def("y", method_pointer_cdfb25be35725fb78c4a24c0aebb96f7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_645255f0a0ae5bda82ea573c8fbe3e67.def("z", method_pointer_e026c440797059e088e1382e60a3d14d, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > > >();
    }

}