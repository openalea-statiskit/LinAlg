#include "_ieigen.h"


namespace autowig
{
}


void wrapper_2f3719ffdc245a03b66d1ef28152e9ee()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< float, 1, 2, 1, 1, 2 >::*method_pointer_9a4a18ec60005fd7aa626fe3f73982de)() const = &::Eigen::Matrix< float, 1, 2, 1, 1, 2 >::innerStride;
    long int  (::Eigen::Matrix< float, 1, 2, 1, 1, 2 >::*method_pointer_2a90c3b049165b759b6a9a8e3f5b4827)() const = &::Eigen::Matrix< float, 1, 2, 1, 1, 2 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 >, autowig::HeldType< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > > > class_2f3719ffdc245a03b66d1ef28152e9ee("_Matrix_2f3719ffdc245a03b66d1ef28152e9ee", "", boost::python::no_init);
    class_2f3719ffdc245a03b66d1ef28152e9ee.def("inner_stride", method_pointer_9a4a18ec60005fd7aa626fe3f73982de, "");
    class_2f3719ffdc245a03b66d1ef28152e9ee.def("outer_stride", method_pointer_2a90c3b049165b759b6a9a8e3f5b4827, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 2, 1, 1, 2 > > > >();
    }

}