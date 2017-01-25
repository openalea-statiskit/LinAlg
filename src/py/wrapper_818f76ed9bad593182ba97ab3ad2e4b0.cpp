#include "_ieigen.h"


namespace autowig
{
}


void wrapper_818f76ed9bad593182ba97ab3ad2e4b0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_57a18df81b265c94b49e7641ae302458)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_c6349aa5434d55d7accb2e3162f12160)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_1b105e9bfd0f54159f600cdcb869dc9d)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_3e8bf788a2b75270940b04cd369c3878)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::coeffByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_f5503974b1aa516dbd2d7962e59820f6)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_7fd3263b8765573a8fc514e1904c29c4)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_0e5e630e211b5259955111e597ab3f7b)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::operator[];
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_dfb19d82543f5ce3811d4db9e0226438)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_9557fdebc5cd59ca87eff0d6dc525a6b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::x;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_a68c453d4903564187a2eacfb6633615)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::y;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_29a2baa0fcd359a7aa9cd6daee7abc6a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::z;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_94d47fd8a10f5622bc3cd68bad78376b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > > > class_818f76ed9bad593182ba97ab3ad2e4b0("_DenseCoeffsBase_818f76ed9bad593182ba97ab3ad2e4b0", "", boost::python::no_init);
    class_818f76ed9bad593182ba97ab3ad2e4b0.def("row_index_by_outer_inner", method_pointer_57a18df81b265c94b49e7641ae302458, "");
    class_818f76ed9bad593182ba97ab3ad2e4b0.def("col_index_by_outer_inner", method_pointer_c6349aa5434d55d7accb2e3162f12160, "");
    class_818f76ed9bad593182ba97ab3ad2e4b0.def("coeff", method_pointer_1b105e9bfd0f54159f600cdcb869dc9d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_818f76ed9bad593182ba97ab3ad2e4b0.def("coeff_by_outer_inner", method_pointer_3e8bf788a2b75270940b04cd369c3878, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_818f76ed9bad593182ba97ab3ad2e4b0.def("__call__", method_pointer_f5503974b1aa516dbd2d7962e59820f6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_818f76ed9bad593182ba97ab3ad2e4b0.def("coeff", method_pointer_7fd3263b8765573a8fc514e1904c29c4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_818f76ed9bad593182ba97ab3ad2e4b0.def("__getitem__", method_pointer_0e5e630e211b5259955111e597ab3f7b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_818f76ed9bad593182ba97ab3ad2e4b0.def("__call__", method_pointer_dfb19d82543f5ce3811d4db9e0226438, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_818f76ed9bad593182ba97ab3ad2e4b0.def("x", method_pointer_9557fdebc5cd59ca87eff0d6dc525a6b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_818f76ed9bad593182ba97ab3ad2e4b0.def("y", method_pointer_a68c453d4903564187a2eacfb6633615, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_818f76ed9bad593182ba97ab3ad2e4b0.def("z", method_pointer_29a2baa0fcd359a7aa9cd6daee7abc6a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_818f76ed9bad593182ba97ab3ad2e4b0.def("w", method_pointer_94d47fd8a10f5622bc3cd68bad78376b, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > > >();
    }

}