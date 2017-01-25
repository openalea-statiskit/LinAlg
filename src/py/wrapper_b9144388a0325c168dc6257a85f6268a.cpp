#include "_ieigen.h"


namespace autowig
{
}


void wrapper_b9144388a0325c168dc6257a85f6268a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_128f1104dccc59b69b998d7a26b49ab8)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_a4a9c23a14ef5eec8b890c8ffdd10473)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::colIndexByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_5f83dac577255089897064c2fbf94df0)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_5106be8840b25cc0a606b318738092f4)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::coeffByOuterInner;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_39f0571831665c63a15c13b94fc74d71)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_9c0f5f14878a578fa3c6f777507ae651)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::coeff;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_4d8dd73a75945793b2a975d7144c9f41)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::operator[];
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_1d714d142f7353698895318a69a71c7c)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::operator();
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_4b2c4b990ab95a389d36398c9940af02)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::x;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_c0fd5ebf28df5e13adf462083eecac11)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::y;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_82e7fbb81dfc5cbe8007cfc5717b2686)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::z;
    double  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::*method_pointer_ee4dc999605858de9db519c4a2253477)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > > > class_b9144388a0325c168dc6257a85f6268a("_DenseCoeffsBase_b9144388a0325c168dc6257a85f6268a", "", boost::python::no_init);
    class_b9144388a0325c168dc6257a85f6268a.def("row_index_by_outer_inner", method_pointer_128f1104dccc59b69b998d7a26b49ab8, "");
    class_b9144388a0325c168dc6257a85f6268a.def("col_index_by_outer_inner", method_pointer_a4a9c23a14ef5eec8b890c8ffdd10473, "");
    class_b9144388a0325c168dc6257a85f6268a.def("coeff", method_pointer_5f83dac577255089897064c2fbf94df0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b9144388a0325c168dc6257a85f6268a.def("coeff_by_outer_inner", method_pointer_5106be8840b25cc0a606b318738092f4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b9144388a0325c168dc6257a85f6268a.def("__call__", method_pointer_39f0571831665c63a15c13b94fc74d71, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b9144388a0325c168dc6257a85f6268a.def("coeff", method_pointer_9c0f5f14878a578fa3c6f777507ae651, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b9144388a0325c168dc6257a85f6268a.def("__getitem__", method_pointer_4d8dd73a75945793b2a975d7144c9f41, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b9144388a0325c168dc6257a85f6268a.def("__call__", method_pointer_1d714d142f7353698895318a69a71c7c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b9144388a0325c168dc6257a85f6268a.def("x", method_pointer_4b2c4b990ab95a389d36398c9940af02, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b9144388a0325c168dc6257a85f6268a.def("y", method_pointer_c0fd5ebf28df5e13adf462083eecac11, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b9144388a0325c168dc6257a85f6268a.def("z", method_pointer_82e7fbb81dfc5cbe8007cfc5717b2686, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b9144388a0325c168dc6257a85f6268a.def("w", method_pointer_ee4dc999605858de9db519c4a2253477, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< double, 4, 1, 0, 4, 1 > > > >();
    }

}