#include "_ieigen.h"


namespace autowig
{
    void method_decorator_ac68d06530a758e8a8373501a4adef3b(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > & instance, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_90013edb4c1d50f1b13ea37c3d8e9e2f(struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > const & instance, class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_a30e2628fb0e5181b6a95bae0e28bf96()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_ac68d06530a758e8a8373501a4adef3b)() = &::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::derived;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_7c692183a2c55976b20675c485425d58)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::derived;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_90013edb4c1d50f1b13ea37c3d8e9e2f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_035d23b41f0651019b5b84c1710eaa90)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_00e2c2e9ddab50d3b301ccc4f6279279)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_1f529d0619ac504283a2703b8c481c55)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::*method_pointer_d5762e407f8b57398935ecae6b39cfa2)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > > > class_a30e2628fb0e5181b6a95bae0e28bf96("_EigenBase_a30e2628fb0e5181b6a95bae0e28bf96", "", boost::python::no_init);
    class_a30e2628fb0e5181b6a95bae0e28bf96.def("derived", method_pointer_ac68d06530a758e8a8373501a4adef3b, boost::python::return_internal_reference<>(), "");
    class_a30e2628fb0e5181b6a95bae0e28bf96.def("derived", autowig::method_decorator_ac68d06530a758e8a8373501a4adef3b);
    class_a30e2628fb0e5181b6a95bae0e28bf96.def("derived", method_pointer_7c692183a2c55976b20675c485425d58, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a30e2628fb0e5181b6a95bae0e28bf96.def("const_cast_derived", method_pointer_90013edb4c1d50f1b13ea37c3d8e9e2f, boost::python::return_internal_reference<>(), "");
    class_a30e2628fb0e5181b6a95bae0e28bf96.def("const_cast_derived", autowig::method_decorator_90013edb4c1d50f1b13ea37c3d8e9e2f);
    class_a30e2628fb0e5181b6a95bae0e28bf96.def("const_derived", method_pointer_035d23b41f0651019b5b84c1710eaa90, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a30e2628fb0e5181b6a95bae0e28bf96.def("rows", method_pointer_00e2c2e9ddab50d3b301ccc4f6279279, "");
    class_a30e2628fb0e5181b6a95bae0e28bf96.def("cols", method_pointer_1f529d0619ac504283a2703b8c481c55, "");
    class_a30e2628fb0e5181b6a95bae0e28bf96.def("size", method_pointer_d5762e407f8b57398935ecae6b39cfa2, "");

}