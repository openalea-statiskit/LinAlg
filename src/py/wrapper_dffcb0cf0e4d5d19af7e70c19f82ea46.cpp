#include "_ieigen.h"


namespace autowig
{
}


void wrapper_dffcb0cf0e4d5d19af7e70c19f82ea46()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< float, 4, 4, 0, 4, 4 >::*method_pointer_f9f4d7f0d529587c85ac68fbd8f2da23)() const = &::Eigen::Matrix< float, 4, 4, 0, 4, 4 >::innerStride;
    long int  (::Eigen::Matrix< float, 4, 4, 0, 4, 4 >::*method_pointer_e2cd8488a40854ff817664ffb10a9e76)() const = &::Eigen::Matrix< float, 4, 4, 0, 4, 4 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, autowig::HeldType< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > > class_dffcb0cf0e4d5d19af7e70c19f82ea46("_Matrix_dffcb0cf0e4d5d19af7e70c19f82ea46", "", boost::python::no_init);
    class_dffcb0cf0e4d5d19af7e70c19f82ea46.def(boost::python::init<  >(""));
    class_dffcb0cf0e4d5d19af7e70c19f82ea46.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_dffcb0cf0e4d5d19af7e70c19f82ea46.def(boost::python::init< float  const &, float  const &, float  const & >(""));
    class_dffcb0cf0e4d5d19af7e70c19f82ea46.def(boost::python::init< float  const &, float  const &, float  const &, float  const & >(""));
    class_dffcb0cf0e4d5d19af7e70c19f82ea46.def(boost::python::init< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & >(""));
    class_dffcb0cf0e4d5d19af7e70c19f82ea46.def("inner_stride", method_pointer_f9f4d7f0d529587c85ac68fbd8f2da23, "");
    class_dffcb0cf0e4d5d19af7e70c19f82ea46.def("outer_stride", method_pointer_e2cd8488a40854ff817664ffb10a9e76, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > >();
    }

}