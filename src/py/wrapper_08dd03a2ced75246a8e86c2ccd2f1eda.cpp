#include "_ieigen.h"


namespace autowig
{
}


void wrapper_08dd03a2ced75246a8e86c2ccd2f1eda()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< int, 2, 2, 0, 2, 2 >::*method_pointer_9c69e1468ffe58bdaacd5ebdd97e8fe7)() const = &::Eigen::Matrix< int, 2, 2, 0, 2, 2 >::innerStride;
    long int  (::Eigen::Matrix< int, 2, 2, 0, 2, 2 >::*method_pointer_da72aeaf378d5759a18e51d233cc5c2f)() const = &::Eigen::Matrix< int, 2, 2, 0, 2, 2 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 >, autowig::HeldType< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > > > class_08dd03a2ced75246a8e86c2ccd2f1eda("_Matrix_08dd03a2ced75246a8e86c2ccd2f1eda", "", boost::python::no_init);
    class_08dd03a2ced75246a8e86c2ccd2f1eda.def("inner_stride", method_pointer_9c69e1468ffe58bdaacd5ebdd97e8fe7, "");
    class_08dd03a2ced75246a8e86c2ccd2f1eda.def("outer_stride", method_pointer_da72aeaf378d5759a18e51d233cc5c2f, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 2, 2, 0, 2, 2 > > > >();
    }

}