#include "_ieigen.h"


namespace autowig
{
}


void wrapper_6f39f792219a52eea0bceb9313fc54b0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< int, 1, -1, 1, 1, -1 >::*method_pointer_799ace0fe22354a8b293e270881dc00c)() const = &::Eigen::Matrix< int, 1, -1, 1, 1, -1 >::innerStride;
    long int  (::Eigen::Matrix< int, 1, -1, 1, 1, -1 >::*method_pointer_9997b1418065517f8ea651ba1d8d43a7)() const = &::Eigen::Matrix< int, 1, -1, 1, 1, -1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 >, autowig::HeldType< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > > > class_6f39f792219a52eea0bceb9313fc54b0("_Matrix_6f39f792219a52eea0bceb9313fc54b0", "", boost::python::no_init);
    class_6f39f792219a52eea0bceb9313fc54b0.def("inner_stride", method_pointer_799ace0fe22354a8b293e270881dc00c, "");
    class_6f39f792219a52eea0bceb9313fc54b0.def("outer_stride", method_pointer_9997b1418065517f8ea651ba1d8d43a7, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, -1, 1, 1, -1 > > > >();
    }

}