#include "_ieigen.h"


namespace autowig
{
}


void wrapper_8751170f9a0f5af2aae7944c4dfcf8e7()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< float, 1, 3, 1, 1, 3 >::*method_pointer_68dde02edd28521895e86c7e6886f9ed)() const = &::Eigen::Matrix< float, 1, 3, 1, 1, 3 >::innerStride;
    long int  (::Eigen::Matrix< float, 1, 3, 1, 1, 3 >::*method_pointer_ace750ec221a519cbaf1ebb8c0140f36)() const = &::Eigen::Matrix< float, 1, 3, 1, 1, 3 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >, autowig::HeldType< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > > > class_8751170f9a0f5af2aae7944c4dfcf8e7("_Matrix_8751170f9a0f5af2aae7944c4dfcf8e7", "", boost::python::no_init);
    class_8751170f9a0f5af2aae7944c4dfcf8e7.def(boost::python::init<  >(""));
    class_8751170f9a0f5af2aae7944c4dfcf8e7.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_8751170f9a0f5af2aae7944c4dfcf8e7.def(boost::python::init< float  const &, float  const &, float  const & >(""));
    class_8751170f9a0f5af2aae7944c4dfcf8e7.def(boost::python::init< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 >  const & >(""));
    class_8751170f9a0f5af2aae7944c4dfcf8e7.def("inner_stride", method_pointer_68dde02edd28521895e86c7e6886f9ed, "");
    class_8751170f9a0f5af2aae7944c4dfcf8e7.def("outer_stride", method_pointer_ace750ec221a519cbaf1ebb8c0140f36, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 1, 3, 1, 1, 3 > > > >();
    }

}