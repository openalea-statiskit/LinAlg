#include "_ieigen.h"


namespace autowig
{
}


void wrapper_b36d6cc0c54a5dcdad6e87f996136d65()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >::*method_pointer_2b0d5cd885ef545db0157e4226aa6f54)() const = &::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< float >, 1, 3, 1, 1, 3 >::*method_pointer_2691639749155b3d85ca8d47b916cce1)() const = &::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > > > class_b36d6cc0c54a5dcdad6e87f996136d65("_Matrix_b36d6cc0c54a5dcdad6e87f996136d65", "", boost::python::no_init);
    class_b36d6cc0c54a5dcdad6e87f996136d65.def(boost::python::init<  >(""));
    class_b36d6cc0c54a5dcdad6e87f996136d65.def(boost::python::init< struct ::Eigen::internal::constructor_without_unaligned_array_assert  >(""));
    class_b36d6cc0c54a5dcdad6e87f996136d65.def(boost::python::init< struct ::std::complex< float >  const &, struct ::std::complex< float >  const &, struct ::std::complex< float >  const & >(""));
    class_b36d6cc0c54a5dcdad6e87f996136d65.def(boost::python::init< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 >  const & >(""));
    class_b36d6cc0c54a5dcdad6e87f996136d65.def("inner_stride", method_pointer_2b0d5cd885ef545db0157e4226aa6f54, "");
    class_b36d6cc0c54a5dcdad6e87f996136d65.def("outer_stride", method_pointer_2691639749155b3d85ca8d47b916cce1, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, 3, 1, 1, 3 > > > >();
    }

}