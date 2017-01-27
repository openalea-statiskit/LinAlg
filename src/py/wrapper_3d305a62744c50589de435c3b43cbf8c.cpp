#include "_ieigen.h"


namespace autowig
{
}


void wrapper_3d305a62744c50589de435c3b43cbf8c()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >::*method_pointer_00496fa82b415b7cb44df8bf70efa434)() const = &::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< float >, -1, 1, 0, -1, 1 >::*method_pointer_9387b33133b9510bb86d8495b96948c1)() const = &::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > > > class_3d305a62744c50589de435c3b43cbf8c("_Matrix_3d305a62744c50589de435c3b43cbf8c", "", boost::python::no_init);
    class_3d305a62744c50589de435c3b43cbf8c.def(boost::python::init<  >(""));
    class_3d305a62744c50589de435c3b43cbf8c.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_3d305a62744c50589de435c3b43cbf8c.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 >  const & >(""));
    class_3d305a62744c50589de435c3b43cbf8c.def("inner_stride", method_pointer_00496fa82b415b7cb44df8bf70efa434, "");
    class_3d305a62744c50589de435c3b43cbf8c.def("outer_stride", method_pointer_9387b33133b9510bb86d8495b96948c1, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, -1, 1, 0, -1, 1 > > > >();
    }

}