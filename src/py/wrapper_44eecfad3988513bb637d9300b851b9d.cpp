#include "_ieigen.h"


namespace autowig
{
    void method_decorator_1724eb154d8656b685c051b8df124f1b(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > & instance, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_5ac995aba4c15212934d1e1d5f547d09(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > const & instance, class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & param_out)     { instance.const_cast_derived() = param_out; }
}


void wrapper_44eecfad3988513bb637d9300b851b9d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_1724eb154d8656b685c051b8df124f1b)() = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::derived;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_44c874c5af4f5c1ea91e7f09021566ff)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::derived;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_5ac995aba4c15212934d1e1d5f547d09)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::const_cast_derived;
    class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_894dd9ff6f2f5341b78f9c96907523f2)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_7402c2893eaa53ce8de491d79802753b)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_06cfd0d5df145874861db559aec85d21)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::*method_pointer_f05e62ff364d53efb9d52baffe65f619)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > > > class_44eecfad3988513bb637d9300b851b9d("_EigenBase_44eecfad3988513bb637d9300b851b9d", "", boost::python::no_init);
    class_44eecfad3988513bb637d9300b851b9d.def("derived", method_pointer_1724eb154d8656b685c051b8df124f1b, boost::python::return_internal_reference<>(), "");
    class_44eecfad3988513bb637d9300b851b9d.def("derived", autowig::method_decorator_1724eb154d8656b685c051b8df124f1b);
    class_44eecfad3988513bb637d9300b851b9d.def("derived", method_pointer_44c874c5af4f5c1ea91e7f09021566ff, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_44eecfad3988513bb637d9300b851b9d.def("const_cast_derived", method_pointer_5ac995aba4c15212934d1e1d5f547d09, boost::python::return_internal_reference<>(), "");
    class_44eecfad3988513bb637d9300b851b9d.def("const_cast_derived", autowig::method_decorator_5ac995aba4c15212934d1e1d5f547d09);
    class_44eecfad3988513bb637d9300b851b9d.def("const_derived", method_pointer_894dd9ff6f2f5341b78f9c96907523f2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_44eecfad3988513bb637d9300b851b9d.def("rows", method_pointer_7402c2893eaa53ce8de491d79802753b, "");
    class_44eecfad3988513bb637d9300b851b9d.def("cols", method_pointer_06cfd0d5df145874861db559aec85d21, "");
    class_44eecfad3988513bb637d9300b851b9d.def("size", method_pointer_f05e62ff364d53efb9d52baffe65f619, "");

}