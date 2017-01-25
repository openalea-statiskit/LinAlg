#include "_ieigen.h"


namespace autowig
{
}


void wrapper_2268bfb3fa7754d2b858416e558f5d06()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< int, 4, 4, 0, 4, 4 >::*method_pointer_6ac6062290145852904c1371264518ec)() const = &::Eigen::Matrix< int, 4, 4, 0, 4, 4 >::innerStride;
    long int  (::Eigen::Matrix< int, 4, 4, 0, 4, 4 >::*method_pointer_bea5ee10dcd6508c857ab78bf34fba4c)() const = &::Eigen::Matrix< int, 4, 4, 0, 4, 4 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 >, autowig::HeldType< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > > > class_2268bfb3fa7754d2b858416e558f5d06("_Matrix_2268bfb3fa7754d2b858416e558f5d06", "", boost::python::no_init);
    class_2268bfb3fa7754d2b858416e558f5d06.def("inner_stride", method_pointer_6ac6062290145852904c1371264518ec, "");
    class_2268bfb3fa7754d2b858416e558f5d06.def("outer_stride", method_pointer_bea5ee10dcd6508c857ab78bf34fba4c, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 4, 4, 0, 4, 4 > > > >();
    }

}