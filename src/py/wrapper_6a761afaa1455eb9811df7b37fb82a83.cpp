#include "_ieigen.h"


namespace autowig
{
    void method_decorator_360ff31349795cef8befaebd228f7b6d(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)
    { instance.derived() = param_out; }
    void method_decorator_d44678f446605273a0a826b9d716da4f(struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > const & instance, class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & param_out)
    { instance.const_cast_derived() = param_out; }
}


void wrapper_6a761afaa1455eb9811df7b37fb82a83()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_360ff31349795cef8befaebd228f7b6d)() = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_b7aec837e4e95662876790736cac0fd8)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_d44678f446605273a0a826b9d716da4f)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::const_cast_derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 >  const & (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_2b7b137c762a5093a552fc92de06ebbb)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::const_derived;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_a004ac93abdb54109c40812b13249881)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::rows;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_fc068644c6a05fbbbb89c118fd845173)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::cols;
    long int  (::Eigen::EigenBase< ::Eigen::Matrix< ::std::complex< float >, 2, 1, 0, 2, 1 > >::*method_pointer_db3f755c38a4539c80fcb9c12bd93080)() const = &::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >::size;
    boost::python::class_< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 1, 0, 2, 1 > > > > class_6a761afaa1455eb9811df7b37fb82a83("_EigenBase_6a761afaa1455eb9811df7b37fb82a83", "", boost::python::no_init);
    class_6a761afaa1455eb9811df7b37fb82a83.def("derived", method_pointer_360ff31349795cef8befaebd228f7b6d, boost::python::return_internal_reference<>(), "");
    class_6a761afaa1455eb9811df7b37fb82a83.def("derived", autowig::method_decorator_360ff31349795cef8befaebd228f7b6d);
    class_6a761afaa1455eb9811df7b37fb82a83.def("derived", method_pointer_b7aec837e4e95662876790736cac0fd8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6a761afaa1455eb9811df7b37fb82a83.def("const_cast_derived", method_pointer_d44678f446605273a0a826b9d716da4f, boost::python::return_internal_reference<>(), "");
    class_6a761afaa1455eb9811df7b37fb82a83.def("const_cast_derived", autowig::method_decorator_d44678f446605273a0a826b9d716da4f);
    class_6a761afaa1455eb9811df7b37fb82a83.def("const_derived", method_pointer_2b7b137c762a5093a552fc92de06ebbb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6a761afaa1455eb9811df7b37fb82a83.def("rows", method_pointer_a004ac93abdb54109c40812b13249881, "");
    class_6a761afaa1455eb9811df7b37fb82a83.def("cols", method_pointer_fc068644c6a05fbbbb89c118fd845173, "");
    class_6a761afaa1455eb9811df7b37fb82a83.def("size", method_pointer_db3f755c38a4539c80fcb9c12bd93080, "");

}