#include "_ieigen.h"


namespace autowig
{
}


void wrapper_84d588e24380505f829f7bde30738271()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_9e3297c3702d50f3931e9b342c27b5b3)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 >::innerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_7a26db60c82f51fd99a277093f8b16d9)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 >::outerStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_d49d6cf36bcb54779f770ec157e0952b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 >::stride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_d5cfe3c3f6bc5a2ba54a49d224f876d5)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 >::rowStride;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 >::*method_pointer_48eb01fad50550f5bca6e516d04d2037)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 >::colStride;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > > > class_84d588e24380505f829f7bde30738271("_DenseCoeffsBase_84d588e24380505f829f7bde30738271", "", boost::python::no_init);
    class_84d588e24380505f829f7bde30738271.def("inner_stride", method_pointer_9e3297c3702d50f3931e9b342c27b5b3, "");
    class_84d588e24380505f829f7bde30738271.def("outer_stride", method_pointer_7a26db60c82f51fd99a277093f8b16d9, "");
    class_84d588e24380505f829f7bde30738271.def("stride", method_pointer_d49d6cf36bcb54779f770ec157e0952b, "");
    class_84d588e24380505f829f7bde30738271.def("row_stride", method_pointer_d5cfe3c3f6bc5a2ba54a49d224f876d5, "");
    class_84d588e24380505f829f7bde30738271.def("col_stride", method_pointer_48eb01fad50550f5bca6e516d04d2037, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 3 > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< double, 1, 2, 1, 1, 2 >, 1 > > >();
    }

}