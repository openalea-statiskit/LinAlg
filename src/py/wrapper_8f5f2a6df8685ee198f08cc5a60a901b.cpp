#include "_ieigen.h"


namespace autowig
{
}


void wrapper_8f5f2a6df8685ee198f08cc5a60a901b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_6972aee4d0ad5a32855b7b9a203875dd)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_82a2b9c878aa55129220df2efa0d83c5)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >::colIndexByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_101e21396e5956879a76fab73b39d051)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_82e652ab198b5461be45f5940fb94d69)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >::coeffByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_adf944a9b5665a9491278ce7b35bc99a)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_5296e3d2d275549a9285424daa9515c0)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >::*method_pointer_6bbfeb4e97205fe086c8402a2e4a826e)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >::operator();
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > > class_8f5f2a6df8685ee198f08cc5a60a901b("_DenseCoeffsBase_8f5f2a6df8685ee198f08cc5a60a901b", "", boost::python::no_init);
    class_8f5f2a6df8685ee198f08cc5a60a901b.def("row_index_by_outer_inner", method_pointer_6972aee4d0ad5a32855b7b9a203875dd, "");
    class_8f5f2a6df8685ee198f08cc5a60a901b.def("col_index_by_outer_inner", method_pointer_82a2b9c878aa55129220df2efa0d83c5, "");
    class_8f5f2a6df8685ee198f08cc5a60a901b.def("coeff", method_pointer_101e21396e5956879a76fab73b39d051, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8f5f2a6df8685ee198f08cc5a60a901b.def("coeff_by_outer_inner", method_pointer_82e652ab198b5461be45f5940fb94d69, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8f5f2a6df8685ee198f08cc5a60a901b.def("__call__", method_pointer_adf944a9b5665a9491278ce7b35bc99a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8f5f2a6df8685ee198f08cc5a60a901b.def("coeff", method_pointer_5296e3d2d275549a9285424daa9515c0, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8f5f2a6df8685ee198f08cc5a60a901b.def("__call__", method_pointer_6bbfeb4e97205fe086c8402a2e4a826e, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, -1, 0, -1, -1 > > > >();
    }

}