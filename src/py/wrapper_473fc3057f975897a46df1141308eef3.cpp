#include "_ieigen.h"


namespace autowig
{
    void method_decorator_5ba94731e21c5a74a77e41d54c0d1eda(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_c139907d4e4857dab16eeb7e9df44ae9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_f0869e4a544056079a4302d3d0b5f7c9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_200772c453e35f46a37807adebb9c6cf(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_8103c1b90f175dc58089c68ca9379232(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_1c0a47c9711b5cce88b8434ea8de8737(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_c0b3de5bb9a85d7ab727a43de0f6e190(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_24ba8277f3ab58259911f27c38976332(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_474f9e84859b5a4c95e48db97ac5e6bb(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_8d14e993dfc256cbadfc2a745e86369f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_4a9e2ff1b9465c938a87e7fdb6fec56f(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_473fc3057f975897a46df1141308eef3()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_5ba94731e21c5a74a77e41d54c0d1eda)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_bd1d57df96c85788aa8767b35f0c3135)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_cdce5c464e0c515b97be00a9cff8060f)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_cf08afa78029512aa5975b6d6e39fa09)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::cols;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_adb98bbd575d5124b1a5f209fb5a305c)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::coeff;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_406a7793574456a4a730a7e85bbdc2ce)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::coeff;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_c139907d4e4857dab16eeb7e9df44ae9)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_f0869e4a544056079a4302d3d0b5f7c9)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_3e31ca41b56c5c9d8670b168f5b826c8)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_e42a7a46efde504a804614589794f371)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::coeffRef;
    struct ::std::complex< double >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_63a951d2c5c555bd94257611cd3c291f)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::data;
    struct ::std::complex< double >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_ea3f4379702d5a2688427db7ff2a51da)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_eb922031529e551baaa733c4e7b84d4f)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_9f015b80ca1b51489c6305528497a26f)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_dc22a9390b6852839a85aecec8c2b1b3)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_74fbdfdbba0351b8bb8a28e05ddca441)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_9e2bc793ab095219a4d0b1b04f562a98)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_200772c453e35f46a37807adebb9c6cf)(long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_8103c1b90f175dc58089c68ca9379232)(long int , long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_1c0a47c9711b5cce88b8434ea8de8737)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_c0b3de5bb9a85d7ab727a43de0f6e190)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_24ba8277f3ab58259911f27c38976332)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_474f9e84859b5a4c95e48db97ac5e6bb)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_8d14e993dfc256cbadfc2a745e86369f)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 4, 1, 0, 4, 1 > >::*method_pointer_4a9e2ff1b9465c938a87e7fdb6fec56f)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::setRandom;
    void  (*method_pointer_1e41facbf3c05fb38336b0200e44a4da)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > >, boost::noncopyable > class_473fc3057f975897a46df1141308eef3("_PlainObjectBase_473fc3057f975897a46df1141308eef3", "", boost::python::no_init);
    class_473fc3057f975897a46df1141308eef3.def("base", method_pointer_5ba94731e21c5a74a77e41d54c0d1eda, boost::python::return_internal_reference<>(), "");
    class_473fc3057f975897a46df1141308eef3.def("base", autowig::method_decorator_5ba94731e21c5a74a77e41d54c0d1eda);
    class_473fc3057f975897a46df1141308eef3.def("base", method_pointer_bd1d57df96c85788aa8767b35f0c3135, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_473fc3057f975897a46df1141308eef3.def("rows", method_pointer_cdce5c464e0c515b97be00a9cff8060f, "");
    class_473fc3057f975897a46df1141308eef3.def("cols", method_pointer_cf08afa78029512aa5975b6d6e39fa09, "");
    class_473fc3057f975897a46df1141308eef3.def("coeff", method_pointer_adb98bbd575d5124b1a5f209fb5a305c, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_473fc3057f975897a46df1141308eef3.def("coeff", method_pointer_406a7793574456a4a730a7e85bbdc2ce, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_473fc3057f975897a46df1141308eef3.def("coeff_ref", method_pointer_c139907d4e4857dab16eeb7e9df44ae9, boost::python::return_internal_reference<>(), "");
    class_473fc3057f975897a46df1141308eef3.def("coeff_ref", autowig::method_decorator_c139907d4e4857dab16eeb7e9df44ae9);
    class_473fc3057f975897a46df1141308eef3.def("coeff_ref", method_pointer_f0869e4a544056079a4302d3d0b5f7c9, boost::python::return_internal_reference<>(), "");
    class_473fc3057f975897a46df1141308eef3.def("coeff_ref", autowig::method_decorator_f0869e4a544056079a4302d3d0b5f7c9);
    class_473fc3057f975897a46df1141308eef3.def("coeff_ref", method_pointer_3e31ca41b56c5c9d8670b168f5b826c8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_473fc3057f975897a46df1141308eef3.def("coeff_ref", method_pointer_e42a7a46efde504a804614589794f371, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_473fc3057f975897a46df1141308eef3.def("data", method_pointer_63a951d2c5c555bd94257611cd3c291f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_473fc3057f975897a46df1141308eef3.def("data", method_pointer_ea3f4379702d5a2688427db7ff2a51da, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_473fc3057f975897a46df1141308eef3.def("resize", method_pointer_eb922031529e551baaa733c4e7b84d4f, "");
    class_473fc3057f975897a46df1141308eef3.def("resize", method_pointer_9f015b80ca1b51489c6305528497a26f, "");
    class_473fc3057f975897a46df1141308eef3.def("resize", method_pointer_dc22a9390b6852839a85aecec8c2b1b3, "");
    class_473fc3057f975897a46df1141308eef3.def("resize", method_pointer_74fbdfdbba0351b8bb8a28e05ddca441, "");
    class_473fc3057f975897a46df1141308eef3.def("conservative_resize", method_pointer_9e2bc793ab095219a4d0b1b04f562a98, "");
    class_473fc3057f975897a46df1141308eef3.def("set_constant", method_pointer_200772c453e35f46a37807adebb9c6cf, boost::python::return_internal_reference<>(), "");
    class_473fc3057f975897a46df1141308eef3.def("set_constant", autowig::method_decorator_200772c453e35f46a37807adebb9c6cf);
    class_473fc3057f975897a46df1141308eef3.def("set_constant", method_pointer_8103c1b90f175dc58089c68ca9379232, boost::python::return_internal_reference<>(), "");
    class_473fc3057f975897a46df1141308eef3.def("set_constant", autowig::method_decorator_8103c1b90f175dc58089c68ca9379232);
    class_473fc3057f975897a46df1141308eef3.def("set_zero", method_pointer_1c0a47c9711b5cce88b8434ea8de8737, boost::python::return_internal_reference<>(), "");
    class_473fc3057f975897a46df1141308eef3.def("set_zero", autowig::method_decorator_1c0a47c9711b5cce88b8434ea8de8737);
    class_473fc3057f975897a46df1141308eef3.def("set_zero", method_pointer_c0b3de5bb9a85d7ab727a43de0f6e190, boost::python::return_internal_reference<>(), "");
    class_473fc3057f975897a46df1141308eef3.def("set_zero", autowig::method_decorator_c0b3de5bb9a85d7ab727a43de0f6e190);
    class_473fc3057f975897a46df1141308eef3.def("set_ones", method_pointer_24ba8277f3ab58259911f27c38976332, boost::python::return_internal_reference<>(), "");
    class_473fc3057f975897a46df1141308eef3.def("set_ones", autowig::method_decorator_24ba8277f3ab58259911f27c38976332);
    class_473fc3057f975897a46df1141308eef3.def("set_ones", method_pointer_474f9e84859b5a4c95e48db97ac5e6bb, boost::python::return_internal_reference<>(), "");
    class_473fc3057f975897a46df1141308eef3.def("set_ones", autowig::method_decorator_474f9e84859b5a4c95e48db97ac5e6bb);
    class_473fc3057f975897a46df1141308eef3.def("set_random", method_pointer_8d14e993dfc256cbadfc2a745e86369f, boost::python::return_internal_reference<>(), "");
    class_473fc3057f975897a46df1141308eef3.def("set_random", autowig::method_decorator_8d14e993dfc256cbadfc2a745e86369f);
    class_473fc3057f975897a46df1141308eef3.def("set_random", method_pointer_4a9e2ff1b9465c938a87e7fdb6fec56f, boost::python::return_internal_reference<>(), "");
    class_473fc3057f975897a46df1141308eef3.def("set_random", autowig::method_decorator_4a9e2ff1b9465c938a87e7fdb6fec56f);
    class_473fc3057f975897a46df1141308eef3.def("check_template_params", method_pointer_1e41facbf3c05fb38336b0200e44a4da, "");
    class_473fc3057f975897a46df1141308eef3.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 4, 1, 0, 4, 1 > > > >();
    }

}