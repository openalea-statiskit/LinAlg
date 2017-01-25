#include "_ieigen.h"


namespace autowig
{
}


void wrapper_5dc0ac5a55ae5f9094c85373c18d7f2e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_ec04cb3892e25fae914768ea52183f72)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_b0847cd7076d5ae0ae995d7fca3290cf)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_a8a1201720cb5205941b2a866d2528f3)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_cd893ef6e7ae5ad58a2ad8fba87f4240)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::coeffByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_361ffa6c225a5ada9e0ced865b608430)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_f40e3e2d99b65a77bf5a62a5e47c01d3)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_285e6de3b1e55514ab7031c6ce5eb619)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::operator[];
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_1208473a97815254b29df66f8e31c2d0)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_8187a45cb6505f8ba0c1e3b0d25cf80f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::x;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_56e7360ddfdb5ab3890d3fe1780906de)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::y;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_177fa9a8e75a5eccb0194fa876df4c54)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::z;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_c9bef9a16f9b5dcf8366fabbbea0a6f8)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > > class_5dc0ac5a55ae5f9094c85373c18d7f2e("_DenseCoeffsBase_5dc0ac5a55ae5f9094c85373c18d7f2e", "", boost::python::no_init);
    class_5dc0ac5a55ae5f9094c85373c18d7f2e.def("row_index_by_outer_inner", method_pointer_ec04cb3892e25fae914768ea52183f72, "");
    class_5dc0ac5a55ae5f9094c85373c18d7f2e.def("col_index_by_outer_inner", method_pointer_b0847cd7076d5ae0ae995d7fca3290cf, "");
    class_5dc0ac5a55ae5f9094c85373c18d7f2e.def("coeff", method_pointer_a8a1201720cb5205941b2a866d2528f3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5dc0ac5a55ae5f9094c85373c18d7f2e.def("coeff_by_outer_inner", method_pointer_cd893ef6e7ae5ad58a2ad8fba87f4240, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5dc0ac5a55ae5f9094c85373c18d7f2e.def("__call__", method_pointer_361ffa6c225a5ada9e0ced865b608430, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5dc0ac5a55ae5f9094c85373c18d7f2e.def("coeff", method_pointer_f40e3e2d99b65a77bf5a62a5e47c01d3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5dc0ac5a55ae5f9094c85373c18d7f2e.def("__getitem__", method_pointer_285e6de3b1e55514ab7031c6ce5eb619, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5dc0ac5a55ae5f9094c85373c18d7f2e.def("__call__", method_pointer_1208473a97815254b29df66f8e31c2d0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5dc0ac5a55ae5f9094c85373c18d7f2e.def("x", method_pointer_8187a45cb6505f8ba0c1e3b0d25cf80f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5dc0ac5a55ae5f9094c85373c18d7f2e.def("y", method_pointer_56e7360ddfdb5ab3890d3fe1780906de, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5dc0ac5a55ae5f9094c85373c18d7f2e.def("z", method_pointer_177fa9a8e75a5eccb0194fa876df4c54, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5dc0ac5a55ae5f9094c85373c18d7f2e.def("w", method_pointer_c9bef9a16f9b5dcf8366fabbbea0a6f8, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 > > > >();
    }

}