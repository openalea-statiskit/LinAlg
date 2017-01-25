#include "_ieigen.h"


namespace autowig
{
    void method_decorator_6208986b6a2c58a9943b9ff98c676aef(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_74e4dbb513cf58fa8dc465f99341c85c(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > const & instance, class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_4b1fc2d4f8175e709e28b9b33ddd095d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_6208986b6a2c58a9943b9ff98c676aef)() = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::derived;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_69adf679f5875feba5857f7f5c62f7a0)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::derived;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_74e4dbb513cf58fa8dc465f99341c85c)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_93405f21712d5912a88b6b3b90d36b97)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_adb76a3213f057918651066b3cbf9cb8)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_6c69f7e806135a0b99f2e686e99c0ea8)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::*method_pointer_c6e3c04b43b857dc8cbf062005829a4e)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 4, 1, 0, 4, 1 > > > > class_4b1fc2d4f8175e709e28b9b33ddd095d("_EigenBase_4b1fc2d4f8175e709e28b9b33ddd095d", "", boost::python::no_init);
    class_4b1fc2d4f8175e709e28b9b33ddd095d.def("derived", method_pointer_6208986b6a2c58a9943b9ff98c676aef, boost::python::return_internal_reference<>(), "");
    class_4b1fc2d4f8175e709e28b9b33ddd095d.def("derived", autowig::method_decorator_6208986b6a2c58a9943b9ff98c676aef);
    class_4b1fc2d4f8175e709e28b9b33ddd095d.def("derived", method_pointer_69adf679f5875feba5857f7f5c62f7a0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4b1fc2d4f8175e709e28b9b33ddd095d.def("const_cast_derived", method_pointer_74e4dbb513cf58fa8dc465f99341c85c, boost::python::return_internal_reference<>(), "");
    class_4b1fc2d4f8175e709e28b9b33ddd095d.def("const_cast_derived", autowig::method_decorator_74e4dbb513cf58fa8dc465f99341c85c);
    class_4b1fc2d4f8175e709e28b9b33ddd095d.def("const_derived", method_pointer_93405f21712d5912a88b6b3b90d36b97, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4b1fc2d4f8175e709e28b9b33ddd095d.def("rows", method_pointer_adb76a3213f057918651066b3cbf9cb8, "");
    class_4b1fc2d4f8175e709e28b9b33ddd095d.def("cols", method_pointer_6c69f7e806135a0b99f2e686e99c0ea8, "");
    class_4b1fc2d4f8175e709e28b9b33ddd095d.def("size", method_pointer_c6e3c04b43b857dc8cbf062005829a4e, "");

}