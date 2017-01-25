#include "_ieigen.h"


namespace autowig
{
}


void wrapper_b6e4c28089e55aba88b6aaabd484f07f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< int, -1, -1, 0, -1, -1 >::*method_pointer_e9b6cdc2be0658e68035d1a9023ead8d)() const = &::Eigen::Matrix< int, -1, -1, 0, -1, -1 >::innerStride;
    long int  (::Eigen::Matrix< int, -1, -1, 0, -1, -1 >::*method_pointer_76cee2cba0ce5127baaaaced8fbca1e7)() const = &::Eigen::Matrix< int, -1, -1, 0, -1, -1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 >, autowig::HeldType< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > > > class_b6e4c28089e55aba88b6aaabd484f07f("_Matrix_b6e4c28089e55aba88b6aaabd484f07f", "", boost::python::no_init);
    class_b6e4c28089e55aba88b6aaabd484f07f.def("inner_stride", method_pointer_e9b6cdc2be0658e68035d1a9023ead8d, "");
    class_b6e4c28089e55aba88b6aaabd484f07f.def("outer_stride", method_pointer_76cee2cba0ce5127baaaaced8fbca1e7, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, -1, -1, 0, -1, -1 > > > >();
    }

}