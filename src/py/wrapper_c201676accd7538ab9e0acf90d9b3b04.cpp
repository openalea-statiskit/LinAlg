#include "_ieigen.h"


namespace autowig
{
}


void wrapper_c201676accd7538ab9e0acf90d9b3b04()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >::*method_pointer_b3c625c0ae8353a2b55b09aeb0ddc47c)() const = &::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< float >, 4, 4, 0, 4, 4 >::*method_pointer_f5a0c89d8b0c584ea01c911762f5404a)() const = &::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > > class_c201676accd7538ab9e0acf90d9b3b04("_Matrix_c201676accd7538ab9e0acf90d9b3b04", "", boost::python::no_init);
    class_c201676accd7538ab9e0acf90d9b3b04.def("inner_stride", method_pointer_b3c625c0ae8353a2b55b09aeb0ddc47c, "");
    class_c201676accd7538ab9e0acf90d9b3b04.def("outer_stride", method_pointer_f5a0c89d8b0c584ea01c911762f5404a, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 4, 4, 0, 4, 4 > > > >();
    }

}