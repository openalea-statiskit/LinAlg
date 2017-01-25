#include "_ieigen.h"


namespace autowig
{
}


void wrapper_af1325094f08585bb27f3c62900835cf()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_7a2d6ecc69a259cb9dc9b9f239ae090e)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_6788f2c97159546a99d98ec2ce009c01)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_077ae9d29a3859a696feb7307d12d637)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_b7fedf5b13545faeb3d6c807b54f3125)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 >::*method_pointer_39013117cea35986a05a301ef15ab835)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > > > class_af1325094f08585bb27f3c62900835cf("_DenseCoeffsBase_af1325094f08585bb27f3c62900835cf", "", boost::python::no_init);
    class_af1325094f08585bb27f3c62900835cf.def("inner_stride", method_pointer_7a2d6ecc69a259cb9dc9b9f239ae090e, "");
    class_af1325094f08585bb27f3c62900835cf.def("outer_stride", method_pointer_6788f2c97159546a99d98ec2ce009c01, "");
    class_af1325094f08585bb27f3c62900835cf.def("stride", method_pointer_077ae9d29a3859a696feb7307d12d637, "");
    class_af1325094f08585bb27f3c62900835cf.def("row_stride", method_pointer_b7fedf5b13545faeb3d6c807b54f3125, "");
    class_af1325094f08585bb27f3c62900835cf.def("col_stride", method_pointer_39013117cea35986a05a301ef15ab835, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, 1, 0, -1, 1 >, 1 > > >();
    }

}