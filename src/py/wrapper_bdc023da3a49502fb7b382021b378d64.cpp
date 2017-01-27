#include "_ieigen.h"


namespace autowig
{
}


void wrapper_bdc023da3a49502fb7b382021b378d64()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_e265d50fee0e5995a078446a72165cf2)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_90ddb598bfa05b378310e0f51dde823b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_8eb20fea2bb7569b9c73e9c85a43fce5)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_7badc474dfbd55e5abc3c894fde1e8a7)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::coeffByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_dc8959136da457afa2a0f71ca61ac802)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_5871118c3ef85a6c9cffe6ceeb05a7a3)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_de8dbc1fedef5819bc21f132776738cd)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::operator[];
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_d541c30e4e0e53f49ea815396ce9d775)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_bdf96dadc6265974b93c85aaf4bac9f8)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::x;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::*method_pointer_d1f44cd2f2905f34a711c57c7c052f5a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >::y;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > > > class_bdc023da3a49502fb7b382021b378d64("_DenseCoeffsBase_bdc023da3a49502fb7b382021b378d64", "", boost::python::no_init);
    class_bdc023da3a49502fb7b382021b378d64.def("row_index_by_outer_inner", method_pointer_e265d50fee0e5995a078446a72165cf2, "");
    class_bdc023da3a49502fb7b382021b378d64.def("col_index_by_outer_inner", method_pointer_90ddb598bfa05b378310e0f51dde823b, "");
    class_bdc023da3a49502fb7b382021b378d64.def("coeff", method_pointer_8eb20fea2bb7569b9c73e9c85a43fce5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bdc023da3a49502fb7b382021b378d64.def("coeff_by_outer_inner", method_pointer_7badc474dfbd55e5abc3c894fde1e8a7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bdc023da3a49502fb7b382021b378d64.def("__call__", method_pointer_dc8959136da457afa2a0f71ca61ac802, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bdc023da3a49502fb7b382021b378d64.def("coeff", method_pointer_5871118c3ef85a6c9cffe6ceeb05a7a3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bdc023da3a49502fb7b382021b378d64.def("__getitem__", method_pointer_de8dbc1fedef5819bc21f132776738cd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bdc023da3a49502fb7b382021b378d64.def("__call__", method_pointer_d541c30e4e0e53f49ea815396ce9d775, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bdc023da3a49502fb7b382021b378d64.def("x", method_pointer_bdf96dadc6265974b93c85aaf4bac9f8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_bdc023da3a49502fb7b382021b378d64.def("y", method_pointer_d1f44cd2f2905f34a711c57c7c052f5a, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > > >();
    }

}