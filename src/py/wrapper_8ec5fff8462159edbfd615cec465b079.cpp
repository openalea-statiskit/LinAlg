#include "_ieigen.h"


namespace autowig
{
    void method_decorator_925785638b855dff82cdebdf4e536527(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >  & param_out)     { instance.base() = param_out; }
    void method_decorator_ad67b47f562358d99ede09057787f1a1(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, const int  & param_out)     { instance.coeffRef(param_in_0, param_in_1) = param_out; }
    void method_decorator_bae32bd2ef6d59cfa3a487b2252fbbb8(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, const int  & param_out)     { instance.coeffRef(param_in_0) = param_out; }
    void method_decorator_017a91e829d456b4a1e50eb7d56376b7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, int  const & param_in_1, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1) = param_out; }
    void method_decorator_f51b1d69682f5e4997f07b814c98c205(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, int  const & param_in_2, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setConstant(param_in_0, param_in_1, param_in_2) = param_out; }
    void method_decorator_eb60cd65be3e56e9b8bc95b64923c5a5(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setZero(param_in_0) = param_out; }
    void method_decorator_4dc82726f79857e689d7a43f298dc422(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setZero(param_in_0, param_in_1) = param_out; }
    void method_decorator_1eac94100d565c88bf9407410f843eb7(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setOnes(param_in_0) = param_out; }
    void method_decorator_29694f0e0b715875a19d7006e8d4b035(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setOnes(param_in_0, param_in_1) = param_out; }
    void method_decorator_b0e2728a377f5d13aeff49d79d6906c0(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setRandom(param_in_0) = param_out; }
    void method_decorator_68137dc1f268567e943038a2df359a37(class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & param_out)     { instance.setRandom(param_in_0, param_in_1) = param_out; }
}


void wrapper_8ec5fff8462159edbfd615cec465b079()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_925785638b855dff82cdebdf4e536527)() = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::base;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_525b8bf625e4590d8fe0b6d6a75e47ec)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::base;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_1cef9be497af51c59e09ccea7febd3d4)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::rows;
    long int  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_e1ce349b8a9e5666a93c1a4b93edf2af)() const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::cols;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_75133701cba05985b6761631e36dd02b)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::coeff;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_8eae8a88d0425e9aafc26d8ed4bd1f9e)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::coeff;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_ad67b47f562358d99ede09057787f1a1)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::coeffRef;
    int  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_bae32bd2ef6d59cfa3a487b2252fbbb8)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_a1be7ed422e555eebf11259dd6540a01)(long int , long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::coeffRef;
    int  const & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_84eae4d9d3d65d2e8734520cb9af5a9a)(long int ) const = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::coeffRef;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_a932abaa45f85f519e1e712a3b850c49)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_1a675e4a39415495b9bc090d07d0a474)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_8bc49d8e4eb75700805f6b45bf51db4b)(enum ::Eigen::NoChange_t , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_7054e2cf93e4597989ab73d29a6689f4)(long int , enum ::Eigen::NoChange_t ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::resize;
    void  (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_ab7d04869ee85adab093ee7247834fe5)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::conservativeResize;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_017a91e829d456b4a1e50eb7d56376b7)(long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_f51b1d69682f5e4997f07b814c98c205)(long int , long int , int  const &) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setConstant;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_eb60cd65be3e56e9b8bc95b64923c5a5)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_4dc82726f79857e689d7a43f298dc422)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setZero;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_1eac94100d565c88bf9407410f843eb7)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_29694f0e0b715875a19d7006e8d4b035)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setOnes;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_b0e2728a377f5d13aeff49d79d6906c0)(long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setRandom;
    class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 >  & (::Eigen::PlainObjectBase< ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::*method_pointer_68137dc1f268567e943038a2df359a37)(long int , long int ) = &::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::setRandom;
    void  (*method_pointer_3d6fe0ce7b88567c83b2599e92873ae1)() = ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >::_check_template_params;
    boost::python::class_< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > >, autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > >, boost::python::bases< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > >, boost::noncopyable > class_8ec5fff8462159edbfd615cec465b079("_PlainObjectBase_8ec5fff8462159edbfd615cec465b079", "", boost::python::no_init);
    class_8ec5fff8462159edbfd615cec465b079.def("base", method_pointer_925785638b855dff82cdebdf4e536527, boost::python::return_internal_reference<>(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("base", autowig::method_decorator_925785638b855dff82cdebdf4e536527);
    class_8ec5fff8462159edbfd615cec465b079.def("base", method_pointer_525b8bf625e4590d8fe0b6d6a75e47ec, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("rows", method_pointer_1cef9be497af51c59e09ccea7febd3d4, "");
    class_8ec5fff8462159edbfd615cec465b079.def("cols", method_pointer_e1ce349b8a9e5666a93c1a4b93edf2af, "");
    class_8ec5fff8462159edbfd615cec465b079.def("coeff", method_pointer_75133701cba05985b6761631e36dd02b, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("coeff", method_pointer_8eae8a88d0425e9aafc26d8ed4bd1f9e, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("coeff_ref", method_pointer_ad67b47f562358d99ede09057787f1a1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("coeff_ref", autowig::method_decorator_ad67b47f562358d99ede09057787f1a1);
    class_8ec5fff8462159edbfd615cec465b079.def("coeff_ref", method_pointer_bae32bd2ef6d59cfa3a487b2252fbbb8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("coeff_ref", autowig::method_decorator_bae32bd2ef6d59cfa3a487b2252fbbb8);
    class_8ec5fff8462159edbfd615cec465b079.def("coeff_ref", method_pointer_a1be7ed422e555eebf11259dd6540a01, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("coeff_ref", method_pointer_84eae4d9d3d65d2e8734520cb9af5a9a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("resize", method_pointer_a932abaa45f85f519e1e712a3b850c49, "");
    class_8ec5fff8462159edbfd615cec465b079.def("resize", method_pointer_1a675e4a39415495b9bc090d07d0a474, "");
    class_8ec5fff8462159edbfd615cec465b079.def("resize", method_pointer_8bc49d8e4eb75700805f6b45bf51db4b, "");
    class_8ec5fff8462159edbfd615cec465b079.def("resize", method_pointer_7054e2cf93e4597989ab73d29a6689f4, "");
    class_8ec5fff8462159edbfd615cec465b079.def("conservative_resize", method_pointer_ab7d04869ee85adab093ee7247834fe5, "");
    class_8ec5fff8462159edbfd615cec465b079.def("set_constant", method_pointer_017a91e829d456b4a1e50eb7d56376b7, boost::python::return_internal_reference<>(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("set_constant", autowig::method_decorator_017a91e829d456b4a1e50eb7d56376b7);
    class_8ec5fff8462159edbfd615cec465b079.def("set_constant", method_pointer_f51b1d69682f5e4997f07b814c98c205, boost::python::return_internal_reference<>(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("set_constant", autowig::method_decorator_f51b1d69682f5e4997f07b814c98c205);
    class_8ec5fff8462159edbfd615cec465b079.def("set_zero", method_pointer_eb60cd65be3e56e9b8bc95b64923c5a5, boost::python::return_internal_reference<>(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("set_zero", autowig::method_decorator_eb60cd65be3e56e9b8bc95b64923c5a5);
    class_8ec5fff8462159edbfd615cec465b079.def("set_zero", method_pointer_4dc82726f79857e689d7a43f298dc422, boost::python::return_internal_reference<>(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("set_zero", autowig::method_decorator_4dc82726f79857e689d7a43f298dc422);
    class_8ec5fff8462159edbfd615cec465b079.def("set_ones", method_pointer_1eac94100d565c88bf9407410f843eb7, boost::python::return_internal_reference<>(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("set_ones", autowig::method_decorator_1eac94100d565c88bf9407410f843eb7);
    class_8ec5fff8462159edbfd615cec465b079.def("set_ones", method_pointer_29694f0e0b715875a19d7006e8d4b035, boost::python::return_internal_reference<>(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("set_ones", autowig::method_decorator_29694f0e0b715875a19d7006e8d4b035);
    class_8ec5fff8462159edbfd615cec465b079.def("set_random", method_pointer_b0e2728a377f5d13aeff49d79d6906c0, boost::python::return_internal_reference<>(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("set_random", autowig::method_decorator_b0e2728a377f5d13aeff49d79d6906c0);
    class_8ec5fff8462159edbfd615cec465b079.def("set_random", method_pointer_68137dc1f268567e943038a2df359a37, boost::python::return_internal_reference<>(), "");
    class_8ec5fff8462159edbfd615cec465b079.def("set_random", autowig::method_decorator_68137dc1f268567e943038a2df359a37);
    class_8ec5fff8462159edbfd615cec465b079.def("check_template_params", method_pointer_3d6fe0ce7b88567c83b2599e92873ae1, "");
    class_8ec5fff8462159edbfd615cec465b079.staticmethod("check_template_params");

    if(std::is_class< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 1, 2, 1, 1, 2 > > > >();
    }

}