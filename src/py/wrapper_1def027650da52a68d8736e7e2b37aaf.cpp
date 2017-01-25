#include "_ieigen.h"


namespace autowig
{
}


void wrapper_1def027650da52a68d8736e7e2b37aaf()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >::*method_pointer_8c6df23ec1965709925c00f5110f4697)() const = &::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >::innerStride;
    long int  (::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >::*method_pointer_055e76b9a1c05fb2b4caaf1d193cb273)() const = &::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >::outerStride;
    boost::python::class_< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >, boost::python::bases< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > > > class_1def027650da52a68d8736e7e2b37aaf("_Matrix_1def027650da52a68d8736e7e2b37aaf", "", boost::python::no_init);
    class_1def027650da52a68d8736e7e2b37aaf.def("inner_stride", method_pointer_8c6df23ec1965709925c00f5110f4697, "");
    class_1def027650da52a68d8736e7e2b37aaf.def("outer_stride", method_pointer_055e76b9a1c05fb2b4caaf1d193cb273, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 > > > >();
    }

}