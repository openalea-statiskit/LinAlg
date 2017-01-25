#include "_ieigen.h"


namespace autowig
{
}


void wrapper_2064424bfae750bcb34febafdbd835e6()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_8abc86aaa3375cce8360b06fd826e8c4)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_16e4c03201305aa3bd609a324c8ce980)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_c040f6b0f40759c6b6b573184b0120ab)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_40a5409e60d5553ba017459e1fb97b93)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 >::*method_pointer_d29b1d9330eb5cada03619567849f902)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > > > class_2064424bfae750bcb34febafdbd835e6("_DenseCoeffsBase_2064424bfae750bcb34febafdbd835e6", "", boost::python::no_init);
    class_2064424bfae750bcb34febafdbd835e6.def("inner_stride", method_pointer_8abc86aaa3375cce8360b06fd826e8c4, "");
    class_2064424bfae750bcb34febafdbd835e6.def("outer_stride", method_pointer_16e4c03201305aa3bd609a324c8ce980, "");
    class_2064424bfae750bcb34febafdbd835e6.def("stride", method_pointer_c040f6b0f40759c6b6b573184b0120ab, "");
    class_2064424bfae750bcb34febafdbd835e6.def("row_stride", method_pointer_40a5409e60d5553ba017459e1fb97b93, "");
    class_2064424bfae750bcb34febafdbd835e6.def("col_stride", method_pointer_d29b1d9330eb5cada03619567849f902, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< struct ::std::complex< double >, -1, -1, 0, -1, -1 >, 1 > > >();
    }

}