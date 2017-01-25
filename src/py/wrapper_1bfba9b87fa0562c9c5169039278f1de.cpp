#include "_ieigen.h"


namespace autowig
{
}


void wrapper_1bfba9b87fa0562c9c5169039278f1de()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_8a512821088f5a318c73615bc5411ecf)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_5eaf9d69cfe55220897d073aee46fe93)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_7b644a964e535666827de41b25899e12)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_dc2e1c6704445cebbe5bf61530338ec6)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 >::*method_pointer_fe139f1a9f155431a7b9894193c49f7a)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > > > class_1bfba9b87fa0562c9c5169039278f1de("_DenseCoeffsBase_1bfba9b87fa0562c9c5169039278f1de", "", boost::python::no_init);
    class_1bfba9b87fa0562c9c5169039278f1de.def("inner_stride", method_pointer_8a512821088f5a318c73615bc5411ecf, "");
    class_1bfba9b87fa0562c9c5169039278f1de.def("outer_stride", method_pointer_5eaf9d69cfe55220897d073aee46fe93, "");
    class_1bfba9b87fa0562c9c5169039278f1de.def("stride", method_pointer_7b644a964e535666827de41b25899e12, "");
    class_1bfba9b87fa0562c9c5169039278f1de.def("row_stride", method_pointer_dc2e1c6704445cebbe5bf61530338ec6, "");
    class_1bfba9b87fa0562c9c5169039278f1de.def("col_stride", method_pointer_fe139f1a9f155431a7b9894193c49f7a, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 4, 0, 4, 4 >, 1 > > >();
    }

}