#include "_ieigen.h"


namespace autowig
{
    void method_decorator_2eeb7b273cf0505ab9cf96b76a518f5e(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >  & param_out)
    { instance.base() = param_out; }
    void method_decorator_a86ffb9468425dcf878a3005cf42acd3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_d2187bc495fb58f7999cb3a276f0f279(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, struct ::std::complex< double >  & param_out)
    { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_7f3f68e58e215de8b941fd04dabd3f7b(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, struct ::std::complex< double >  const & param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_c1b50836ef425eaf8d12a9206f1c58a9(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, struct ::std::complex< double >  const & param_in_2, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_6a25643400bb57028be4f3eae669b8d4(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setZero(param_in_0) = param_out; }
    void method_decorator_f7af99e518245fef9583c71e782d19d3(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_9e9b4a8490f05a9a94019db7332d41b8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_db09e39f970653c3acb3051b34c009c5(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_66b994ee1d375f688dbd3427f0b6c5ca(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_9ffb3cabfaa057e0aca463d87df53644(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & param_out)
    { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_843017e869015aed8a8dbbfbb5578d69()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_2eeb7b273cf0505ab9cf96b76a518f5e)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_d3378a53812755f29ee3abf5799c0f25)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_dd139aceac685c098b6ab0c9a766b345)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_48b7e87d6a45503d92c5bbd14c9dad0e)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::cols;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_bc7fda70df8855b6aad1d80b1ed8516e)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::coeff;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_5f31c06569e55f4a9af0233419d4b074)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::coeff;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_a86ffb9468425dcf878a3005cf42acd3)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::coeffRef;
    struct ::std::complex< double >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_d2187bc495fb58f7999cb3a276f0f279)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_2fc259d07d8055ff9e11acb959380144)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::coeffRef;
    struct ::std::complex< double >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_834e7a473b7e5441a0718719ebd494a5)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::coeffRef;
    struct ::std::complex< double >  const * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_c8d8d6158e6f5bf9884a0e63e1328e29)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::data;
    struct ::std::complex< double >  * (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_c09ce40023945a3d8bf2284180dce0cb)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::data;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_44ca63474b085b9291a071545860750e)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_7c162b3a3d2f58e7bc91d952c9a916af)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_c4bd71167cec5ddb991b1fa6de4cb233)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_1a55a0b45bd555d98b765a79a4097d72)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_c6d1c869436b5aa696bf5aa299401ce3)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_51533a3c992854f19ff5d89c8ea55303)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_658c799fbc985b86824fd3d9c5609adf)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::conservativeResize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_c6d0f682c9d156e3b7c4def3b12914ab)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::conservativeResize;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_7f3f68e58e215de8b941fd04dabd3f7b)(long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_c1b50836ef425eaf8d12a9206f1c58a9)(long int , long int , struct ::std::complex< double >  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setConstant;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_6a25643400bb57028be4f3eae669b8d4)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_f7af99e518245fef9583c71e782d19d3)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setZero;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_9e9b4a8490f05a9a94019db7332d41b8)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_db09e39f970653c3acb3051b34c009c5)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setOnes;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_66b994ee1d375f688dbd3427f0b6c5ca)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setRandom;
    class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< ::std::complex< double >, 1, 3, 1, 1, 3 > >::*method_pointer_9ffb3cabfaa057e0aca463d87df53644)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::setRandom;
    void  (*method_pointer_97cf40a573a356eebe453b6d661b0e37)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > > > class_843017e869015aed8a8dbbfbb5578d69("_PlainObjectBase_843017e869015aed8a8dbbfbb5578d69", "", boost::python::no_init);
    class_843017e869015aed8a8dbbfbb5578d69.def("base", method_pointer_2eeb7b273cf0505ab9cf96b76a518f5e, boost::python::return_internal_reference<>(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("base", autowig::method_decorator_2eeb7b273cf0505ab9cf96b76a518f5e);
    class_843017e869015aed8a8dbbfbb5578d69.def("base", method_pointer_d3378a53812755f29ee3abf5799c0f25, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("rows", method_pointer_dd139aceac685c098b6ab0c9a766b345, "");
    class_843017e869015aed8a8dbbfbb5578d69.def("cols", method_pointer_48b7e87d6a45503d92c5bbd14c9dad0e, "");
    class_843017e869015aed8a8dbbfbb5578d69.def("coeff", method_pointer_bc7fda70df8855b6aad1d80b1ed8516e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("coeff", method_pointer_5f31c06569e55f4a9af0233419d4b074, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("coeff_ref", method_pointer_a86ffb9468425dcf878a3005cf42acd3, boost::python::return_internal_reference<>(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("coeff_ref", autowig::method_decorator_a86ffb9468425dcf878a3005cf42acd3);
    class_843017e869015aed8a8dbbfbb5578d69.def("coeff_ref", method_pointer_d2187bc495fb58f7999cb3a276f0f279, boost::python::return_internal_reference<>(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("coeff_ref", autowig::method_decorator_d2187bc495fb58f7999cb3a276f0f279);
    class_843017e869015aed8a8dbbfbb5578d69.def("coeff_ref", method_pointer_2fc259d07d8055ff9e11acb959380144, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("coeff_ref", method_pointer_834e7a473b7e5441a0718719ebd494a5, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("data", method_pointer_c8d8d6158e6f5bf9884a0e63e1328e29, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("data", method_pointer_c09ce40023945a3d8bf2284180dce0cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("resize", method_pointer_44ca63474b085b9291a071545860750e, "");
    class_843017e869015aed8a8dbbfbb5578d69.def("resize", method_pointer_7c162b3a3d2f58e7bc91d952c9a916af, "");
    class_843017e869015aed8a8dbbfbb5578d69.def("resize", method_pointer_c4bd71167cec5ddb991b1fa6de4cb233, "");
    class_843017e869015aed8a8dbbfbb5578d69.def("resize", method_pointer_1a55a0b45bd555d98b765a79a4097d72, "");
    class_843017e869015aed8a8dbbfbb5578d69.def("conservative_resize", method_pointer_c6d1c869436b5aa696bf5aa299401ce3, "");
    class_843017e869015aed8a8dbbfbb5578d69.def("conservative_resize", method_pointer_51533a3c992854f19ff5d89c8ea55303, "");
    class_843017e869015aed8a8dbbfbb5578d69.def("conservative_resize", method_pointer_658c799fbc985b86824fd3d9c5609adf, "");
    class_843017e869015aed8a8dbbfbb5578d69.def("conservative_resize", method_pointer_c6d0f682c9d156e3b7c4def3b12914ab, "");
    class_843017e869015aed8a8dbbfbb5578d69.def("set_constant", method_pointer_7f3f68e58e215de8b941fd04dabd3f7b, boost::python::return_internal_reference<>(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("set_constant", autowig::method_decorator_7f3f68e58e215de8b941fd04dabd3f7b);
    class_843017e869015aed8a8dbbfbb5578d69.def("set_constant", method_pointer_c1b50836ef425eaf8d12a9206f1c58a9, boost::python::return_internal_reference<>(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("set_constant", autowig::method_decorator_c1b50836ef425eaf8d12a9206f1c58a9);
    class_843017e869015aed8a8dbbfbb5578d69.def("set_zero", method_pointer_6a25643400bb57028be4f3eae669b8d4, boost::python::return_internal_reference<>(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("set_zero", autowig::method_decorator_6a25643400bb57028be4f3eae669b8d4);
    class_843017e869015aed8a8dbbfbb5578d69.def("set_zero", method_pointer_f7af99e518245fef9583c71e782d19d3, boost::python::return_internal_reference<>(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("set_zero", autowig::method_decorator_f7af99e518245fef9583c71e782d19d3);
    class_843017e869015aed8a8dbbfbb5578d69.def("set_ones", method_pointer_9e9b4a8490f05a9a94019db7332d41b8, boost::python::return_internal_reference<>(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("set_ones", autowig::method_decorator_9e9b4a8490f05a9a94019db7332d41b8);
    class_843017e869015aed8a8dbbfbb5578d69.def("set_ones", method_pointer_db09e39f970653c3acb3051b34c009c5, boost::python::return_internal_reference<>(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("set_ones", autowig::method_decorator_db09e39f970653c3acb3051b34c009c5);
    class_843017e869015aed8a8dbbfbb5578d69.def("set_random", method_pointer_66b994ee1d375f688dbd3427f0b6c5ca, boost::python::return_internal_reference<>(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("set_random", autowig::method_decorator_66b994ee1d375f688dbd3427f0b6c5ca);
    class_843017e869015aed8a8dbbfbb5578d69.def("set_random", method_pointer_9ffb3cabfaa057e0aca463d87df53644, boost::python::return_internal_reference<>(), "");
    class_843017e869015aed8a8dbbfbb5578d69.def("set_random", autowig::method_decorator_9ffb3cabfaa057e0aca463d87df53644);
    class_843017e869015aed8a8dbbfbb5578d69.def("check_template_params", method_pointer_97cf40a573a356eebe453b6d661b0e37, "");
    class_843017e869015aed8a8dbbfbb5578d69.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< struct ::std::complex< double >, 1, 3, 1, 1, 3 > > > >();
    }

}