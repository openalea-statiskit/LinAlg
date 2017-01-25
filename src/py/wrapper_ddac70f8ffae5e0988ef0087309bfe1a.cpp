#include "_ieigen.h"


namespace autowig
{
}


void wrapper_ddac70f8ffae5e0988ef0087309bfe1a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< float, 1, 4, 1, 1, 4 >::*method_pointer_08efc34c2e4d5e1f973d129dca570821)() const = &::Eigen::Matrix< float, 1, 4, 1, 1, 4 >::innerStride;
    long int  (::Eigen::Matrix< float, 1, 4, 1, 1, 4 >::*method_pointer_57cc6fb1933f51539667b4911bcd3250)() const = &::Eigen::Matrix< float, 1, 4, 1, 1, 4 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 >, autowig::HeldType< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > > > class_ddac70f8ffae5e0988ef0087309bfe1a("_Matrix_ddac70f8ffae5e0988ef0087309bfe1a", "", boost::python::no_init);
    class_ddac70f8ffae5e0988ef0087309bfe1a.def("inner_stride", method_pointer_08efc34c2e4d5e1f973d129dca570821, "");
    class_ddac70f8ffae5e0988ef0087309bfe1a.def("outer_stride", method_pointer_57cc6fb1933f51539667b4911bcd3250, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 4, 1, 1, 4 > > > >();
    }

}