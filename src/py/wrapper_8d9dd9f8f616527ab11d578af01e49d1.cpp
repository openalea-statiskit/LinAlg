#include "_ieigen.h"


namespace autowig
{
}


void wrapper_8d9dd9f8f616527ab11d578af01e49d1()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_92a739981d595642a6b55807e140ec48)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_b365e5780d5b59f5af4bfc318c941602)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_bab1e59bff48511190e41d54de85757f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_ba6db202d0635496b931e42a2b6b16f3)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 >::*method_pointer_a6aeb0f1c8ee55a69890140c591340b4)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > > > class_8d9dd9f8f616527ab11d578af01e49d1("_DenseCoeffsBase_8d9dd9f8f616527ab11d578af01e49d1", "", boost::python::no_init);
    class_8d9dd9f8f616527ab11d578af01e49d1.def("inner_stride", method_pointer_92a739981d595642a6b55807e140ec48, "");
    class_8d9dd9f8f616527ab11d578af01e49d1.def("outer_stride", method_pointer_b365e5780d5b59f5af4bfc318c941602, "");
    class_8d9dd9f8f616527ab11d578af01e49d1.def("stride", method_pointer_bab1e59bff48511190e41d54de85757f, "");
    class_8d9dd9f8f616527ab11d578af01e49d1.def("row_stride", method_pointer_ba6db202d0635496b931e42a2b6b16f3, "");
    class_8d9dd9f8f616527ab11d578af01e49d1.def("col_stride", method_pointer_a6aeb0f1c8ee55a69890140c591340b4, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 2, 2, 0, 2, 2 >, 1 > > >();
    }

}