#include "_ieigen.h"


namespace autowig
{
}


void wrapper_c90c4adb324757dc93d0d33537c49f08()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_497f24897cea5059b9af80b44e46ee6f)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_6a0baba13e155a4eb6f76194c3950f77)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >::colIndexByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_4d4204b2ce12582cafe7efdf501ba258)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_cf0d088b81935a77a1d41c4cdd71ba58)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >::coeffByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_4517fede67535a3bac82f8433a5087b2)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_2c9c5f69f72b54f3abfe351e687b86d0)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >::*method_pointer_a189ff4532b650f68b82ba3df7fb8c18)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >::operator();
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > > > class_c90c4adb324757dc93d0d33537c49f08("_DenseCoeffsBase_c90c4adb324757dc93d0d33537c49f08", "", boost::python::no_init);
    class_c90c4adb324757dc93d0d33537c49f08.def("row_index_by_outer_inner", method_pointer_497f24897cea5059b9af80b44e46ee6f, "");
    class_c90c4adb324757dc93d0d33537c49f08.def("col_index_by_outer_inner", method_pointer_6a0baba13e155a4eb6f76194c3950f77, "");
    class_c90c4adb324757dc93d0d33537c49f08.def("coeff", method_pointer_4d4204b2ce12582cafe7efdf501ba258, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c90c4adb324757dc93d0d33537c49f08.def("coeff_by_outer_inner", method_pointer_cf0d088b81935a77a1d41c4cdd71ba58, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c90c4adb324757dc93d0d33537c49f08.def("__call__", method_pointer_4517fede67535a3bac82f8433a5087b2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c90c4adb324757dc93d0d33537c49f08.def("coeff", method_pointer_2c9c5f69f72b54f3abfe351e687b86d0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c90c4adb324757dc93d0d33537c49f08.def("__call__", method_pointer_a189ff4532b650f68b82ba3df7fb8c18, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > > >();
    }

}