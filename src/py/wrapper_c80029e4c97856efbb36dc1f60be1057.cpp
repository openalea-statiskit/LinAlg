#include "_ieigen.h"


namespace autowig
{
}


void wrapper_c80029e4c97856efbb36dc1f60be1057()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< int, 1, 2, 1, 1, 2 >::*method_pointer_36a47918a17151c399dda031463899be)() const = &::Eigen::Matrix< int, 1, 2, 1, 1, 2 >::innerStride;
    long int  (::Eigen::Matrix< int, 1, 2, 1, 1, 2 >::*method_pointer_b1a7360bd0d25838b3fd7792459fbf72)() const = &::Eigen::Matrix< int, 1, 2, 1, 1, 2 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, autowig::HeldType< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > > > class_c80029e4c97856efbb36dc1f60be1057("_Matrix_c80029e4c97856efbb36dc1f60be1057", "", boost::python::no_init);
    class_c80029e4c97856efbb36dc1f60be1057.def("inner_stride", method_pointer_36a47918a17151c399dda031463899be, "");
    class_c80029e4c97856efbb36dc1f60be1057.def("outer_stride", method_pointer_b1a7360bd0d25838b3fd7792459fbf72, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > > >();
    }

}