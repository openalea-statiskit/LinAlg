#include "_ieigen.h"


namespace autowig
{
}


void wrapper_236d8d19c71652b78e12544733f5674f()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_5fd4a778804a59ff88c173067c39d5b4)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_1d6d810dcf3551d18f89f8a5f3014bbb)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::colIndexByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_d58710a0818654869e1939ae39bdf3b4)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_70374f964ebd5e83941bc467d6491d94)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::coeffByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_8ecb14123fed5360a935f576305970e8)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_65833cb9801652aa9a01c27b231c218b)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_6c40461a3ff150a1ab3a6666935218cc)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::operator[];
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_ee42524ec875594e996a590de4515701)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_859bbc259f5d510bb49dc9f0f255cf22)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::x;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_1210bf7f8b845e808715f40da3a60df2)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::y;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_c571f443669f5a6da1d09dd0020ae250)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::z;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::*method_pointer_e845b7ac2dd85979921361a58d5d9a1d)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > > > class_236d8d19c71652b78e12544733f5674f("_DenseCoeffsBase_236d8d19c71652b78e12544733f5674f", "", boost::python::no_init);
    class_236d8d19c71652b78e12544733f5674f.def("row_index_by_outer_inner", method_pointer_5fd4a778804a59ff88c173067c39d5b4, "");
    class_236d8d19c71652b78e12544733f5674f.def("col_index_by_outer_inner", method_pointer_1d6d810dcf3551d18f89f8a5f3014bbb, "");
    class_236d8d19c71652b78e12544733f5674f.def("coeff", method_pointer_d58710a0818654869e1939ae39bdf3b4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_236d8d19c71652b78e12544733f5674f.def("coeff_by_outer_inner", method_pointer_70374f964ebd5e83941bc467d6491d94, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_236d8d19c71652b78e12544733f5674f.def("__call__", method_pointer_8ecb14123fed5360a935f576305970e8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_236d8d19c71652b78e12544733f5674f.def("coeff", method_pointer_65833cb9801652aa9a01c27b231c218b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_236d8d19c71652b78e12544733f5674f.def("__getitem__", method_pointer_6c40461a3ff150a1ab3a6666935218cc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_236d8d19c71652b78e12544733f5674f.def("__call__", method_pointer_ee42524ec875594e996a590de4515701, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_236d8d19c71652b78e12544733f5674f.def("x", method_pointer_859bbc259f5d510bb49dc9f0f255cf22, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_236d8d19c71652b78e12544733f5674f.def("y", method_pointer_1210bf7f8b845e808715f40da3a60df2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_236d8d19c71652b78e12544733f5674f.def("z", method_pointer_c571f443669f5a6da1d09dd0020ae250, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_236d8d19c71652b78e12544733f5674f.def("w", method_pointer_e845b7ac2dd85979921361a58d5d9a1d, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, 1, 4, 1, 1, 4 > > > >();
    }

}