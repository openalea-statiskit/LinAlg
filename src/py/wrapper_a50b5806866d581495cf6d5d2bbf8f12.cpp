#include "_ieigen.h"


namespace autowig
{
}


void wrapper_a50b5806866d581495cf6d5d2bbf8f12()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_9dfffaceca6e5cd8b1293b6b2f7ee6be)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_eafa8b98c8e0565ca03392296a170aa9)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::colIndexByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_31629fd6c02c50a78a4589c28348748c)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_ac36a98aff88528d8c5e3f3a9e678133)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::coeffByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_4fb977ea17fa561e83c87687b885f223)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_5fca79b404995a238e77de834b2bbab3)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_3bc30b5028a750869c6ae9e2aa5a8fe0)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::operator[];
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_ebd9a157444758ae802b51d535447ed0)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_c179aab8b3e2553e9c40f67ef7d2d923)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::x;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_ecc9b669dcf95426bd74c9e1d9af516b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::y;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_6ff536b3efc2573293f7dc6e1b3f9f5c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::z;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::*method_pointer_cbc4fd77c76b5ce0a96ed47110efffcf)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > > > class_a50b5806866d581495cf6d5d2bbf8f12("_DenseCoeffsBase_a50b5806866d581495cf6d5d2bbf8f12", "", boost::python::no_init);
    class_a50b5806866d581495cf6d5d2bbf8f12.def("row_index_by_outer_inner", method_pointer_9dfffaceca6e5cd8b1293b6b2f7ee6be, "");
    class_a50b5806866d581495cf6d5d2bbf8f12.def("col_index_by_outer_inner", method_pointer_eafa8b98c8e0565ca03392296a170aa9, "");
    class_a50b5806866d581495cf6d5d2bbf8f12.def("coeff", method_pointer_31629fd6c02c50a78a4589c28348748c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a50b5806866d581495cf6d5d2bbf8f12.def("coeff_by_outer_inner", method_pointer_ac36a98aff88528d8c5e3f3a9e678133, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a50b5806866d581495cf6d5d2bbf8f12.def("__call__", method_pointer_4fb977ea17fa561e83c87687b885f223, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a50b5806866d581495cf6d5d2bbf8f12.def("coeff", method_pointer_5fca79b404995a238e77de834b2bbab3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a50b5806866d581495cf6d5d2bbf8f12.def("__getitem__", method_pointer_3bc30b5028a750869c6ae9e2aa5a8fe0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a50b5806866d581495cf6d5d2bbf8f12.def("__call__", method_pointer_ebd9a157444758ae802b51d535447ed0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a50b5806866d581495cf6d5d2bbf8f12.def("x", method_pointer_c179aab8b3e2553e9c40f67ef7d2d923, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a50b5806866d581495cf6d5d2bbf8f12.def("y", method_pointer_ecc9b669dcf95426bd74c9e1d9af516b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a50b5806866d581495cf6d5d2bbf8f12.def("z", method_pointer_6ff536b3efc2573293f7dc6e1b3f9f5c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a50b5806866d581495cf6d5d2bbf8f12.def("w", method_pointer_cbc4fd77c76b5ce0a96ed47110efffcf, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, 1, -1, 1, 1, -1 > > > >();
    }

}