#include "_ieigen.h"


namespace autowig
{
}


void wrapper_3de421ed9e655963ba1d69c2fb669328()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_e843432d44ab540cb46afaa6f3c21070)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_06eec5b763995708a1856a5494c5bb85)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >::colIndexByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_99c122a686b25ace9915657c4350ecc8)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_04f47f3b73055218a8a2bb92beee24a8)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >::coeffByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_dd3c41e9e38e5b46a9ca6767de6fef01)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_14e8dfa857ad5e56918088cd6d63b69e)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >::*method_pointer_5b776b5a4d655e2bbb97247efc28cf6d)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >::operator();
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > > class_3de421ed9e655963ba1d69c2fb669328("_DenseCoeffsBase_3de421ed9e655963ba1d69c2fb669328", "", boost::python::no_init);
    class_3de421ed9e655963ba1d69c2fb669328.def("row_index_by_outer_inner", method_pointer_e843432d44ab540cb46afaa6f3c21070, "");
    class_3de421ed9e655963ba1d69c2fb669328.def("col_index_by_outer_inner", method_pointer_06eec5b763995708a1856a5494c5bb85, "");
    class_3de421ed9e655963ba1d69c2fb669328.def("coeff", method_pointer_99c122a686b25ace9915657c4350ecc8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3de421ed9e655963ba1d69c2fb669328.def("coeff_by_outer_inner", method_pointer_04f47f3b73055218a8a2bb92beee24a8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3de421ed9e655963ba1d69c2fb669328.def("__call__", method_pointer_dd3c41e9e38e5b46a9ca6767de6fef01, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3de421ed9e655963ba1d69c2fb669328.def("coeff", method_pointer_14e8dfa857ad5e56918088cd6d63b69e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_3de421ed9e655963ba1d69c2fb669328.def("__call__", method_pointer_5b776b5a4d655e2bbb97247efc28cf6d, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 2, 2, 0, 2, 2 > > > >();
    }

}