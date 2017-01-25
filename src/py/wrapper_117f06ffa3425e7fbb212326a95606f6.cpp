#include "_ieigen.h"


namespace autowig
{
}


void wrapper_117f06ffa3425e7fbb212326a95606f6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< float, 2, 1, 0, 2, 1 >::*method_pointer_173203c349595e37bf158e1b97adba6b)() const = &::Eigen::Matrix< float, 2, 1, 0, 2, 1 >::innerStride;
    long int  (::Eigen::Matrix< float, 2, 1, 0, 2, 1 >::*method_pointer_0d0518ecbd1b535fb527af8a6840c2d4)() const = &::Eigen::Matrix< float, 2, 1, 0, 2, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >, autowig::HeldType< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > > > class_117f06ffa3425e7fbb212326a95606f6("_Matrix_117f06ffa3425e7fbb212326a95606f6", "", boost::python::no_init);
    class_117f06ffa3425e7fbb212326a95606f6.def("inner_stride", method_pointer_173203c349595e37bf158e1b97adba6b, "");
    class_117f06ffa3425e7fbb212326a95606f6.def("outer_stride", method_pointer_0d0518ecbd1b535fb527af8a6840c2d4, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 > > > >();
    }

}