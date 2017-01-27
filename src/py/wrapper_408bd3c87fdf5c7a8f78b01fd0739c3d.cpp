#include "_ieigen.h"


namespace autowig
{
    void method_decorator_97690e887aae552b9c53e0317b839c04(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > > & instance, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.derived() = param_out; }
    void method_decorator_f9909cdd8a4f55809b9962fa482d5619(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > > & instance, float  const & param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
    void method_decorator_ef76405d3e2f55018ccc1ef98b794448(class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > > & instance, enum ::Eigen::Default_t  param_in_0, class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >  & param_out)     { instance.setThreshold(param_in_0) = param_out; }
}


void wrapper_408bd3c87fdf5c7a8f78b01fd0739c3d()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_97690e887aae552b9c53e0317b839c04)() = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::derived;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_bee1e0e8c05f5c1481b7aa0f3a6da1fa)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::derived;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_b6a9fc1871a057eda2ba872cdde3684d)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::matrixU;
    class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_06f9ea7a77e45cfdbf3e6e97941a2f47)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::matrixV;
    class ::Eigen::Matrix< float, 2, 1, 0, 2, 1 >  const & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_d6ac83cdf8ef5c0ea5b1a906316f6524)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::singularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_174a196940ed5342ae37ecc43c44a125)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::nonzeroSingularValues;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_5ddd02b6fbdc5837944ed37dbda981ac)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::rank;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_f9909cdd8a4f55809b9962fa482d5619)(float  const &) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::setThreshold;
    class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 >  & (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_ef76405d3e2f55018ccc1ef98b794448)(enum ::Eigen::Default_t ) = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::setThreshold;
    float  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_4ed2d247a1b0567d8d2deb782d87e24e)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::threshold;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_76370383d7445454abd1b1dc44f5910a)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::computeU;
    bool  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_42935cca578359bebfb245c2fb3b19ae)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::computeV;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_95b16e740838512f9fc76ba76f3d6cf7)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::rows;
    long int  (::Eigen::SVDBase< ::Eigen::JacobiSVD< ::Eigen::Matrix< ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::*method_pointer_c576e309ba805d28af1ba828bb79546c)() const = &::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >::cols;
    boost::python::class_< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >, autowig::HeldType< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > > > > class_408bd3c87fdf5c7a8f78b01fd0739c3d("_SVDBase_408bd3c87fdf5c7a8f78b01fd0739c3d", "", boost::python::no_init);
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def(boost::python::init< class ::Eigen::SVDBase< class ::Eigen::JacobiSVD< class ::Eigen::Matrix< struct ::std::complex< float >, 2, 2, 0, 2, 2 >, 2 > >  const & >(""));
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("derived", method_pointer_97690e887aae552b9c53e0317b839c04, boost::python::return_internal_reference<>(), "");
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("derived", autowig::method_decorator_97690e887aae552b9c53e0317b839c04);
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("derived", method_pointer_bee1e0e8c05f5c1481b7aa0f3a6da1fa, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("matrix_u", method_pointer_b6a9fc1871a057eda2ba872cdde3684d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("matrix_v", method_pointer_06f9ea7a77e45cfdbf3e6e97941a2f47, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("singular_values", method_pointer_d6ac83cdf8ef5c0ea5b1a906316f6524, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("nonzero_singular_values", method_pointer_174a196940ed5342ae37ecc43c44a125, "");
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("rank", method_pointer_5ddd02b6fbdc5837944ed37dbda981ac, "");
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("set_threshold", method_pointer_f9909cdd8a4f55809b9962fa482d5619, boost::python::return_internal_reference<>(), "");
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("set_threshold", autowig::method_decorator_f9909cdd8a4f55809b9962fa482d5619);
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("set_threshold", method_pointer_ef76405d3e2f55018ccc1ef98b794448, boost::python::return_internal_reference<>(), "");
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("set_threshold", autowig::method_decorator_ef76405d3e2f55018ccc1ef98b794448);
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("threshold", method_pointer_4ed2d247a1b0567d8d2deb782d87e24e, "");
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("compute_u", method_pointer_76370383d7445454abd1b1dc44f5910a, "");
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("compute_v", method_pointer_42935cca578359bebfb245c2fb3b19ae, "");
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("rows", method_pointer_95b16e740838512f9fc76ba76f3d6cf7, "");
    class_408bd3c87fdf5c7a8f78b01fd0739c3d.def("cols", method_pointer_c576e309ba805d28af1ba828bb79546c, "");

}