#include "_ieigen.h"


namespace autowig
{
}


void wrapper_3e74b0aa6bab57b699aeef6be1ac97fb()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< double, 1, 2, 1, 1, 2 >::*method_pointer_d04a180bc642556ea2d20ab744445cef)() const = &::Eigen::Matrix< double, 1, 2, 1, 1, 2 >::innerStride;
    long int  (::Eigen::Matrix< double, 1, 2, 1, 1, 2 >::*method_pointer_41d295029cff5d818b269fa7fddc3bb9)() const = &::Eigen::Matrix< double, 1, 2, 1, 1, 2 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, autowig::HeldType< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > > > class_3e74b0aa6bab57b699aeef6be1ac97fb("_Matrix_3e74b0aa6bab57b699aeef6be1ac97fb", "", boost::python::no_init);
    class_3e74b0aa6bab57b699aeef6be1ac97fb.def("inner_stride", method_pointer_d04a180bc642556ea2d20ab744445cef, "");
    class_3e74b0aa6bab57b699aeef6be1ac97fb.def("outer_stride", method_pointer_41d295029cff5d818b269fa7fddc3bb9, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 > > > >();
    }

}