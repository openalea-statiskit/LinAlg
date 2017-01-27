#include "_ieigen.h"


namespace autowig
{
}


void wrapper_5587202d9c0151d7a60ae1c8cb941d1c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_7da7a4da74625785ba607a63aeb8cd6b)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_f7a17c4f3615503a8b59eec0b0706cd9)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_e42d326a583b509e8ccbdea4cdbaca95)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_2533a13223bd59149ef675ff726fd1e5)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >::coeffByOuterInner;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_d9c7b7f5713950e998c42cb38193f2c6)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >::operator();
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_eeffb1f2ac8c51869a36b6e2ce71593f)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >::coeff;
    struct ::std::complex< double >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_50fb8664042a58c3a483a9e44deb724c)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >::operator();
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > > class_5587202d9c0151d7a60ae1c8cb941d1c("_DenseCoeffsBase_5587202d9c0151d7a60ae1c8cb941d1c", "", boost::python::no_init);
    class_5587202d9c0151d7a60ae1c8cb941d1c.def("row_index_by_outer_inner", method_pointer_7da7a4da74625785ba607a63aeb8cd6b, "");
    class_5587202d9c0151d7a60ae1c8cb941d1c.def("col_index_by_outer_inner", method_pointer_f7a17c4f3615503a8b59eec0b0706cd9, "");
    class_5587202d9c0151d7a60ae1c8cb941d1c.def("coeff", method_pointer_e42d326a583b509e8ccbdea4cdbaca95, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5587202d9c0151d7a60ae1c8cb941d1c.def("coeff_by_outer_inner", method_pointer_2533a13223bd59149ef675ff726fd1e5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5587202d9c0151d7a60ae1c8cb941d1c.def("__call__", method_pointer_d9c7b7f5713950e998c42cb38193f2c6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5587202d9c0151d7a60ae1c8cb941d1c.def("coeff", method_pointer_eeffb1f2ac8c51869a36b6e2ce71593f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5587202d9c0151d7a60ae1c8cb941d1c.def("__call__", method_pointer_50fb8664042a58c3a483a9e44deb724c, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< double >, 3, 3, 0, 3, 3 > > > >();
    }

}