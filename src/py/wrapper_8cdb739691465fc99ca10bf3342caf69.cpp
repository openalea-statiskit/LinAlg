#include "_ieigen.h"


namespace autowig
{
}


void wrapper_8cdb739691465fc99ca10bf3342caf69()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >::*method_pointer_839b0e502bb55d9dabacc5fdba0f99ad)() const = &::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >::*method_pointer_1f93d3be107e58b6a3ccdbcf3ec24465)() const = &::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > > > class_8cdb739691465fc99ca10bf3342caf69("_Matrix_8cdb739691465fc99ca10bf3342caf69", "", boost::python::no_init);
    class_8cdb739691465fc99ca10bf3342caf69.def(boost::python::init<  >(""));
    class_8cdb739691465fc99ca10bf3342caf69.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_8cdb739691465fc99ca10bf3342caf69.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >  const & >(""));
    class_8cdb739691465fc99ca10bf3342caf69.def("inner_stride", method_pointer_839b0e502bb55d9dabacc5fdba0f99ad, "");
    class_8cdb739691465fc99ca10bf3342caf69.def("outer_stride", method_pointer_1f93d3be107e58b6a3ccdbcf3ec24465, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 > > > >();
    }

}