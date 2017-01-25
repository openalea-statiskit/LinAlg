#include "_ieigen.h"


namespace autowig
{
    void method_decorator_0506a4f04d385006b0ea42861c64262a(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_24ed116719c559b8b84a95ec0ed4af99(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_687b337c9ab25d099d29049572f57178(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, struct ::std::complex< float >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_f918297a65d4542eab3ee0e529dc468e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, struct ::std::complex< float >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_9dca6e072d4253f7be2c5c6377454a77(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< float >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_efd9c0e4467a5b1698f9d2679867ac75(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_4a5a95abe6de5986bba9c94c3c84ed7d(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_f67e8e1f0b1a5efea85537d569ef2471(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_972046219bda5c6183a0f8372e023eaf(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_f14d5b7b4f945c6f801ff48a2d4e12a6(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_96fec31549345ae19470871293647895(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_2c94af125b8e571a8940744305c2649b()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_0506a4f04d385006b0ea42861c64262a)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_1e6df32a75c65077bfa7d482676053cc)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_1eea4f906d4b5d07ac16d8f057e48087)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_a59fa51b6b5c550f9a05827835a5a732)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::cols;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_1b722ec1007251c0b0b3e86b7d3da1d2)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::coeff;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_477967b539ce5ce0bdaaeacdfe58277f)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::coeff;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_24ed116719c559b8b84a95ec0ed4af99)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::coeffRef;
    struct ::std::complex< float >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_687b337c9ab25d099d29049572f57178)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_11352680735156f9a83f46499696788e)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::coeffRef;
    struct ::std::complex< float >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_428db3060de05eceb7800789d5b483b8)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::coeffRef;
    struct ::std::complex< float >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_8f77fbb08e645712939e23ce2ef35c4b)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::data;
    struct ::std::complex< float >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_51d993cc02795b6185f68b1c9698a52a)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_4e7c1fbd793c547f9873e14ce4fa8b80)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_6e77cae1283a5a359305dcb09cbafda4)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_8e2f643c68225288b76360381d6d3d4c)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_67eac878a57a55a9b23ebfbb93d2a2ba)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_943f6e6384d65dcaaa41d5daf638ddf2)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_f8152b24cd305a1d932d778f10b6eaee)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_1929c34f482358c8baae405bb20e4215)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_5baf713f95c45e8f9138e703046dbe2e)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_f918297a65d4542eab3ee0e529dc468e)(long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_9dca6e072d4253f7be2c5c6377454a77)(long int , long int , struct ::std::complex< float >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_efd9c0e4467a5b1698f9d2679867ac75)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_4a5a95abe6de5986bba9c94c3c84ed7d)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_f67e8e1f0b1a5efea85537d569ef2471)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_972046219bda5c6183a0f8372e023eaf)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_f14d5b7b4f945c6f801ff48a2d4e12a6)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< float >, 1, -1, 1, 1, -1 > >::*method_pointer_96fec31549345ae19470871293647895)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::setRandom;
    void  (*method_pointer_9b576937677757d0be9109cc691630bc)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > > > class_2c94af125b8e571a8940744305c2649b("_PlainObjectBase_2c94af125b8e571a8940744305c2649b", "", boost::python::no_init);
    class_2c94af125b8e571a8940744305c2649b.def("base", method_pointer_0506a4f04d385006b0ea42861c64262a, boost::python::return_internal_reference<>(), "");
    class_2c94af125b8e571a8940744305c2649b.def("base", autowig::method_decorator_0506a4f04d385006b0ea42861c64262a);
    class_2c94af125b8e571a8940744305c2649b.def("base", method_pointer_1e6df32a75c65077bfa7d482676053cc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2c94af125b8e571a8940744305c2649b.def("rows", method_pointer_1eea4f906d4b5d07ac16d8f057e48087, "");
    class_2c94af125b8e571a8940744305c2649b.def("cols", method_pointer_a59fa51b6b5c550f9a05827835a5a732, "");
    class_2c94af125b8e571a8940744305c2649b.def("coeff", method_pointer_1b722ec1007251c0b0b3e86b7d3da1d2, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2c94af125b8e571a8940744305c2649b.def("coeff", method_pointer_477967b539ce5ce0bdaaeacdfe58277f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2c94af125b8e571a8940744305c2649b.def("coeff_ref", method_pointer_24ed116719c559b8b84a95ec0ed4af99, boost::python::return_internal_reference<>(), "");
    class_2c94af125b8e571a8940744305c2649b.def("coeff_ref", autowig::method_decorator_24ed116719c559b8b84a95ec0ed4af99);
    class_2c94af125b8e571a8940744305c2649b.def("coeff_ref", method_pointer_687b337c9ab25d099d29049572f57178, boost::python::return_internal_reference<>(), "");
    class_2c94af125b8e571a8940744305c2649b.def("coeff_ref", autowig::method_decorator_687b337c9ab25d099d29049572f57178);
    class_2c94af125b8e571a8940744305c2649b.def("coeff_ref", method_pointer_11352680735156f9a83f46499696788e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2c94af125b8e571a8940744305c2649b.def("coeff_ref", method_pointer_428db3060de05eceb7800789d5b483b8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2c94af125b8e571a8940744305c2649b.def("data", method_pointer_8f77fbb08e645712939e23ce2ef35c4b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2c94af125b8e571a8940744305c2649b.def("data", method_pointer_51d993cc02795b6185f68b1c9698a52a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2c94af125b8e571a8940744305c2649b.def("resize", method_pointer_4e7c1fbd793c547f9873e14ce4fa8b80, "");
    class_2c94af125b8e571a8940744305c2649b.def("resize", method_pointer_6e77cae1283a5a359305dcb09cbafda4, "");
    class_2c94af125b8e571a8940744305c2649b.def("resize", method_pointer_8e2f643c68225288b76360381d6d3d4c, "");
    class_2c94af125b8e571a8940744305c2649b.def("resize", method_pointer_67eac878a57a55a9b23ebfbb93d2a2ba, "");
    class_2c94af125b8e571a8940744305c2649b.def("conservative_resize", method_pointer_943f6e6384d65dcaaa41d5daf638ddf2, "");
    class_2c94af125b8e571a8940744305c2649b.def("conservative_resize", method_pointer_f8152b24cd305a1d932d778f10b6eaee, "");
    class_2c94af125b8e571a8940744305c2649b.def("conservative_resize", method_pointer_1929c34f482358c8baae405bb20e4215, "");
    class_2c94af125b8e571a8940744305c2649b.def("conservative_resize", method_pointer_5baf713f95c45e8f9138e703046dbe2e, "");
    class_2c94af125b8e571a8940744305c2649b.def("set_constant", method_pointer_f918297a65d4542eab3ee0e529dc468e, boost::python::return_internal_reference<>(), "");
    class_2c94af125b8e571a8940744305c2649b.def("set_constant", autowig::method_decorator_f918297a65d4542eab3ee0e529dc468e);
    class_2c94af125b8e571a8940744305c2649b.def("set_constant", method_pointer_9dca6e072d4253f7be2c5c6377454a77, boost::python::return_internal_reference<>(), "");
    class_2c94af125b8e571a8940744305c2649b.def("set_constant", autowig::method_decorator_9dca6e072d4253f7be2c5c6377454a77);
    class_2c94af125b8e571a8940744305c2649b.def("set_zero", method_pointer_efd9c0e4467a5b1698f9d2679867ac75, boost::python::return_internal_reference<>(), "");
    class_2c94af125b8e571a8940744305c2649b.def("set_zero", autowig::method_decorator_efd9c0e4467a5b1698f9d2679867ac75);
    class_2c94af125b8e571a8940744305c2649b.def("set_zero", method_pointer_4a5a95abe6de5986bba9c94c3c84ed7d, boost::python::return_internal_reference<>(), "");
    class_2c94af125b8e571a8940744305c2649b.def("set_zero", autowig::method_decorator_4a5a95abe6de5986bba9c94c3c84ed7d);
    class_2c94af125b8e571a8940744305c2649b.def("set_ones", method_pointer_f67e8e1f0b1a5efea85537d569ef2471, boost::python::return_internal_reference<>(), "");
    class_2c94af125b8e571a8940744305c2649b.def("set_ones", autowig::method_decorator_f67e8e1f0b1a5efea85537d569ef2471);
    class_2c94af125b8e571a8940744305c2649b.def("set_ones", method_pointer_972046219bda5c6183a0f8372e023eaf, boost::python::return_internal_reference<>(), "");
    class_2c94af125b8e571a8940744305c2649b.def("set_ones", autowig::method_decorator_972046219bda5c6183a0f8372e023eaf);
    class_2c94af125b8e571a8940744305c2649b.def("set_random", method_pointer_f14d5b7b4f945c6f801ff48a2d4e12a6, boost::python::return_internal_reference<>(), "");
    class_2c94af125b8e571a8940744305c2649b.def("set_random", autowig::method_decorator_f14d5b7b4f945c6f801ff48a2d4e12a6);
    class_2c94af125b8e571a8940744305c2649b.def("set_random", method_pointer_96fec31549345ae19470871293647895, boost::python::return_internal_reference<>(), "");
    class_2c94af125b8e571a8940744305c2649b.def("set_random", autowig::method_decorator_96fec31549345ae19470871293647895);
    class_2c94af125b8e571a8940744305c2649b.def("check_template_params", method_pointer_9b576937677757d0be9109cc691630bc, "");
    class_2c94af125b8e571a8940744305c2649b.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< float >, 1, -1, 1, 1, -1 > > > >();
    }

}