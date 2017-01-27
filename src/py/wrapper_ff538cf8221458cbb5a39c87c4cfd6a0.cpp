#include "_ieigen.h"


namespace autowig
{
}


void wrapper_ff538cf8221458cbb5a39c87c4cfd6a0()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >::*method_pointer_0904fed929f9559aa4ff0224a1e2e7e9)() const = &::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 >::*method_pointer_e83ab3723b95599cb90a49a046da2d3d)() const = &::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > > > class_ff538cf8221458cbb5a39c87c4cfd6a0("_Matrix_ff538cf8221458cbb5a39c87c4cfd6a0", "", boost::python::no_init);
    class_ff538cf8221458cbb5a39c87c4cfd6a0.def(boost::python::init<  >(""));
    class_ff538cf8221458cbb5a39c87c4cfd6a0.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_ff538cf8221458cbb5a39c87c4cfd6a0.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  const & >(""));
    class_ff538cf8221458cbb5a39c87c4cfd6a0.def("inner_stride", method_pointer_0904fed929f9559aa4ff0224a1e2e7e9, "");
    class_ff538cf8221458cbb5a39c87c4cfd6a0.def("outer_stride", method_pointer_e83ab3723b95599cb90a49a046da2d3d, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > > >();
    }

}