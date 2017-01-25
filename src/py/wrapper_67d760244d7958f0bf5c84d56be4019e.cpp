#include "_ieigen.h"


namespace autowig
{
}


void wrapper_67d760244d7958f0bf5c84d56be4019e()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_4b2ddb6e795e561a9610275e4b53d87a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_f9e5cdeb19685124a4f1b577e8982809)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_81dd7d6f4199505fb564097c77510db1)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_f8fd284dd82f5e77b84d0f547f9e61a3)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 >::*method_pointer_3123e2a3ea485518a176ac8363a5f177)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > > > class_67d760244d7958f0bf5c84d56be4019e("_DenseCoeffsBase_67d760244d7958f0bf5c84d56be4019e", "", boost::python::no_init);
    class_67d760244d7958f0bf5c84d56be4019e.def("inner_stride", method_pointer_4b2ddb6e795e561a9610275e4b53d87a, "");
    class_67d760244d7958f0bf5c84d56be4019e.def("outer_stride", method_pointer_f9e5cdeb19685124a4f1b577e8982809, "");
    class_67d760244d7958f0bf5c84d56be4019e.def("stride", method_pointer_81dd7d6f4199505fb564097c77510db1, "");
    class_67d760244d7958f0bf5c84d56be4019e.def("row_stride", method_pointer_f8fd284dd82f5e77b84d0f547f9e61a3, "");
    class_67d760244d7958f0bf5c84d56be4019e.def("col_stride", method_pointer_3123e2a3ea485518a176ac8363a5f177, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, -1, 1, 1, -1 >, 1 > > >();
    }

}