#include "_ieigen.h"


namespace autowig
{
}


void wrapper_2b591d61f15853f38aba6033cd8049c5()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_a6d60d894ac859fd85523e0d58e2a582)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_8477b414eb62561c879984e118ae2868)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::colIndexByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_85d171807b0859979b8b012c32af465c)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_16efa2e447285407ac26a9a4032471d0)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::coeffByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_fa67993e6bf75c80a16f5bfe8d304266)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_3e5c1507fa9f5fdfb224e554d3d9260e)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_5463d0a41a6454218b028483da5fab54)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::operator[];
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_1ea2b6c4d12959a9a99f04379653cb8c)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_5dd4d57cf1d45cbcb41c21ddc85123bb)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::x;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_1c237d13d1e05b8c9f1a57481b3c4196)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::y;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_6b5f87f555d456a0a4fb0aa669c85c0d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::z;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::*method_pointer_537b1a53c3785e5f81764dc3aa0e5fde)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > > > class_2b591d61f15853f38aba6033cd8049c5("_DenseCoeffsBase_2b591d61f15853f38aba6033cd8049c5", "", boost::python::no_init);
    class_2b591d61f15853f38aba6033cd8049c5.def("row_index_by_outer_inner", method_pointer_a6d60d894ac859fd85523e0d58e2a582, "");
    class_2b591d61f15853f38aba6033cd8049c5.def("col_index_by_outer_inner", method_pointer_8477b414eb62561c879984e118ae2868, "");
    class_2b591d61f15853f38aba6033cd8049c5.def("coeff", method_pointer_85d171807b0859979b8b012c32af465c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2b591d61f15853f38aba6033cd8049c5.def("coeff_by_outer_inner", method_pointer_16efa2e447285407ac26a9a4032471d0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2b591d61f15853f38aba6033cd8049c5.def("__call__", method_pointer_fa67993e6bf75c80a16f5bfe8d304266, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2b591d61f15853f38aba6033cd8049c5.def("coeff", method_pointer_3e5c1507fa9f5fdfb224e554d3d9260e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2b591d61f15853f38aba6033cd8049c5.def("__getitem__", method_pointer_5463d0a41a6454218b028483da5fab54, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2b591d61f15853f38aba6033cd8049c5.def("__call__", method_pointer_1ea2b6c4d12959a9a99f04379653cb8c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2b591d61f15853f38aba6033cd8049c5.def("x", method_pointer_5dd4d57cf1d45cbcb41c21ddc85123bb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2b591d61f15853f38aba6033cd8049c5.def("y", method_pointer_1c237d13d1e05b8c9f1a57481b3c4196, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2b591d61f15853f38aba6033cd8049c5.def("z", method_pointer_6b5f87f555d456a0a4fb0aa669c85c0d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2b591d61f15853f38aba6033cd8049c5.def("w", method_pointer_537b1a53c3785e5f81764dc3aa0e5fde, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > > >();
    }

}