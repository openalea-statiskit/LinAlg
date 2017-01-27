#include "_ieigen.h"


namespace autowig
{
}


void wrapper_7a35aa53c0295c1c88974f23b1102bbb()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< double, 3, 3, 0, 3, 3 >::*method_pointer_93aee601f88154a0934325733acd8236)() const = &::Eigen::Matrix< double, 3, 3, 0, 3, 3 >::innerStride;
    long int  (::Eigen::Matrix< double, 3, 3, 0, 3, 3 >::*method_pointer_8d99e40d2e2157d391860a7bc1e65b2b)() const = &::Eigen::Matrix< double, 3, 3, 0, 3, 3 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >, autowig::HeldType< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > > class_7a35aa53c0295c1c88974f23b1102bbb("_Matrix_7a35aa53c0295c1c88974f23b1102bbb", "", boost::python::no_init);
    class_7a35aa53c0295c1c88974f23b1102bbb.def(boost::python::init<  >(""));
    class_7a35aa53c0295c1c88974f23b1102bbb.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_7a35aa53c0295c1c88974f23b1102bbb.def(boost::python::init< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 >  const & >(""));
    class_7a35aa53c0295c1c88974f23b1102bbb.def("inner_stride", method_pointer_93aee601f88154a0934325733acd8236, "");
    class_7a35aa53c0295c1c88974f23b1102bbb.def("outer_stride", method_pointer_8d99e40d2e2157d391860a7bc1e65b2b, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, 3, 3, 0, 3, 3 > > > >();
    }

}