#include "_ieigen.h"


namespace autowig
{
}


void wrapper_8b216a34b4d5524c9369c5da39fe0043()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< double, 2, 1, 0, 2, 1 >::*method_pointer_0a9893f07fc4513b8490a70cf3151e47)() const = &::Eigen::Matrix< double, 2, 1, 0, 2, 1 >::innerStride;
    long int  (::Eigen::Matrix< double, 2, 1, 0, 2, 1 >::*method_pointer_49ddd9cf7f2653fb95810537f14e7714)() const = &::Eigen::Matrix< double, 2, 1, 0, 2, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 >, autowig::HeldType< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > > > class_8b216a34b4d5524c9369c5da39fe0043("_Matrix_8b216a34b4d5524c9369c5da39fe0043", "", boost::python::no_init);
    class_8b216a34b4d5524c9369c5da39fe0043.def("inner_stride", method_pointer_0a9893f07fc4513b8490a70cf3151e47, "");
    class_8b216a34b4d5524c9369c5da39fe0043.def("outer_stride", method_pointer_49ddd9cf7f2653fb95810537f14e7714, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 2, 1, 0, 2, 1 > > > >();
    }

}