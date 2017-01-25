#include "_ieigen.h"


namespace autowig
{
}


void wrapper_02118cc881ce5b27aa30642db3dd684e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >::*method_pointer_7018901aa0df5de1b8fb560143b8fede)() const = &::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< float >, 4, 1, 0, 4, 1 >::*method_pointer_a149ca33080658089be874e9f8f11d9d)() const = &::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > > > class_02118cc881ce5b27aa30642db3dd684e("_Matrix_02118cc881ce5b27aa30642db3dd684e", "", boost::python::no_init);
    class_02118cc881ce5b27aa30642db3dd684e.def("inner_stride", method_pointer_7018901aa0df5de1b8fb560143b8fede, "");
    class_02118cc881ce5b27aa30642db3dd684e.def("outer_stride", method_pointer_a149ca33080658089be874e9f8f11d9d, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 1, 0, 4, 1 > > > >();
    }

}