#include "_ieigen.h"


namespace autowig
{
}


void wrapper_0762cc65993d5292807f03be61418f71()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_2bda9e0849975996905848f3b73601ae)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_f463fee39b985e12959205acfb6f6342)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::colIndexByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_7a4bb246da3d5528bef91479b6e88940)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_7e4c8c57ff175ee893b02101b4741fd4)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::coeffByOuterInner;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_9f7953f3a3c75b3a8fd0ceecc9d544e2)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_4403739b6d2e50b0b5721b8b8fdb73f0)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::coeff;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_3197896970195247aa06553f6b16485f)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::operator[];
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_bf4428856c845482ba7bfc121ec6412d)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::operator();
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_670ba198c43c51058f109517ee4f7d97)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::x;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_a6be569c160e5f8aab59980f1efa35d9)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::y;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_3d62d068261b517d90a25128ebe58e08)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::z;
    int  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_78acae62c7685eb98402f1a5d6d1835f)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > > > class_0762cc65993d5292807f03be61418f71("_DenseCoeffsBase_0762cc65993d5292807f03be61418f71", "", boost::python::no_init);
    class_0762cc65993d5292807f03be61418f71.def("row_index_by_outer_inner", method_pointer_2bda9e0849975996905848f3b73601ae, "");
    class_0762cc65993d5292807f03be61418f71.def("col_index_by_outer_inner", method_pointer_f463fee39b985e12959205acfb6f6342, "");
    class_0762cc65993d5292807f03be61418f71.def("coeff", method_pointer_7a4bb246da3d5528bef91479b6e88940, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0762cc65993d5292807f03be61418f71.def("coeff_by_outer_inner", method_pointer_7e4c8c57ff175ee893b02101b4741fd4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0762cc65993d5292807f03be61418f71.def("__call__", method_pointer_9f7953f3a3c75b3a8fd0ceecc9d544e2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0762cc65993d5292807f03be61418f71.def("coeff", method_pointer_4403739b6d2e50b0b5721b8b8fdb73f0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0762cc65993d5292807f03be61418f71.def("__getitem__", method_pointer_3197896970195247aa06553f6b16485f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0762cc65993d5292807f03be61418f71.def("__call__", method_pointer_bf4428856c845482ba7bfc121ec6412d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0762cc65993d5292807f03be61418f71.def("x", method_pointer_670ba198c43c51058f109517ee4f7d97, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0762cc65993d5292807f03be61418f71.def("y", method_pointer_a6be569c160e5f8aab59980f1efa35d9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0762cc65993d5292807f03be61418f71.def("z", method_pointer_3d62d068261b517d90a25128ebe58e08, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0762cc65993d5292807f03be61418f71.def("w", method_pointer_78acae62c7685eb98402f1a5d6d1835f, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< int, -1, 1, 0, -1, 1 > > > >();
    }

}