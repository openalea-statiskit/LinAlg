#include "_ieigen.h"


namespace autowig
{
    void method_decorator_262c792ef06950ef906db869c34a5397(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setConstant(param_in_0) = param_out; }
    void method_decorator_944e9777430c537390c923653392dfda(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, long int  param_in_0, float  const & param_in_1, float  const & param_in_2, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_bbb94451adc75d3584267aaa05d27d03(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, float  const & param_in_0, float  const & param_in_1, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setLinSpaced(param_in_0, param_in_1) = param_out; }
    void method_decorator_39178acc501c51f581724f8c3c7c1d47(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setZero() = param_out; }
    void method_decorator_893ccca205bb5cf69d2bc59d67745fe8(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setOnes() = param_out; }
    void method_decorator_051078350ec851b6869434138b5601bc(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)
    { instance.setRandom() = param_out; }
    void method_decorator_4f55afbf44a95a7ea0465aa97a925ef0(class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > & instance, float  const & param_in_0, class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & param_out)
    { instance.operator*=(param_in_0) = param_out; }
}


void wrapper_f1b5aa2014af5ed6bf961e70a04b1a57()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_e737071782f55c93998da9884335ff24)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::nonZeros;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_bdc71b85022c5930999d0439f1bc2473)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::outerSize;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_a85758c93b845f0bbaa050de978b0121)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::innerSize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_5f1b1d634c0f5d7e8ad6ad8f2814473c)(long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_f15051411d0155ebb78fcef6b2e6c62d)(long int , long int ) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::resize;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_91da7b372164568e9b86d19bd0b5b544)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::transposeInPlace;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_8955d27c3ced5fa68ad68127b23040b8)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::fill;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_262c792ef06950ef906db869c34a5397)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setConstant;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_944e9777430c537390c923653392dfda)(long int , float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_bbb94451adc75d3584267aaa05d27d03)(float  const &, float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setLinSpaced;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_39178acc501c51f581724f8c3c7c1d47)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setZero;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_893ccca205bb5cf69d2bc59d67745fe8)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setOnes;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_051078350ec851b6869434138b5601bc)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::setRandom;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_05d67fde50095759b80aeff1ca0d15f6)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isMuchSmallerThan;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_38b42cc0875b58b398a8bdaef59dc8db)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isApproxToConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_0cd0af8666df5c73b5811808243a80e3)(float  const &, float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isConstant;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_324ca15da05f58b7bdfc7ebfcb74b0d7)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isZero;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_6e12223aa54e55f89a6c36ad166b7c55)(float  const &) const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::isOnes;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_f9e52e4fdc555f55b60c95aeceef4e81)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::hasNaN;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_4989838073dc5260bd97a6ce50a78882)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::allFinite;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_4f55afbf44a95a7ea0465aa97a925ef0)(float  const &) = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::operator*=;
    class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_4b80fe8207425fa5805a228847842882)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::eval;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_808cdc8d588653d4b3e01c56a2074a41)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::sum;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_2c2ec046c54352ec82a0aa208570163e)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::mean;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_caa7ebac04d05c4486d12e3119543f96)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::trace;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_3a5d5e1c7e855c6a809d87d6d22592dd)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::prod;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_92865b0c972e5284a6db7ae8e8019225)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::minCoeff;
    float  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_692f04a4303d5fa197daab69a4f42d1b)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::maxCoeff;
    float  const & (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_f09b25ab78095e688cf07a874f1cab5a)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::value;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_b812523be12f55139e70fa5e7176e017)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::all;
    bool  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_d2994ba8e2255060982b0706cfe9b68c)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::any;
    long int  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_00abb8c1cefa5da29a153a13b34b5c93)() const = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::count;
    void  (::Eigen::DenseBase< ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::*method_pointer_12fc51c8641a5342a81450f51b74af70)() = &::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >::reverseInPlace;
    boost::python::class_< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >, boost::python::bases< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 > > > class_f1b5aa2014af5ed6bf961e70a04b1a57("_DenseBase_f1b5aa2014af5ed6bf961e70a04b1a57", "", boost::python::no_init);
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("non_zeros", method_pointer_e737071782f55c93998da9884335ff24, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("outer_size", method_pointer_bdc71b85022c5930999d0439f1bc2473, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("inner_size", method_pointer_a85758c93b845f0bbaa050de978b0121, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("resize", method_pointer_5f1b1d634c0f5d7e8ad6ad8f2814473c, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("resize", method_pointer_f15051411d0155ebb78fcef6b2e6c62d, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("transpose_in_place", method_pointer_91da7b372164568e9b86d19bd0b5b544, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("fill", method_pointer_8955d27c3ced5fa68ad68127b23040b8, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("set_constant", method_pointer_262c792ef06950ef906db869c34a5397, boost::python::return_internal_reference<>(), "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("set_constant", autowig::method_decorator_262c792ef06950ef906db869c34a5397);
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("set_lin_spaced", method_pointer_944e9777430c537390c923653392dfda, boost::python::return_internal_reference<>(), "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("set_lin_spaced", autowig::method_decorator_944e9777430c537390c923653392dfda);
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("set_lin_spaced", method_pointer_bbb94451adc75d3584267aaa05d27d03, boost::python::return_internal_reference<>(), "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("set_lin_spaced", autowig::method_decorator_bbb94451adc75d3584267aaa05d27d03);
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("set_zero", method_pointer_39178acc501c51f581724f8c3c7c1d47, boost::python::return_internal_reference<>(), "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("set_zero", autowig::method_decorator_39178acc501c51f581724f8c3c7c1d47);
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("set_ones", method_pointer_893ccca205bb5cf69d2bc59d67745fe8, boost::python::return_internal_reference<>(), "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("set_ones", autowig::method_decorator_893ccca205bb5cf69d2bc59d67745fe8);
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("set_random", method_pointer_051078350ec851b6869434138b5601bc, boost::python::return_internal_reference<>(), "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("set_random", autowig::method_decorator_051078350ec851b6869434138b5601bc);
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("is_much_smaller_than", method_pointer_05d67fde50095759b80aeff1ca0d15f6, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("is_approx_to_constant", method_pointer_38b42cc0875b58b398a8bdaef59dc8db, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("is_constant", method_pointer_0cd0af8666df5c73b5811808243a80e3, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("is_zero", method_pointer_324ca15da05f58b7bdfc7ebfcb74b0d7, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("is_ones", method_pointer_6e12223aa54e55f89a6c36ad166b7c55, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("has_na_n", method_pointer_f9e52e4fdc555f55b60c95aeceef4e81, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("all_finite", method_pointer_4989838073dc5260bd97a6ce50a78882, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("__imul__", method_pointer_4f55afbf44a95a7ea0465aa97a925ef0, boost::python::return_internal_reference<>(), "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("__imul__", autowig::method_decorator_4f55afbf44a95a7ea0465aa97a925ef0);
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("eval", method_pointer_4b80fe8207425fa5805a228847842882, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("sum", method_pointer_808cdc8d588653d4b3e01c56a2074a41, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("mean", method_pointer_2c2ec046c54352ec82a0aa208570163e, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("trace", method_pointer_caa7ebac04d05c4486d12e3119543f96, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("prod", method_pointer_3a5d5e1c7e855c6a809d87d6d22592dd, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("min_coeff", method_pointer_92865b0c972e5284a6db7ae8e8019225, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("max_coeff", method_pointer_692f04a4303d5fa197daab69a4f42d1b, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("value", method_pointer_f09b25ab78095e688cf07a874f1cab5a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("all", method_pointer_b812523be12f55139e70fa5e7176e017, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("any", method_pointer_d2994ba8e2255060982b0706cfe9b68c, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("count", method_pointer_00abb8c1cefa5da29a153a13b34b5c93, "");
    class_f1b5aa2014af5ed6bf961e70a04b1a57.def("reverse_in_place", method_pointer_12fc51c8641a5342a81450f51b74af70, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 > > >, autowig::HeldType< class ::Eigen::DenseCoeffsBase< class ::Eigen::Matrix< float, 4, 4, 0, 4, 4 >, 3 > > >();
    }

}