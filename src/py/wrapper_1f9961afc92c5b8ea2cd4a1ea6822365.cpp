#include "_ieigen.h"


namespace autowig
{
}


void wrapper_1f9961afc92c5b8ea2cd4a1ea6822365()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< int, 3, 3, 0, 3, 3 >::*method_pointer_b0d16f5d86595d52b87f201c1beff5f9)() const = &::Eigen::Matrix< int, 3, 3, 0, 3, 3 >::innerStride;
    long int  (::Eigen::Matrix< int, 3, 3, 0, 3, 3 >::*method_pointer_75c778ce68f553ae88157e355ca08597)() const = &::Eigen::Matrix< int, 3, 3, 0, 3, 3 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >, autowig::HeldType< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > > > class_1f9961afc92c5b8ea2cd4a1ea6822365("_Matrix_1f9961afc92c5b8ea2cd4a1ea6822365", "", boost::python::no_init);
    class_1f9961afc92c5b8ea2cd4a1ea6822365.def("inner_stride", method_pointer_b0d16f5d86595d52b87f201c1beff5f9, "");
    class_1f9961afc92c5b8ea2cd4a1ea6822365.def("outer_stride", method_pointer_75c778ce68f553ae88157e355ca08597, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > > >();
    }

}