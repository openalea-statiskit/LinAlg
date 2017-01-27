#include "_ieigen.h"


namespace autowig
{
    void method_decorator_87e3d1dbd7885fcdb50e182126521c09(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_d360d666b2a256f9aeeb204a83c47624(struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > const & instance, class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_2346b9bdc512501a8319e820bc1ce4fa()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_87e3d1dbd7885fcdb50e182126521c09)() = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::derived;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_b70debafc8dd5b50a70b8f297e0f478e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::derived;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_d360d666b2a256f9aeeb204a83c47624)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_6f1d6f45b61c5ed3b760430861e0bf1c)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_fbe36ef81f31524a81c578bf0cd58c67)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_cd3c6c39604558449ce9471610e0c0e3)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::*method_pointer_d22f1848b0b75aeba1410165d5c8baa8)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 3, 1, 0, 3, 1 > > > > class_2346b9bdc512501a8319e820bc1ce4fa("_EigenBase_2346b9bdc512501a8319e820bc1ce4fa", "", boost::python::no_init);
    class_2346b9bdc512501a8319e820bc1ce4fa.def("derived", method_pointer_87e3d1dbd7885fcdb50e182126521c09, boost::python::return_internal_reference<>(), "");
    class_2346b9bdc512501a8319e820bc1ce4fa.def("derived", autowig::method_decorator_87e3d1dbd7885fcdb50e182126521c09);
    class_2346b9bdc512501a8319e820bc1ce4fa.def("derived", method_pointer_b70debafc8dd5b50a70b8f297e0f478e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2346b9bdc512501a8319e820bc1ce4fa.def("const_cast_derived", method_pointer_d360d666b2a256f9aeeb204a83c47624, boost::python::return_internal_reference<>(), "");
    class_2346b9bdc512501a8319e820bc1ce4fa.def("const_cast_derived", autowig::method_decorator_d360d666b2a256f9aeeb204a83c47624);
    class_2346b9bdc512501a8319e820bc1ce4fa.def("const_derived", method_pointer_6f1d6f45b61c5ed3b760430861e0bf1c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2346b9bdc512501a8319e820bc1ce4fa.def("rows", method_pointer_fbe36ef81f31524a81c578bf0cd58c67, "");
    class_2346b9bdc512501a8319e820bc1ce4fa.def("cols", method_pointer_cd3c6c39604558449ce9471610e0c0e3, "");
    class_2346b9bdc512501a8319e820bc1ce4fa.def("size", method_pointer_d22f1848b0b75aeba1410165d5c8baa8, "");

}