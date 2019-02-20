def controller(asg):
    from scons_tools.site_autowig.controller.statiskit_stl import controller as stl_controller
    asg = stl_controller(asg, library=False)
    # for dcl in asg['::Eigen::internal'].declarations(nested=True):
    #     dcl.pybind11_export = False
    for cls in ['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >',
                'class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >',
                'class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >']:
        for mtd in asg[cls].methods(access='public'):
            if mtd.localname == 'trace':
                mtd.pybind11_export = False
    for fct in asg.functions():
        if fct.localname in ['_check_template_params', 'operator()', 'operator[]']:
            fct.pybind11_export = False
    for cls in ['Vectors', 'RowVectors', 'Matrices']:
        cls = asg['::statiskit::linalg::' + cls].qualified_type.unqualified_type
        for ctr in cls.constructors():
            if ctr.nb_parameters > 0:
                ctr.pybind11_export = False
    for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 > >'].functions():
        if method.prototype(desugared=False) == 'void  transposeInPlace()':
            method.pybind11_export = False
            break
    for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
        if method.prototype(desugared=False) == 'class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >, 10 >  triangularView()':
            method.pybind11_export = False
            break
    for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
        if method.prototype(desugared=False) == 'class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 5 > const triangularView() const':
            method.pybind11_export = False
            break
    for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
        if method.prototype(desugared=False) == 'class ::Eigen::TriangularView< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const, 2 > const triangularView() const':
            method.pybind11_export = False
            break
    for method in asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::PlainObjectBase< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
        if method.prototype(desugared=False) == 'void  conservativeResize(::Eigen::Index )':
            method.pybind11_export = False
            break
    for method in asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].functions():
        if method.prototype(desugared=False) == '::Eigen::MatrixBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >::RealScalar  lpNorm() const':
            method.pybind11_export = False
            break
    for method in asg['class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::FullPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
        if method.prototype(desugared=False) == 'void  _solve_impl_transposed(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &) const':
            method.pybind11_export = False
            break
    for method in asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].methods(access='public') + asg['class ::Eigen::DenseBase< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > >'].functions():
        if method.prototype(desugared=False) == 'void  transposeInPlace()':
            method.pybind11_export = False
            break
    for method in asg['class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].methods(access='public') + asg['class ::Eigen::PartialPivLU< class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > >'].functions():
        if method.prototype(desugared=False) == 'void  _solve_impl_transposed(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > &) const':
            method.pybind11_export = False
            break
    return asg

def generator(asg, module, decorator):
    import autowig
    import itertools
    autowig.generator.plugin = 'pybind11'
    nodes = [typedef.qualified_type.unqualified_type for typedef in asg['::statiskit::linalg'].typedefs()]
    nodes = list(itertools.chain(*[node.bases(inherited=True) for node in nodes])) + nodes + asg['::statiskit::linalg'].declarations()
    wrappers = autowig.generator(asg, nodes, module=module,
                                             decorator=decorator,
                                             closure=False)
    return wrappers