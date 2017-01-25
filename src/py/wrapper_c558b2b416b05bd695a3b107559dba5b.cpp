#include "_ieigen.h"


namespace autowig
{
}


void wrapper_c558b2b416b05bd695a3b107559dba5b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_2ebf351fd252546aa4834c26a445e058)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_d8ac417f8cbb54f7896d8adfb1f88c48)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_0a611029dd585472a66125245a50b068)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_096e3301d58c553ea9e5e252855cb853)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 >::*method_pointer_9dbed600ac625b6786703c7efc33feaf)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > > > class_c558b2b416b05bd695a3b107559dba5b("_DenseCoeffsBase_c558b2b416b05bd695a3b107559dba5b", "", boost::python::no_init);
    class_c558b2b416b05bd695a3b107559dba5b.def("inner_stride", method_pointer_2ebf351fd252546aa4834c26a445e058, "");
    class_c558b2b416b05bd695a3b107559dba5b.def("outer_stride", method_pointer_d8ac417f8cbb54f7896d8adfb1f88c48, "");
    class_c558b2b416b05bd695a3b107559dba5b.def("stride", method_pointer_0a611029dd585472a66125245a50b068, "");
    class_c558b2b416b05bd695a3b107559dba5b.def("row_stride", method_pointer_096e3301d58c553ea9e5e252855cb853, "");
    class_c558b2b416b05bd695a3b107559dba5b.def("col_stride", method_pointer_9dbed600ac625b6786703c7efc33feaf, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >, 1 > > >();
    }

}