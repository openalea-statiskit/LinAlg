#include "_ieigen.h"


namespace autowig
{
    void method_decorator_30333f0f8cb95e32aea0ba7094ff8716(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)     { instance.real() = param_out; }
    void method_decorator_cbb6434e6419522bb98a6bdaf1a1b3fc(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)     { instance.setIdentity() = param_out; }
    void method_decorator_659b452f1cc650a2bd932fd761ea8141(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, long int  param_in_0, long int  param_in_1, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)     { instance.setIdentity(param_in_0, param_in_1) = param_out; }
    void method_decorator_5f5cad827fbe5b119e9a803accce77a1(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & param_out)     { instance.forceAlignedAccess() = param_out; }
    void method_decorator_c9905547a4f85c4bb484a1f4111cc515(class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > & instance, class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >  & param_out)     { instance.matrix() = param_out; }
}


void wrapper_e7b66c04674d56fb9aa7c84709197442()
{

    std::string name_4851a98e848e5c80a7b2f12fcc62fefe = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".eigen");
    boost::python::object module_4851a98e848e5c80a7b2f12fcc62fefe(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4851a98e848e5c80a7b2f12fcc62fefe.c_str()))));
    boost::python::scope().attr("eigen") = module_4851a98e848e5c80a7b2f12fcc62fefe;
    boost::python::scope scope_4851a98e848e5c80a7b2f12fcc62fefe = module_4851a98e848e5c80a7b2f12fcc62fefe;
    long int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_0d2bcafb85115d8090c664deea57ac64)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::diagonalSize;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_7e6592eaa3df56a79b5521924b6c3e8d)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::conjugate;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_ba596d3605e05e3b8e61f07b6da848fc)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::real;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_30333f0f8cb95e32aea0ba7094ff8716)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::real;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_d446762f4f575143a1af3815bf3d470e)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::squaredNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_bc229418c3e45d5e82d828957075628f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::norm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_162c0bd316c95bdeac7d9a4487929b52)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::blueNorm;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_b0e3d752969d58a7bf7f0cc050c641b9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::hypotNorm;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_c08c9940cbfe5f41a36006feee94d82f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::normalized;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  const (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_ca882baf94c55d909b5bbe95ffe713c9)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::stableNormalized;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_5402c5d800b650c0a18ae4ac1120db4f)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::normalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_8020103fb7db56a2ad3a39bdc0791f76)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::stableNormalize;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_888b7e92fb4f54ddb8662e96bcd27dc5)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::adjointInPlace;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_cbb6434e6419522bb98a6bdaf1a1b3fc)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setIdentity;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_659b452f1cc650a2bd932fd761ea8141)(long int , long int ) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::setIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_e199c06095415fb6ad64937fc262df64)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::isIdentity;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_79ac02eec8fe5c20848e7a0d97418fc9)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::isDiagonal;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_aaebb52da6b25588810fa74d9be2ac59)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::isUpperTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_e5d816bf84605f23b891236499d28d62)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::isLowerTriangular;
    bool  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_0e9c7efc168e5a59ab14810fdc545cdb)(int  const &) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::isUnitary;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_e19e2e387afa5009a827d476b74440fb)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::forceAlignedAccess;
    class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_5f5cad827fbe5b119e9a803accce77a1)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::forceAlignedAccess;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_a7b8a6dc84d458a28ac3169fdea51242)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::trace;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >  & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_c9905547a4f85c4bb484a1f4111cc515)() = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::matrix;
    class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >  const & (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_f77f4650b6f75819bee7dda40a35286f)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::matrix;
    int  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_69ce4eb45b095de69b41a2db35c56d05)() const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::determinant;
    class ::Eigen::Matrix< int, 3, 1, 0, 3, 1 >  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_64db30c9c36859e1ba82de4dbaba26d2)(long int , long int , long int ) const = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::eulerAngles;
    void  (::Eigen::MatrixBase< ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::*method_pointer_e7d0bce56b0f5dd3b9228dec6ab02775)(int  &, int  &) = &::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >::makeHouseholderInPlace;
    boost::python::class_< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > >, autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > >, boost::python::bases< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > > > class_e7b66c04674d56fb9aa7c84709197442("_MatrixBase_e7b66c04674d56fb9aa7c84709197442", "", boost::python::no_init);
    class_e7b66c04674d56fb9aa7c84709197442.def("diagonal_size", method_pointer_0d2bcafb85115d8090c664deea57ac64, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("conjugate", method_pointer_7e6592eaa3df56a79b5521924b6c3e8d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e7b66c04674d56fb9aa7c84709197442.def("real", method_pointer_ba596d3605e05e3b8e61f07b6da848fc, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e7b66c04674d56fb9aa7c84709197442.def("real", method_pointer_30333f0f8cb95e32aea0ba7094ff8716, boost::python::return_internal_reference<>(), "");
    class_e7b66c04674d56fb9aa7c84709197442.def("real", autowig::method_decorator_30333f0f8cb95e32aea0ba7094ff8716);
    class_e7b66c04674d56fb9aa7c84709197442.def("squared_norm", method_pointer_d446762f4f575143a1af3815bf3d470e, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("norm", method_pointer_bc229418c3e45d5e82d828957075628f, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("blue_norm", method_pointer_162c0bd316c95bdeac7d9a4487929b52, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("hypot_norm", method_pointer_b0e3d752969d58a7bf7f0cc050c641b9, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("normalized", method_pointer_c08c9940cbfe5f41a36006feee94d82f, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("stable_normalized", method_pointer_ca882baf94c55d909b5bbe95ffe713c9, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("normalize", method_pointer_5402c5d800b650c0a18ae4ac1120db4f, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("stable_normalize", method_pointer_8020103fb7db56a2ad3a39bdc0791f76, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("adjoint_in_place", method_pointer_888b7e92fb4f54ddb8662e96bcd27dc5, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("set_identity", method_pointer_cbb6434e6419522bb98a6bdaf1a1b3fc, boost::python::return_internal_reference<>(), "");
    class_e7b66c04674d56fb9aa7c84709197442.def("set_identity", autowig::method_decorator_cbb6434e6419522bb98a6bdaf1a1b3fc);
    class_e7b66c04674d56fb9aa7c84709197442.def("set_identity", method_pointer_659b452f1cc650a2bd932fd761ea8141, boost::python::return_internal_reference<>(), "");
    class_e7b66c04674d56fb9aa7c84709197442.def("set_identity", autowig::method_decorator_659b452f1cc650a2bd932fd761ea8141);
    class_e7b66c04674d56fb9aa7c84709197442.def("is_identity", method_pointer_e199c06095415fb6ad64937fc262df64, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("is_diagonal", method_pointer_79ac02eec8fe5c20848e7a0d97418fc9, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("is_upper_triangular", method_pointer_aaebb52da6b25588810fa74d9be2ac59, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("is_lower_triangular", method_pointer_e5d816bf84605f23b891236499d28d62, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("is_unitary", method_pointer_0e9c7efc168e5a59ab14810fdc545cdb, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("force_aligned_access", method_pointer_e19e2e387afa5009a827d476b74440fb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e7b66c04674d56fb9aa7c84709197442.def("force_aligned_access", method_pointer_5f5cad827fbe5b119e9a803accce77a1, boost::python::return_internal_reference<>(), "");
    class_e7b66c04674d56fb9aa7c84709197442.def("force_aligned_access", autowig::method_decorator_5f5cad827fbe5b119e9a803accce77a1);
    class_e7b66c04674d56fb9aa7c84709197442.def("trace", method_pointer_a7b8a6dc84d458a28ac3169fdea51242, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("matrix", method_pointer_c9905547a4f85c4bb484a1f4111cc515, boost::python::return_internal_reference<>(), "");
    class_e7b66c04674d56fb9aa7c84709197442.def("matrix", autowig::method_decorator_c9905547a4f85c4bb484a1f4111cc515);
    class_e7b66c04674d56fb9aa7c84709197442.def("matrix", method_pointer_f77f4650b6f75819bee7dda40a35286f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e7b66c04674d56fb9aa7c84709197442.def("determinant", method_pointer_69ce4eb45b095de69b41a2db35c56d05, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("euler_angles", method_pointer_64db30c9c36859e1ba82de4dbaba26d2, "");
    class_e7b66c04674d56fb9aa7c84709197442.def("make_householder_in_place", method_pointer_e7d0bce56b0f5dd3b9228dec6ab02775, "");

    if(std::is_class< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::Eigen::MatrixBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > >, autowig::HeldType< class ::Eigen::DenseBase< class ::Eigen::Matrix< int, 3, 3, 0, 3, 3 > > > >();
    }

}