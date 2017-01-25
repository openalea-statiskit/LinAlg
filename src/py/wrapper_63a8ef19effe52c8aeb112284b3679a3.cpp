#include "_ieigen.h"


namespace autowig
{
}


void wrapper_63a8ef19effe52c8aeb112284b3679a3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_6e38f527923d5505b6a48afca4024340)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_7ff62366ef175d21a924f034d7c2141f)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::colIndexByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_aa866cde5c605065970418f5cfd3c2ff)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_8af11f57aeb558eb89577330975f29d4)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::coeffByOuterInner;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_334744dae53552bbbfedb00c254eb604)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_a353a02e35e550269c9940de2c5efb39)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::coeff;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_6d32caf49bf05ba398c329fcb78b86bd)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::operator[];
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_f1753cbd193c53c498ef7619439fb4ad)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::operator();
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_851b32099650591aa8eddc2de45b8065)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::x;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_4d71de8960115874a0b7c89a01e9e1bf)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::y;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_b8b59913cd685625a6a6604dbbde5949)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::z;
    struct ::std::complex< float >  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::*method_pointer_ea2ceb7b5c5b5fa88a7c8e4823196283)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > > > class_63a8ef19effe52c8aeb112284b3679a3("_DenseCoeffsBase_63a8ef19effe52c8aeb112284b3679a3", "", boost::python::no_init);
    class_63a8ef19effe52c8aeb112284b3679a3.def("row_index_by_outer_inner", method_pointer_6e38f527923d5505b6a48afca4024340, "");
    class_63a8ef19effe52c8aeb112284b3679a3.def("col_index_by_outer_inner", method_pointer_7ff62366ef175d21a924f034d7c2141f, "");
    class_63a8ef19effe52c8aeb112284b3679a3.def("coeff", method_pointer_aa866cde5c605065970418f5cfd3c2ff, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_63a8ef19effe52c8aeb112284b3679a3.def("coeff_by_outer_inner", method_pointer_8af11f57aeb558eb89577330975f29d4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_63a8ef19effe52c8aeb112284b3679a3.def("__call__", method_pointer_334744dae53552bbbfedb00c254eb604, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_63a8ef19effe52c8aeb112284b3679a3.def("coeff", method_pointer_a353a02e35e550269c9940de2c5efb39, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_63a8ef19effe52c8aeb112284b3679a3.def("__getitem__", method_pointer_6d32caf49bf05ba398c329fcb78b86bd, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_63a8ef19effe52c8aeb112284b3679a3.def("__call__", method_pointer_f1753cbd193c53c498ef7619439fb4ad, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_63a8ef19effe52c8aeb112284b3679a3.def("x", method_pointer_851b32099650591aa8eddc2de45b8065, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_63a8ef19effe52c8aeb112284b3679a3.def("y", method_pointer_4d71de8960115874a0b7c89a01e9e1bf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_63a8ef19effe52c8aeb112284b3679a3.def("z", method_pointer_b8b59913cd685625a6a6604dbbde5949, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_63a8ef19effe52c8aeb112284b3679a3.def("w", method_pointer_ea2ceb7b5c5b5fa88a7c8e4823196283, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > > >();
    }

}