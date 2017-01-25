#include "_ieigen.h"


namespace autowig
{
}


void wrapper_8a5e9c29df3354f9957f7d813c8afa2a()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_4633711527e851a682b069f469e962cc)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_99856c1506215ef190f84bc67a2a4ddb)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_368ee14bbe13514abedbc86a9e2e064f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_e25cffff910a557db4b21b71135fdb4d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 >::*method_pointer_578c37819a225c0c9742236d088fc1cb)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > > > class_8a5e9c29df3354f9957f7d813c8afa2a("_DenseCoeffsBase_8a5e9c29df3354f9957f7d813c8afa2a", "", boost::python::no_init);
    class_8a5e9c29df3354f9957f7d813c8afa2a.def("inner_stride", method_pointer_4633711527e851a682b069f469e962cc, "");
    class_8a5e9c29df3354f9957f7d813c8afa2a.def("outer_stride", method_pointer_99856c1506215ef190f84bc67a2a4ddb, "");
    class_8a5e9c29df3354f9957f7d813c8afa2a.def("stride", method_pointer_368ee14bbe13514abedbc86a9e2e064f, "");
    class_8a5e9c29df3354f9957f7d813c8afa2a.def("row_stride", method_pointer_e25cffff910a557db4b21b71135fdb4d, "");
    class_8a5e9c29df3354f9957f7d813c8afa2a.def("col_stride", method_pointer_578c37819a225c0c9742236d088fc1cb, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 1, 0, 2, 1 >, 1 > > >();
    }

}