#include "_ieigen.h"


namespace autowig
{
}


void wrapper_72aadc08b2c053b192093f55ac6e0e3d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_08cdb5feb0e95f9bad7b8cb586134eec)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::rowIndexByOuterInner;
    long int  (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_19e8246b2431559498563f5505d79fa4)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::colIndexByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_9f538f0a28055d1fb8313afbb0305d5d)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_3d36473045645401952b5355c9868d12)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::coeffByOuterInner;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_ebd08834b7ce524db54d157eaf5d6580)(long int , long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_a9d697ca7b5e59289d4cb248a56f6299)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::coeff;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_be03ef3106065ea28d9a2932980f1b1a)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::operator[];
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_732d9cdcd9035123952b3324210c549e)(long int ) const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::operator();
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_b98ba069525455ba8f309ed791b39c19)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::x;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_b641d22a6953596b9eb00922d407089c)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::y;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_b378241817135f8f9f2d7f325843dce7)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::z;
    float  const & (::Eigen::DenseCoeffsBase< ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::*method_pointer_cab3f225e68759de91b61b39e82db55b)() const = &::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >::w;
    boost::python::class_< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 > >, boost::python::bases< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > > > class_72aadc08b2c053b192093f55ac6e0e3d("_DenseCoeffsBase_72aadc08b2c053b192093f55ac6e0e3d", "", boost::python::no_init);
    class_72aadc08b2c053b192093f55ac6e0e3d.def("row_index_by_outer_inner", method_pointer_08cdb5feb0e95f9bad7b8cb586134eec, "");
    class_72aadc08b2c053b192093f55ac6e0e3d.def("col_index_by_outer_inner", method_pointer_19e8246b2431559498563f5505d79fa4, "");
    class_72aadc08b2c053b192093f55ac6e0e3d.def("coeff", method_pointer_9f538f0a28055d1fb8313afbb0305d5d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_72aadc08b2c053b192093f55ac6e0e3d.def("coeff_by_outer_inner", method_pointer_3d36473045645401952b5355c9868d12, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_72aadc08b2c053b192093f55ac6e0e3d.def("__call__", method_pointer_ebd08834b7ce524db54d157eaf5d6580, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_72aadc08b2c053b192093f55ac6e0e3d.def("coeff", method_pointer_a9d697ca7b5e59289d4cb248a56f6299, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_72aadc08b2c053b192093f55ac6e0e3d.def("__getitem__", method_pointer_be03ef3106065ea28d9a2932980f1b1a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_72aadc08b2c053b192093f55ac6e0e3d.def("__call__", method_pointer_732d9cdcd9035123952b3324210c549e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_72aadc08b2c053b192093f55ac6e0e3d.def("x", method_pointer_b98ba069525455ba8f309ed791b39c19, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_72aadc08b2c053b192093f55ac6e0e3d.def("y", method_pointer_b641d22a6953596b9eb00922d407089c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_72aadc08b2c053b192093f55ac6e0e3d.def("z", method_pointer_b378241817135f8f9f2d7f325843dce7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_72aadc08b2c053b192093f55ac6e0e3d.def("w", method_pointer_cab3f225e68759de91b61b39e82db55b, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 >, 0 > >, autowig::HeldType< struct ::Eigen::EigenBase< class ::Eigen::Matrix< float, -1, 1, 0, -1, 1 > > > >();
    }

}