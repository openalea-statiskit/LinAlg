#include "_ieigen.h"


namespace autowig
{
    void method_decorator_3fa66cf43f105ce9b85bd634172358ad(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_6071280354705e30bfe9c82cb9303925(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_d5b4382ebff65e469bd4077584144920(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_b3f4dc9f93ca549db4b61c436be0bc32(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_2580230b9390595c90b0efaff72d369d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_054b47f550405f368bcfb172637df73e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_00b632a08be850c497d39544c23759df(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_6244affec0905068b7d90389cdc1bb74(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_e62da8ddb5b75601b322883c68ca4147(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_250f1e6f0add5984857102a62e5df8aa(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_52f9031d52e55f1894e25e17d1726e67(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_d5370687986e5172b01a339d97ed75e4()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_3fa66cf43f105ce9b85bd634172358ad)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_25e005a6c13252ec91f0ea774b0559ca)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_9635b55af119517db2577a5f68cbf899)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_ee6ad1e949ea53daa23ff78123cd3d78)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::cols;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_308c709723c7514aa9d200891e4a2604)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::coeff;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_7ac51ad2757d520ebc6391735bb5bb51)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::coeff;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_6071280354705e30bfe9c82cb9303925)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_d5b4382ebff65e469bd4077584144920)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_4932e238c5ee5d09a8bc12732c95ab5c)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_9533c40d1fe456f494c9813e472b1b5c)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::coeffRef;
    struct ::std::complex< float >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_16536e0a70da578caf9fef2aa27cbe2f)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::data;
    struct ::std::complex< float >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_614be2c7595558a0a5428be0a75a2ee0)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_fc159e72740f5a6593343a26bcd6ab7e)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_dd25c90118395ebbba0fd6c28734420d)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_152ea772d2f65a8694ef336e25ca9a82)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_d4067e16ecda5264806df72aa308e9b5)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_3a7a0f05bbeb55feb8123d4ba317bfa3)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_b3f4dc9f93ca549db4b61c436be0bc32)(long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_2580230b9390595c90b0efaff72d369d)(long int , long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_054b47f550405f368bcfb172637df73e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_00b632a08be850c497d39544c23759df)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_6244affec0905068b7d90389cdc1bb74)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_e62da8ddb5b75601b322883c68ca4147)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_250f1e6f0add5984857102a62e5df8aa)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 3, 1, 0, 3, 1 > >::*method_pointer_52f9031d52e55f1894e25e17d1726e67)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::setRandom;
    void  (*method_pointer_e04b4226587853da9a77b57f90a17eaf)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > >, boost::noncopyable > class_d5370687986e5172b01a339d97ed75e4("_PlainObjectBase_d5370687986e5172b01a339d97ed75e4", "", boost::python::no_init);
    class_d5370687986e5172b01a339d97ed75e4.def("base", method_pointer_3fa66cf43f105ce9b85bd634172358ad, boost::python::return_internal_reference<>(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("base", autowig::method_decorator_3fa66cf43f105ce9b85bd634172358ad);
    class_d5370687986e5172b01a339d97ed75e4.def("base", method_pointer_25e005a6c13252ec91f0ea774b0559ca, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("rows", method_pointer_9635b55af119517db2577a5f68cbf899, "");
    class_d5370687986e5172b01a339d97ed75e4.def("cols", method_pointer_ee6ad1e949ea53daa23ff78123cd3d78, "");
    class_d5370687986e5172b01a339d97ed75e4.def("coeff", method_pointer_308c709723c7514aa9d200891e4a2604, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("coeff", method_pointer_7ac51ad2757d520ebc6391735bb5bb51, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("coeff_ref", method_pointer_6071280354705e30bfe9c82cb9303925, boost::python::return_internal_reference<>(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("coeff_ref", autowig::method_decorator_6071280354705e30bfe9c82cb9303925);
    class_d5370687986e5172b01a339d97ed75e4.def("coeff_ref", method_pointer_d5b4382ebff65e469bd4077584144920, boost::python::return_internal_reference<>(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("coeff_ref", autowig::method_decorator_d5b4382ebff65e469bd4077584144920);
    class_d5370687986e5172b01a339d97ed75e4.def("coeff_ref", method_pointer_4932e238c5ee5d09a8bc12732c95ab5c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("coeff_ref", method_pointer_9533c40d1fe456f494c9813e472b1b5c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("data", method_pointer_16536e0a70da578caf9fef2aa27cbe2f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("data", method_pointer_614be2c7595558a0a5428be0a75a2ee0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("resize", method_pointer_fc159e72740f5a6593343a26bcd6ab7e, "");
    class_d5370687986e5172b01a339d97ed75e4.def("resize", method_pointer_dd25c90118395ebbba0fd6c28734420d, "");
    class_d5370687986e5172b01a339d97ed75e4.def("resize", method_pointer_152ea772d2f65a8694ef336e25ca9a82, "");
    class_d5370687986e5172b01a339d97ed75e4.def("resize", method_pointer_d4067e16ecda5264806df72aa308e9b5, "");
    class_d5370687986e5172b01a339d97ed75e4.def("conservative_resize", method_pointer_3a7a0f05bbeb55feb8123d4ba317bfa3, "");
    class_d5370687986e5172b01a339d97ed75e4.def("set_constant", method_pointer_b3f4dc9f93ca549db4b61c436be0bc32, boost::python::return_internal_reference<>(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("set_constant", autowig::method_decorator_b3f4dc9f93ca549db4b61c436be0bc32);
    class_d5370687986e5172b01a339d97ed75e4.def("set_constant", method_pointer_2580230b9390595c90b0efaff72d369d, boost::python::return_internal_reference<>(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("set_constant", autowig::method_decorator_2580230b9390595c90b0efaff72d369d);
    class_d5370687986e5172b01a339d97ed75e4.def("set_zero", method_pointer_054b47f550405f368bcfb172637df73e, boost::python::return_internal_reference<>(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("set_zero", autowig::method_decorator_054b47f550405f368bcfb172637df73e);
    class_d5370687986e5172b01a339d97ed75e4.def("set_zero", method_pointer_00b632a08be850c497d39544c23759df, boost::python::return_internal_reference<>(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("set_zero", autowig::method_decorator_00b632a08be850c497d39544c23759df);
    class_d5370687986e5172b01a339d97ed75e4.def("set_ones", method_pointer_6244affec0905068b7d90389cdc1bb74, boost::python::return_internal_reference<>(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("set_ones", autowig::method_decorator_6244affec0905068b7d90389cdc1bb74);
    class_d5370687986e5172b01a339d97ed75e4.def("set_ones", method_pointer_e62da8ddb5b75601b322883c68ca4147, boost::python::return_internal_reference<>(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("set_ones", autowig::method_decorator_e62da8ddb5b75601b322883c68ca4147);
    class_d5370687986e5172b01a339d97ed75e4.def("set_random", method_pointer_250f1e6f0add5984857102a62e5df8aa, boost::python::return_internal_reference<>(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("set_random", autowig::method_decorator_250f1e6f0add5984857102a62e5df8aa);
    class_d5370687986e5172b01a339d97ed75e4.def("set_random", method_pointer_52f9031d52e55f1894e25e17d1726e67, boost::python::return_internal_reference<>(), "");
    class_d5370687986e5172b01a339d97ed75e4.def("set_random", autowig::method_decorator_52f9031d52e55f1894e25e17d1726e67);
    class_d5370687986e5172b01a339d97ed75e4.def("check_template_params", method_pointer_e04b4226587853da9a77b57f90a17eaf, "");
    class_d5370687986e5172b01a339d97ed75e4.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 3, 1, 0, 3, 1 > > > >();
    }

}