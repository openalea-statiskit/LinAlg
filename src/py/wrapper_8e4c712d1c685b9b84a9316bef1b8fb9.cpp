#include "_ieigen.h"


namespace autowig
{
}


void wrapper_8e4c712d1c685b9b84a9316bef1b8fb9()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< int, 1, 3, 1, 1, 3 >::*method_pointer_ebacb4f73b6655098cbe0d11c3221a9f)() const = &::Eigen::Matrix< int, 1, 3, 1, 1, 3 >::innerStride;
    long int  (::Eigen::Matrix< int, 1, 3, 1, 1, 3 >::*method_pointer_dfd52b3063ea56b5bd4d127c97707853)() const = &::Eigen::Matrix< int, 1, 3, 1, 1, 3 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 >, autowig::HeldType< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > > > class_8e4c712d1c685b9b84a9316bef1b8fb9("_Matrix_8e4c712d1c685b9b84a9316bef1b8fb9", "", boost::python::no_init);
    class_8e4c712d1c685b9b84a9316bef1b8fb9.def("inner_stride", method_pointer_ebacb4f73b6655098cbe0d11c3221a9f, "");
    class_8e4c712d1c685b9b84a9316bef1b8fb9.def("outer_stride", method_pointer_dfd52b3063ea56b5bd4d127c97707853, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 3, 1, 1, 3 > > > >();
    }

}