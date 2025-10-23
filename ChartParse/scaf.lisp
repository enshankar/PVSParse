(in-package :pvs)

(defun atomic_peg-e1-3 (t38601)
  (typecase t38601
    (concat_2 (concat_2-e1 t38601))
    (choice_2 (choice_2-e1 t38601))))
(defun atomic_peg-e2-3 (t38602)
  (typecase t38602
    (concat_2 (concat_2-e2 t38602))
    (choice_2 (choice_2-e2 t38602))))
(defun atomic_peg-e-3 (t38606)
  (typecase t38606
    (check_2 (check_2-e t38606))
    (neg_2 (neg_2-e t38606))))
(defstruct (epsilon_2 (:constructor make-epsilon_2 nil)
            (:predicate epsilon_2?)))
(defstruct (failure_2 (:constructor make-failure_2 nil)
            (:predicate failure_2?)))
(defstruct (any_2 (:constructor make-any_2 nil) (:predicate any_2?)))
(defun make-terminal_2_unary ()
  (lambda (x38596) (let ((a x38596)) (make-terminal_2 a))))
(defstruct (terminal_2 (:constructor make-terminal_2 (a))
            (:predicate terminal_2?))
  a)
(defun make-concat_2_unary ()
  (lambda (x38597)
    (let ((e1 (svref x38597 0)) (e2 (svref x38597 1)))
      (make-concat_2 e1 e2))))
(defstruct (concat_2 (:constructor make-concat_2 (e1 e2))
            (:predicate concat_2?))
  e1
  e2)
(defun make-choice_2_unary ()
  (lambda (x38600)
    (let ((e1 (svref x38600 0)) (e2 (svref x38600 1)))
      (make-choice_2 e1 e2))))
(defstruct (choice_2 (:constructor make-choice_2 (e1 e2))
            (:predicate choice_2?))
  e1
  e2)
(defun make-check_2_unary ()
  (lambda (x38603) (let ((e x38603)) (make-check_2 e))))
(defstruct (check_2 (:constructor make-check_2 (e))
            (:predicate check_2?))
  e)
(defun make-neg_2_unary ()
  (lambda (x38605) (let ((e x38605)) (make-neg_2 e))))
(defstruct (neg_2 (:constructor make-neg_2 (e)) (:predicate neg_2?)) e)
(defun atomic_peg_ord_0 ()
  #'(lambda (x)
      (if (the boolean (epsilon_2? x))
          0
        (if (the boolean (failure_2? x))
            1
          (if (the boolean (any_2? x))
              2
            (if (the boolean (terminal_2? x))
                3
              (if (the boolean (concat_2? x))
                  4
                (if (the boolean (choice_2? x))
                    5
                  (if (the boolean (check_2? x)) 6 7)))))))))
(defun _atomic_peg_ord_0 (x)
  (if (the boolean (epsilon_2? x))
      0
    (if (the boolean (failure_2? x))
        1
      (if (the boolean (any_2? x))
          2
        (if (the boolean (terminal_2? x))
            3
          (if (the boolean (concat_2? x))
              4
            (if (the boolean (choice_2? x))
                5
              (if (the boolean (check_2? x)) 6 7))))))))
(defun atomic_peg_ord!_0 (x)
  (if (the boolean (epsilon_2? x))
      0
    (if (the boolean (failure_2? x))
        1
      (if (the boolean (any_2? x))
          2
        (if (the boolean (terminal_2? x))
            3
          (if (the boolean (concat_2? x))
              4
            (if (the boolean (choice_2? x))
                5
              (if (the boolean (check_2? x)) 6 7))))))))
(defun scaf_ord_1 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (x)
      (if (the boolean (epsilon_2? x))
          0
        (if (the boolean (failure_2? x))
            1
          (if (the boolean (any_2? x))
              2
            (if (the boolean (terminal_2? x))
                3
              (if (the boolean (concat_2? x))
                  4
                (if (the boolean (choice_2? x))
                    5
                  (if (the boolean (check_2? x)) 6 7)))))))))
(defun scaf__ord_1 (num_non_terminals x)
  (declare (type (integer 0) num_non_terminals))
  (if (the boolean (epsilon_2? x))
      0
    (if (the boolean (failure_2? x))
        1
      (if (the boolean (any_2? x))
          2
        (if (the boolean (terminal_2? x))
            3
          (if (the boolean (concat_2? x))
              4
            (if (the boolean (choice_2? x))
                5
              (if (the boolean (check_2? x)) 6 7))))))))
(defun scaf!ord_1 (num_non_terminals x)
  (declare (type (integer 0) num_non_terminals))
  (declare (type (integer 0) num_non_terminals))
  (if (the boolean (epsilon_2? x))
      0
    (if (the boolean (failure_2? x))
        1
      (if (the boolean (any_2? x))
          2
        (if (the boolean (terminal_2? x))
            3
          (if (the boolean (concat_2? x))
              4
            (if (the boolean (choice_2? x))
                5
              (if (the boolean (check_2? x)) 6 7))))))))
(defun atomic_peg_subterm_0 ()
  #'(lambda (lamvar#0)
      (let ((x (project 1 lamvar#0)) (y (project 2 lamvar#0)))
        (the boolean (pvs__= x y)))))
(defun _atomic_peg_subterm_0 (x y) (the boolean (pvs__= x y)))
(defun atomic_peg_subterm!_0 (x y) (the boolean (pvs__= x y)))
(defun scaf_subterm_1 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((x (project 1 lamvar#0)) (y (project 2 lamvar#0)))
        (the boolean (pvs__= x y)))))
(defun scaf__subterm_1 (num_non_terminals x y)
  (declare (type (integer 0) num_non_terminals))
  (the boolean (pvs__= x y)))
(defun scaf!subterm_1 (num_non_terminals x y)
  (declare (type (integer 0) num_non_terminals))
  (declare (type (integer 0) num_non_terminals))
  (the boolean (pvs__= x y)))
(defun atomic_peg_<<_0 ()
  #'(lambda (lamvar#0)
      (let ((x (project 1 lamvar#0)) (y (project 2 lamvar#0)))
        (the boolean nil))))
(defun _atomic_peg_<<_0 (x y) (the boolean nil))
(defun atomic_peg_<<!_0 (x y) (the boolean nil))
(defun scaf_<<_1 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((x (project 1 lamvar#0)) (y (project 2 lamvar#0)))
        (the boolean nil))))
(defun scaf__<<_1 (num_non_terminals x y)
  (declare (type (integer 0) num_non_terminals))
  (the boolean nil))
(defun scaf!<<_1 (num_non_terminals x y)
  (declare (type (integer 0) num_non_terminals))
  (declare (type (integer 0) num_non_terminals))
  (the boolean nil))
(defun atomic_peg_reduce_nat_0 ()
  #'(lambda (lamvar#0)
      (let ((epsilon?_fun (project 1 lamvar#0))
            (failure?_fun (project 2 lamvar#0))
            (any?_fun (project 3 lamvar#0))
            (terminal?_fun (project 4 lamvar#0))
            (concat?_fun (project 5 lamvar#0))
            (or?_fun (project 6 lamvar#0))
            (and?_fun (project 7 lamvar#0))
            (not?_fun (project 8 lamvar#0)))
        (declare (type (integer 0) epsilon?_fun)
         (type (integer 0) failure?_fun) (type (integer 0) any?_fun))
        #'(lambda (atomic_peg_adtvar)
            (the (integer 0)
                 (let ((red
                        (pvs-funcall (atomic_peg_reduce_nat_0)
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       (the (integer 0) epsilon?_fun)
                                       (the (integer 0) failure?_fun)
                                       (the (integer 0) any?_fun)
                                       terminal?_fun
                                       concat?_fun
                                       or?_fun
                                       and?_fun
                                       not?_fun)))))
                   (declare (type nil red))
                   (the (integer 0)
                        (the (integer 0)
                             (if (the
                                  boolean
                                  (epsilon_2? atomic_peg_adtvar))
                                 (the (integer 0) epsilon?_fun)
                               (the
                                (integer 0)
                                (if
                                 (the
                                  boolean
                                  (failure_2? atomic_peg_adtvar))
                                 (the (integer 0) failure?_fun)
                                 (the
                                  (integer 0)
                                  (if
                                   (the
                                    boolean
                                    (any_2? atomic_peg_adtvar))
                                   (the (integer 0) any?_fun)
                                   (the
                                    (integer 0)
                                    (if
                                     (the
                                      boolean
                                      (terminal_2? atomic_peg_adtvar))
                                     (the
                                      (integer 0)
                                      (pvs-funcall
                                       terminal?_fun
                                       (terminal_2-a
                                        atomic_peg_adtvar)))
                                     (the
                                      (integer 0)
                                      (if
                                       (the
                                        boolean
                                        (concat_2? atomic_peg_adtvar))
                                       (the
                                        (integer 0)
                                        (pvs-funcall
                                         concat?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3
                                             atomic_peg_adtvar))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e2-3
                                             atomic_peg_adtvar))))))
                                       (the
                                        (integer 0)
                                        (if
                                         (the
                                          boolean
                                          (choice_2?
                                           atomic_peg_adtvar))
                                         (the
                                          (integer 0)
                                          (pvs-funcall
                                           or?_fun
                                           (the
                                            (simple-array t)
                                            (pvs2cl_tuple
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e1-3
                                               atomic_peg_adtvar))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e2-3
                                               atomic_peg_adtvar))))))
                                         (the
                                          (integer 0)
                                          (if
                                           (the
                                            boolean
                                            (check_2?
                                             atomic_peg_adtvar))
                                           (the
                                            (integer 0)
                                            (pvs-funcall
                                             and?_fun
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e-3
                                               atomic_peg_adtvar))))
                                           (the
                                            (integer 0)
                                            (pvs-funcall
                                             not?_fun
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e-3
                                               atomic_peg_adtvar)))))))))))))))))))))))))
(defun _atomic_peg_reduce_nat_0
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (declare (type (integer 0) epsilon?_fun)
   (type (integer 0) failure?_fun) (type (integer 0) any?_fun))
  (the (integer 0)
       (let ((red
              (pvs-funcall (atomic_peg_reduce_nat_0)
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (the (integer 0) epsilon?_fun)
                                 (the (integer 0) failure?_fun)
                                 (the (integer 0) any?_fun)
                                 terminal?_fun
                                 concat?_fun
                                 or?_fun
                                 and?_fun
                                 not?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (epsilon_2? atomic_peg_adtvar))
                       (the (integer 0) epsilon?_fun)
                     (the (integer 0)
                          (if (the boolean
                                   (failure_2? atomic_peg_adtvar))
                              (the (integer 0) failure?_fun)
                            (the (integer 0)
                                 (if
                                  (the
                                   boolean
                                   (any_2? atomic_peg_adtvar))
                                  (the (integer 0) any?_fun)
                                  (the
                                   (integer 0)
                                   (if
                                    (the
                                     boolean
                                     (terminal_2? atomic_peg_adtvar))
                                    (the
                                     (integer 0)
                                     (pvs-funcall
                                      terminal?_fun
                                      (terminal_2-a
                                       atomic_peg_adtvar)))
                                    (the
                                     (integer 0)
                                     (if
                                      (the
                                       boolean
                                       (concat_2? atomic_peg_adtvar))
                                      (the
                                       (integer 0)
                                       (pvs-funcall
                                        concat?_fun
                                        (the
                                         (simple-array t)
                                         (pvs2cl_tuple
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e1-3
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e2-3
                                            atomic_peg_adtvar))))))
                                      (the
                                       (integer 0)
                                       (if
                                        (the
                                         boolean
                                         (choice_2? atomic_peg_adtvar))
                                        (the
                                         (integer 0)
                                         (pvs-funcall
                                          or?_fun
                                          (the
                                           (simple-array t)
                                           (pvs2cl_tuple
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e1-3
                                              atomic_peg_adtvar))
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e2-3
                                              atomic_peg_adtvar))))))
                                        (the
                                         (integer 0)
                                         (if
                                          (the
                                           boolean
                                           (check_2?
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            and?_fun
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e-3
                                              atomic_peg_adtvar))))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            not?_fun
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e-3
                                              atomic_peg_adtvar))))))))))))))))))))))
(defun atomic_peg_reduce_nat!_0
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (declare (type (integer 0) epsilon?_fun)
   (type (integer 0) failure?_fun) (type (integer 0) any?_fun))
  (the (integer 0)
       (let ((red
              (pvs-funcall (atomic_peg_reduce_nat_0)
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (the (integer 0) epsilon?_fun)
                                 (the (integer 0) failure?_fun)
                                 (the (integer 0) any?_fun)
                                 terminal?_fun
                                 concat?_fun
                                 or?_fun
                                 and?_fun
                                 not?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (epsilon_2? atomic_peg_adtvar))
                       (the (integer 0) epsilon?_fun)
                     (the (integer 0)
                          (if (the boolean
                                   (failure_2? atomic_peg_adtvar))
                              (the (integer 0) failure?_fun)
                            (the (integer 0)
                                 (if
                                  (the
                                   boolean
                                   (any_2? atomic_peg_adtvar))
                                  (the (integer 0) any?_fun)
                                  (the
                                   (integer 0)
                                   (if
                                    (the
                                     boolean
                                     (terminal_2? atomic_peg_adtvar))
                                    (the
                                     (integer 0)
                                     (pvs-funcall
                                      terminal?_fun
                                      (terminal_2-a
                                       atomic_peg_adtvar)))
                                    (the
                                     (integer 0)
                                     (if
                                      (the
                                       boolean
                                       (concat_2? atomic_peg_adtvar))
                                      (the
                                       (integer 0)
                                       (pvs-funcall
                                        concat?_fun
                                        (the
                                         (simple-array t)
                                         (pvs2cl_tuple
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e1-3
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e2-3
                                            atomic_peg_adtvar))))))
                                      (the
                                       (integer 0)
                                       (if
                                        (the
                                         boolean
                                         (choice_2? atomic_peg_adtvar))
                                        (the
                                         (integer 0)
                                         (pvs-funcall
                                          or?_fun
                                          (the
                                           (simple-array t)
                                           (pvs2cl_tuple
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e1-3
                                              atomic_peg_adtvar))
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e2-3
                                              atomic_peg_adtvar))))))
                                        (the
                                         (integer 0)
                                         (if
                                          (the
                                           boolean
                                           (check_2?
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            and?_fun
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e-3
                                              atomic_peg_adtvar))))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            not?_fun
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e-3
                                              atomic_peg_adtvar))))))))))))))))))))))
(defun scaf_reduce_nat_1 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((epsilon?_fun (project 1 lamvar#0))
            (failure?_fun (project 2 lamvar#0))
            (any?_fun (project 3 lamvar#0))
            (terminal?_fun (project 4 lamvar#0))
            (concat?_fun (project 5 lamvar#0))
            (or?_fun (project 6 lamvar#0))
            (and?_fun (project 7 lamvar#0))
            (not?_fun (project 8 lamvar#0)))
        (declare (type (integer 0) epsilon?_fun)
         (type (integer 0) failure?_fun) (type (integer 0) any?_fun))
        #'(lambda (atomic_peg_adtvar)
            (the (integer 0)
                 (let ((red
                        (pvs-funcall (scaf_reduce_nat_1
                                      (the
                                       (integer 0)
                                       num_non_terminals))
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       (the (integer 0) epsilon?_fun)
                                       (the (integer 0) failure?_fun)
                                       (the (integer 0) any?_fun)
                                       terminal?_fun
                                       concat?_fun
                                       or?_fun
                                       and?_fun
                                       not?_fun)))))
                   (declare (type nil red))
                   (the (integer 0)
                        (the (integer 0)
                             (if (the
                                  boolean
                                  (epsilon_2? atomic_peg_adtvar))
                                 (the (integer 0) epsilon?_fun)
                               (the
                                (integer 0)
                                (if
                                 (the
                                  boolean
                                  (failure_2? atomic_peg_adtvar))
                                 (the (integer 0) failure?_fun)
                                 (the
                                  (integer 0)
                                  (if
                                   (the
                                    boolean
                                    (any_2? atomic_peg_adtvar))
                                   (the (integer 0) any?_fun)
                                   (the
                                    (integer 0)
                                    (if
                                     (the
                                      boolean
                                      (terminal_2? atomic_peg_adtvar))
                                     (the
                                      (integer 0)
                                      (pvs-funcall
                                       terminal?_fun
                                       (terminal_2-a
                                        atomic_peg_adtvar)))
                                     (the
                                      (integer 0)
                                      (if
                                       (the
                                        boolean
                                        (concat_2? atomic_peg_adtvar))
                                       (the
                                        (integer 0)
                                        (pvs-funcall
                                         concat?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3
                                             atomic_peg_adtvar))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e2-3
                                             atomic_peg_adtvar))))))
                                       (the
                                        (integer 0)
                                        (if
                                         (the
                                          boolean
                                          (choice_2?
                                           atomic_peg_adtvar))
                                         (the
                                          (integer 0)
                                          (pvs-funcall
                                           or?_fun
                                           (the
                                            (simple-array t)
                                            (pvs2cl_tuple
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e1-3
                                               atomic_peg_adtvar))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e2-3
                                               atomic_peg_adtvar))))))
                                         (the
                                          (integer 0)
                                          (if
                                           (the
                                            boolean
                                            (check_2?
                                             atomic_peg_adtvar))
                                           (the
                                            (integer 0)
                                            (pvs-funcall
                                             and?_fun
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e-3
                                               atomic_peg_adtvar))))
                                           (the
                                            (integer 0)
                                            (pvs-funcall
                                             not?_fun
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e-3
                                               atomic_peg_adtvar)))))))))))))))))))))))))
(defun scaf__reduce_nat_1
    (num_non_terminals epsilon?_fun failure?_fun any?_fun terminal?_fun
     concat?_fun or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (declare (type (integer 0) num_non_terminals)
   (type (integer 0) epsilon?_fun) (type (integer 0) failure?_fun)
   (type (integer 0) any?_fun))
  (the (integer 0)
       (let ((red
              (pvs-funcall (scaf_reduce_nat_1 (the
                                               (integer 0)
                                               num_non_terminals))
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (the (integer 0) epsilon?_fun)
                                 (the (integer 0) failure?_fun)
                                 (the (integer 0) any?_fun)
                                 terminal?_fun
                                 concat?_fun
                                 or?_fun
                                 and?_fun
                                 not?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (epsilon_2? atomic_peg_adtvar))
                       (the (integer 0) epsilon?_fun)
                     (the (integer 0)
                          (if (the boolean
                                   (failure_2? atomic_peg_adtvar))
                              (the (integer 0) failure?_fun)
                            (the (integer 0)
                                 (if
                                  (the
                                   boolean
                                   (any_2? atomic_peg_adtvar))
                                  (the (integer 0) any?_fun)
                                  (the
                                   (integer 0)
                                   (if
                                    (the
                                     boolean
                                     (terminal_2? atomic_peg_adtvar))
                                    (the
                                     (integer 0)
                                     (pvs-funcall
                                      terminal?_fun
                                      (terminal_2-a
                                       atomic_peg_adtvar)))
                                    (the
                                     (integer 0)
                                     (if
                                      (the
                                       boolean
                                       (concat_2? atomic_peg_adtvar))
                                      (the
                                       (integer 0)
                                       (pvs-funcall
                                        concat?_fun
                                        (the
                                         (simple-array t)
                                         (pvs2cl_tuple
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e1-3
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e2-3
                                            atomic_peg_adtvar))))))
                                      (the
                                       (integer 0)
                                       (if
                                        (the
                                         boolean
                                         (choice_2? atomic_peg_adtvar))
                                        (the
                                         (integer 0)
                                         (pvs-funcall
                                          or?_fun
                                          (the
                                           (simple-array t)
                                           (pvs2cl_tuple
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e1-3
                                              atomic_peg_adtvar))
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e2-3
                                              atomic_peg_adtvar))))))
                                        (the
                                         (integer 0)
                                         (if
                                          (the
                                           boolean
                                           (check_2?
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            and?_fun
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e-3
                                              atomic_peg_adtvar))))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            not?_fun
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e-3
                                              atomic_peg_adtvar))))))))))))))))))))))
(defun scaf!reduce_nat_1
    (num_non_terminals epsilon?_fun failure?_fun any?_fun terminal?_fun
     concat?_fun or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (declare (type (integer 0) num_non_terminals)
   (type (integer 0) epsilon?_fun) (type (integer 0) failure?_fun)
   (type (integer 0) any?_fun))
  (declare (type (integer 0) num_non_terminals)
   (type (integer 0) epsilon?_fun) (type (integer 0) failure?_fun)
   (type (integer 0) any?_fun))
  (the (integer 0)
       (let ((red
              (pvs-funcall (scaf_reduce_nat_1 (the
                                               (integer 0)
                                               num_non_terminals))
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (the (integer 0) epsilon?_fun)
                                 (the (integer 0) failure?_fun)
                                 (the (integer 0) any?_fun)
                                 terminal?_fun
                                 concat?_fun
                                 or?_fun
                                 and?_fun
                                 not?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (epsilon_2? atomic_peg_adtvar))
                       (the (integer 0) epsilon?_fun)
                     (the (integer 0)
                          (if (the boolean
                                   (failure_2? atomic_peg_adtvar))
                              (the (integer 0) failure?_fun)
                            (the (integer 0)
                                 (if
                                  (the
                                   boolean
                                   (any_2? atomic_peg_adtvar))
                                  (the (integer 0) any?_fun)
                                  (the
                                   (integer 0)
                                   (if
                                    (the
                                     boolean
                                     (terminal_2? atomic_peg_adtvar))
                                    (the
                                     (integer 0)
                                     (pvs-funcall
                                      terminal?_fun
                                      (terminal_2-a
                                       atomic_peg_adtvar)))
                                    (the
                                     (integer 0)
                                     (if
                                      (the
                                       boolean
                                       (concat_2? atomic_peg_adtvar))
                                      (the
                                       (integer 0)
                                       (pvs-funcall
                                        concat?_fun
                                        (the
                                         (simple-array t)
                                         (pvs2cl_tuple
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e1-3
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e2-3
                                            atomic_peg_adtvar))))))
                                      (the
                                       (integer 0)
                                       (if
                                        (the
                                         boolean
                                         (choice_2? atomic_peg_adtvar))
                                        (the
                                         (integer 0)
                                         (pvs-funcall
                                          or?_fun
                                          (the
                                           (simple-array t)
                                           (pvs2cl_tuple
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e1-3
                                              atomic_peg_adtvar))
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e2-3
                                              atomic_peg_adtvar))))))
                                        (the
                                         (integer 0)
                                         (if
                                          (the
                                           boolean
                                           (check_2?
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            and?_fun
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e-3
                                              atomic_peg_adtvar))))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            not?_fun
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e-3
                                              atomic_peg_adtvar))))))))))))))))))))))
(defun atomic_peg_REDUCE_nat_0 ()
  #'(lambda (lamvar#0)
      (let ((epsilon?_fun (project 1 lamvar#0))
            (failure?_fun (project 2 lamvar#0))
            (any?_fun (project 3 lamvar#0))
            (terminal?_fun (project 4 lamvar#0))
            (concat?_fun (project 5 lamvar#0))
            (or?_fun (project 6 lamvar#0))
            (and?_fun (project 7 lamvar#0))
            (not?_fun (project 8 lamvar#0)))
        #'(lambda (atomic_peg_adtvar)
            (the (integer 0)
                 (let ((red
                        (pvs-funcall (atomic_peg_REDUCE_nat_0)
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       epsilon?_fun
                                       failure?_fun
                                       any?_fun
                                       terminal?_fun
                                       concat?_fun
                                       or?_fun
                                       and?_fun
                                       not?_fun)))))
                   (declare (type nil red))
                   (the (integer 0)
                        (the (integer 0)
                             (if (the
                                  boolean
                                  (epsilon_2? atomic_peg_adtvar))
                                 (the
                                  (integer 0)
                                  (pvs-funcall
                                   epsilon?_fun
                                   atomic_peg_adtvar))
                               (the
                                (integer 0)
                                (if
                                 (the
                                  boolean
                                  (failure_2? atomic_peg_adtvar))
                                 (the
                                  (integer 0)
                                  (pvs-funcall
                                   failure?_fun
                                   atomic_peg_adtvar))
                                 (the
                                  (integer 0)
                                  (if
                                   (the
                                    boolean
                                    (any_2? atomic_peg_adtvar))
                                   (the
                                    (integer 0)
                                    (pvs-funcall
                                     any?_fun
                                     atomic_peg_adtvar))
                                   (the
                                    (integer 0)
                                    (if
                                     (the
                                      boolean
                                      (terminal_2? atomic_peg_adtvar))
                                     (the
                                      (integer 0)
                                      (pvs-funcall
                                       terminal?_fun
                                       (the
                                        (simple-array t)
                                        (pvs2cl_tuple
                                         (terminal_2-a
                                          atomic_peg_adtvar)
                                         atomic_peg_adtvar))))
                                     (the
                                      (integer 0)
                                      (if
                                       (the
                                        boolean
                                        (concat_2? atomic_peg_adtvar))
                                       (the
                                        (integer 0)
                                        (pvs-funcall
                                         concat?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3
                                             atomic_peg_adtvar))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e2-3
                                             atomic_peg_adtvar))
                                           atomic_peg_adtvar))))
                                       (the
                                        (integer 0)
                                        (if
                                         (the
                                          boolean
                                          (choice_2?
                                           atomic_peg_adtvar))
                                         (the
                                          (integer 0)
                                          (pvs-funcall
                                           or?_fun
                                           (the
                                            (simple-array t)
                                            (pvs2cl_tuple
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e1-3
                                               atomic_peg_adtvar))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e2-3
                                               atomic_peg_adtvar))
                                             atomic_peg_adtvar))))
                                         (the
                                          (integer 0)
                                          (if
                                           (the
                                            boolean
                                            (check_2?
                                             atomic_peg_adtvar))
                                           (the
                                            (integer 0)
                                            (pvs-funcall
                                             and?_fun
                                             (the
                                              (simple-array t)
                                              (pvs2cl_tuple
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e-3
                                                 atomic_peg_adtvar))
                                               atomic_peg_adtvar))))
                                           (the
                                            (integer 0)
                                            (pvs-funcall
                                             not?_fun
                                             (the
                                              (simple-array t)
                                              (pvs2cl_tuple
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e-3
                                                 atomic_peg_adtvar))
                                               atomic_peg_adtvar)))))))))))))))))))))))))
(defun _atomic_peg_REDUCE_nat_0
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (the (integer 0)
       (let ((red
              (pvs-funcall (atomic_peg_REDUCE_nat_0)
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 epsilon?_fun
                                 failure?_fun
                                 any?_fun
                                 terminal?_fun
                                 concat?_fun
                                 or?_fun
                                 and?_fun
                                 not?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (epsilon_2? atomic_peg_adtvar))
                       (the (integer 0)
                            (pvs-funcall epsilon?_fun
                                         atomic_peg_adtvar))
                     (the (integer 0)
                          (if (the boolean
                                   (failure_2? atomic_peg_adtvar))
                              (the (integer 0)
                                   (pvs-funcall
                                    failure?_fun
                                    atomic_peg_adtvar))
                            (the (integer 0)
                                 (if
                                  (the
                                   boolean
                                   (any_2? atomic_peg_adtvar))
                                  (the
                                   (integer 0)
                                   (pvs-funcall
                                    any?_fun
                                    atomic_peg_adtvar))
                                  (the
                                   (integer 0)
                                   (if
                                    (the
                                     boolean
                                     (terminal_2? atomic_peg_adtvar))
                                    (the
                                     (integer 0)
                                     (pvs-funcall
                                      terminal?_fun
                                      (the
                                       (simple-array t)
                                       (pvs2cl_tuple
                                        (terminal_2-a
                                         atomic_peg_adtvar)
                                        atomic_peg_adtvar))))
                                    (the
                                     (integer 0)
                                     (if
                                      (the
                                       boolean
                                       (concat_2? atomic_peg_adtvar))
                                      (the
                                       (integer 0)
                                       (pvs-funcall
                                        concat?_fun
                                        (the
                                         (simple-array t)
                                         (pvs2cl_tuple
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e1-3
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e2-3
                                            atomic_peg_adtvar))
                                          atomic_peg_adtvar))))
                                      (the
                                       (integer 0)
                                       (if
                                        (the
                                         boolean
                                         (choice_2? atomic_peg_adtvar))
                                        (the
                                         (integer 0)
                                         (pvs-funcall
                                          or?_fun
                                          (the
                                           (simple-array t)
                                           (pvs2cl_tuple
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e1-3
                                              atomic_peg_adtvar))
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e2-3
                                              atomic_peg_adtvar))
                                            atomic_peg_adtvar))))
                                        (the
                                         (integer 0)
                                         (if
                                          (the
                                           boolean
                                           (check_2?
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            and?_fun
                                            (the
                                             (simple-array t)
                                             (pvs2cl_tuple
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e-3
                                                atomic_peg_adtvar))
                                              atomic_peg_adtvar))))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            not?_fun
                                            (the
                                             (simple-array t)
                                             (pvs2cl_tuple
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e-3
                                                atomic_peg_adtvar))
                                              atomic_peg_adtvar))))))))))))))))))))))
(defun atomic_peg_REDUCE_nat!_0
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (the (integer 0)
       (let ((red
              (pvs-funcall (atomic_peg_REDUCE_nat_0)
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 epsilon?_fun
                                 failure?_fun
                                 any?_fun
                                 terminal?_fun
                                 concat?_fun
                                 or?_fun
                                 and?_fun
                                 not?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (epsilon_2? atomic_peg_adtvar))
                       (the (integer 0)
                            (pvs-funcall epsilon?_fun
                                         atomic_peg_adtvar))
                     (the (integer 0)
                          (if (the boolean
                                   (failure_2? atomic_peg_adtvar))
                              (the (integer 0)
                                   (pvs-funcall
                                    failure?_fun
                                    atomic_peg_adtvar))
                            (the (integer 0)
                                 (if
                                  (the
                                   boolean
                                   (any_2? atomic_peg_adtvar))
                                  (the
                                   (integer 0)
                                   (pvs-funcall
                                    any?_fun
                                    atomic_peg_adtvar))
                                  (the
                                   (integer 0)
                                   (if
                                    (the
                                     boolean
                                     (terminal_2? atomic_peg_adtvar))
                                    (the
                                     (integer 0)
                                     (pvs-funcall
                                      terminal?_fun
                                      (the
                                       (simple-array t)
                                       (pvs2cl_tuple
                                        (terminal_2-a
                                         atomic_peg_adtvar)
                                        atomic_peg_adtvar))))
                                    (the
                                     (integer 0)
                                     (if
                                      (the
                                       boolean
                                       (concat_2? atomic_peg_adtvar))
                                      (the
                                       (integer 0)
                                       (pvs-funcall
                                        concat?_fun
                                        (the
                                         (simple-array t)
                                         (pvs2cl_tuple
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e1-3
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e2-3
                                            atomic_peg_adtvar))
                                          atomic_peg_adtvar))))
                                      (the
                                       (integer 0)
                                       (if
                                        (the
                                         boolean
                                         (choice_2? atomic_peg_adtvar))
                                        (the
                                         (integer 0)
                                         (pvs-funcall
                                          or?_fun
                                          (the
                                           (simple-array t)
                                           (pvs2cl_tuple
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e1-3
                                              atomic_peg_adtvar))
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e2-3
                                              atomic_peg_adtvar))
                                            atomic_peg_adtvar))))
                                        (the
                                         (integer 0)
                                         (if
                                          (the
                                           boolean
                                           (check_2?
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            and?_fun
                                            (the
                                             (simple-array t)
                                             (pvs2cl_tuple
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e-3
                                                atomic_peg_adtvar))
                                              atomic_peg_adtvar))))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            not?_fun
                                            (the
                                             (simple-array t)
                                             (pvs2cl_tuple
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e-3
                                                atomic_peg_adtvar))
                                              atomic_peg_adtvar))))))))))))))))))))))
(defun scaf_REDUCE_nat_1 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((epsilon?_fun (project 1 lamvar#0))
            (failure?_fun (project 2 lamvar#0))
            (any?_fun (project 3 lamvar#0))
            (terminal?_fun (project 4 lamvar#0))
            (concat?_fun (project 5 lamvar#0))
            (or?_fun (project 6 lamvar#0))
            (and?_fun (project 7 lamvar#0))
            (not?_fun (project 8 lamvar#0)))
        #'(lambda (atomic_peg_adtvar)
            (the (integer 0)
                 (let ((red
                        (pvs-funcall (scaf_REDUCE_nat_1
                                      (the
                                       (integer 0)
                                       num_non_terminals))
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       epsilon?_fun
                                       failure?_fun
                                       any?_fun
                                       terminal?_fun
                                       concat?_fun
                                       or?_fun
                                       and?_fun
                                       not?_fun)))))
                   (declare (type nil red))
                   (the (integer 0)
                        (the (integer 0)
                             (if (the
                                  boolean
                                  (epsilon_2? atomic_peg_adtvar))
                                 (the
                                  (integer 0)
                                  (pvs-funcall
                                   epsilon?_fun
                                   atomic_peg_adtvar))
                               (the
                                (integer 0)
                                (if
                                 (the
                                  boolean
                                  (failure_2? atomic_peg_adtvar))
                                 (the
                                  (integer 0)
                                  (pvs-funcall
                                   failure?_fun
                                   atomic_peg_adtvar))
                                 (the
                                  (integer 0)
                                  (if
                                   (the
                                    boolean
                                    (any_2? atomic_peg_adtvar))
                                   (the
                                    (integer 0)
                                    (pvs-funcall
                                     any?_fun
                                     atomic_peg_adtvar))
                                   (the
                                    (integer 0)
                                    (if
                                     (the
                                      boolean
                                      (terminal_2? atomic_peg_adtvar))
                                     (the
                                      (integer 0)
                                      (pvs-funcall
                                       terminal?_fun
                                       (the
                                        (simple-array t)
                                        (pvs2cl_tuple
                                         (terminal_2-a
                                          atomic_peg_adtvar)
                                         atomic_peg_adtvar))))
                                     (the
                                      (integer 0)
                                      (if
                                       (the
                                        boolean
                                        (concat_2? atomic_peg_adtvar))
                                       (the
                                        (integer 0)
                                        (pvs-funcall
                                         concat?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3
                                             atomic_peg_adtvar))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e2-3
                                             atomic_peg_adtvar))
                                           atomic_peg_adtvar))))
                                       (the
                                        (integer 0)
                                        (if
                                         (the
                                          boolean
                                          (choice_2?
                                           atomic_peg_adtvar))
                                         (the
                                          (integer 0)
                                          (pvs-funcall
                                           or?_fun
                                           (the
                                            (simple-array t)
                                            (pvs2cl_tuple
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e1-3
                                               atomic_peg_adtvar))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e2-3
                                               atomic_peg_adtvar))
                                             atomic_peg_adtvar))))
                                         (the
                                          (integer 0)
                                          (if
                                           (the
                                            boolean
                                            (check_2?
                                             atomic_peg_adtvar))
                                           (the
                                            (integer 0)
                                            (pvs-funcall
                                             and?_fun
                                             (the
                                              (simple-array t)
                                              (pvs2cl_tuple
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e-3
                                                 atomic_peg_adtvar))
                                               atomic_peg_adtvar))))
                                           (the
                                            (integer 0)
                                            (pvs-funcall
                                             not?_fun
                                             (the
                                              (simple-array t)
                                              (pvs2cl_tuple
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e-3
                                                 atomic_peg_adtvar))
                                               atomic_peg_adtvar)))))))))))))))))))))))))
(defun scaf__REDUCE_nat_1
    (num_non_terminals epsilon?_fun failure?_fun any?_fun terminal?_fun
     concat?_fun or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (declare (type (integer 0) num_non_terminals))
  (the (integer 0)
       (let ((red
              (pvs-funcall (scaf_REDUCE_nat_1 (the
                                               (integer 0)
                                               num_non_terminals))
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 epsilon?_fun
                                 failure?_fun
                                 any?_fun
                                 terminal?_fun
                                 concat?_fun
                                 or?_fun
                                 and?_fun
                                 not?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (epsilon_2? atomic_peg_adtvar))
                       (the (integer 0)
                            (pvs-funcall epsilon?_fun
                                         atomic_peg_adtvar))
                     (the (integer 0)
                          (if (the boolean
                                   (failure_2? atomic_peg_adtvar))
                              (the (integer 0)
                                   (pvs-funcall
                                    failure?_fun
                                    atomic_peg_adtvar))
                            (the (integer 0)
                                 (if
                                  (the
                                   boolean
                                   (any_2? atomic_peg_adtvar))
                                  (the
                                   (integer 0)
                                   (pvs-funcall
                                    any?_fun
                                    atomic_peg_adtvar))
                                  (the
                                   (integer 0)
                                   (if
                                    (the
                                     boolean
                                     (terminal_2? atomic_peg_adtvar))
                                    (the
                                     (integer 0)
                                     (pvs-funcall
                                      terminal?_fun
                                      (the
                                       (simple-array t)
                                       (pvs2cl_tuple
                                        (terminal_2-a
                                         atomic_peg_adtvar)
                                        atomic_peg_adtvar))))
                                    (the
                                     (integer 0)
                                     (if
                                      (the
                                       boolean
                                       (concat_2? atomic_peg_adtvar))
                                      (the
                                       (integer 0)
                                       (pvs-funcall
                                        concat?_fun
                                        (the
                                         (simple-array t)
                                         (pvs2cl_tuple
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e1-3
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e2-3
                                            atomic_peg_adtvar))
                                          atomic_peg_adtvar))))
                                      (the
                                       (integer 0)
                                       (if
                                        (the
                                         boolean
                                         (choice_2? atomic_peg_adtvar))
                                        (the
                                         (integer 0)
                                         (pvs-funcall
                                          or?_fun
                                          (the
                                           (simple-array t)
                                           (pvs2cl_tuple
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e1-3
                                              atomic_peg_adtvar))
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e2-3
                                              atomic_peg_adtvar))
                                            atomic_peg_adtvar))))
                                        (the
                                         (integer 0)
                                         (if
                                          (the
                                           boolean
                                           (check_2?
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            and?_fun
                                            (the
                                             (simple-array t)
                                             (pvs2cl_tuple
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e-3
                                                atomic_peg_adtvar))
                                              atomic_peg_adtvar))))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            not?_fun
                                            (the
                                             (simple-array t)
                                             (pvs2cl_tuple
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e-3
                                                atomic_peg_adtvar))
                                              atomic_peg_adtvar))))))))))))))))))))))
(defun scaf!REDUCE_nat_1
    (num_non_terminals epsilon?_fun failure?_fun any?_fun terminal?_fun
     concat?_fun or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (declare (type (integer 0) num_non_terminals))
  (declare (type (integer 0) num_non_terminals))
  (the (integer 0)
       (let ((red
              (pvs-funcall (scaf_REDUCE_nat_1 (the
                                               (integer 0)
                                               num_non_terminals))
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 epsilon?_fun
                                 failure?_fun
                                 any?_fun
                                 terminal?_fun
                                 concat?_fun
                                 or?_fun
                                 and?_fun
                                 not?_fun)))))
         (declare (type nil red))
         (the (integer 0)
              (the (integer 0)
                   (if (the boolean (epsilon_2? atomic_peg_adtvar))
                       (the (integer 0)
                            (pvs-funcall epsilon?_fun
                                         atomic_peg_adtvar))
                     (the (integer 0)
                          (if (the boolean
                                   (failure_2? atomic_peg_adtvar))
                              (the (integer 0)
                                   (pvs-funcall
                                    failure?_fun
                                    atomic_peg_adtvar))
                            (the (integer 0)
                                 (if
                                  (the
                                   boolean
                                   (any_2? atomic_peg_adtvar))
                                  (the
                                   (integer 0)
                                   (pvs-funcall
                                    any?_fun
                                    atomic_peg_adtvar))
                                  (the
                                   (integer 0)
                                   (if
                                    (the
                                     boolean
                                     (terminal_2? atomic_peg_adtvar))
                                    (the
                                     (integer 0)
                                     (pvs-funcall
                                      terminal?_fun
                                      (the
                                       (simple-array t)
                                       (pvs2cl_tuple
                                        (terminal_2-a
                                         atomic_peg_adtvar)
                                        atomic_peg_adtvar))))
                                    (the
                                     (integer 0)
                                     (if
                                      (the
                                       boolean
                                       (concat_2? atomic_peg_adtvar))
                                      (the
                                       (integer 0)
                                       (pvs-funcall
                                        concat?_fun
                                        (the
                                         (simple-array t)
                                         (pvs2cl_tuple
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e1-3
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e2-3
                                            atomic_peg_adtvar))
                                          atomic_peg_adtvar))))
                                      (the
                                       (integer 0)
                                       (if
                                        (the
                                         boolean
                                         (choice_2? atomic_peg_adtvar))
                                        (the
                                         (integer 0)
                                         (pvs-funcall
                                          or?_fun
                                          (the
                                           (simple-array t)
                                           (pvs2cl_tuple
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e1-3
                                              atomic_peg_adtvar))
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e2-3
                                              atomic_peg_adtvar))
                                            atomic_peg_adtvar))))
                                        (the
                                         (integer 0)
                                         (if
                                          (the
                                           boolean
                                           (check_2?
                                            atomic_peg_adtvar))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            and?_fun
                                            (the
                                             (simple-array t)
                                             (pvs2cl_tuple
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e-3
                                                atomic_peg_adtvar))
                                              atomic_peg_adtvar))))
                                          (the
                                           (integer 0)
                                           (pvs-funcall
                                            not?_fun
                                            (the
                                             (simple-array t)
                                             (pvs2cl_tuple
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e-3
                                                atomic_peg_adtvar))
                                              atomic_peg_adtvar))))))))))))))))))))))
(defun atomic_peg_reduce_ordinal_0 ()
  #'(lambda (lamvar#0)
      (let ((epsilon?_fun (project 1 lamvar#0))
            (failure?_fun (project 2 lamvar#0))
            (any?_fun (project 3 lamvar#0))
            (terminal?_fun (project 4 lamvar#0))
            (concat?_fun (project 5 lamvar#0))
            (or?_fun (project 6 lamvar#0))
            (and?_fun (project 7 lamvar#0))
            (not?_fun (project 8 lamvar#0)))
        #'(lambda (atomic_peg_adtvar)
            (let ((red
                   (pvs-funcall (atomic_peg_reduce_ordinal_0)
                                (the
                                 (simple-array t)
                                 (pvs2cl_tuple
                                  epsilon?_fun
                                  failure?_fun
                                  any?_fun
                                  terminal?_fun
                                  concat?_fun
                                  or?_fun
                                  and?_fun
                                  not?_fun)))))
              (declare (type nil red))
              (if (the boolean (epsilon_2? atomic_peg_adtvar))
                  epsilon?_fun
                (if (the boolean (failure_2? atomic_peg_adtvar))
                    failure?_fun
                  (if (the boolean (any_2? atomic_peg_adtvar))
                      any?_fun
                    (if (the boolean (terminal_2? atomic_peg_adtvar))
                        (pvs-funcall terminal?_fun
                                     (terminal_2-a atomic_peg_adtvar))
                      (if (the boolean (concat_2? atomic_peg_adtvar))
                          (pvs-funcall concat?_fun
                                       (the
                                        (simple-array t)
                                        (pvs2cl_tuple
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3
                                           atomic_peg_adtvar))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3
                                           atomic_peg_adtvar)))))
                        (if (the boolean (choice_2? atomic_peg_adtvar))
                            (pvs-funcall or?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3
                                             atomic_peg_adtvar))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e2-3
                                             atomic_peg_adtvar)))))
                          (if (the boolean
                                   (check_2? atomic_peg_adtvar))
                              (pvs-funcall and?_fun
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e-3
                                             atomic_peg_adtvar)))
                            (pvs-funcall not?_fun
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e-3
                                           atomic_peg_adtvar)))))))))))))))
(defun _atomic_peg_reduce_ordinal_0
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (let ((red
         (pvs-funcall (atomic_peg_reduce_ordinal_0)
                      (the (simple-array t)
                           (pvs2cl_tuple epsilon?_fun failure?_fun
                                         any?_fun terminal?_fun
                                         concat?_fun or?_fun and?_fun
                                         not?_fun)))))
    (declare (type nil red))
    (if (the boolean (epsilon_2? atomic_peg_adtvar))
        epsilon?_fun
      (if (the boolean (failure_2? atomic_peg_adtvar))
          failure?_fun
        (if (the boolean (any_2? atomic_peg_adtvar))
            any?_fun
          (if (the boolean (terminal_2? atomic_peg_adtvar))
              (pvs-funcall terminal?_fun
                           (terminal_2-a atomic_peg_adtvar))
            (if (the boolean (concat_2? atomic_peg_adtvar))
                (pvs-funcall concat?_fun
                             (the (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e1-3
                                     atomic_peg_adtvar))
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e2-3
                                     atomic_peg_adtvar)))))
              (if (the boolean (choice_2? atomic_peg_adtvar))
                  (pvs-funcall or?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e1-3 atomic_peg_adtvar))
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e2-3
                                   atomic_peg_adtvar)))))
                (if (the boolean (check_2? atomic_peg_adtvar))
                    (pvs-funcall and?_fun
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e-3 atomic_peg_adtvar)))
                  (pvs-funcall not?_fun
                               (the
                                (integer 0 *)
                                (atomic_peg-e-3
                                 atomic_peg_adtvar))))))))))))
(defun atomic_peg_reduce_ordinal!_0
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (let ((red
         (pvs-funcall (atomic_peg_reduce_ordinal_0)
                      (the (simple-array t)
                           (pvs2cl_tuple epsilon?_fun failure?_fun
                                         any?_fun terminal?_fun
                                         concat?_fun or?_fun and?_fun
                                         not?_fun)))))
    (declare (type nil red))
    (if (the boolean (epsilon_2? atomic_peg_adtvar))
        epsilon?_fun
      (if (the boolean (failure_2? atomic_peg_adtvar))
          failure?_fun
        (if (the boolean (any_2? atomic_peg_adtvar))
            any?_fun
          (if (the boolean (terminal_2? atomic_peg_adtvar))
              (pvs-funcall terminal?_fun
                           (terminal_2-a atomic_peg_adtvar))
            (if (the boolean (concat_2? atomic_peg_adtvar))
                (pvs-funcall concat?_fun
                             (the (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e1-3
                                     atomic_peg_adtvar))
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e2-3
                                     atomic_peg_adtvar)))))
              (if (the boolean (choice_2? atomic_peg_adtvar))
                  (pvs-funcall or?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e1-3 atomic_peg_adtvar))
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e2-3
                                   atomic_peg_adtvar)))))
                (if (the boolean (check_2? atomic_peg_adtvar))
                    (pvs-funcall and?_fun
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e-3 atomic_peg_adtvar)))
                  (pvs-funcall not?_fun
                               (the
                                (integer 0 *)
                                (atomic_peg-e-3
                                 atomic_peg_adtvar))))))))))))
(defun scaf_reduce_ordinal_1 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((epsilon?_fun (project 1 lamvar#0))
            (failure?_fun (project 2 lamvar#0))
            (any?_fun (project 3 lamvar#0))
            (terminal?_fun (project 4 lamvar#0))
            (concat?_fun (project 5 lamvar#0))
            (or?_fun (project 6 lamvar#0))
            (and?_fun (project 7 lamvar#0))
            (not?_fun (project 8 lamvar#0)))
        #'(lambda (atomic_peg_adtvar)
            (let ((red
                   (pvs-funcall (scaf_reduce_ordinal_1
                                 (the (integer 0) num_non_terminals))
                                (the
                                 (simple-array t)
                                 (pvs2cl_tuple
                                  epsilon?_fun
                                  failure?_fun
                                  any?_fun
                                  terminal?_fun
                                  concat?_fun
                                  or?_fun
                                  and?_fun
                                  not?_fun)))))
              (declare (type nil red))
              (if (the boolean (epsilon_2? atomic_peg_adtvar))
                  epsilon?_fun
                (if (the boolean (failure_2? atomic_peg_adtvar))
                    failure?_fun
                  (if (the boolean (any_2? atomic_peg_adtvar))
                      any?_fun
                    (if (the boolean (terminal_2? atomic_peg_adtvar))
                        (pvs-funcall terminal?_fun
                                     (terminal_2-a atomic_peg_adtvar))
                      (if (the boolean (concat_2? atomic_peg_adtvar))
                          (pvs-funcall concat?_fun
                                       (the
                                        (simple-array t)
                                        (pvs2cl_tuple
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3
                                           atomic_peg_adtvar))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3
                                           atomic_peg_adtvar)))))
                        (if (the boolean (choice_2? atomic_peg_adtvar))
                            (pvs-funcall or?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3
                                             atomic_peg_adtvar))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e2-3
                                             atomic_peg_adtvar)))))
                          (if (the boolean
                                   (check_2? atomic_peg_adtvar))
                              (pvs-funcall and?_fun
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e-3
                                             atomic_peg_adtvar)))
                            (pvs-funcall not?_fun
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e-3
                                           atomic_peg_adtvar)))))))))))))))
(defun scaf__reduce_ordinal_1
    (num_non_terminals epsilon?_fun failure?_fun any?_fun terminal?_fun
     concat?_fun or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (declare (type (integer 0) num_non_terminals))
  (let ((red
         (pvs-funcall (scaf_reduce_ordinal_1
                        (the (integer 0) num_non_terminals))
                      (the (simple-array t)
                           (pvs2cl_tuple epsilon?_fun failure?_fun
                                         any?_fun terminal?_fun
                                         concat?_fun or?_fun and?_fun
                                         not?_fun)))))
    (declare (type nil red))
    (if (the boolean (epsilon_2? atomic_peg_adtvar))
        epsilon?_fun
      (if (the boolean (failure_2? atomic_peg_adtvar))
          failure?_fun
        (if (the boolean (any_2? atomic_peg_adtvar))
            any?_fun
          (if (the boolean (terminal_2? atomic_peg_adtvar))
              (pvs-funcall terminal?_fun
                           (terminal_2-a atomic_peg_adtvar))
            (if (the boolean (concat_2? atomic_peg_adtvar))
                (pvs-funcall concat?_fun
                             (the (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e1-3
                                     atomic_peg_adtvar))
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e2-3
                                     atomic_peg_adtvar)))))
              (if (the boolean (choice_2? atomic_peg_adtvar))
                  (pvs-funcall or?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e1-3 atomic_peg_adtvar))
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e2-3
                                   atomic_peg_adtvar)))))
                (if (the boolean (check_2? atomic_peg_adtvar))
                    (pvs-funcall and?_fun
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e-3 atomic_peg_adtvar)))
                  (pvs-funcall not?_fun
                               (the
                                (integer 0 *)
                                (atomic_peg-e-3
                                 atomic_peg_adtvar))))))))))))
(defun scaf!reduce_ordinal_1
    (num_non_terminals epsilon?_fun failure?_fun any?_fun terminal?_fun
     concat?_fun or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (declare (type (integer 0) num_non_terminals))
  (declare (type (integer 0) num_non_terminals))
  (let ((red
         (pvs-funcall (scaf_reduce_ordinal_1
                        (the (integer 0) num_non_terminals))
                      (the (simple-array t)
                           (pvs2cl_tuple epsilon?_fun failure?_fun
                                         any?_fun terminal?_fun
                                         concat?_fun or?_fun and?_fun
                                         not?_fun)))))
    (declare (type nil red))
    (if (the boolean (epsilon_2? atomic_peg_adtvar))
        epsilon?_fun
      (if (the boolean (failure_2? atomic_peg_adtvar))
          failure?_fun
        (if (the boolean (any_2? atomic_peg_adtvar))
            any?_fun
          (if (the boolean (terminal_2? atomic_peg_adtvar))
              (pvs-funcall terminal?_fun
                           (terminal_2-a atomic_peg_adtvar))
            (if (the boolean (concat_2? atomic_peg_adtvar))
                (pvs-funcall concat?_fun
                             (the (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e1-3
                                     atomic_peg_adtvar))
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e2-3
                                     atomic_peg_adtvar)))))
              (if (the boolean (choice_2? atomic_peg_adtvar))
                  (pvs-funcall or?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e1-3 atomic_peg_adtvar))
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e2-3
                                   atomic_peg_adtvar)))))
                (if (the boolean (check_2? atomic_peg_adtvar))
                    (pvs-funcall and?_fun
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e-3 atomic_peg_adtvar)))
                  (pvs-funcall not?_fun
                               (the
                                (integer 0 *)
                                (atomic_peg-e-3
                                 atomic_peg_adtvar))))))))))))
(defun atomic_peg_REDUCE_ordinal_0 ()
  #'(lambda (lamvar#0)
      (let ((epsilon?_fun (project 1 lamvar#0))
            (failure?_fun (project 2 lamvar#0))
            (any?_fun (project 3 lamvar#0))
            (terminal?_fun (project 4 lamvar#0))
            (concat?_fun (project 5 lamvar#0))
            (or?_fun (project 6 lamvar#0))
            (and?_fun (project 7 lamvar#0))
            (not?_fun (project 8 lamvar#0)))
        #'(lambda (atomic_peg_adtvar)
            (let ((red
                   (pvs-funcall (atomic_peg_REDUCE_ordinal_0)
                                (the
                                 (simple-array t)
                                 (pvs2cl_tuple
                                  epsilon?_fun
                                  failure?_fun
                                  any?_fun
                                  terminal?_fun
                                  concat?_fun
                                  or?_fun
                                  and?_fun
                                  not?_fun)))))
              (declare (type nil red))
              (if (the boolean (epsilon_2? atomic_peg_adtvar))
                  (pvs-funcall epsilon?_fun atomic_peg_adtvar)
                (if (the boolean (failure_2? atomic_peg_adtvar))
                    (pvs-funcall failure?_fun atomic_peg_adtvar)
                  (if (the boolean (any_2? atomic_peg_adtvar))
                      (pvs-funcall any?_fun atomic_peg_adtvar)
                    (if (the boolean (terminal_2? atomic_peg_adtvar))
                        (pvs-funcall terminal?_fun
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       (terminal_2-a atomic_peg_adtvar)
                                       atomic_peg_adtvar)))
                      (if (the boolean (concat_2? atomic_peg_adtvar))
                          (pvs-funcall concat?_fun
                                       (the
                                        (simple-array t)
                                        (pvs2cl_tuple
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3
                                           atomic_peg_adtvar))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3
                                           atomic_peg_adtvar))
                                         atomic_peg_adtvar)))
                        (if (the boolean (choice_2? atomic_peg_adtvar))
                            (pvs-funcall or?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3
                                             atomic_peg_adtvar))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e2-3
                                             atomic_peg_adtvar))
                                           atomic_peg_adtvar)))
                          (if (the boolean
                                   (check_2? atomic_peg_adtvar))
                              (pvs-funcall and?_fun
                                           (the
                                            (simple-array t)
                                            (pvs2cl_tuple
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e-3
                                               atomic_peg_adtvar))
                                             atomic_peg_adtvar)))
                            (pvs-funcall not?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e-3
                                             atomic_peg_adtvar))
                                           atomic_peg_adtvar)))))))))))))))
(defun _atomic_peg_REDUCE_ordinal_0
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (let ((red
         (pvs-funcall (atomic_peg_REDUCE_ordinal_0)
                      (the (simple-array t)
                           (pvs2cl_tuple epsilon?_fun failure?_fun
                                         any?_fun terminal?_fun
                                         concat?_fun or?_fun and?_fun
                                         not?_fun)))))
    (declare (type nil red))
    (if (the boolean (epsilon_2? atomic_peg_adtvar))
        (pvs-funcall epsilon?_fun atomic_peg_adtvar)
      (if (the boolean (failure_2? atomic_peg_adtvar))
          (pvs-funcall failure?_fun atomic_peg_adtvar)
        (if (the boolean (any_2? atomic_peg_adtvar))
            (pvs-funcall any?_fun atomic_peg_adtvar)
          (if (the boolean (terminal_2? atomic_peg_adtvar))
              (pvs-funcall terminal?_fun
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (terminal_2-a atomic_peg_adtvar)
                                 atomic_peg_adtvar)))
            (if (the boolean (concat_2? atomic_peg_adtvar))
                (pvs-funcall concat?_fun
                             (the (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e1-3
                                     atomic_peg_adtvar))
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e2-3
                                     atomic_peg_adtvar))
                                   atomic_peg_adtvar)))
              (if (the boolean (choice_2? atomic_peg_adtvar))
                  (pvs-funcall or?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e1-3 atomic_peg_adtvar))
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e2-3 atomic_peg_adtvar))
                                 atomic_peg_adtvar)))
                (if (the boolean (check_2? atomic_peg_adtvar))
                    (pvs-funcall and?_fun
                                 (the
                                  (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e-3 atomic_peg_adtvar))
                                   atomic_peg_adtvar)))
                  (pvs-funcall not?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e-3 atomic_peg_adtvar))
                                 atomic_peg_adtvar))))))))))))
(defun atomic_peg_REDUCE_ordinal!_0
    (epsilon?_fun failure?_fun any?_fun terminal?_fun concat?_fun
     or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (let ((red
         (pvs-funcall (atomic_peg_REDUCE_ordinal_0)
                      (the (simple-array t)
                           (pvs2cl_tuple epsilon?_fun failure?_fun
                                         any?_fun terminal?_fun
                                         concat?_fun or?_fun and?_fun
                                         not?_fun)))))
    (declare (type nil red))
    (if (the boolean (epsilon_2? atomic_peg_adtvar))
        (pvs-funcall epsilon?_fun atomic_peg_adtvar)
      (if (the boolean (failure_2? atomic_peg_adtvar))
          (pvs-funcall failure?_fun atomic_peg_adtvar)
        (if (the boolean (any_2? atomic_peg_adtvar))
            (pvs-funcall any?_fun atomic_peg_adtvar)
          (if (the boolean (terminal_2? atomic_peg_adtvar))
              (pvs-funcall terminal?_fun
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (terminal_2-a atomic_peg_adtvar)
                                 atomic_peg_adtvar)))
            (if (the boolean (concat_2? atomic_peg_adtvar))
                (pvs-funcall concat?_fun
                             (the (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e1-3
                                     atomic_peg_adtvar))
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e2-3
                                     atomic_peg_adtvar))
                                   atomic_peg_adtvar)))
              (if (the boolean (choice_2? atomic_peg_adtvar))
                  (pvs-funcall or?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e1-3 atomic_peg_adtvar))
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e2-3 atomic_peg_adtvar))
                                 atomic_peg_adtvar)))
                (if (the boolean (check_2? atomic_peg_adtvar))
                    (pvs-funcall and?_fun
                                 (the
                                  (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e-3 atomic_peg_adtvar))
                                   atomic_peg_adtvar)))
                  (pvs-funcall not?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e-3 atomic_peg_adtvar))
                                 atomic_peg_adtvar))))))))))))
(defun scaf_REDUCE_ordinal_1 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((epsilon?_fun (project 1 lamvar#0))
            (failure?_fun (project 2 lamvar#0))
            (any?_fun (project 3 lamvar#0))
            (terminal?_fun (project 4 lamvar#0))
            (concat?_fun (project 5 lamvar#0))
            (or?_fun (project 6 lamvar#0))
            (and?_fun (project 7 lamvar#0))
            (not?_fun (project 8 lamvar#0)))
        #'(lambda (atomic_peg_adtvar)
            (let ((red
                   (pvs-funcall (scaf_REDUCE_ordinal_1
                                 (the (integer 0) num_non_terminals))
                                (the
                                 (simple-array t)
                                 (pvs2cl_tuple
                                  epsilon?_fun
                                  failure?_fun
                                  any?_fun
                                  terminal?_fun
                                  concat?_fun
                                  or?_fun
                                  and?_fun
                                  not?_fun)))))
              (declare (type nil red))
              (if (the boolean (epsilon_2? atomic_peg_adtvar))
                  (pvs-funcall epsilon?_fun atomic_peg_adtvar)
                (if (the boolean (failure_2? atomic_peg_adtvar))
                    (pvs-funcall failure?_fun atomic_peg_adtvar)
                  (if (the boolean (any_2? atomic_peg_adtvar))
                      (pvs-funcall any?_fun atomic_peg_adtvar)
                    (if (the boolean (terminal_2? atomic_peg_adtvar))
                        (pvs-funcall terminal?_fun
                                     (the
                                      (simple-array t)
                                      (pvs2cl_tuple
                                       (terminal_2-a atomic_peg_adtvar)
                                       atomic_peg_adtvar)))
                      (if (the boolean (concat_2? atomic_peg_adtvar))
                          (pvs-funcall concat?_fun
                                       (the
                                        (simple-array t)
                                        (pvs2cl_tuple
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3
                                           atomic_peg_adtvar))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3
                                           atomic_peg_adtvar))
                                         atomic_peg_adtvar)))
                        (if (the boolean (choice_2? atomic_peg_adtvar))
                            (pvs-funcall or?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3
                                             atomic_peg_adtvar))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e2-3
                                             atomic_peg_adtvar))
                                           atomic_peg_adtvar)))
                          (if (the boolean
                                   (check_2? atomic_peg_adtvar))
                              (pvs-funcall and?_fun
                                           (the
                                            (simple-array t)
                                            (pvs2cl_tuple
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e-3
                                               atomic_peg_adtvar))
                                             atomic_peg_adtvar)))
                            (pvs-funcall not?_fun
                                         (the
                                          (simple-array t)
                                          (pvs2cl_tuple
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e-3
                                             atomic_peg_adtvar))
                                           atomic_peg_adtvar)))))))))))))))
(defun scaf__REDUCE_ordinal_1
    (num_non_terminals epsilon?_fun failure?_fun any?_fun terminal?_fun
     concat?_fun or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (declare (type (integer 0) num_non_terminals))
  (let ((red
         (pvs-funcall (scaf_REDUCE_ordinal_1
                        (the (integer 0) num_non_terminals))
                      (the (simple-array t)
                           (pvs2cl_tuple epsilon?_fun failure?_fun
                                         any?_fun terminal?_fun
                                         concat?_fun or?_fun and?_fun
                                         not?_fun)))))
    (declare (type nil red))
    (if (the boolean (epsilon_2? atomic_peg_adtvar))
        (pvs-funcall epsilon?_fun atomic_peg_adtvar)
      (if (the boolean (failure_2? atomic_peg_adtvar))
          (pvs-funcall failure?_fun atomic_peg_adtvar)
        (if (the boolean (any_2? atomic_peg_adtvar))
            (pvs-funcall any?_fun atomic_peg_adtvar)
          (if (the boolean (terminal_2? atomic_peg_adtvar))
              (pvs-funcall terminal?_fun
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (terminal_2-a atomic_peg_adtvar)
                                 atomic_peg_adtvar)))
            (if (the boolean (concat_2? atomic_peg_adtvar))
                (pvs-funcall concat?_fun
                             (the (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e1-3
                                     atomic_peg_adtvar))
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e2-3
                                     atomic_peg_adtvar))
                                   atomic_peg_adtvar)))
              (if (the boolean (choice_2? atomic_peg_adtvar))
                  (pvs-funcall or?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e1-3 atomic_peg_adtvar))
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e2-3 atomic_peg_adtvar))
                                 atomic_peg_adtvar)))
                (if (the boolean (check_2? atomic_peg_adtvar))
                    (pvs-funcall and?_fun
                                 (the
                                  (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e-3 atomic_peg_adtvar))
                                   atomic_peg_adtvar)))
                  (pvs-funcall not?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e-3 atomic_peg_adtvar))
                                 atomic_peg_adtvar))))))))))))
(defun scaf!REDUCE_ordinal_1
    (num_non_terminals epsilon?_fun failure?_fun any?_fun terminal?_fun
     concat?_fun or?_fun and?_fun not?_fun atomic_peg_adtvar)
  (declare (type (integer 0) num_non_terminals))
  (declare (type (integer 0) num_non_terminals))
  (let ((red
         (pvs-funcall (scaf_REDUCE_ordinal_1
                        (the (integer 0) num_non_terminals))
                      (the (simple-array t)
                           (pvs2cl_tuple epsilon?_fun failure?_fun
                                         any?_fun terminal?_fun
                                         concat?_fun or?_fun and?_fun
                                         not?_fun)))))
    (declare (type nil red))
    (if (the boolean (epsilon_2? atomic_peg_adtvar))
        (pvs-funcall epsilon?_fun atomic_peg_adtvar)
      (if (the boolean (failure_2? atomic_peg_adtvar))
          (pvs-funcall failure?_fun atomic_peg_adtvar)
        (if (the boolean (any_2? atomic_peg_adtvar))
            (pvs-funcall any?_fun atomic_peg_adtvar)
          (if (the boolean (terminal_2? atomic_peg_adtvar))
              (pvs-funcall terminal?_fun
                           (the (simple-array t)
                                (pvs2cl_tuple
                                 (terminal_2-a atomic_peg_adtvar)
                                 atomic_peg_adtvar)))
            (if (the boolean (concat_2? atomic_peg_adtvar))
                (pvs-funcall concat?_fun
                             (the (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e1-3
                                     atomic_peg_adtvar))
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e2-3
                                     atomic_peg_adtvar))
                                   atomic_peg_adtvar)))
              (if (the boolean (choice_2? atomic_peg_adtvar))
                  (pvs-funcall or?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e1-3 atomic_peg_adtvar))
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e2-3 atomic_peg_adtvar))
                                 atomic_peg_adtvar)))
                (if (the boolean (check_2? atomic_peg_adtvar))
                    (pvs-funcall and?_fun
                                 (the
                                  (simple-array t)
                                  (pvs2cl_tuple
                                   (the
                                    (integer 0 *)
                                    (atomic_peg-e-3 atomic_peg_adtvar))
                                   atomic_peg_adtvar)))
                  (pvs-funcall not?_fun
                               (the
                                (simple-array t)
                                (pvs2cl_tuple
                                 (the
                                  (integer 0 *)
                                  (atomic_peg-e-3 atomic_peg_adtvar))
                                 atomic_peg_adtvar))))))))))))
(defun good_entry?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0)) (pos (project 2 lamvar#0)))
        (declare (type (integer 0) len) (type (integer 0 *) pos))
        #'(lambda (x)
            (the boolean
                 (pvs__IMPLIES (the boolean (good_2? x))
                               (the
                                boolean
                                (pvs__<=
                                 (pvs__+
                                  (the (integer 0 *) pos)
                                  (the (integer 0) (good_2-span x)))
                                 (the (integer 0) len)))))))))
(defun _good_entry?_0 (len pos x)
  (declare (type (integer 0) len) (type (integer 0 *) pos))
  (the boolean
       (pvs__IMPLIES (the boolean (good_2? x))
                     (the boolean
                          (pvs__<= (pvs__+
                                    (the (integer 0 *) pos)
                                    (the (integer 0) (good_2-span x)))
                                   (the (integer 0) len))))))
(defun good_entry?!_0 (len pos x)
  (declare (type (integer 0) len) (type (integer 0 *) pos))
  (the boolean
       (pvs__IMPLIES (the boolean (good_2? x))
                     (the boolean
                          (pvs__<= (pvs__+
                                    (the (integer 0 *) pos)
                                    (the (integer 0) (good_2-span x)))
                                   (the (integer 0) len))))))
(defun scaf_good_entry?_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0)) (pos (project 2 lamvar#0)))
        (declare (type (integer 0) len) (type (integer 0 *) pos))
        #'(lambda (x)
            (the boolean
                 (pvs__IMPLIES (the boolean (good_2? x))
                               (the
                                boolean
                                (pvs__<=
                                 (pvs__+
                                  (the (integer 0 *) pos)
                                  (the (integer 0) (good_2-span x)))
                                 (the (integer 0) len)))))))))
(defun scaf__good_entry?_0 (num_non_terminals len pos x)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) pos))
  (the boolean
       (pvs__IMPLIES (the boolean (good_2? x))
                     (the boolean
                          (pvs__<= (pvs__+
                                    (the (integer 0 *) pos)
                                    (the (integer 0) (good_2-span x)))
                                   (the (integer 0) len))))))
(defun scaf!good_entry?_0 (num_non_terminals len pos x)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) pos))
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) pos))
  (the boolean
       (pvs__IMPLIES (the boolean (good_2? x))
                     (the boolean
                          (pvs__<= (pvs__+
                                    (the (integer 0 *) pos)
                                    (the (integer 0) (good_2-span x)))
                                   (the (integer 0) len))))))
(defun good_fail?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (lamvar#0)
            (let ((A (project 1 lamvar#0))
                  (i (project 2 lamvar#0))
                  (n (project 3 lamvar#0)))
              (declare (type (integer 0 *) i) (type (integer 0 *) n))
              (the boolean
                   (the boolean
                        (let ((x
                               (pvs-funcall G (the (integer 0 *) n))))
                          (declare (type nil x))
                          (the boolean
                               (if
                                (the boolean (any_2? x))
                                (the
                                 boolean
                                 (=
                                  (the (integer 0 *) i)
                                  (the (integer 0) len)))
                                (the
                                 boolean
                                 (if
                                  (the boolean (terminal_2? x))
                                  (the
                                   boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (=
                                      (the (integer 0 *) i)
                                      (the (integer 0) len)))
                                    (the
                                     boolean
                                     (pvs__/=
                                      (terminal_2-a x)
                                      (pvs-funcall
                                       s265358
                                       (the (integer 0 *) i))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (concat_2? x))
                                    (the
                                     boolean
                                     (pvs__OR
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (pvs__AND
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (fail_3?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (pvs__+
                                             (the (integer 0 *) i)
                                             (the
                                              (integer 0)
                                              (good_2-span
                                               (pvs-funcall
                                                (pvs-funcall
                                                 A
                                                 (the (integer 0 *) i))
                                                (the
                                                 (integer 0 *)
                                                 (atomic_peg-e1-3
                                                  x)))))))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e2-3 x)))))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (choice_2? x))
                                      (the
                                       boolean
                                       (pvs__AND
                                        (the
                                         boolean
                                         (fail_3?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (fail_3?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e2-3 x)))))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (check_2? x))
                                        (the
                                         boolean
                                         (fail_3?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e-3 x)))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (neg_2? x))
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e-3 x)))))
                                          (the
                                           boolean
                                           (if
                                            (the
                                             boolean
                                             (failure_2? x))
                                            (the boolean t)
                                            (the
                                             boolean
                                             nil)))))))))))))))))))))))
(defun _good_fail?_0 (len G s39668 A i n)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (any_2? x))
                       (the boolean
                            (= (the (integer 0 *) i)
                               (the (integer 0) len)))
                     (the boolean
                          (if (the boolean (terminal_2? x))
                              (the boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (=
                                      (the (integer 0 *) i)
                                      (the (integer 0) len)))
                                    (the
                                     boolean
                                     (pvs__/=
                                      (terminal_2-a x)
                                      (pvs-funcall
                                       s39668
                                       (the (integer 0 *) i))))))
                            (the boolean
                                 (if
                                  (the boolean (concat_2? x))
                                  (the
                                   boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (fail_3?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (pvs__+
                                           (the (integer 0 *) i)
                                           (the
                                            (integer 0)
                                            (good_2-span
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i))
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e1-3
                                                x)))))))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (choice_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (check_2? x))
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e-3 x)))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (neg_2? x))
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e-3 x)))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (failure_2? x))
                                          (the boolean t)
                                          (the
                                           boolean
                                           nil)))))))))))))))))))
(defun good_fail?!_0 (len G s39668 A i n)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (any_2? x))
                       (the boolean
                            (= (the (integer 0 *) i)
                               (the (integer 0) len)))
                     (the boolean
                          (if (the boolean (terminal_2? x))
                              (the boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (=
                                      (the (integer 0 *) i)
                                      (the (integer 0) len)))
                                    (the
                                     boolean
                                     (pvs__/=
                                      (terminal_2-a x)
                                      (pvs-funcall
                                       s39668
                                       (the (integer 0 *) i))))))
                            (the boolean
                                 (if
                                  (the boolean (concat_2? x))
                                  (the
                                   boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (fail_3?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (pvs__+
                                           (the (integer 0 *) i)
                                           (the
                                            (integer 0)
                                            (good_2-span
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i))
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e1-3
                                                x)))))))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (choice_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (check_2? x))
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e-3 x)))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (neg_2? x))
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e-3 x)))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (failure_2? x))
                                          (the boolean t)
                                          (the
                                           boolean
                                           nil)))))))))))))))))))
(defun scaf_good_fail?_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (lamvar#0)
            (let ((A (project 1 lamvar#0))
                  (i (project 2 lamvar#0))
                  (n (project 3 lamvar#0)))
              (declare (type (integer 0 *) i) (type (integer 0 *) n))
              (the boolean
                   (the boolean
                        (let ((x
                               (pvs-funcall G (the (integer 0 *) n))))
                          (declare (type nil x))
                          (the boolean
                               (if
                                (the boolean (any_2? x))
                                (the
                                 boolean
                                 (=
                                  (the (integer 0 *) i)
                                  (the (integer 0) len)))
                                (the
                                 boolean
                                 (if
                                  (the boolean (terminal_2? x))
                                  (the
                                   boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (=
                                      (the (integer 0 *) i)
                                      (the (integer 0) len)))
                                    (the
                                     boolean
                                     (pvs__/=
                                      (terminal_2-a x)
                                      (pvs-funcall
                                       s265358
                                       (the (integer 0 *) i))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (concat_2? x))
                                    (the
                                     boolean
                                     (pvs__OR
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (pvs__AND
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (fail_3?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (pvs__+
                                             (the (integer 0 *) i)
                                             (the
                                              (integer 0)
                                              (good_2-span
                                               (pvs-funcall
                                                (pvs-funcall
                                                 A
                                                 (the (integer 0 *) i))
                                                (the
                                                 (integer 0 *)
                                                 (atomic_peg-e1-3
                                                  x)))))))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e2-3 x)))))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (choice_2? x))
                                      (the
                                       boolean
                                       (pvs__AND
                                        (the
                                         boolean
                                         (fail_3?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (fail_3?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e2-3 x)))))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (check_2? x))
                                        (the
                                         boolean
                                         (fail_3?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e-3 x)))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (neg_2? x))
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e-3 x)))))
                                          (the
                                           boolean
                                           (if
                                            (the
                                             boolean
                                             (failure_2? x))
                                            (the boolean t)
                                            (the
                                             boolean
                                             nil)))))))))))))))))))))))
(defun scaf__good_fail?_0 (num_non_terminals len G s39595 A i n)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) n))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (any_2? x))
                       (the boolean
                            (= (the (integer 0 *) i)
                               (the (integer 0) len)))
                     (the boolean
                          (if (the boolean (terminal_2? x))
                              (the boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (=
                                      (the (integer 0 *) i)
                                      (the (integer 0) len)))
                                    (the
                                     boolean
                                     (pvs__/=
                                      (terminal_2-a x)
                                      (pvs-funcall
                                       s39595
                                       (the (integer 0 *) i))))))
                            (the boolean
                                 (if
                                  (the boolean (concat_2? x))
                                  (the
                                   boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (fail_3?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (pvs__+
                                           (the (integer 0 *) i)
                                           (the
                                            (integer 0)
                                            (good_2-span
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i))
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e1-3
                                                x)))))))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (choice_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (check_2? x))
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e-3 x)))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (neg_2? x))
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e-3 x)))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (failure_2? x))
                                          (the boolean t)
                                          (the
                                           boolean
                                           nil)))))))))))))))))))
(defun scaf!good_fail?_0 (num_non_terminals len G s39595 A i n)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) n))
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) n))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (any_2? x))
                       (the boolean
                            (= (the (integer 0 *) i)
                               (the (integer 0) len)))
                     (the boolean
                          (if (the boolean (terminal_2? x))
                              (the boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (=
                                      (the (integer 0 *) i)
                                      (the (integer 0) len)))
                                    (the
                                     boolean
                                     (pvs__/=
                                      (terminal_2-a x)
                                      (pvs-funcall
                                       s39595
                                       (the (integer 0 *) i))))))
                            (the boolean
                                 (if
                                  (the boolean (concat_2? x))
                                  (the
                                   boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (fail_3?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (pvs__+
                                           (the (integer 0 *) i)
                                           (the
                                            (integer 0)
                                            (good_2-span
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i))
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e1-3
                                                x)))))))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (choice_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (check_2? x))
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e-3 x)))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (neg_2? x))
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e-3 x)))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (failure_2? x))
                                          (the boolean t)
                                          (the
                                           boolean
                                           nil)))))))))))))))))))
(defun good_loop?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (lamvar#0)
            (let ((A (project 1 lamvar#0))
                  (i (project 2 lamvar#0))
                  (n (project 3 lamvar#0)))
              (declare (type (integer 0 *) i) (type (integer 0 *) n))
              (the boolean
                   (the boolean
                        (let ((x
                               (pvs-funcall G (the (integer 0 *) n))))
                          (declare (type nil x))
                          (the boolean
                               (if
                                (the boolean (concat_2? x))
                                (the
                                 boolean
                                 (pvs__OR
                                  (the
                                   boolean
                                   (loop_2?
                                    (pvs-funcall
                                     (pvs-funcall
                                      A
                                      (the (integer 0 *) i))
                                     (the
                                      (integer 0 *)
                                      (atomic_peg-e1-3 x)))))
                                  (the
                                   boolean
                                   (pvs__AND
                                    (the
                                     boolean
                                     (good_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (pvs__+
                                         (the (integer 0 *) i)
                                         (the
                                          (integer 0)
                                          (good_2-span
                                           (pvs-funcall
                                            (pvs-funcall
                                             A
                                             (the (integer 0 *) i))
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e1-3 x)))))))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e2-3 x)))))))))
                                (the
                                 boolean
                                 (if
                                  (the boolean (choice_2? x))
                                  (the
                                   boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (loop_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (check_2? x))
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e-3 x)))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (neg_2? x))
                                      (the
                                       boolean
                                       (loop_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e-3 x)))))
                                      (the boolean nil)))))))))))))))))
(defun _good_loop?_0 (len G s39817 A i n)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (concat_2? x))
                       (the boolean
                            (pvs__OR (the
                                      boolean
                                      (loop_2?
                                       (pvs-funcall
                                        (pvs-funcall
                                         A
                                         (the (integer 0 *) i))
                                        (the
                                         (integer 0 *)
                                         (atomic_peg-e1-3 x)))))
                                     (the
                                      boolean
                                      (pvs__AND
                                       (the
                                        boolean
                                        (good_2?
                                         (pvs-funcall
                                          (pvs-funcall
                                           A
                                           (the (integer 0 *) i))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e1-3 x)))))
                                       (the
                                        boolean
                                        (loop_2?
                                         (pvs-funcall
                                          (pvs-funcall
                                           A
                                           (pvs__+
                                            (the (integer 0 *) i)
                                            (the
                                             (integer 0)
                                             (good_2-span
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e1-3
                                                 x)))))))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e2-3 x)))))))))
                     (the boolean
                          (if (the boolean (choice_2? x))
                              (the boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (loop_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))))
                            (the boolean
                                 (if
                                  (the boolean (check_2? x))
                                  (the
                                   boolean
                                   (loop_2?
                                    (pvs-funcall
                                     (pvs-funcall
                                      A
                                      (the (integer 0 *) i))
                                     (the
                                      (integer 0 *)
                                      (atomic_peg-e-3 x)))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (neg_2? x))
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e-3 x)))))
                                    (the boolean nil)))))))))))))
(defun good_loop?!_0 (len G s39817 A i n)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (concat_2? x))
                       (the boolean
                            (pvs__OR (the
                                      boolean
                                      (loop_2?
                                       (pvs-funcall
                                        (pvs-funcall
                                         A
                                         (the (integer 0 *) i))
                                        (the
                                         (integer 0 *)
                                         (atomic_peg-e1-3 x)))))
                                     (the
                                      boolean
                                      (pvs__AND
                                       (the
                                        boolean
                                        (good_2?
                                         (pvs-funcall
                                          (pvs-funcall
                                           A
                                           (the (integer 0 *) i))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e1-3 x)))))
                                       (the
                                        boolean
                                        (loop_2?
                                         (pvs-funcall
                                          (pvs-funcall
                                           A
                                           (pvs__+
                                            (the (integer 0 *) i)
                                            (the
                                             (integer 0)
                                             (good_2-span
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e1-3
                                                 x)))))))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e2-3 x)))))))))
                     (the boolean
                          (if (the boolean (choice_2? x))
                              (the boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (loop_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))))
                            (the boolean
                                 (if
                                  (the boolean (check_2? x))
                                  (the
                                   boolean
                                   (loop_2?
                                    (pvs-funcall
                                     (pvs-funcall
                                      A
                                      (the (integer 0 *) i))
                                     (the
                                      (integer 0 *)
                                      (atomic_peg-e-3 x)))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (neg_2? x))
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e-3 x)))))
                                    (the boolean nil)))))))))))))
(defun scaf_good_loop?_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (lamvar#0)
            (let ((A (project 1 lamvar#0))
                  (i (project 2 lamvar#0))
                  (n (project 3 lamvar#0)))
              (declare (type (integer 0 *) i) (type (integer 0 *) n))
              (the boolean
                   (the boolean
                        (let ((x
                               (pvs-funcall G (the (integer 0 *) n))))
                          (declare (type nil x))
                          (the boolean
                               (if
                                (the boolean (concat_2? x))
                                (the
                                 boolean
                                 (pvs__OR
                                  (the
                                   boolean
                                   (loop_2?
                                    (pvs-funcall
                                     (pvs-funcall
                                      A
                                      (the (integer 0 *) i))
                                     (the
                                      (integer 0 *)
                                      (atomic_peg-e1-3 x)))))
                                  (the
                                   boolean
                                   (pvs__AND
                                    (the
                                     boolean
                                     (good_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (pvs__+
                                         (the (integer 0 *) i)
                                         (the
                                          (integer 0)
                                          (good_2-span
                                           (pvs-funcall
                                            (pvs-funcall
                                             A
                                             (the (integer 0 *) i))
                                            (the
                                             (integer 0 *)
                                             (atomic_peg-e1-3 x)))))))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e2-3 x)))))))))
                                (the
                                 boolean
                                 (if
                                  (the boolean (choice_2? x))
                                  (the
                                   boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (loop_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (check_2? x))
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e-3 x)))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (neg_2? x))
                                      (the
                                       boolean
                                       (loop_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e-3 x)))))
                                      (the boolean nil)))))))))))))))))
(defun scaf__good_loop?_0 (num_non_terminals len G s39741 A i n)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) n))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (concat_2? x))
                       (the boolean
                            (pvs__OR (the
                                      boolean
                                      (loop_2?
                                       (pvs-funcall
                                        (pvs-funcall
                                         A
                                         (the (integer 0 *) i))
                                        (the
                                         (integer 0 *)
                                         (atomic_peg-e1-3 x)))))
                                     (the
                                      boolean
                                      (pvs__AND
                                       (the
                                        boolean
                                        (good_2?
                                         (pvs-funcall
                                          (pvs-funcall
                                           A
                                           (the (integer 0 *) i))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e1-3 x)))))
                                       (the
                                        boolean
                                        (loop_2?
                                         (pvs-funcall
                                          (pvs-funcall
                                           A
                                           (pvs__+
                                            (the (integer 0 *) i)
                                            (the
                                             (integer 0)
                                             (good_2-span
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e1-3
                                                 x)))))))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e2-3 x)))))))))
                     (the boolean
                          (if (the boolean (choice_2? x))
                              (the boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (loop_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))))
                            (the boolean
                                 (if
                                  (the boolean (check_2? x))
                                  (the
                                   boolean
                                   (loop_2?
                                    (pvs-funcall
                                     (pvs-funcall
                                      A
                                      (the (integer 0 *) i))
                                     (the
                                      (integer 0 *)
                                      (atomic_peg-e-3 x)))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (neg_2? x))
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e-3 x)))))
                                    (the boolean nil)))))))))))))
(defun scaf!good_loop?_0 (num_non_terminals len G s39741 A i n)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) n))
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) n))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (concat_2? x))
                       (the boolean
                            (pvs__OR (the
                                      boolean
                                      (loop_2?
                                       (pvs-funcall
                                        (pvs-funcall
                                         A
                                         (the (integer 0 *) i))
                                        (the
                                         (integer 0 *)
                                         (atomic_peg-e1-3 x)))))
                                     (the
                                      boolean
                                      (pvs__AND
                                       (the
                                        boolean
                                        (good_2?
                                         (pvs-funcall
                                          (pvs-funcall
                                           A
                                           (the (integer 0 *) i))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e1-3 x)))))
                                       (the
                                        boolean
                                        (loop_2?
                                         (pvs-funcall
                                          (pvs-funcall
                                           A
                                           (pvs__+
                                            (the (integer 0 *) i)
                                            (the
                                             (integer 0)
                                             (good_2-span
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e1-3
                                                 x)))))))
                                          (the
                                           (integer 0 *)
                                           (atomic_peg-e2-3 x)))))))))
                     (the boolean
                          (if (the boolean (choice_2? x))
                              (the boolean
                                   (pvs__OR
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e1-3 x)))))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (fail_3?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (loop_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))))
                            (the boolean
                                 (if
                                  (the boolean (check_2? x))
                                  (the
                                   boolean
                                   (loop_2?
                                    (pvs-funcall
                                     (pvs-funcall
                                      A
                                      (the (integer 0 *) i))
                                     (the
                                      (integer 0 *)
                                      (atomic_peg-e-3 x)))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (neg_2? x))
                                    (the
                                     boolean
                                     (loop_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the
                                        (integer 0 *)
                                        (atomic_peg-e-3 x)))))
                                    (the boolean nil)))))))))))))
(defun good_good?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (lamvar#0)
            (let ((A (project 1 lamvar#0))
                  (i (project 2 lamvar#0))
                  (n (project 3 lamvar#0))
                  (sp (project 4 lamvar#0)))
              (declare (type (integer 0 *) i) (type (integer 0 *) n)
               (type (integer 0 *) sp))
              (the boolean
                   (the boolean
                        (let ((x
                               (pvs-funcall G (the (integer 0 *) n))))
                          (declare (type nil x))
                          (the boolean
                               (if
                                (the boolean (epsilon_2? x))
                                (the
                                 boolean
                                 (= (the (integer 0 *) sp) 0))
                                (the
                                 boolean
                                 (if
                                  (the boolean (any_2? x))
                                  (the
                                   boolean
                                   (= (the (integer 0 *) sp) 1))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (terminal_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (= (the (integer 0 *) sp) 1))
                                      (the
                                       boolean
                                       (pvs__=
                                        (pvs-funcall
                                         s265358
                                         (the (integer 0 *) i))
                                        (terminal_2-a x)))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (concat_2? x))
                                      (the
                                       boolean
                                       (pvs__AND
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (pvs__+
                                             (the (integer 0 *) i)
                                             (the
                                              (integer 0)
                                              (good_2-span
                                               (pvs-funcall
                                                (pvs-funcall
                                                 A
                                                 (the (integer 0 *) i))
                                                (the
                                                 (integer 0 *)
                                                 (atomic_peg-e1-3
                                                  x)))))))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e2-3 x)))))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (choice_2? x))
                                        (the
                                         boolean
                                         (pvs__OR
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e1-3 x)))))
                                          (the
                                           boolean
                                           (pvs__AND
                                            (the
                                             boolean
                                             (fail_3?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e1-3 x)))))
                                            (the
                                             boolean
                                             (good_2?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e2-3
                                                 x)))))))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (check_2? x))
                                          (the
                                           boolean
                                           (pvs__AND
                                            (the
                                             boolean
                                             (good_2?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e-3 x)))))
                                            (the
                                             boolean
                                             (=
                                              (the (integer 0 *) sp)
                                              0))))
                                          (the
                                           boolean
                                           (if
                                            (the boolean (neg_2? x))
                                            (the
                                             boolean
                                             (pvs__AND
                                              (the
                                               boolean
                                               (fail_3?
                                                (pvs-funcall
                                                 (pvs-funcall
                                                  A
                                                  (the
                                                   (integer 0 *)
                                                   i))
                                                 (the
                                                  (integer 0 *)
                                                  (atomic_peg-e-3
                                                   x)))))
                                              (the
                                               boolean
                                               (=
                                                (the (integer 0 *) sp)
                                                0))))
                                            (the
                                             boolean
                                             nil)))))))))))))))))))))))
(defun _good_good?_0 (len G s39966 A i n sp)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n) (type (integer 0 *) sp))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (epsilon_2? x))
                       (the boolean (= (the (integer 0 *) sp) 0))
                     (the boolean
                          (if (the boolean (any_2? x))
                              (the boolean
                                   (= (the (integer 0 *) sp) 1))
                            (the boolean
                                 (if
                                  (the boolean (terminal_2? x))
                                  (the
                                   boolean
                                   (pvs__AND
                                    (the
                                     boolean
                                     (= (the (integer 0 *) sp) 1))
                                    (the
                                     boolean
                                     (pvs__=
                                      (pvs-funcall
                                       s39966
                                       (the (integer 0 *) i))
                                      (terminal_2-a x)))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (concat_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (pvs__+
                                           (the (integer 0 *) i)
                                           (the
                                            (integer 0)
                                            (good_2-span
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i))
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e1-3
                                                x)))))))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (choice_2? x))
                                      (the
                                       boolean
                                       (pvs__OR
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (pvs__AND
                                          (the
                                           boolean
                                           (fail_3?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e1-3 x)))))
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e2-3
                                               x)))))))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (check_2? x))
                                        (the
                                         boolean
                                         (pvs__AND
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e-3 x)))))
                                          (the
                                           boolean
                                           (=
                                            (the (integer 0 *) sp)
                                            0))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (neg_2? x))
                                          (the
                                           boolean
                                           (pvs__AND
                                            (the
                                             boolean
                                             (fail_3?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e-3 x)))))
                                            (the
                                             boolean
                                             (=
                                              (the (integer 0 *) sp)
                                              0))))
                                          (the
                                           boolean
                                           nil)))))))))))))))))))
(defun good_good?!_0 (len G s39966 A i n sp)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n) (type (integer 0 *) sp))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (epsilon_2? x))
                       (the boolean (= (the (integer 0 *) sp) 0))
                     (the boolean
                          (if (the boolean (any_2? x))
                              (the boolean
                                   (= (the (integer 0 *) sp) 1))
                            (the boolean
                                 (if
                                  (the boolean (terminal_2? x))
                                  (the
                                   boolean
                                   (pvs__AND
                                    (the
                                     boolean
                                     (= (the (integer 0 *) sp) 1))
                                    (the
                                     boolean
                                     (pvs__=
                                      (pvs-funcall
                                       s39966
                                       (the (integer 0 *) i))
                                      (terminal_2-a x)))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (concat_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (pvs__+
                                           (the (integer 0 *) i)
                                           (the
                                            (integer 0)
                                            (good_2-span
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i))
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e1-3
                                                x)))))))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (choice_2? x))
                                      (the
                                       boolean
                                       (pvs__OR
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (pvs__AND
                                          (the
                                           boolean
                                           (fail_3?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e1-3 x)))))
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e2-3
                                               x)))))))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (check_2? x))
                                        (the
                                         boolean
                                         (pvs__AND
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e-3 x)))))
                                          (the
                                           boolean
                                           (=
                                            (the (integer 0 *) sp)
                                            0))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (neg_2? x))
                                          (the
                                           boolean
                                           (pvs__AND
                                            (the
                                             boolean
                                             (fail_3?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e-3 x)))))
                                            (the
                                             boolean
                                             (=
                                              (the (integer 0 *) sp)
                                              0))))
                                          (the
                                           boolean
                                           nil)))))))))))))))))))
(defun scaf_good_good?_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (lamvar#0)
            (let ((A (project 1 lamvar#0))
                  (i (project 2 lamvar#0))
                  (n (project 3 lamvar#0))
                  (sp (project 4 lamvar#0)))
              (declare (type (integer 0 *) i) (type (integer 0 *) n)
               (type (integer 0 *) sp))
              (the boolean
                   (the boolean
                        (let ((x
                               (pvs-funcall G (the (integer 0 *) n))))
                          (declare (type nil x))
                          (the boolean
                               (if
                                (the boolean (epsilon_2? x))
                                (the
                                 boolean
                                 (= (the (integer 0 *) sp) 0))
                                (the
                                 boolean
                                 (if
                                  (the boolean (any_2? x))
                                  (the
                                   boolean
                                   (= (the (integer 0 *) sp) 1))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (terminal_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (= (the (integer 0 *) sp) 1))
                                      (the
                                       boolean
                                       (pvs__=
                                        (pvs-funcall
                                         s265358
                                         (the (integer 0 *) i))
                                        (terminal_2-a x)))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (concat_2? x))
                                      (the
                                       boolean
                                       (pvs__AND
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (pvs__+
                                             (the (integer 0 *) i)
                                             (the
                                              (integer 0)
                                              (good_2-span
                                               (pvs-funcall
                                                (pvs-funcall
                                                 A
                                                 (the (integer 0 *) i))
                                                (the
                                                 (integer 0 *)
                                                 (atomic_peg-e1-3
                                                  x)))))))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e2-3 x)))))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (choice_2? x))
                                        (the
                                         boolean
                                         (pvs__OR
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e1-3 x)))))
                                          (the
                                           boolean
                                           (pvs__AND
                                            (the
                                             boolean
                                             (fail_3?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e1-3 x)))))
                                            (the
                                             boolean
                                             (good_2?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e2-3
                                                 x)))))))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (check_2? x))
                                          (the
                                           boolean
                                           (pvs__AND
                                            (the
                                             boolean
                                             (good_2?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e-3 x)))))
                                            (the
                                             boolean
                                             (=
                                              (the (integer 0 *) sp)
                                              0))))
                                          (the
                                           boolean
                                           (if
                                            (the boolean (neg_2? x))
                                            (the
                                             boolean
                                             (pvs__AND
                                              (the
                                               boolean
                                               (fail_3?
                                                (pvs-funcall
                                                 (pvs-funcall
                                                  A
                                                  (the
                                                   (integer 0 *)
                                                   i))
                                                 (the
                                                  (integer 0 *)
                                                  (atomic_peg-e-3
                                                   x)))))
                                              (the
                                               boolean
                                               (=
                                                (the (integer 0 *) sp)
                                                0))))
                                            (the
                                             boolean
                                             nil)))))))))))))))))))))))
(defun scaf__good_good?_0 (num_non_terminals len G s39893 A i n sp)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) n)
   (type (integer 0 *) sp))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (epsilon_2? x))
                       (the boolean (= (the (integer 0 *) sp) 0))
                     (the boolean
                          (if (the boolean (any_2? x))
                              (the boolean
                                   (= (the (integer 0 *) sp) 1))
                            (the boolean
                                 (if
                                  (the boolean (terminal_2? x))
                                  (the
                                   boolean
                                   (pvs__AND
                                    (the
                                     boolean
                                     (= (the (integer 0 *) sp) 1))
                                    (the
                                     boolean
                                     (pvs__=
                                      (pvs-funcall
                                       s39893
                                       (the (integer 0 *) i))
                                      (terminal_2-a x)))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (concat_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (pvs__+
                                           (the (integer 0 *) i)
                                           (the
                                            (integer 0)
                                            (good_2-span
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i))
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e1-3
                                                x)))))))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (choice_2? x))
                                      (the
                                       boolean
                                       (pvs__OR
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (pvs__AND
                                          (the
                                           boolean
                                           (fail_3?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e1-3 x)))))
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e2-3
                                               x)))))))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (check_2? x))
                                        (the
                                         boolean
                                         (pvs__AND
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e-3 x)))))
                                          (the
                                           boolean
                                           (=
                                            (the (integer 0 *) sp)
                                            0))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (neg_2? x))
                                          (the
                                           boolean
                                           (pvs__AND
                                            (the
                                             boolean
                                             (fail_3?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e-3 x)))))
                                            (the
                                             boolean
                                             (=
                                              (the (integer 0 *) sp)
                                              0))))
                                          (the
                                           boolean
                                           nil)))))))))))))))))))
(defun scaf!good_good?_0 (num_non_terminals len G s39893 A i n sp)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) n)
   (type (integer 0 *) sp))
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) n)
   (type (integer 0 *) sp))
  (the boolean
       (the boolean
            (let ((x (pvs-funcall G (the (integer 0 *) n))))
              (declare (type nil x))
              (the boolean
                   (if (the boolean (epsilon_2? x))
                       (the boolean (= (the (integer 0 *) sp) 0))
                     (the boolean
                          (if (the boolean (any_2? x))
                              (the boolean
                                   (= (the (integer 0 *) sp) 1))
                            (the boolean
                                 (if
                                  (the boolean (terminal_2? x))
                                  (the
                                   boolean
                                   (pvs__AND
                                    (the
                                     boolean
                                     (= (the (integer 0 *) sp) 1))
                                    (the
                                     boolean
                                     (pvs__=
                                      (pvs-funcall
                                       s39893
                                       (the (integer 0 *) i))
                                      (terminal_2-a x)))))
                                  (the
                                   boolean
                                   (if
                                    (the boolean (concat_2? x))
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (the (integer 0 *) i))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e1-3 x)))))
                                      (the
                                       boolean
                                       (good_2?
                                        (pvs-funcall
                                         (pvs-funcall
                                          A
                                          (pvs__+
                                           (the (integer 0 *) i)
                                           (the
                                            (integer 0)
                                            (good_2-span
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i))
                                              (the
                                               (integer 0 *)
                                               (atomic_peg-e1-3
                                                x)))))))
                                         (the
                                          (integer 0 *)
                                          (atomic_peg-e2-3 x)))))))
                                    (the
                                     boolean
                                     (if
                                      (the boolean (choice_2? x))
                                      (the
                                       boolean
                                       (pvs__OR
                                        (the
                                         boolean
                                         (good_2?
                                          (pvs-funcall
                                           (pvs-funcall
                                            A
                                            (the (integer 0 *) i))
                                           (the
                                            (integer 0 *)
                                            (atomic_peg-e1-3 x)))))
                                        (the
                                         boolean
                                         (pvs__AND
                                          (the
                                           boolean
                                           (fail_3?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e1-3 x)))))
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e2-3
                                               x)))))))))
                                      (the
                                       boolean
                                       (if
                                        (the boolean (check_2? x))
                                        (the
                                         boolean
                                         (pvs__AND
                                          (the
                                           boolean
                                           (good_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) i))
                                             (the
                                              (integer 0 *)
                                              (atomic_peg-e-3 x)))))
                                          (the
                                           boolean
                                           (=
                                            (the (integer 0 *) sp)
                                            0))))
                                        (the
                                         boolean
                                         (if
                                          (the boolean (neg_2? x))
                                          (the
                                           boolean
                                           (pvs__AND
                                            (the
                                             boolean
                                             (fail_3?
                                              (pvs-funcall
                                               (pvs-funcall
                                                A
                                                (the (integer 0 *) i))
                                               (the
                                                (integer 0 *)
                                                (atomic_peg-e-3 x)))))
                                            (the
                                             boolean
                                             (=
                                              (the (integer 0 *) sp)
                                              0))))
                                          (the
                                           boolean
                                           nil)))))))))))))))))))
(defun good_scaffold?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0))
            (stack (project 4 lamvar#0)))
        (declare (type (integer 0) len) (type list stack))
        #'(lambda (A)
            (the boolean
                 (loop for t40083 from 0 to (the (integer 0) len)
                       always
                       (pvs-funcall #'(lambda
                                       (i)
                                       (the
                                        boolean
                                        (loop
                                         for
                                         t40085
                                         from
                                         0
                                         to
                                         (pvs__-
                                          (the
                                           (integer 0)
                                           (funcall 'undefined40084))
                                          1)
                                         always
                                         (pvs-funcall
                                          #'(lambda
                                             (n)
                                             (the
                                              boolean
                                              (the
                                               boolean
                                               (let
                                                ((x
                                                  (pvs-funcall
                                                   (pvs-funcall
                                                    A
                                                    (the
                                                     (integer 0 *)
                                                     i))
                                                   (the
                                                    (integer 0 *)
                                                    n))))
                                                (declare (type nil x))
                                                (the
                                                 boolean
                                                 (if
                                                  (the
                                                   boolean
                                                   (fail_3? x))
                                                  (the
                                                   boolean
                                                   (_good_fail?_0
                                                    (the
                                                     (integer 0)
                                                     len)
                                                    G
                                                    s265358
                                                    A
                                                    (the
                                                     (integer 0 *)
                                                     i)
                                                    (the
                                                     (integer 0 *)
                                                     n)))
                                                  (the
                                                   boolean
                                                   (if
                                                    (the
                                                     boolean
                                                     (loop_2? x))
                                                    (the
                                                     boolean
                                                     (pvs__OR
                                                      (the
                                                       boolean
                                                       (pvs__member
                                                        (the
                                                         (integer 0 *)
                                                         n)
                                                        (the
                                                         list
                                                         stack)))
                                                      (the
                                                       boolean
                                                       (_good_loop?_0
                                                        (the
                                                         (integer 0)
                                                         len)
                                                        G
                                                        s265358
                                                        A
                                                        (the
                                                         (integer 0 *)
                                                         i)
                                                        (the
                                                         (integer 0 *)
                                                         n)))))
                                                    (the
                                                     boolean
                                                     (if
                                                      (the
                                                       boolean
                                                       (good_2? x))
                                                      (the
                                                       boolean
                                                       (pvs__AND
                                                        (the
                                                         boolean
                                                         (pvs__<=
                                                          (the
                                                           (integer 0)
                                                           (good_2-span
                                                            x))
                                                          (pvs__-
                                                           (the
                                                            (integer 0)
                                                            len)
                                                           (the
                                                            (integer
                                                             0
                                                             *)
                                                            i))))
                                                        (the
                                                         boolean
                                                         (_good_good?_0
                                                          (the
                                                           (integer 0)
                                                           len)
                                                          G
                                                          s265358
                                                          A
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           i)
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           n)
                                                          (the
                                                           (integer 0)
                                                           (good_2-span
                                                            x))))))
                                                      (the
                                                       boolean
                                                       t)))))))))))
                                          t40085))))
                                    t40083)))))))
(defun _good_scaffold?_0 (len G s40064 stack A i n)
  (declare (type (integer 0) len) (type list stack)
   (type (integer 0 *) i) (type (integer 0 *) n))
  (the boolean
       (loop for t40065 from 0 to (the (integer 0) len) always
             (pvs-funcall #'(lambda (i#0)
                              (the boolean
                                   (loop
                                    for
                                    t40067
                                    from
                                    0
                                    to
                                    (pvs__-
                                     (the
                                      (integer 0)
                                      (funcall 'undefined40066))
                                     1)
                                    always
                                    (pvs-funcall
                                     #'(lambda
                                        (n#0)
                                        (the
                                         boolean
                                         (the
                                          boolean
                                          (let
                                           ((x
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i#0))
                                              (the
                                               (integer 0 *)
                                               n#0))))
                                           (declare (type nil x))
                                           (the
                                            boolean
                                            (if
                                             (the boolean (fail_3? x))
                                             (the
                                              boolean
                                              (_good_fail?_0
                                               (the (integer 0) len)
                                               G
                                               s40064
                                               A
                                               (the (integer 0 *) i#0)
                                               (the
                                                (integer 0 *)
                                                n#0)))
                                             (the
                                              boolean
                                              (if
                                               (the
                                                boolean
                                                (loop_2? x))
                                               (the
                                                boolean
                                                (pvs__OR
                                                 (the
                                                  boolean
                                                  (pvs__member
                                                   (the
                                                    (integer 0 *)
                                                    n#0)
                                                   (the list stack)))
                                                 (the
                                                  boolean
                                                  (_good_loop?_0
                                                   (the
                                                    (integer 0)
                                                    len)
                                                   G
                                                   s40064
                                                   A
                                                   (the
                                                    (integer 0 *)
                                                    i#0)
                                                   (the
                                                    (integer 0 *)
                                                    n#0)))))
                                               (the
                                                boolean
                                                (if
                                                 (the
                                                  boolean
                                                  (good_2? x))
                                                 (the
                                                  boolean
                                                  (pvs__AND
                                                   (the
                                                    boolean
                                                    (pvs__<=
                                                     (the
                                                      (integer 0)
                                                      (good_2-span x))
                                                     (pvs__-
                                                      (the
                                                       (integer 0)
                                                       len)
                                                      (the
                                                       (integer 0 *)
                                                       i#0))))
                                                   (the
                                                    boolean
                                                    (_good_good?_0
                                                     (the
                                                      (integer 0)
                                                      len)
                                                     G
                                                     s40064
                                                     A
                                                     (the
                                                      (integer 0 *)
                                                      i#0)
                                                     (the
                                                      (integer 0 *)
                                                      n#0)
                                                     (the
                                                      (integer 0)
                                                      (good_2-span
                                                       x))))))
                                                 (the
                                                  boolean
                                                  t)))))))))))
                                     t40067))))
                          t40065))))
(defun good_scaffold?!_0 (len G s40064 stack A i n)
  (declare (type (integer 0) len) (type list stack)
   (type (integer 0 *) i) (type (integer 0 *) n))
  (the boolean
       (loop for t40074 from 0 to (the (integer 0) len) always
             (pvs-funcall #'(lambda (i#0)
                              (the boolean
                                   (loop
                                    for
                                    t40076
                                    from
                                    0
                                    to
                                    (pvs__-
                                     (the
                                      (integer 0)
                                      (funcall 'undefined40075))
                                     1)
                                    always
                                    (pvs-funcall
                                     #'(lambda
                                        (n#0)
                                        (the
                                         boolean
                                         (the
                                          boolean
                                          (let
                                           ((x
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i#0))
                                              (the
                                               (integer 0 *)
                                               n#0))))
                                           (declare (type nil x))
                                           (the
                                            boolean
                                            (if
                                             (the boolean (fail_3? x))
                                             (the
                                              boolean
                                              (_good_fail?_0
                                               (the (integer 0) len)
                                               G
                                               s40064
                                               A
                                               (the (integer 0 *) i#0)
                                               (the
                                                (integer 0 *)
                                                n#0)))
                                             (the
                                              boolean
                                              (if
                                               (the
                                                boolean
                                                (loop_2? x))
                                               (the
                                                boolean
                                                (pvs__OR
                                                 (the
                                                  boolean
                                                  (pvs__member
                                                   (the
                                                    (integer 0 *)
                                                    n#0)
                                                   (the list stack)))
                                                 (the
                                                  boolean
                                                  (_good_loop?_0
                                                   (the
                                                    (integer 0)
                                                    len)
                                                   G
                                                   s40064
                                                   A
                                                   (the
                                                    (integer 0 *)
                                                    i#0)
                                                   (the
                                                    (integer 0 *)
                                                    n#0)))))
                                               (the
                                                boolean
                                                (if
                                                 (the
                                                  boolean
                                                  (good_2? x))
                                                 (the
                                                  boolean
                                                  (pvs__AND
                                                   (the
                                                    boolean
                                                    (pvs__<=
                                                     (the
                                                      (integer 0)
                                                      (good_2-span x))
                                                     (pvs__-
                                                      (the
                                                       (integer 0)
                                                       len)
                                                      (the
                                                       (integer 0 *)
                                                       i#0))))
                                                   (the
                                                    boolean
                                                    (_good_good?_0
                                                     (the
                                                      (integer 0)
                                                      len)
                                                     G
                                                     s40064
                                                     A
                                                     (the
                                                      (integer 0 *)
                                                      i#0)
                                                     (the
                                                      (integer 0 *)
                                                      n#0)
                                                     (the
                                                      (integer 0)
                                                      (good_2-span
                                                       x))))))
                                                 (the
                                                  boolean
                                                  t)))))))))))
                                     t40076))))
                          t40074))))
(defun scaf_good_scaffold?_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0))
            (stack (project 4 lamvar#0)))
        (declare (type (integer 0) len) (type list stack))
        #'(lambda (A)
            (the boolean
                 (loop for t40056 from 0 to (the (integer 0) len)
                       always
                       (pvs-funcall #'(lambda
                                       (i)
                                       (the
                                        boolean
                                        (loop
                                         for
                                         t40057
                                         from
                                         0
                                         to
                                         (pvs__-
                                          (the
                                           (integer 0)
                                           num_non_terminals)
                                          1)
                                         always
                                         (pvs-funcall
                                          #'(lambda
                                             (n)
                                             (the
                                              boolean
                                              (the
                                               boolean
                                               (let
                                                ((x
                                                  (pvs-funcall
                                                   (pvs-funcall
                                                    A
                                                    (the
                                                     (integer 0 *)
                                                     i))
                                                   (the
                                                    (integer 0 *)
                                                    n))))
                                                (declare (type nil x))
                                                (the
                                                 boolean
                                                 (if
                                                  (the
                                                   boolean
                                                   (fail_3? x))
                                                  (the
                                                   boolean
                                                   (scaf__good_fail?_0
                                                    (the
                                                     (integer 0)
                                                     num_non_terminals)
                                                    (the
                                                     (integer 0)
                                                     len)
                                                    G
                                                    s265358
                                                    A
                                                    (the
                                                     (integer 0 *)
                                                     i)
                                                    (the
                                                     (integer 0 *)
                                                     n)))
                                                  (the
                                                   boolean
                                                   (if
                                                    (the
                                                     boolean
                                                     (loop_2? x))
                                                    (the
                                                     boolean
                                                     (pvs__OR
                                                      (the
                                                       boolean
                                                       (pvs__member
                                                        (the
                                                         (integer 0 *)
                                                         n)
                                                        (the
                                                         list
                                                         stack)))
                                                      (the
                                                       boolean
                                                       (scaf__good_loop?_0
                                                        (the
                                                         (integer 0)
                                                         num_non_terminals)
                                                        (the
                                                         (integer 0)
                                                         len)
                                                        G
                                                        s265358
                                                        A
                                                        (the
                                                         (integer 0 *)
                                                         i)
                                                        (the
                                                         (integer 0 *)
                                                         n)))))
                                                    (the
                                                     boolean
                                                     (if
                                                      (the
                                                       boolean
                                                       (good_2? x))
                                                      (the
                                                       boolean
                                                       (pvs__AND
                                                        (the
                                                         boolean
                                                         (pvs__<=
                                                          (the
                                                           (integer 0)
                                                           (good_2-span
                                                            x))
                                                          (pvs__-
                                                           (the
                                                            (integer 0)
                                                            len)
                                                           (the
                                                            (integer
                                                             0
                                                             *)
                                                            i))))
                                                        (the
                                                         boolean
                                                         (scaf__good_good?_0
                                                          (the
                                                           (integer 0)
                                                           num_non_terminals)
                                                          (the
                                                           (integer 0)
                                                           len)
                                                          G
                                                          s265358
                                                          A
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           i)
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           n)
                                                          (the
                                                           (integer 0)
                                                           (good_2-span
                                                            x))))))
                                                      (the
                                                       boolean
                                                       t)))))))))))
                                          t40057))))
                                    t40056)))))))
(defun scaf__good_scaffold?_0
    (num_non_terminals len G s40039 stack A i n)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type list stack) (type (integer 0 *) i) (type (integer 0 *) n))
  (the boolean
       (loop for t40040 from 0 to (the (integer 0) len) always
             (pvs-funcall #'(lambda (i#0)
                              (the boolean
                                   (loop
                                    for
                                    t40041
                                    from
                                    0
                                    to
                                    (pvs__-
                                     (the
                                      (integer 0)
                                      num_non_terminals)
                                     1)
                                    always
                                    (pvs-funcall
                                     #'(lambda
                                        (n#0)
                                        (the
                                         boolean
                                         (the
                                          boolean
                                          (let
                                           ((x
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i#0))
                                              (the
                                               (integer 0 *)
                                               n#0))))
                                           (declare (type nil x))
                                           (the
                                            boolean
                                            (if
                                             (the boolean (fail_3? x))
                                             (the
                                              boolean
                                              (scaf__good_fail?_0
                                               (the
                                                (integer 0)
                                                num_non_terminals)
                                               (the (integer 0) len)
                                               G
                                               s40039
                                               A
                                               (the (integer 0 *) i#0)
                                               (the
                                                (integer 0 *)
                                                n#0)))
                                             (the
                                              boolean
                                              (if
                                               (the
                                                boolean
                                                (loop_2? x))
                                               (the
                                                boolean
                                                (pvs__OR
                                                 (the
                                                  boolean
                                                  (pvs__member
                                                   (the
                                                    (integer 0 *)
                                                    n#0)
                                                   (the list stack)))
                                                 (the
                                                  boolean
                                                  (scaf__good_loop?_0
                                                   (the
                                                    (integer 0)
                                                    num_non_terminals)
                                                   (the
                                                    (integer 0)
                                                    len)
                                                   G
                                                   s40039
                                                   A
                                                   (the
                                                    (integer 0 *)
                                                    i#0)
                                                   (the
                                                    (integer 0 *)
                                                    n#0)))))
                                               (the
                                                boolean
                                                (if
                                                 (the
                                                  boolean
                                                  (good_2? x))
                                                 (the
                                                  boolean
                                                  (pvs__AND
                                                   (the
                                                    boolean
                                                    (pvs__<=
                                                     (the
                                                      (integer 0)
                                                      (good_2-span x))
                                                     (pvs__-
                                                      (the
                                                       (integer 0)
                                                       len)
                                                      (the
                                                       (integer 0 *)
                                                       i#0))))
                                                   (the
                                                    boolean
                                                    (scaf__good_good?_0
                                                     (the
                                                      (integer 0)
                                                      num_non_terminals)
                                                     (the
                                                      (integer 0)
                                                      len)
                                                     G
                                                     s40039
                                                     A
                                                     (the
                                                      (integer 0 *)
                                                      i#0)
                                                     (the
                                                      (integer 0 *)
                                                      n#0)
                                                     (the
                                                      (integer 0)
                                                      (good_2-span
                                                       x))))))
                                                 (the
                                                  boolean
                                                  t)))))))))))
                                     t40041))))
                          t40040))))
(defun scaf!good_scaffold?_0
    (num_non_terminals len G s40039 stack A i n)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type list stack) (type (integer 0 *) i) (type (integer 0 *) n))
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type list stack) (type (integer 0 *) i) (type (integer 0 *) n))
  (the boolean
       (loop for t40048 from 0 to (the (integer 0) len) always
             (pvs-funcall #'(lambda (i#0)
                              (the boolean
                                   (loop
                                    for
                                    t40049
                                    from
                                    0
                                    to
                                    (pvs__-
                                     (the
                                      (integer 0)
                                      num_non_terminals)
                                     1)
                                    always
                                    (pvs-funcall
                                     #'(lambda
                                        (n#0)
                                        (the
                                         boolean
                                         (the
                                          boolean
                                          (let
                                           ((x
                                             (pvs-funcall
                                              (pvs-funcall
                                               A
                                               (the (integer 0 *) i#0))
                                              (the
                                               (integer 0 *)
                                               n#0))))
                                           (declare (type nil x))
                                           (the
                                            boolean
                                            (if
                                             (the boolean (fail_3? x))
                                             (the
                                              boolean
                                              (scaf__good_fail?_0
                                               (the
                                                (integer 0)
                                                num_non_terminals)
                                               (the (integer 0) len)
                                               G
                                               s40039
                                               A
                                               (the (integer 0 *) i#0)
                                               (the
                                                (integer 0 *)
                                                n#0)))
                                             (the
                                              boolean
                                              (if
                                               (the
                                                boolean
                                                (loop_2? x))
                                               (the
                                                boolean
                                                (pvs__OR
                                                 (the
                                                  boolean
                                                  (pvs__member
                                                   (the
                                                    (integer 0 *)
                                                    n#0)
                                                   (the list stack)))
                                                 (the
                                                  boolean
                                                  (scaf__good_loop?_0
                                                   (the
                                                    (integer 0)
                                                    num_non_terminals)
                                                   (the
                                                    (integer 0)
                                                    len)
                                                   G
                                                   s40039
                                                   A
                                                   (the
                                                    (integer 0 *)
                                                    i#0)
                                                   (the
                                                    (integer 0 *)
                                                    n#0)))))
                                               (the
                                                boolean
                                                (if
                                                 (the
                                                  boolean
                                                  (good_2? x))
                                                 (the
                                                  boolean
                                                  (pvs__AND
                                                   (the
                                                    boolean
                                                    (pvs__<=
                                                     (the
                                                      (integer 0)
                                                      (good_2-span x))
                                                     (pvs__-
                                                      (the
                                                       (integer 0)
                                                       len)
                                                      (the
                                                       (integer 0 *)
                                                       i#0))))
                                                   (the
                                                    boolean
                                                    (scaf__good_good?_0
                                                     (the
                                                      (integer 0)
                                                      num_non_terminals)
                                                     (the
                                                      (integer 0)
                                                      len)
                                                     G
                                                     s40039
                                                     A
                                                     (the
                                                      (integer 0 *)
                                                      i#0)
                                                     (the
                                                      (integer 0 *)
                                                      n#0)
                                                     (the
                                                      (integer 0)
                                                      (good_2-span
                                                       x))))))
                                                 (the
                                                  boolean
                                                  t)))))))))))
                                     t40049))))
                          t40048))))
(defun full_scaffold?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (i (project 2 lamvar#0))
            (n (project 3 lamvar#0)))
        (declare (type (integer 0) len) (type (integer 0 *) i)
         (type (integer 0 *) n))
        #'(lambda (A)
            (the boolean
                 (loop for t40134 from 0 to (the (integer 0) len)
                       always
                       (pvs-funcall #'(lambda
                                       (j)
                                       (the
                                        boolean
                                        (loop
                                         for
                                         t40136
                                         from
                                         0
                                         to
                                         (pvs__-
                                          (the
                                           (integer 0)
                                           (funcall 'undefined40135))
                                          1)
                                         always
                                         (pvs-funcall
                                          #'(lambda
                                             (m)
                                             (the
                                              boolean
                                              (pvs__IMPLIES
                                               (the
                                                boolean
                                                (pending_2?
                                                 (pvs-funcall
                                                  (pvs-funcall
                                                   A
                                                   (the
                                                    (integer 0 *)
                                                    j))
                                                  (the
                                                   (integer 0 *)
                                                   m))))
                                               (the
                                                boolean
                                                (pvs__OR
                                                 (the
                                                  boolean
                                                  (pvs__<
                                                   (the
                                                    (integer 0 *)
                                                    j)
                                                   (the
                                                    (integer 0 *)
                                                    i)))
                                                 (the
                                                  boolean
                                                  (pvs__AND
                                                   (the
                                                    boolean
                                                    (=
                                                     (the
                                                      (integer 0 *)
                                                      j)
                                                     (the
                                                      (integer 0 *)
                                                      i)))
                                                   (the
                                                    boolean
                                                    (pvs__<=
                                                     (the
                                                      (integer 0 *)
                                                      n)
                                                     (the
                                                      (integer 0 *)
                                                      m))))))))))
                                          t40136))))
                                    t40134)))))))
(defun _full_scaffold?_0 (len i n A j m)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n) (type (integer 0 *) j)
   (type (integer 0 *) m))
  (the boolean
       (loop for t40116 from 0 to (the (integer 0) len) always
             (pvs-funcall #'(lambda (j#0)
                              (the boolean
                                   (loop
                                    for
                                    t40118
                                    from
                                    0
                                    to
                                    (pvs__-
                                     (the
                                      (integer 0)
                                      (funcall 'undefined40117))
                                     1)
                                    always
                                    (pvs-funcall
                                     #'(lambda
                                        (m#0)
                                        (the
                                         boolean
                                         (pvs__IMPLIES
                                          (the
                                           boolean
                                           (pending_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) j#0))
                                             (the (integer 0 *) m#0))))
                                          (the
                                           boolean
                                           (pvs__OR
                                            (the
                                             boolean
                                             (pvs__<
                                              (the (integer 0 *) j#0)
                                              (the (integer 0 *) i)))
                                            (the
                                             boolean
                                             (pvs__AND
                                              (the
                                               boolean
                                               (=
                                                (the (integer 0 *) j#0)
                                                (the (integer 0 *) i)))
                                              (the
                                               boolean
                                               (pvs__<=
                                                (the (integer 0 *) n)
                                                (the
                                                 (integer 0 *)
                                                 m#0))))))))))
                                     t40118))))
                          t40116))))
(defun full_scaffold?!_0 (len i n A j m)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) n) (type (integer 0 *) j)
   (type (integer 0 *) m))
  (the boolean
       (loop for t40125 from 0 to (the (integer 0) len) always
             (pvs-funcall #'(lambda (j#0)
                              (the boolean
                                   (loop
                                    for
                                    t40127
                                    from
                                    0
                                    to
                                    (pvs__-
                                     (the
                                      (integer 0)
                                      (funcall 'undefined40126))
                                     1)
                                    always
                                    (pvs-funcall
                                     #'(lambda
                                        (m#0)
                                        (the
                                         boolean
                                         (pvs__IMPLIES
                                          (the
                                           boolean
                                           (pending_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) j#0))
                                             (the (integer 0 *) m#0))))
                                          (the
                                           boolean
                                           (pvs__OR
                                            (the
                                             boolean
                                             (pvs__<
                                              (the (integer 0 *) j#0)
                                              (the (integer 0 *) i)))
                                            (the
                                             boolean
                                             (pvs__AND
                                              (the
                                               boolean
                                               (=
                                                (the (integer 0 *) j#0)
                                                (the (integer 0 *) i)))
                                              (the
                                               boolean
                                               (pvs__<=
                                                (the (integer 0 *) n)
                                                (the
                                                 (integer 0 *)
                                                 m#0))))))))))
                                     t40127))))
                          t40125))))
(defun scaf_full_scaffold?_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (i (project 2 lamvar#0))
            (n (project 3 lamvar#0)))
        (declare (type (integer 0) len) (type (integer 0 *) i)
         (type (integer 0 *) n))
        #'(lambda (A)
            (the boolean
                 (loop for t40108 from 0 to (the (integer 0) len)
                       always
                       (pvs-funcall #'(lambda
                                       (j)
                                       (the
                                        boolean
                                        (loop
                                         for
                                         t40109
                                         from
                                         0
                                         to
                                         (pvs__-
                                          (the
                                           (integer 0)
                                           num_non_terminals)
                                          1)
                                         always
                                         (pvs-funcall
                                          #'(lambda
                                             (m)
                                             (the
                                              boolean
                                              (pvs__IMPLIES
                                               (the
                                                boolean
                                                (pending_2?
                                                 (pvs-funcall
                                                  (pvs-funcall
                                                   A
                                                   (the
                                                    (integer 0 *)
                                                    j))
                                                  (the
                                                   (integer 0 *)
                                                   m))))
                                               (the
                                                boolean
                                                (pvs__OR
                                                 (the
                                                  boolean
                                                  (pvs__<
                                                   (the
                                                    (integer 0 *)
                                                    j)
                                                   (the
                                                    (integer 0 *)
                                                    i)))
                                                 (the
                                                  boolean
                                                  (pvs__AND
                                                   (the
                                                    boolean
                                                    (=
                                                     (the
                                                      (integer 0 *)
                                                      j)
                                                     (the
                                                      (integer 0 *)
                                                      i)))
                                                   (the
                                                    boolean
                                                    (pvs__<=
                                                     (the
                                                      (integer 0 *)
                                                      n)
                                                     (the
                                                      (integer 0 *)
                                                      m))))))))))
                                          t40109))))
                                    t40108)))))))
(defun scaf__full_scaffold?_0 (num_non_terminals len i n A j m)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) n) (type (integer 0 *) j)
   (type (integer 0 *) m))
  (the boolean
       (loop for t40092 from 0 to (the (integer 0) len) always
             (pvs-funcall #'(lambda (j#0)
                              (the boolean
                                   (loop
                                    for
                                    t40093
                                    from
                                    0
                                    to
                                    (pvs__-
                                     (the
                                      (integer 0)
                                      num_non_terminals)
                                     1)
                                    always
                                    (pvs-funcall
                                     #'(lambda
                                        (m#0)
                                        (the
                                         boolean
                                         (pvs__IMPLIES
                                          (the
                                           boolean
                                           (pending_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) j#0))
                                             (the (integer 0 *) m#0))))
                                          (the
                                           boolean
                                           (pvs__OR
                                            (the
                                             boolean
                                             (pvs__<
                                              (the (integer 0 *) j#0)
                                              (the (integer 0 *) i)))
                                            (the
                                             boolean
                                             (pvs__AND
                                              (the
                                               boolean
                                               (=
                                                (the (integer 0 *) j#0)
                                                (the (integer 0 *) i)))
                                              (the
                                               boolean
                                               (pvs__<=
                                                (the (integer 0 *) n)
                                                (the
                                                 (integer 0 *)
                                                 m#0))))))))))
                                     t40093))))
                          t40092))))
(defun scaf!full_scaffold?_0 (num_non_terminals len i n A j m)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) n) (type (integer 0 *) j)
   (type (integer 0 *) m))
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) n) (type (integer 0 *) j)
   (type (integer 0 *) m))
  (the boolean
       (loop for t40100 from 0 to (the (integer 0) len) always
             (pvs-funcall #'(lambda (j#0)
                              (the boolean
                                   (loop
                                    for
                                    t40101
                                    from
                                    0
                                    to
                                    (pvs__-
                                     (the
                                      (integer 0)
                                      num_non_terminals)
                                     1)
                                    always
                                    (pvs-funcall
                                     #'(lambda
                                        (m#0)
                                        (the
                                         boolean
                                         (pvs__IMPLIES
                                          (the
                                           boolean
                                           (pending_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              A
                                              (the (integer 0 *) j#0))
                                             (the (integer 0 *) m#0))))
                                          (the
                                           boolean
                                           (pvs__OR
                                            (the
                                             boolean
                                             (pvs__<
                                              (the (integer 0 *) j#0)
                                              (the (integer 0 *) i)))
                                            (the
                                             boolean
                                             (pvs__AND
                                              (the
                                               boolean
                                               (=
                                                (the (integer 0 *) j#0)
                                                (the (integer 0 *) i)))
                                              (the
                                               boolean
                                               (pvs__<=
                                                (the (integer 0 *) n)
                                                (the
                                                 (integer 0 *)
                                                 m#0))))))))))
                                     t40101))))
                          t40100))))
(defun fine_scaffold?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (lamvar#0)
            (let ((i (project 1 lamvar#0))
                  (stack (project 2 lamvar#0))
                  (n (project 3 lamvar#0)))
              (declare (type (integer 0 *) i) (type list stack)
               (type (integer 0 *) n))
              #'(lambda (A)
                  (the boolean
                       (pvs__AND (the
                                  boolean
                                  (pvs-funcall
                                   (pvs-funcall
                                    (good_scaffold?_0)
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      G
                                      s265358
                                      (the list stack))))
                                   A))
                                 (the
                                  boolean
                                  (pvs-funcall
                                   (pvs-funcall
                                    (full_scaffold?_0)
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      (the (integer 0 *) i)
                                      (the (integer 0 *) n))))
                                   A))))))))))
(defun _fine_scaffold?_0 (len G s40156 i stack n A)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type list stack) (type (integer 0 *) n))
  (the boolean
       (pvs__AND (the boolean
                      (pvs-funcall (pvs-funcall
                                    (good_scaffold?_0)
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      G
                                      s40156
                                      (the list stack))))
                                   A))
                 (the boolean
                      (pvs-funcall (pvs-funcall
                                    (full_scaffold?_0)
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      (the (integer 0 *) i)
                                      (the (integer 0 *) n))))
                                   A)))))
(defun fine_scaffold?!_0 (len G s40156 i stack n A)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type list stack) (type (integer 0 *) n))
  (the boolean
       (pvs__AND (the boolean
                      (pvs-funcall (pvs-funcall
                                    (good_scaffold?_0)
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      G
                                      s40156
                                      (the list stack))))
                                   A))
                 (the boolean
                      (pvs-funcall (pvs-funcall
                                    (full_scaffold?_0)
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      (the (integer 0 *) i)
                                      (the (integer 0 *) n))))
                                   A)))))
(defun scaf_fine_scaffold?_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (lamvar#0)
            (let ((i (project 1 lamvar#0))
                  (stack (project 2 lamvar#0))
                  (n (project 3 lamvar#0)))
              (declare (type (integer 0 *) i) (type list stack)
               (type (integer 0 *) n))
              #'(lambda (A)
                  (the boolean
                       (pvs__AND (the
                                  boolean
                                  (pvs-funcall
                                   (pvs-funcall
                                    (scaf_good_scaffold?_0
                                     (the
                                      (integer 0)
                                      num_non_terminals))
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      G
                                      s265358
                                      (the list stack))))
                                   A))
                                 (the
                                  boolean
                                  (pvs-funcall
                                   (pvs-funcall
                                    (scaf_full_scaffold?_0
                                     (the
                                      (integer 0)
                                      num_non_terminals))
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      (the (integer 0 *) i)
                                      (the (integer 0 *) n))))
                                   A))))))))))
(defun scaf__fine_scaffold?_0
    (num_non_terminals len G s40143 i stack n A)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type list stack) (type (integer 0 *) n))
  (the boolean
       (pvs__AND (the boolean
                      (pvs-funcall (pvs-funcall
                                    (scaf_good_scaffold?_0
                                     (the
                                      (integer 0)
                                      num_non_terminals))
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      G
                                      s40143
                                      (the list stack))))
                                   A))
                 (the boolean
                      (pvs-funcall (pvs-funcall
                                    (scaf_full_scaffold?_0
                                     (the
                                      (integer 0)
                                      num_non_terminals))
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      (the (integer 0 *) i)
                                      (the (integer 0 *) n))))
                                   A)))))
(defun scaf!fine_scaffold?_0
    (num_non_terminals len G s40143 i stack n A)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type list stack) (type (integer 0 *) n))
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type list stack) (type (integer 0 *) n))
  (the boolean
       (pvs__AND (the boolean
                      (pvs-funcall (pvs-funcall
                                    (scaf_good_scaffold?_0
                                     (the
                                      (integer 0)
                                      num_non_terminals))
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      G
                                      s40143
                                      (the list stack))))
                                   A))
                 (the boolean
                      (pvs-funcall (pvs-funcall
                                    (scaf_full_scaffold?_0
                                     (the
                                      (integer 0)
                                      num_non_terminals))
                                    (the
                                     (simple-array t)
                                     (pvs2cl_tuple
                                      (the (integer 0) len)
                                      (the (integer 0 *) i)
                                      (the (integer 0 *) n))))
                                   A)))))
(defun stack_scaffold?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0))
            (i (project 4 lamvar#0))
            (stack (project 5 lamvar#0)))
        (declare (type (integer 0) len) (type (integer 0 *) i)
         (type list stack))
        #'(lambda (A)
            (the boolean
                 (loop for t40199 from 0 to
                       (pvs__- (the
                                (integer 0)
                                (funcall 'undefined40198))
                               1)
                       always
                       (pvs-funcall #'(lambda
                                       (m)
                                       (the
                                        boolean
                                        (pvs__=>
                                         (the
                                          boolean
                                          (pvs__member
                                           (the (integer 0 *) m)
                                           (the list stack)))
                                         (the
                                          boolean
                                          (pending_2?
                                           (pvs-funcall
                                            (pvs-funcall
                                             A
                                             (the (integer 0 *) i))
                                            (the (integer 0 *) m)))))))
                                    t40199)))))))
(defun _stack_scaffold?_0 (len G s40185 i stack A m)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type list stack) (type (integer 0 *) m))
  (the boolean
       (loop for t40187 from 0 to
             (pvs__- (the (integer 0) (funcall 'undefined40186)) 1)
             always
             (pvs-funcall #'(lambda (m#0)
                              (the boolean
                                   (pvs__=>
                                    (the
                                     boolean
                                     (pvs__member
                                      (the (integer 0 *) m#0)
                                      (the list stack)))
                                    (the
                                     boolean
                                     (pending_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the (integer 0 *) m#0)))))))
                          t40187))))
(defun stack_scaffold?!_0 (len G s40185 i stack A m)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type list stack) (type (integer 0 *) m))
  (the boolean
       (loop for t40193 from 0 to
             (pvs__- (the (integer 0) (funcall 'undefined40192)) 1)
             always
             (pvs-funcall #'(lambda (m#0)
                              (the boolean
                                   (pvs__=>
                                    (the
                                     boolean
                                     (pvs__member
                                      (the (integer 0 *) m#0)
                                      (the list stack)))
                                    (the
                                     boolean
                                     (pending_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the (integer 0 *) m#0)))))))
                          t40193))))
(defun scaf_stack_scaffold?_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0))
            (i (project 4 lamvar#0))
            (stack (project 5 lamvar#0)))
        (declare (type (integer 0) len) (type (integer 0 *) i)
         (type list stack))
        #'(lambda (A)
            (the boolean
                 (loop for t40180 from 0 to
                       (pvs__- (the (integer 0) num_non_terminals) 1)
                       always
                       (pvs-funcall #'(lambda
                                       (m)
                                       (the
                                        boolean
                                        (pvs__=>
                                         (the
                                          boolean
                                          (pvs__member
                                           (the (integer 0 *) m)
                                           (the list stack)))
                                         (the
                                          boolean
                                          (pending_2?
                                           (pvs-funcall
                                            (pvs-funcall
                                             A
                                             (the (integer 0 *) i))
                                            (the (integer 0 *) m)))))))
                                    t40180)))))))
(defun scaf__stack_scaffold?_0
    (num_non_terminals len G s40169 i stack A m)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type list stack) (type (integer 0 *) m))
  (the boolean
       (loop for t40170 from 0 to
             (pvs__- (the (integer 0) num_non_terminals) 1) always
             (pvs-funcall #'(lambda (m#0)
                              (the boolean
                                   (pvs__=>
                                    (the
                                     boolean
                                     (pvs__member
                                      (the (integer 0 *) m#0)
                                      (the list stack)))
                                    (the
                                     boolean
                                     (pending_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the (integer 0 *) m#0)))))))
                          t40170))))
(defun scaf!stack_scaffold?_0
    (num_non_terminals len G s40169 i stack A m)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type list stack) (type (integer 0 *) m))
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type list stack) (type (integer 0 *) m))
  (the boolean
       (loop for t40175 from 0 to
             (pvs__- (the (integer 0) num_non_terminals) 1) always
             (pvs-funcall #'(lambda (m#0)
                              (the boolean
                                   (pvs__=>
                                    (the
                                     boolean
                                     (pvs__member
                                      (the (integer 0 *) m#0)
                                      (the list stack)))
                                    (the
                                     boolean
                                     (pending_2?
                                      (pvs-funcall
                                       (pvs-funcall
                                        A
                                        (the (integer 0 *) i))
                                       (the (integer 0 *) m#0)))))))
                          t40175))))
(defun fine_stack_scaffold?_0 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (lamvar#0)
            (let ((i (project 1 lamvar#0))
                  (root (project 2 lamvar#0))
                  (stack (project 3 lamvar#0)))
              (declare (type (integer 0 *) i) (type (integer 0 *) root)
               (type list stack))
              #'(lambda (A)
                  (the boolean
                       (pvs__AND (the
                                  boolean
                                  (_fine_scaffold?_0
                                   (the (integer 0) len)
                                   G
                                   s265358
                                   (the (integer 0 *) i)
                                   (the list stack)
                                   (the (integer 0 *) root)
                                   A))
                                 (the
                                  boolean
                                  (pvs__AND
                                   (the
                                    boolean
                                    (pvs-funcall
                                     (pvs-funcall
                                      (stack_scaffold?_0)
                                      (the
                                       (simple-array t)
                                       (pvs2cl_tuple
                                        (the (integer 0) len)
                                        G
                                        s265358
                                        (the (integer 0 *) i)
                                        (the list stack))))
                                     A))
                                   (the
                                    boolean
                                    (pvs__=>
                                     (the
                                      boolean
                                      (pvs_cons? (the list stack)))
                                     (the
                                      boolean
                                      (pvs__member
                                       (the (integer 0 *) root)
                                       (the list stack)))))))))))))))
(defun _fine_stack_scaffold?_0 (len G s40211 i root stack A)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) root) (type list stack))
  (the boolean
       (pvs__AND (the boolean
                      (_fine_scaffold?_0 (the (integer 0) len) G s40211
                                         (the (integer 0 *) i)
                                         (the list stack)
                                         (the (integer 0 *) root) A))
                 (the boolean
                      (pvs__AND (the
                                 boolean
                                 (pvs-funcall
                                  (pvs-funcall
                                   (stack_scaffold?_0)
                                   (the
                                    (simple-array t)
                                    (pvs2cl_tuple
                                     (the (integer 0) len)
                                     G
                                     s40211
                                     (the (integer 0 *) i)
                                     (the list stack))))
                                  A))
                                (the
                                 boolean
                                 (pvs__=>
                                  (the
                                   boolean
                                   (pvs_cons? (the list stack)))
                                  (the
                                   boolean
                                   (pvs__member
                                    (the (integer 0 *) root)
                                    (the list stack))))))))))
(defun fine_stack_scaffold?!_0 (len G s40211 i root stack A)
  (declare (type (integer 0) len) (type (integer 0 *) i)
   (type (integer 0 *) root) (type list stack))
  (the boolean
       (pvs__AND (the boolean
                      (fine_scaffold?!_0 (the (integer 0) len) G s40211
                                         (the (integer 0 *) i)
                                         (the list stack)
                                         (the (integer 0 *) root) A))
                 (the boolean
                      (pvs__AND (the
                                 boolean
                                 (pvs-funcall
                                  (pvs-funcall
                                   (stack_scaffold?_0)
                                   (the
                                    (simple-array t)
                                    (pvs2cl_tuple
                                     (the (integer 0) len)
                                     G
                                     s40211
                                     (the (integer 0 *) i)
                                     (the list stack))))
                                  A))
                                (the
                                 boolean
                                 (pvs__=>
                                  (the
                                   boolean
                                   (pvs_cons? (the list stack)))
                                  (the
                                   boolean
                                   (pvs__member
                                    (the (integer 0 *) root)
                                    (the list stack))))))))))
(defun scaf_fine_stack_scaffold?_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (lamvar#0)
            (let ((i (project 1 lamvar#0))
                  (root (project 2 lamvar#0))
                  (stack (project 3 lamvar#0)))
              (declare (type (integer 0 *) i) (type (integer 0 *) root)
               (type list stack))
              #'(lambda (A)
                  (the boolean
                       (pvs__AND (the
                                  boolean
                                  (scaf__fine_scaffold?_0
                                   (the (integer 0) num_non_terminals)
                                   (the (integer 0) len)
                                   G
                                   s265358
                                   (the (integer 0 *) i)
                                   (the list stack)
                                   (the (integer 0 *) root)
                                   A))
                                 (the
                                  boolean
                                  (pvs__AND
                                   (the
                                    boolean
                                    (pvs-funcall
                                     (pvs-funcall
                                      (scaf_stack_scaffold?_0
                                       (the
                                        (integer 0)
                                        num_non_terminals))
                                      (the
                                       (simple-array t)
                                       (pvs2cl_tuple
                                        (the (integer 0) len)
                                        G
                                        s265358
                                        (the (integer 0 *) i)
                                        (the list stack))))
                                     A))
                                   (the
                                    boolean
                                    (pvs__=>
                                     (the
                                      boolean
                                      (pvs_cons? (the list stack)))
                                     (the
                                      boolean
                                      (pvs__member
                                       (the (integer 0 *) root)
                                       (the list stack)))))))))))))))
(defun scaf__fine_stack_scaffold?_0
    (num_non_terminals len G s40204 i root stack A)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) root) (type list stack))
  (the boolean
       (pvs__AND (the boolean
                      (scaf__fine_scaffold?_0
                        (the (integer 0) num_non_terminals)
                        (the (integer 0) len) G s40204
                        (the (integer 0 *) i) (the list stack)
                        (the (integer 0 *) root) A))
                 (the boolean
                      (pvs__AND (the
                                 boolean
                                 (pvs-funcall
                                  (pvs-funcall
                                   (scaf_stack_scaffold?_0
                                    (the
                                     (integer 0)
                                     num_non_terminals))
                                   (the
                                    (simple-array t)
                                    (pvs2cl_tuple
                                     (the (integer 0) len)
                                     G
                                     s40204
                                     (the (integer 0 *) i)
                                     (the list stack))))
                                  A))
                                (the
                                 boolean
                                 (pvs__=>
                                  (the
                                   boolean
                                   (pvs_cons? (the list stack)))
                                  (the
                                   boolean
                                   (pvs__member
                                    (the (integer 0 *) root)
                                    (the list stack))))))))))
(defun scaf!fine_stack_scaffold?_0
    (num_non_terminals len G s40204 i root stack A)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) root) (type list stack))
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) i) (type (integer 0 *) root) (type list stack))
  (the boolean
       (pvs__AND (the boolean
                      (scaf!fine_scaffold?_0
                        (the (integer 0) num_non_terminals)
                        (the (integer 0) len) G s40204
                        (the (integer 0 *) i) (the list stack)
                        (the (integer 0 *) root) A))
                 (the boolean
                      (pvs__AND (the
                                 boolean
                                 (pvs-funcall
                                  (pvs-funcall
                                   (scaf_stack_scaffold?_0
                                    (the
                                     (integer 0)
                                     num_non_terminals))
                                   (the
                                    (simple-array t)
                                    (pvs2cl_tuple
                                     (the (integer 0) len)
                                     G
                                     s40204
                                     (the (integer 0 *) i)
                                     (the list stack))))
                                  A))
                                (the
                                 boolean
                                 (pvs__=>
                                  (the
                                   boolean
                                   (pvs_cons? (the list stack)))
                                  (the
                                   boolean
                                   (pvs__member
                                    (the (integer 0 *) root)
                                    (the list stack))))))))))
(defun scaf_putstack_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (St)
            #'(lambda (n)
                (the (simple-array t)
                     (if (the boolean
                              (pvs__member (the (integer 0 *) n)
                                           (the
                                            list
                                            (project
                                             4
                                             (the
                                              (simple-array t)
                                              St)))))
                         (the (simple-array t)
                              (let ((A38704 (the (integer 0 *) n))
                                    (A38703
                                     (the
                                      (integer 0 *)
                                      (project
                                       1
                                       (the (simple-array t) St)))))
                                (let
                                 ((N38701 (make-loop_2))
                                  (E38700 (the (simple-array t) St)))
                                 (let
                                  ((E38702 E38700))
                                  (nd-rec-tup-update
                                   E38700
                                   2
                                   (pvs-function-update
                                    (mkcopy-pvs-closure-hash
                                     (svref E38702 2))
                                    A38703
                                    (pvs-outer-array-update
                                     (pvs-funcall
                                      (svref E38702 2)
                                      A38703)
                                     A38704
                                     N38701
                                     (the
                                      (integer 0)
                                      num_non_terminals))))))))
                       (the (simple-array t)
                            (let ()
                              (let ((N38706
                                     (the
                                      list
                                      (pvs__cons
                                       (the (integer 0 *) n)
                                       (the
                                        list
                                        (project
                                         4
                                         (the (simple-array t) St))))))
                                    (E38705 (the (simple-array t) St)))
                                (let
                                 ((E38707 E38705))
                                 (nd-rec-tup-update
                                  E38705
                                  3
                                  N38706))))))))))))
(defun scaf__putstack_0 (num_non_terminals len G s38664 St n)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (simple-array t) St) (type (integer 0 *) n))
  (the (simple-array t)
       (if (the boolean
                (pvs__member (the (integer 0 *) n)
                             (the list
                                  (project
                                   4
                                   (the (simple-array t) St)))))
           (the (simple-array t)
                (let ((A38669 (the (integer 0 *) n))
                      (A38668
                       (the (integer 0 *)
                            (project 1 (the (simple-array t) St)))))
                  (let ((N38666 (make-loop_2))
                        (E38665 (the (simple-array t) St)))
                    (let ((E38667 E38665))
                      (nd-rec-tup-update E38665 2
                                         (pvs-function-update
                                          (mkcopy-pvs-closure-hash
                                           (svref E38667 2))
                                          A38668
                                          (pvs-outer-array-update
                                           (pvs-funcall
                                            (svref E38667 2)
                                            A38668)
                                           A38669
                                           N38666
                                           (the
                                            (integer 0)
                                            num_non_terminals))))))))
         (the (simple-array t)
              (let ()
                (let ((N38671
                       (the list
                            (pvs__cons (the (integer 0 *) n)
                                       (the
                                        list
                                        (project
                                         4
                                         (the (simple-array t) St))))))
                      (E38670 (the (simple-array t) St)))
                  (let ((E38672 E38670))
                    (nd-rec-tup-update E38670 3 N38671))))))))
(defun scaf!putstack_0 (num_non_terminals len G s38664 St n)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (simple-array t) St) (type (integer 0 *) n))
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (simple-array t) St) (type (integer 0 *) n))
  (the (simple-array t)
       (if (the boolean
                (pvs__member (the (integer 0 *) n)
                             (the list
                                  (project
                                   4
                                   (the (simple-array t) St)))))
           (the (simple-array t)
                (let ((A38694 (the (integer 0 *) n))
                      (LHS38692
                       (the (integer 0 *)
                            (project 1 (the (simple-array t) St)))))
                  (let ((RHS38687 (make-loop_2))
                        (E38688 (the (simple-array t) St)))
                    (let* ((E38689 E38688)
                           (R38691
                            (let ((E38693
                                   (make-closure-hash
                                    (svref E38689 2))))
                              (pvs-function-update E38693 LHS38692
                                                   (pvs-outer-array-update
                                                    (pvs-closure-hash-lookup
                                                     E38693
                                                     LHS38692)
                                                    A38694
                                                    RHS38687
                                                    (the
                                                     (integer 0)
                                                     num_non_terminals))))))
                      (rec-tup-update E38689 2 R38691)
                      E38689)
                    E38688)))
         (the (simple-array t)
              (let ((RHS38695
                     (the list
                          (pvs__cons (the (integer 0 *) n)
                                     (the
                                      list
                                      (project
                                       4
                                       (the (simple-array t) St))))))
                    (E38696 (the (simple-array t) St)))
                (let* ((E38697 E38696) (R38699 RHS38695))
                  (rec-tup-update E38697 3 R38699)
                  E38697)
                E38696)))))
(defun scaf_step_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (St)
            (the (simple-array t)
                 (let ((pos
                        (the (integer 0 *)
                             (project 1 (the (simple-array t) St)))))
                   (declare (type (integer 0 *) pos))
                   (the (simple-array t)
                        (let ((root
                               (the
                                (integer 0 *)
                                (project
                                 2
                                 (the (simple-array t) St)))))
                          (declare (type (integer 0 *) root))
                          (the (simple-array t)
                               (let
                                ((scaf
                                  (project
                                   3
                                   (the (simple-array t) St))))
                                (declare (type nil scaf))
                                (the
                                 (simple-array t)
                                 (let
                                  ((stack
                                    (the
                                     list
                                     (project
                                      4
                                      (the (simple-array t) St)))))
                                  (declare (type list stack))
                                  (the
                                   (simple-array t)
                                   (if
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (= (the (integer 0 *) pos) 0))
                                      (the
                                       boolean
                                       (=
                                        (the (integer 0 *) root)
                                        (the
                                         (integer 0)
                                         num_non_terminals)))))
                                    (the (simple-array t) St)
                                    (the
                                     (simple-array t)
                                     (if
                                      (the
                                       boolean
                                       (=
                                        (the (integer 0 *) root)
                                        (the
                                         (integer 0)
                                         num_non_terminals)))
                                      (the
                                       (simple-array t)
                                       (let
                                        ()
                                        (let
                                         ((N39243 (the list nil))
                                          (E39242
                                           (let
                                            ()
                                            (let
                                             ((N39240 0)
                                              (E39239
                                               (let
                                                ()
                                                (let
                                                 ((N39237
                                                   (pvs__-
                                                    (the
                                                     (integer 0 *)
                                                     pos)
                                                    1))
                                                  (E39236
                                                   (the
                                                    (simple-array t)
                                                    St)))
                                                 (let
                                                  ((E39238 E39236))
                                                  (nd-rec-tup-update
                                                   E39236
                                                   0
                                                   N39237))))))
                                             (let
                                              ((E39241 E39239))
                                              (nd-rec-tup-update
                                               E39239
                                               1
                                               N39240))))))
                                         (let
                                          ((E39244 E39242))
                                          (nd-rec-tup-update
                                           E39242
                                           3
                                           N39243)))))
                                      (the
                                       (simple-array t)
                                       (if
                                        (the
                                         boolean
                                         (pvs_NOT
                                          (the
                                           boolean
                                           (pending_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              scaf
                                              (the (integer 0 *) pos))
                                             (the
                                              (integer 0 *)
                                              root))))))
                                        (the
                                         (simple-array t)
                                         (let
                                          ()
                                          (let
                                           ((N39249 (the list nil))
                                            (E39248
                                             (let
                                              ()
                                              (let
                                               ((N39246
                                                 (pvs__+
                                                  (the
                                                   (integer 0 *)
                                                   root)
                                                  1))
                                                (E39245
                                                 (the
                                                  (simple-array t)
                                                  St)))
                                               (let
                                                ((E39247 E39245))
                                                (nd-rec-tup-update
                                                 E39245
                                                 1
                                                 N39246))))))
                                           (let
                                            ((E39250 E39248))
                                            (nd-rec-tup-update
                                             E39248
                                             3
                                             N39249)))))
                                        (the
                                         (simple-array t)
                                         (if
                                          (the
                                           boolean
                                           (pvs_null?
                                            (the list stack)))
                                          (the
                                           (simple-array t)
                                           (let
                                            ()
                                            (let
                                             ((N39252
                                               (the
                                                list
                                                (pvs__cons
                                                 (the
                                                  (integer 0 *)
                                                  root)
                                                 (the list nil))))
                                              (E39251
                                               (the
                                                (simple-array t)
                                                St)))
                                             (let
                                              ((E39253 E39251))
                                              (nd-rec-tup-update
                                               E39251
                                               3
                                               N39252)))))
                                          (the
                                           (simple-array t)
                                           (let
                                            ((cur
                                              (the
                                               (integer 0 *)
                                               (pvs_car
                                                (the list stack)))))
                                            (declare
                                             (type (integer 0 *) cur))
                                            (the
                                             (simple-array t)
                                             (let
                                              ((rest
                                                (the
                                                 list
                                                 (pvs_cdr
                                                  (the list stack)))))
                                              (declare
                                               (type list rest))
                                              (the
                                               (simple-array t)
                                               (the
                                                (simple-array t)
                                                (let
                                                 ((x
                                                   (pvs-funcall
                                                    G
                                                    (the
                                                     (integer 0 *)
                                                     cur))))
                                                 (declare (type nil x))
                                                 (the
                                                  (simple-array t)
                                                  (if
                                                   (the
                                                    boolean
                                                    (epsilon_2? x))
                                                   (the
                                                    (simple-array t)
                                                    (let
                                                     ()
                                                     (let
                                                      ((N39260
                                                        (the
                                                         list
                                                         rest))
                                                       (E39259
                                                        (let
                                                         ((A39258
                                                           (the
                                                            (integer
                                                             0
                                                             *)
                                                            cur))
                                                          (A39257
                                                           (the
                                                            (integer
                                                             0
                                                             *)
                                                            pos)))
                                                         (let
                                                          ((N39255
                                                            (make-good_2
                                                             0))
                                                           (E39254
                                                            (the
                                                             (simple-array
                                                              t)
                                                             St)))
                                                          (let
                                                           ((E39256
                                                             E39254))
                                                           (nd-rec-tup-update
                                                            E39254
                                                            2
                                                            (pvs-function-update
                                                             (mkcopy-pvs-closure-hash
                                                              (svref
                                                               E39256
                                                               2))
                                                             A39257
                                                             (pvs-outer-array-update
                                                              (pvs-funcall
                                                               (svref
                                                                E39256
                                                                2)
                                                               A39257)
                                                              A39258
                                                              N39255
                                                              (the
                                                               (integer
                                                                0)
                                                               num_non_terminals)))))))))
                                                      (let
                                                       ((E39261
                                                         E39259))
                                                       (nd-rec-tup-update
                                                        E39259
                                                        3
                                                        N39260)))))
                                                   (the
                                                    (simple-array t)
                                                    (if
                                                     (the
                                                      boolean
                                                      (failure_2? x))
                                                     (the
                                                      (simple-array t)
                                                      (let
                                                       ()
                                                       (let
                                                        ((N39268
                                                          (the
                                                           list
                                                           rest))
                                                         (E39267
                                                          (let
                                                           ((A39266
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              cur))
                                                            (A39265
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              pos)))
                                                           (let
                                                            ((N39263
                                                              (make-fail_3))
                                                             (E39262
                                                              (the
                                                               (simple-array
                                                                t)
                                                               St)))
                                                            (let
                                                             ((E39264
                                                               E39262))
                                                             (nd-rec-tup-update
                                                              E39262
                                                              2
                                                              (pvs-function-update
                                                               (mkcopy-pvs-closure-hash
                                                                (svref
                                                                 E39264
                                                                 2))
                                                               A39265
                                                               (pvs-outer-array-update
                                                                (pvs-funcall
                                                                 (svref
                                                                  E39264
                                                                  2)
                                                                 A39265)
                                                                A39266
                                                                N39263
                                                                (the
                                                                 (integer
                                                                  0)
                                                                 num_non_terminals)))))))))
                                                        (let
                                                         ((E39269
                                                           E39267))
                                                         (nd-rec-tup-update
                                                          E39267
                                                          3
                                                          N39268)))))
                                                     (the
                                                      (simple-array t)
                                                      (if
                                                       (the
                                                        boolean
                                                        (any_2? x))
                                                       (the
                                                        (simple-array
                                                         t)
                                                        (let
                                                         ((v
                                                           (if
                                                            (the
                                                             boolean
                                                             (=
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               pos)
                                                              (the
                                                               (integer
                                                                0)
                                                               len)))
                                                            (make-fail_3)
                                                            (make-good_2
                                                             1))))
                                                         (declare
                                                          (type nil v))
                                                         (the
                                                          (simple-array
                                                           t)
                                                          (let
                                                           ()
                                                           (let
                                                            ((N39276
                                                              (the
                                                               list
                                                               rest))
                                                             (E39275
                                                              (let
                                                               ((A39274
                                                                 (the
                                                                  (integer
                                                                   0
                                                                   *)
                                                                  cur))
                                                                (A39273
                                                                 (the
                                                                  (integer
                                                                   0
                                                                   *)
                                                                  pos)))
                                                               (let
                                                                ((N39271
                                                                  v)
                                                                 (E39270
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   St)))
                                                                (let
                                                                 ((E39272
                                                                   E39270))
                                                                 (nd-rec-tup-update
                                                                  E39270
                                                                  2
                                                                  (pvs-function-update
                                                                   (mkcopy-pvs-closure-hash
                                                                    (svref
                                                                     E39272
                                                                     2))
                                                                   A39273
                                                                   (pvs-outer-array-update
                                                                    (pvs-funcall
                                                                     (svref
                                                                      E39272
                                                                      2)
                                                                     A39273)
                                                                    A39274
                                                                    N39271
                                                                    (the
                                                                     (integer
                                                                      0)
                                                                     num_non_terminals)))))))))
                                                            (let
                                                             ((E39277
                                                               E39275))
                                                             (nd-rec-tup-update
                                                              E39275
                                                              3
                                                              N39276)))))))
                                                       (the
                                                        (simple-array
                                                         t)
                                                        (if
                                                         (the
                                                          boolean
                                                          (terminal_2?
                                                           x))
                                                         (the
                                                          (simple-array
                                                           t)
                                                          (let
                                                           ((v
                                                             (if
                                                              (the
                                                               boolean
                                                               (pvs__OR
                                                                (the
                                                                 boolean
                                                                 (=
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos)
                                                                  (the
                                                                   (integer
                                                                    0)
                                                                   len)))
                                                                (the
                                                                 boolean
                                                                 (pvs__/=
                                                                  (terminal_2-a
                                                                   x)
                                                                  (pvs-funcall
                                                                   s265358
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    pos))))))
                                                              (make-fail_3)
                                                              (make-good_2
                                                               1))))
                                                           (declare
                                                            (type
                                                             nil
                                                             v))
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (let
                                                             ()
                                                             (let
                                                              ((N39284
                                                                (the
                                                                 list
                                                                 rest))
                                                               (E39283
                                                                (let
                                                                 ((A39282
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    cur))
                                                                  (A39281
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    pos)))
                                                                 (let
                                                                  ((N39279
                                                                    v)
                                                                   (E39278
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     St)))
                                                                  (let
                                                                   ((E39280
                                                                     E39278))
                                                                   (nd-rec-tup-update
                                                                    E39278
                                                                    2
                                                                    (pvs-function-update
                                                                     (mkcopy-pvs-closure-hash
                                                                      (svref
                                                                       E39280
                                                                       2))
                                                                     A39281
                                                                     (pvs-outer-array-update
                                                                      (pvs-funcall
                                                                       (svref
                                                                        E39280
                                                                        2)
                                                                       A39281)
                                                                      A39282
                                                                      N39279
                                                                      (the
                                                                       (integer
                                                                        0)
                                                                       num_non_terminals)))))))))
                                                              (let
                                                               ((E39285
                                                                 E39283))
                                                               (nd-rec-tup-update
                                                                E39283
                                                                3
                                                                N39284)))))))
                                                         (the
                                                          (simple-array
                                                           t)
                                                          (if
                                                           (the
                                                            boolean
                                                            (concat_2?
                                                             x))
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (let
                                                              ((x#0
                                                                (pvs-funcall
                                                                 (pvs-funcall
                                                                  (project
                                                                   3
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    St))
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos))
                                                                 (the
                                                                  (integer
                                                                   0
                                                                   *)
                                                                  (atomic_peg-e1-3
                                                                   x)))))
                                                              (declare
                                                               (type
                                                                nil
                                                                x#0))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (if
                                                                (the
                                                                 boolean
                                                                 (fail_3?
                                                                  x#0))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ((A39290
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     cur))
                                                                   (A39289
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos)))
                                                                  (let
                                                                   ((N39287
                                                                     (make-fail_3))
                                                                    (E39286
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      St)))
                                                                   (let
                                                                    ((E39288
                                                                      E39286))
                                                                    (nd-rec-tup-update
                                                                     E39286
                                                                     2
                                                                     (pvs-function-update
                                                                      (mkcopy-pvs-closure-hash
                                                                       (svref
                                                                        E39288
                                                                        2))
                                                                      A39289
                                                                      (pvs-outer-array-update
                                                                       (pvs-funcall
                                                                        (svref
                                                                         E39288
                                                                         2)
                                                                        A39289)
                                                                       A39290
                                                                       N39287
                                                                       (the
                                                                        (integer
                                                                         0)
                                                                        num_non_terminals))))))))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (if
                                                                  (the
                                                                   boolean
                                                                   (loop_2?
                                                                    x#0))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (let
                                                                    ((A39295
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       cur))
                                                                     (A39294
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos)))
                                                                    (let
                                                                     ((N39292
                                                                       (make-loop_2))
                                                                      (E39291
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        St)))
                                                                     (let
                                                                      ((E39293
                                                                        E39291))
                                                                      (nd-rec-tup-update
                                                                       E39291
                                                                       2
                                                                       (pvs-function-update
                                                                        (mkcopy-pvs-closure-hash
                                                                         (svref
                                                                          E39293
                                                                          2))
                                                                        A39294
                                                                        (pvs-outer-array-update
                                                                         (pvs-funcall
                                                                          (svref
                                                                           E39293
                                                                           2)
                                                                          A39294)
                                                                         A39295
                                                                         N39292
                                                                         (the
                                                                          (integer
                                                                           0)
                                                                          num_non_terminals))))))))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (if
                                                                    (the
                                                                     boolean
                                                                     (good_2?
                                                                      x#0))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      (let
                                                                       ((x1
                                                                         (pvs-funcall
                                                                          (pvs-funcall
                                                                           (project
                                                                            3
                                                                            (the
                                                                             (simple-array
                                                                              t)
                                                                             St))
                                                                           (pvs__+
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             pos)
                                                                            (the
                                                                             (integer
                                                                              0)
                                                                             (good_2-span
                                                                              x#0))))
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           (atomic_peg-e2-3
                                                                            x)))))
                                                                       (declare
                                                                        (type
                                                                         nil
                                                                         x1))
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        (if
                                                                         (the
                                                                          boolean
                                                                          (fail_3?
                                                                           x1))
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          (let
                                                                           ((A39300
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              cur))
                                                                            (A39299
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              pos)))
                                                                           (let
                                                                            ((N39297
                                                                              (make-fail_3))
                                                                             (E39296
                                                                              (the
                                                                               (simple-array
                                                                                t)
                                                                               St)))
                                                                            (let
                                                                             ((E39298
                                                                               E39296))
                                                                             (nd-rec-tup-update
                                                                              E39296
                                                                              2
                                                                              (pvs-function-update
                                                                               (mkcopy-pvs-closure-hash
                                                                                (svref
                                                                                 E39298
                                                                                 2))
                                                                               A39299
                                                                               (pvs-outer-array-update
                                                                                (pvs-funcall
                                                                                 (svref
                                                                                  E39298
                                                                                  2)
                                                                                 A39299)
                                                                                A39300
                                                                                N39297
                                                                                (the
                                                                                 (integer
                                                                                  0)
                                                                                 num_non_terminals))))))))
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          (if
                                                                           (the
                                                                            boolean
                                                                            (loop_2?
                                                                             x1))
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            (let
                                                                             ((A39305
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                cur))
                                                                              (A39304
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                pos)))
                                                                             (let
                                                                              ((N39302
                                                                                (make-loop_2))
                                                                               (E39301
                                                                                (the
                                                                                 (simple-array
                                                                                  t)
                                                                                 St)))
                                                                              (let
                                                                               ((E39303
                                                                                 E39301))
                                                                               (nd-rec-tup-update
                                                                                E39301
                                                                                2
                                                                                (pvs-function-update
                                                                                 (mkcopy-pvs-closure-hash
                                                                                  (svref
                                                                                   E39303
                                                                                   2))
                                                                                 A39304
                                                                                 (pvs-outer-array-update
                                                                                  (pvs-funcall
                                                                                   (svref
                                                                                    E39303
                                                                                    2)
                                                                                   A39304)
                                                                                  A39305
                                                                                  N39302
                                                                                  (the
                                                                                   (integer
                                                                                    0)
                                                                                   num_non_terminals))))))))
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            (if
                                                                             (the
                                                                              boolean
                                                                              (good_2?
                                                                               x1))
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              (let
                                                                               ((A39310
                                                                                 (the
                                                                                  (integer
                                                                                   0
                                                                                   *)
                                                                                  cur))
                                                                                (A39309
                                                                                 (the
                                                                                  (integer
                                                                                   0
                                                                                   *)
                                                                                  pos)))
                                                                               (let
                                                                                ((N39307
                                                                                  (make-good_2
                                                                                   (pvs__+
                                                                                    (the
                                                                                     (integer
                                                                                      0)
                                                                                     (good_2-span
                                                                                      x#0))
                                                                                    (the
                                                                                     (integer
                                                                                      0)
                                                                                     (good_2-span
                                                                                      x1)))))
                                                                                 (E39306
                                                                                  (the
                                                                                   (simple-array
                                                                                    t)
                                                                                   St)))
                                                                                (let
                                                                                 ((E39308
                                                                                   E39306))
                                                                                 (nd-rec-tup-update
                                                                                  E39306
                                                                                  2
                                                                                  (pvs-function-update
                                                                                   (mkcopy-pvs-closure-hash
                                                                                    (svref
                                                                                     E39308
                                                                                     2))
                                                                                   A39309
                                                                                   (pvs-outer-array-update
                                                                                    (pvs-funcall
                                                                                     (svref
                                                                                      E39308
                                                                                      2)
                                                                                     A39309)
                                                                                    A39310
                                                                                    N39307
                                                                                    (the
                                                                                     (integer
                                                                                      0)
                                                                                     num_non_terminals))))))))
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              (scaf__putstack_0
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                num_non_terminals)
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                len)
                                                                               G
                                                                               s265358
                                                                               (the
                                                                                (simple-array
                                                                                 t)
                                                                                St)
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                (atomic_peg-e2-3
                                                                                 x)))))))))))))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (scaf__putstack_0
                                                                      (the
                                                                       (integer
                                                                        0)
                                                                       num_non_terminals)
                                                                      (the
                                                                       (integer
                                                                        0)
                                                                       len)
                                                                      G
                                                                      s265358
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       St)
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       (atomic_peg-e1-3
                                                                        x)))))))))))))
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (if
                                                             (the
                                                              boolean
                                                              (choice_2?
                                                               x))
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (let
                                                                ((x#0
                                                                  (pvs-funcall
                                                                   (pvs-funcall
                                                                    scaf
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos))
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    (atomic_peg-e1-3
                                                                     x)))))
                                                                (declare
                                                                 (type
                                                                  nil
                                                                  x#0))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (if
                                                                  (the
                                                                   boolean
                                                                   (fail_3?
                                                                    x#0))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (let
                                                                     ((x#1
                                                                       (pvs-funcall
                                                                        (pvs-funcall
                                                                         scaf
                                                                         (the
                                                                          (integer
                                                                           0
                                                                           *)
                                                                          pos))
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         (atomic_peg-e2-3
                                                                          x)))))
                                                                     (declare
                                                                      (type
                                                                       nil
                                                                       x#1))
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      (if
                                                                       (the
                                                                        boolean
                                                                        (fail_3?
                                                                         x#1))
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        (let
                                                                         ((A39315
                                                                           (the
                                                                            (integer
                                                                             0
                                                                             *)
                                                                            cur))
                                                                          (A39314
                                                                           (the
                                                                            (integer
                                                                             0
                                                                             *)
                                                                            pos)))
                                                                         (let
                                                                          ((N39312
                                                                            (make-fail_3))
                                                                           (E39311
                                                                            (the
                                                                             (simple-array
                                                                              t)
                                                                             St)))
                                                                          (let
                                                                           ((E39313
                                                                             E39311))
                                                                           (nd-rec-tup-update
                                                                            E39311
                                                                            2
                                                                            (pvs-function-update
                                                                             (mkcopy-pvs-closure-hash
                                                                              (svref
                                                                               E39313
                                                                               2))
                                                                             A39314
                                                                             (pvs-outer-array-update
                                                                              (pvs-funcall
                                                                               (svref
                                                                                E39313
                                                                                2)
                                                                               A39314)
                                                                              A39315
                                                                              N39312
                                                                              (the
                                                                               (integer
                                                                                0)
                                                                               num_non_terminals))))))))
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        (if
                                                                         (the
                                                                          boolean
                                                                          (loop_2?
                                                                           x#1))
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          (let
                                                                           ((A39320
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              cur))
                                                                            (A39319
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              pos)))
                                                                           (let
                                                                            ((N39317
                                                                              (make-loop_2))
                                                                             (E39316
                                                                              (the
                                                                               (simple-array
                                                                                t)
                                                                               St)))
                                                                            (let
                                                                             ((E39318
                                                                               E39316))
                                                                             (nd-rec-tup-update
                                                                              E39316
                                                                              2
                                                                              (pvs-function-update
                                                                               (mkcopy-pvs-closure-hash
                                                                                (svref
                                                                                 E39318
                                                                                 2))
                                                                               A39319
                                                                               (pvs-outer-array-update
                                                                                (pvs-funcall
                                                                                 (svref
                                                                                  E39318
                                                                                  2)
                                                                                 A39319)
                                                                                A39320
                                                                                N39317
                                                                                (the
                                                                                 (integer
                                                                                  0)
                                                                                 num_non_terminals))))))))
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          (if
                                                                           (the
                                                                            boolean
                                                                            (good_2?
                                                                             x#1))
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            (let
                                                                             ((A39325
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                cur))
                                                                              (A39324
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                pos)))
                                                                             (let
                                                                              ((N39322
                                                                                (make-good_2
                                                                                 (the
                                                                                  (integer
                                                                                   0)
                                                                                  (good_2-span
                                                                                   x#1))))
                                                                               (E39321
                                                                                (the
                                                                                 (simple-array
                                                                                  t)
                                                                                 St)))
                                                                              (let
                                                                               ((E39323
                                                                                 E39321))
                                                                               (nd-rec-tup-update
                                                                                E39321
                                                                                2
                                                                                (pvs-function-update
                                                                                 (mkcopy-pvs-closure-hash
                                                                                  (svref
                                                                                   E39323
                                                                                   2))
                                                                                 A39324
                                                                                 (pvs-outer-array-update
                                                                                  (pvs-funcall
                                                                                   (svref
                                                                                    E39323
                                                                                    2)
                                                                                   A39324)
                                                                                  A39325
                                                                                  N39322
                                                                                  (the
                                                                                   (integer
                                                                                    0)
                                                                                   num_non_terminals))))))))
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            (scaf__putstack_0
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              num_non_terminals)
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              len)
                                                                             G
                                                                             s265358
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              St)
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              (atomic_peg-e2-3
                                                                               x)))))))))))))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (if
                                                                    (the
                                                                     boolean
                                                                     (loop_2?
                                                                      x#0))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (let
                                                                      ((A39330
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (A39329
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((N39327
                                                                         (make-loop_2))
                                                                        (E39326
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let
                                                                        ((E39328
                                                                          E39326))
                                                                        (nd-rec-tup-update
                                                                         E39326
                                                                         2
                                                                         (pvs-function-update
                                                                          (mkcopy-pvs-closure-hash
                                                                           (svref
                                                                            E39328
                                                                            2))
                                                                          A39329
                                                                          (pvs-outer-array-update
                                                                           (pvs-funcall
                                                                            (svref
                                                                             E39328
                                                                             2)
                                                                            A39329)
                                                                           A39330
                                                                           N39327
                                                                           (the
                                                                            (integer
                                                                             0)
                                                                            num_non_terminals))))))))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (if
                                                                      (the
                                                                       boolean
                                                                       (good_2?
                                                                        x#0))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (let
                                                                        ((A39335
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           cur))
                                                                         (A39334
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           pos)))
                                                                        (let
                                                                         ((N39332
                                                                           (make-good_2
                                                                            (the
                                                                             (integer
                                                                              0)
                                                                             (good_2-span
                                                                              x#0))))
                                                                          (E39331
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            St)))
                                                                         (let
                                                                          ((E39333
                                                                            E39331))
                                                                          (nd-rec-tup-update
                                                                           E39331
                                                                           2
                                                                           (pvs-function-update
                                                                            (mkcopy-pvs-closure-hash
                                                                             (svref
                                                                              E39333
                                                                              2))
                                                                            A39334
                                                                            (pvs-outer-array-update
                                                                             (pvs-funcall
                                                                              (svref
                                                                               E39333
                                                                               2)
                                                                              A39334)
                                                                             A39335
                                                                             N39332
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              num_non_terminals))))))))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (scaf__putstack_0
                                                                        (the
                                                                         (integer
                                                                          0)
                                                                         num_non_terminals)
                                                                        (the
                                                                         (integer
                                                                          0)
                                                                         len)
                                                                        G
                                                                        s265358
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         St)
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         (atomic_peg-e1-3
                                                                          x)))))))))))))
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (if
                                                               (the
                                                                boolean
                                                                (check_2?
                                                                 x))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ((x#0
                                                                    (pvs-funcall
                                                                     (pvs-funcall
                                                                      scaf
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos))
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      (atomic_peg-e-3
                                                                       x)))))
                                                                  (declare
                                                                   (type
                                                                    nil
                                                                    x#0))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (if
                                                                    (the
                                                                     boolean
                                                                     (fail_3?
                                                                      x#0))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (let
                                                                      ((A39340
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (A39339
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((N39337
                                                                         (make-fail_3))
                                                                        (E39336
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let
                                                                        ((E39338
                                                                          E39336))
                                                                        (nd-rec-tup-update
                                                                         E39336
                                                                         2
                                                                         (pvs-function-update
                                                                          (mkcopy-pvs-closure-hash
                                                                           (svref
                                                                            E39338
                                                                            2))
                                                                          A39339
                                                                          (pvs-outer-array-update
                                                                           (pvs-funcall
                                                                            (svref
                                                                             E39338
                                                                             2)
                                                                            A39339)
                                                                           A39340
                                                                           N39337
                                                                           (the
                                                                            (integer
                                                                             0)
                                                                            num_non_terminals))))))))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (if
                                                                      (the
                                                                       boolean
                                                                       (loop_2?
                                                                        x#0))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (let
                                                                        ((A39345
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           cur))
                                                                         (A39344
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           pos)))
                                                                        (let
                                                                         ((N39342
                                                                           (make-loop_2))
                                                                          (E39341
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            St)))
                                                                         (let
                                                                          ((E39343
                                                                            E39341))
                                                                          (nd-rec-tup-update
                                                                           E39341
                                                                           2
                                                                           (pvs-function-update
                                                                            (mkcopy-pvs-closure-hash
                                                                             (svref
                                                                              E39343
                                                                              2))
                                                                            A39344
                                                                            (pvs-outer-array-update
                                                                             (pvs-funcall
                                                                              (svref
                                                                               E39343
                                                                               2)
                                                                              A39344)
                                                                             A39345
                                                                             N39342
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              num_non_terminals))))))))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (if
                                                                        (the
                                                                         boolean
                                                                         (good_2?
                                                                          x#0))
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         (let
                                                                          ((A39350
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             cur))
                                                                           (A39349
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             pos)))
                                                                          (let
                                                                           ((N39347
                                                                             (make-good_2
                                                                              0))
                                                                            (E39346
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              St)))
                                                                           (let
                                                                            ((E39348
                                                                              E39346))
                                                                            (nd-rec-tup-update
                                                                             E39346
                                                                             2
                                                                             (pvs-function-update
                                                                              (mkcopy-pvs-closure-hash
                                                                               (svref
                                                                                E39348
                                                                                2))
                                                                              A39349
                                                                              (pvs-outer-array-update
                                                                               (pvs-funcall
                                                                                (svref
                                                                                 E39348
                                                                                 2)
                                                                                A39349)
                                                                               A39350
                                                                               N39347
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                num_non_terminals))))))))
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         (scaf__putstack_0
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           num_non_terminals)
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           len)
                                                                          G
                                                                          s265358
                                                                          (the
                                                                           (simple-array
                                                                            t)
                                                                           St)
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           (atomic_peg-e-3
                                                                            x)))))))))))))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ((x#0
                                                                    (pvs-funcall
                                                                     (pvs-funcall
                                                                      scaf
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos))
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      (atomic_peg-e-3
                                                                       x)))))
                                                                  (declare
                                                                   (type
                                                                    nil
                                                                    x#0))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (if
                                                                    (the
                                                                     boolean
                                                                     (fail_3?
                                                                      x#0))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (let
                                                                      ((A39355
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (A39354
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((N39352
                                                                         (make-good_2
                                                                          0))
                                                                        (E39351
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let
                                                                        ((E39353
                                                                          E39351))
                                                                        (nd-rec-tup-update
                                                                         E39351
                                                                         2
                                                                         (pvs-function-update
                                                                          (mkcopy-pvs-closure-hash
                                                                           (svref
                                                                            E39353
                                                                            2))
                                                                          A39354
                                                                          (pvs-outer-array-update
                                                                           (pvs-funcall
                                                                            (svref
                                                                             E39353
                                                                             2)
                                                                            A39354)
                                                                           A39355
                                                                           N39352
                                                                           (the
                                                                            (integer
                                                                             0)
                                                                            num_non_terminals))))))))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (if
                                                                      (the
                                                                       boolean
                                                                       (loop_2?
                                                                        x#0))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (let
                                                                        ((A39360
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           cur))
                                                                         (A39359
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           pos)))
                                                                        (let
                                                                         ((N39357
                                                                           (make-loop_2))
                                                                          (E39356
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            St)))
                                                                         (let
                                                                          ((E39358
                                                                            E39356))
                                                                          (nd-rec-tup-update
                                                                           E39356
                                                                           2
                                                                           (pvs-function-update
                                                                            (mkcopy-pvs-closure-hash
                                                                             (svref
                                                                              E39358
                                                                              2))
                                                                            A39359
                                                                            (pvs-outer-array-update
                                                                             (pvs-funcall
                                                                              (svref
                                                                               E39358
                                                                               2)
                                                                              A39359)
                                                                             A39360
                                                                             N39357
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              num_non_terminals))))))))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (if
                                                                        (the
                                                                         boolean
                                                                         (good_2?
                                                                          x#0))
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         (let
                                                                          ((A39365
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             cur))
                                                                           (A39364
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             pos)))
                                                                          (let
                                                                           ((N39362
                                                                             (make-fail_3))
                                                                            (E39361
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              St)))
                                                                           (let
                                                                            ((E39363
                                                                              E39361))
                                                                            (nd-rec-tup-update
                                                                             E39361
                                                                             2
                                                                             (pvs-function-update
                                                                              (mkcopy-pvs-closure-hash
                                                                               (svref
                                                                                E39363
                                                                                2))
                                                                              A39364
                                                                              (pvs-outer-array-update
                                                                               (pvs-funcall
                                                                                (svref
                                                                                 E39363
                                                                                 2)
                                                                                A39364)
                                                                               A39365
                                                                               N39362
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                num_non_terminals))))))))
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         (scaf__putstack_0
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           num_non_terminals)
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           len)
                                                                          G
                                                                          s265358
                                                                          (the
                                                                           (simple-array
                                                                            t)
                                                                           St)
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           (atomic_peg-e-3
                                                                            x))))))))))))))))))))))))))))))))))))))))))))))))))))))
(defun scaf__step_0 (num_non_terminals len G s38570 St)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (simple-array t) St))
  (the (simple-array t)
       (let ((pos
              (the (integer 0 *)
                   (project 1 (the (simple-array t) St)))))
         (declare (type (integer 0 *) pos))
         (the (simple-array t)
              (let ((root
                     (the (integer 0 *)
                          (project 2 (the (simple-array t) St)))))
                (declare (type (integer 0 *) root))
                (the (simple-array t)
                     (let ((scaf
                            (project 3 (the (simple-array t) St))))
                       (declare (type nil scaf))
                       (the (simple-array t)
                            (let ((stack
                                   (the
                                    list
                                    (project
                                     4
                                     (the (simple-array t) St)))))
                              (declare (type list stack))
                              (the (simple-array t)
                                   (if
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (= (the (integer 0 *) pos) 0))
                                      (the
                                       boolean
                                       (=
                                        (the (integer 0 *) root)
                                        (the
                                         (integer 0)
                                         num_non_terminals)))))
                                    (the (simple-array t) St)
                                    (the
                                     (simple-array t)
                                     (if
                                      (the
                                       boolean
                                       (=
                                        (the (integer 0 *) root)
                                        (the
                                         (integer 0)
                                         num_non_terminals)))
                                      (the
                                       (simple-array t)
                                       (let
                                        ()
                                        (let
                                         ((N38578 (the list nil))
                                          (E38577
                                           (let
                                            ()
                                            (let
                                             ((N38575 0)
                                              (E38574
                                               (let
                                                ()
                                                (let
                                                 ((N38572
                                                   (pvs__-
                                                    (the
                                                     (integer 0 *)
                                                     pos)
                                                    1))
                                                  (E38571
                                                   (the
                                                    (simple-array t)
                                                    St)))
                                                 (let
                                                  ((E38573 E38571))
                                                  (nd-rec-tup-update
                                                   E38571
                                                   0
                                                   N38572))))))
                                             (let
                                              ((E38576 E38574))
                                              (nd-rec-tup-update
                                               E38574
                                               1
                                               N38575))))))
                                         (let
                                          ((E38579 E38577))
                                          (nd-rec-tup-update
                                           E38577
                                           3
                                           N38578)))))
                                      (the
                                       (simple-array t)
                                       (if
                                        (the
                                         boolean
                                         (pvs_NOT
                                          (the
                                           boolean
                                           (pending_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              scaf
                                              (the (integer 0 *) pos))
                                             (the
                                              (integer 0 *)
                                              root))))))
                                        (the
                                         (simple-array t)
                                         (let
                                          ()
                                          (let
                                           ((N38588 (the list nil))
                                            (E38587
                                             (let
                                              ()
                                              (let
                                               ((N38585
                                                 (pvs__+
                                                  (the
                                                   (integer 0 *)
                                                   root)
                                                  1))
                                                (E38584
                                                 (the
                                                  (simple-array t)
                                                  St)))
                                               (let
                                                ((E38586 E38584))
                                                (nd-rec-tup-update
                                                 E38584
                                                 1
                                                 N38585))))))
                                           (let
                                            ((E38589 E38587))
                                            (nd-rec-tup-update
                                             E38587
                                             3
                                             N38588)))))
                                        (the
                                         (simple-array t)
                                         (if
                                          (the
                                           boolean
                                           (pvs_null?
                                            (the list stack)))
                                          (the
                                           (simple-array t)
                                           (let
                                            ()
                                            (let
                                             ((N38591
                                               (the
                                                list
                                                (pvs__cons
                                                 (the
                                                  (integer 0 *)
                                                  root)
                                                 (the list nil))))
                                              (E38590
                                               (the
                                                (simple-array t)
                                                St)))
                                             (let
                                              ((E38592 E38590))
                                              (nd-rec-tup-update
                                               E38590
                                               3
                                               N38591)))))
                                          (the
                                           (simple-array t)
                                           (let
                                            ((cur
                                              (the
                                               (integer 0 *)
                                               (pvs_car
                                                (the list stack)))))
                                            (declare
                                             (type (integer 0 *) cur))
                                            (the
                                             (simple-array t)
                                             (let
                                              ((rest
                                                (the
                                                 list
                                                 (pvs_cdr
                                                  (the list stack)))))
                                              (declare
                                               (type list rest))
                                              (the
                                               (simple-array t)
                                               (the
                                                (simple-array t)
                                                (let
                                                 ((x
                                                   (pvs-funcall
                                                    G
                                                    (the
                                                     (integer 0 *)
                                                     cur))))
                                                 (declare (type nil x))
                                                 (the
                                                  (simple-array t)
                                                  (if
                                                   (the
                                                    boolean
                                                    (epsilon_2? x))
                                                   (the
                                                    (simple-array t)
                                                    (let
                                                     ()
                                                     (let
                                                      ((N38613
                                                        (the
                                                         list
                                                         rest))
                                                       (E38612
                                                        (let
                                                         ((A38611
                                                           (the
                                                            (integer
                                                             0
                                                             *)
                                                            cur))
                                                          (A38610
                                                           (the
                                                            (integer
                                                             0
                                                             *)
                                                            pos)))
                                                         (let
                                                          ((N38608
                                                            (make-good_2
                                                             0))
                                                           (E38607
                                                            (the
                                                             (simple-array
                                                              t)
                                                             St)))
                                                          (let
                                                           ((E38609
                                                             E38607))
                                                           (nd-rec-tup-update
                                                            E38607
                                                            2
                                                            (pvs-function-update
                                                             (mkcopy-pvs-closure-hash
                                                              (svref
                                                               E38609
                                                               2))
                                                             A38610
                                                             (pvs-outer-array-update
                                                              (pvs-funcall
                                                               (svref
                                                                E38609
                                                                2)
                                                               A38610)
                                                              A38611
                                                              N38608
                                                              (the
                                                               (integer
                                                                0)
                                                               num_non_terminals)))))))))
                                                      (let
                                                       ((E38614
                                                         E38612))
                                                       (nd-rec-tup-update
                                                        E38612
                                                        3
                                                        N38613)))))
                                                   (the
                                                    (simple-array t)
                                                    (if
                                                     (the
                                                      boolean
                                                      (failure_2? x))
                                                     (the
                                                      (simple-array t)
                                                      (let
                                                       ()
                                                       (let
                                                        ((N38621
                                                          (the
                                                           list
                                                           rest))
                                                         (E38620
                                                          (let
                                                           ((A38619
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              cur))
                                                            (A38618
                                                             (the
                                                              (integer
                                                               0
                                                               *)
                                                              pos)))
                                                           (let
                                                            ((N38616
                                                              (make-fail_3))
                                                             (E38615
                                                              (the
                                                               (simple-array
                                                                t)
                                                               St)))
                                                            (let
                                                             ((E38617
                                                               E38615))
                                                             (nd-rec-tup-update
                                                              E38615
                                                              2
                                                              (pvs-function-update
                                                               (mkcopy-pvs-closure-hash
                                                                (svref
                                                                 E38617
                                                                 2))
                                                               A38618
                                                               (pvs-outer-array-update
                                                                (pvs-funcall
                                                                 (svref
                                                                  E38617
                                                                  2)
                                                                 A38618)
                                                                A38619
                                                                N38616
                                                                (the
                                                                 (integer
                                                                  0)
                                                                 num_non_terminals)))))))))
                                                        (let
                                                         ((E38622
                                                           E38620))
                                                         (nd-rec-tup-update
                                                          E38620
                                                          3
                                                          N38621)))))
                                                     (the
                                                      (simple-array t)
                                                      (if
                                                       (the
                                                        boolean
                                                        (any_2? x))
                                                       (the
                                                        (simple-array
                                                         t)
                                                        (let
                                                         ((v
                                                           (if
                                                            (the
                                                             boolean
                                                             (=
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               pos)
                                                              (the
                                                               (integer
                                                                0)
                                                               len)))
                                                            (make-fail_3)
                                                            (make-good_2
                                                             1))))
                                                         (declare
                                                          (type nil v))
                                                         (the
                                                          (simple-array
                                                           t)
                                                          (let
                                                           ()
                                                           (let
                                                            ((N38629
                                                              (the
                                                               list
                                                               rest))
                                                             (E38628
                                                              (let
                                                               ((A38627
                                                                 (the
                                                                  (integer
                                                                   0
                                                                   *)
                                                                  cur))
                                                                (A38626
                                                                 (the
                                                                  (integer
                                                                   0
                                                                   *)
                                                                  pos)))
                                                               (let
                                                                ((N38624
                                                                  v)
                                                                 (E38623
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   St)))
                                                                (let
                                                                 ((E38625
                                                                   E38623))
                                                                 (nd-rec-tup-update
                                                                  E38623
                                                                  2
                                                                  (pvs-function-update
                                                                   (mkcopy-pvs-closure-hash
                                                                    (svref
                                                                     E38625
                                                                     2))
                                                                   A38626
                                                                   (pvs-outer-array-update
                                                                    (pvs-funcall
                                                                     (svref
                                                                      E38625
                                                                      2)
                                                                     A38626)
                                                                    A38627
                                                                    N38624
                                                                    (the
                                                                     (integer
                                                                      0)
                                                                     num_non_terminals)))))))))
                                                            (let
                                                             ((E38630
                                                               E38628))
                                                             (nd-rec-tup-update
                                                              E38628
                                                              3
                                                              N38629)))))))
                                                       (the
                                                        (simple-array
                                                         t)
                                                        (if
                                                         (the
                                                          boolean
                                                          (terminal_2?
                                                           x))
                                                         (the
                                                          (simple-array
                                                           t)
                                                          (let
                                                           ((v
                                                             (if
                                                              (the
                                                               boolean
                                                               (pvs__OR
                                                                (the
                                                                 boolean
                                                                 (=
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos)
                                                                  (the
                                                                   (integer
                                                                    0)
                                                                   len)))
                                                                (the
                                                                 boolean
                                                                 (pvs__/=
                                                                  (terminal_2-a
                                                                   x)
                                                                  (pvs-funcall
                                                                   s38570
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    pos))))))
                                                              (make-fail_3)
                                                              (make-good_2
                                                               1))))
                                                           (declare
                                                            (type
                                                             nil
                                                             v))
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (let
                                                             ()
                                                             (let
                                                              ((N38637
                                                                (the
                                                                 list
                                                                 rest))
                                                               (E38636
                                                                (let
                                                                 ((A38635
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    cur))
                                                                  (A38634
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    pos)))
                                                                 (let
                                                                  ((N38632
                                                                    v)
                                                                   (E38631
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     St)))
                                                                  (let
                                                                   ((E38633
                                                                     E38631))
                                                                   (nd-rec-tup-update
                                                                    E38631
                                                                    2
                                                                    (pvs-function-update
                                                                     (mkcopy-pvs-closure-hash
                                                                      (svref
                                                                       E38633
                                                                       2))
                                                                     A38634
                                                                     (pvs-outer-array-update
                                                                      (pvs-funcall
                                                                       (svref
                                                                        E38633
                                                                        2)
                                                                       A38634)
                                                                      A38635
                                                                      N38632
                                                                      (the
                                                                       (integer
                                                                        0)
                                                                       num_non_terminals)))))))))
                                                              (let
                                                               ((E38638
                                                                 E38636))
                                                               (nd-rec-tup-update
                                                                E38636
                                                                3
                                                                N38637)))))))
                                                         (the
                                                          (simple-array
                                                           t)
                                                          (if
                                                           (the
                                                            boolean
                                                            (concat_2?
                                                             x))
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (let
                                                              ((x#0
                                                                (pvs-funcall
                                                                 (pvs-funcall
                                                                  (project
                                                                   3
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    St))
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos))
                                                                 (the
                                                                  (integer
                                                                   0
                                                                   *)
                                                                  (atomic_peg-e1-3
                                                                   x)))))
                                                              (declare
                                                               (type
                                                                nil
                                                                x#0))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (if
                                                                (the
                                                                 boolean
                                                                 (fail_3?
                                                                  x#0))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ((A38643
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     cur))
                                                                   (A38642
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos)))
                                                                  (let
                                                                   ((N38640
                                                                     (make-fail_3))
                                                                    (E38639
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      St)))
                                                                   (let
                                                                    ((E38641
                                                                      E38639))
                                                                    (nd-rec-tup-update
                                                                     E38639
                                                                     2
                                                                     (pvs-function-update
                                                                      (mkcopy-pvs-closure-hash
                                                                       (svref
                                                                        E38641
                                                                        2))
                                                                      A38642
                                                                      (pvs-outer-array-update
                                                                       (pvs-funcall
                                                                        (svref
                                                                         E38641
                                                                         2)
                                                                        A38642)
                                                                       A38643
                                                                       N38640
                                                                       (the
                                                                        (integer
                                                                         0)
                                                                        num_non_terminals))))))))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (if
                                                                  (the
                                                                   boolean
                                                                   (loop_2?
                                                                    x#0))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (let
                                                                    ((A38648
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       cur))
                                                                     (A38647
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos)))
                                                                    (let
                                                                     ((N38645
                                                                       (make-loop_2))
                                                                      (E38644
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        St)))
                                                                     (let
                                                                      ((E38646
                                                                        E38644))
                                                                      (nd-rec-tup-update
                                                                       E38644
                                                                       2
                                                                       (pvs-function-update
                                                                        (mkcopy-pvs-closure-hash
                                                                         (svref
                                                                          E38646
                                                                          2))
                                                                        A38647
                                                                        (pvs-outer-array-update
                                                                         (pvs-funcall
                                                                          (svref
                                                                           E38646
                                                                           2)
                                                                          A38647)
                                                                         A38648
                                                                         N38645
                                                                         (the
                                                                          (integer
                                                                           0)
                                                                          num_non_terminals))))))))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (if
                                                                    (the
                                                                     boolean
                                                                     (good_2?
                                                                      x#0))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      (let
                                                                       ((x1
                                                                         (pvs-funcall
                                                                          (pvs-funcall
                                                                           (project
                                                                            3
                                                                            (the
                                                                             (simple-array
                                                                              t)
                                                                             St))
                                                                           (pvs__+
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             pos)
                                                                            (the
                                                                             (integer
                                                                              0)
                                                                             (good_2-span
                                                                              x#0))))
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           (atomic_peg-e2-3
                                                                            x)))))
                                                                       (declare
                                                                        (type
                                                                         nil
                                                                         x1))
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        (if
                                                                         (the
                                                                          boolean
                                                                          (fail_3?
                                                                           x1))
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          (let
                                                                           ((A38653
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              cur))
                                                                            (A38652
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              pos)))
                                                                           (let
                                                                            ((N38650
                                                                              (make-fail_3))
                                                                             (E38649
                                                                              (the
                                                                               (simple-array
                                                                                t)
                                                                               St)))
                                                                            (let
                                                                             ((E38651
                                                                               E38649))
                                                                             (nd-rec-tup-update
                                                                              E38649
                                                                              2
                                                                              (pvs-function-update
                                                                               (mkcopy-pvs-closure-hash
                                                                                (svref
                                                                                 E38651
                                                                                 2))
                                                                               A38652
                                                                               (pvs-outer-array-update
                                                                                (pvs-funcall
                                                                                 (svref
                                                                                  E38651
                                                                                  2)
                                                                                 A38652)
                                                                                A38653
                                                                                N38650
                                                                                (the
                                                                                 (integer
                                                                                  0)
                                                                                 num_non_terminals))))))))
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          (if
                                                                           (the
                                                                            boolean
                                                                            (loop_2?
                                                                             x1))
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            (let
                                                                             ((A38658
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                cur))
                                                                              (A38657
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                pos)))
                                                                             (let
                                                                              ((N38655
                                                                                (make-loop_2))
                                                                               (E38654
                                                                                (the
                                                                                 (simple-array
                                                                                  t)
                                                                                 St)))
                                                                              (let
                                                                               ((E38656
                                                                                 E38654))
                                                                               (nd-rec-tup-update
                                                                                E38654
                                                                                2
                                                                                (pvs-function-update
                                                                                 (mkcopy-pvs-closure-hash
                                                                                  (svref
                                                                                   E38656
                                                                                   2))
                                                                                 A38657
                                                                                 (pvs-outer-array-update
                                                                                  (pvs-funcall
                                                                                   (svref
                                                                                    E38656
                                                                                    2)
                                                                                   A38657)
                                                                                  A38658
                                                                                  N38655
                                                                                  (the
                                                                                   (integer
                                                                                    0)
                                                                                   num_non_terminals))))))))
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            (if
                                                                             (the
                                                                              boolean
                                                                              (good_2?
                                                                               x1))
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              (let
                                                                               ((A38663
                                                                                 (the
                                                                                  (integer
                                                                                   0
                                                                                   *)
                                                                                  cur))
                                                                                (A38662
                                                                                 (the
                                                                                  (integer
                                                                                   0
                                                                                   *)
                                                                                  pos)))
                                                                               (let
                                                                                ((N38660
                                                                                  (make-good_2
                                                                                   (pvs__+
                                                                                    (the
                                                                                     (integer
                                                                                      0)
                                                                                     (good_2-span
                                                                                      x#0))
                                                                                    (the
                                                                                     (integer
                                                                                      0)
                                                                                     (good_2-span
                                                                                      x1)))))
                                                                                 (E38659
                                                                                  (the
                                                                                   (simple-array
                                                                                    t)
                                                                                   St)))
                                                                                (let
                                                                                 ((E38661
                                                                                   E38659))
                                                                                 (nd-rec-tup-update
                                                                                  E38659
                                                                                  2
                                                                                  (pvs-function-update
                                                                                   (mkcopy-pvs-closure-hash
                                                                                    (svref
                                                                                     E38661
                                                                                     2))
                                                                                   A38662
                                                                                   (pvs-outer-array-update
                                                                                    (pvs-funcall
                                                                                     (svref
                                                                                      E38661
                                                                                      2)
                                                                                     A38662)
                                                                                    A38663
                                                                                    N38660
                                                                                    (the
                                                                                     (integer
                                                                                      0)
                                                                                     num_non_terminals))))))))
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              (scaf__putstack_0
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                num_non_terminals)
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                len)
                                                                               G
                                                                               s38570
                                                                               (the
                                                                                (simple-array
                                                                                 t)
                                                                                St)
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                (atomic_peg-e2-3
                                                                                 x)))))))))))))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (scaf__putstack_0
                                                                      (the
                                                                       (integer
                                                                        0)
                                                                       num_non_terminals)
                                                                      (the
                                                                       (integer
                                                                        0)
                                                                       len)
                                                                      G
                                                                      s38570
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       St)
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       (atomic_peg-e1-3
                                                                        x)))))))))))))
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (if
                                                             (the
                                                              boolean
                                                              (choice_2?
                                                               x))
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (let
                                                                ((x#0
                                                                  (pvs-funcall
                                                                   (pvs-funcall
                                                                    scaf
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos))
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    (atomic_peg-e1-3
                                                                     x)))))
                                                                (declare
                                                                 (type
                                                                  nil
                                                                  x#0))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (if
                                                                  (the
                                                                   boolean
                                                                   (fail_3?
                                                                    x#0))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (let
                                                                     ((x#1
                                                                       (pvs-funcall
                                                                        (pvs-funcall
                                                                         scaf
                                                                         (the
                                                                          (integer
                                                                           0
                                                                           *)
                                                                          pos))
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         (atomic_peg-e2-3
                                                                          x)))))
                                                                     (declare
                                                                      (type
                                                                       nil
                                                                       x#1))
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      (if
                                                                       (the
                                                                        boolean
                                                                        (fail_3?
                                                                         x#1))
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        (let
                                                                         ((A38713
                                                                           (the
                                                                            (integer
                                                                             0
                                                                             *)
                                                                            cur))
                                                                          (A38712
                                                                           (the
                                                                            (integer
                                                                             0
                                                                             *)
                                                                            pos)))
                                                                         (let
                                                                          ((N38710
                                                                            (make-fail_3))
                                                                           (E38709
                                                                            (the
                                                                             (simple-array
                                                                              t)
                                                                             St)))
                                                                          (let
                                                                           ((E38711
                                                                             E38709))
                                                                           (nd-rec-tup-update
                                                                            E38709
                                                                            2
                                                                            (pvs-function-update
                                                                             (mkcopy-pvs-closure-hash
                                                                              (svref
                                                                               E38711
                                                                               2))
                                                                             A38712
                                                                             (pvs-outer-array-update
                                                                              (pvs-funcall
                                                                               (svref
                                                                                E38711
                                                                                2)
                                                                               A38712)
                                                                              A38713
                                                                              N38710
                                                                              (the
                                                                               (integer
                                                                                0)
                                                                               num_non_terminals))))))))
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        (if
                                                                         (the
                                                                          boolean
                                                                          (loop_2?
                                                                           x#1))
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          (let
                                                                           ((A38718
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              cur))
                                                                            (A38717
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              pos)))
                                                                           (let
                                                                            ((N38715
                                                                              (make-loop_2))
                                                                             (E38714
                                                                              (the
                                                                               (simple-array
                                                                                t)
                                                                               St)))
                                                                            (let
                                                                             ((E38716
                                                                               E38714))
                                                                             (nd-rec-tup-update
                                                                              E38714
                                                                              2
                                                                              (pvs-function-update
                                                                               (mkcopy-pvs-closure-hash
                                                                                (svref
                                                                                 E38716
                                                                                 2))
                                                                               A38717
                                                                               (pvs-outer-array-update
                                                                                (pvs-funcall
                                                                                 (svref
                                                                                  E38716
                                                                                  2)
                                                                                 A38717)
                                                                                A38718
                                                                                N38715
                                                                                (the
                                                                                 (integer
                                                                                  0)
                                                                                 num_non_terminals))))))))
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          (if
                                                                           (the
                                                                            boolean
                                                                            (good_2?
                                                                             x#1))
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            (let
                                                                             ((A38723
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                cur))
                                                                              (A38722
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                pos)))
                                                                             (let
                                                                              ((N38720
                                                                                (make-good_2
                                                                                 (the
                                                                                  (integer
                                                                                   0)
                                                                                  (good_2-span
                                                                                   x#1))))
                                                                               (E38719
                                                                                (the
                                                                                 (simple-array
                                                                                  t)
                                                                                 St)))
                                                                              (let
                                                                               ((E38721
                                                                                 E38719))
                                                                               (nd-rec-tup-update
                                                                                E38719
                                                                                2
                                                                                (pvs-function-update
                                                                                 (mkcopy-pvs-closure-hash
                                                                                  (svref
                                                                                   E38721
                                                                                   2))
                                                                                 A38722
                                                                                 (pvs-outer-array-update
                                                                                  (pvs-funcall
                                                                                   (svref
                                                                                    E38721
                                                                                    2)
                                                                                   A38722)
                                                                                  A38723
                                                                                  N38720
                                                                                  (the
                                                                                   (integer
                                                                                    0)
                                                                                   num_non_terminals))))))))
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            (scaf__putstack_0
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              num_non_terminals)
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              len)
                                                                             G
                                                                             s38570
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              St)
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              (atomic_peg-e2-3
                                                                               x)))))))))))))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (if
                                                                    (the
                                                                     boolean
                                                                     (loop_2?
                                                                      x#0))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (let
                                                                      ((A38728
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (A38727
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((N38725
                                                                         (make-loop_2))
                                                                        (E38724
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let
                                                                        ((E38726
                                                                          E38724))
                                                                        (nd-rec-tup-update
                                                                         E38724
                                                                         2
                                                                         (pvs-function-update
                                                                          (mkcopy-pvs-closure-hash
                                                                           (svref
                                                                            E38726
                                                                            2))
                                                                          A38727
                                                                          (pvs-outer-array-update
                                                                           (pvs-funcall
                                                                            (svref
                                                                             E38726
                                                                             2)
                                                                            A38727)
                                                                           A38728
                                                                           N38725
                                                                           (the
                                                                            (integer
                                                                             0)
                                                                            num_non_terminals))))))))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (if
                                                                      (the
                                                                       boolean
                                                                       (good_2?
                                                                        x#0))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (let
                                                                        ((A38733
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           cur))
                                                                         (A38732
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           pos)))
                                                                        (let
                                                                         ((N38730
                                                                           (make-good_2
                                                                            (the
                                                                             (integer
                                                                              0)
                                                                             (good_2-span
                                                                              x#0))))
                                                                          (E38729
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            St)))
                                                                         (let
                                                                          ((E38731
                                                                            E38729))
                                                                          (nd-rec-tup-update
                                                                           E38729
                                                                           2
                                                                           (pvs-function-update
                                                                            (mkcopy-pvs-closure-hash
                                                                             (svref
                                                                              E38731
                                                                              2))
                                                                            A38732
                                                                            (pvs-outer-array-update
                                                                             (pvs-funcall
                                                                              (svref
                                                                               E38731
                                                                               2)
                                                                              A38732)
                                                                             A38733
                                                                             N38730
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              num_non_terminals))))))))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (scaf__putstack_0
                                                                        (the
                                                                         (integer
                                                                          0)
                                                                         num_non_terminals)
                                                                        (the
                                                                         (integer
                                                                          0)
                                                                         len)
                                                                        G
                                                                        s38570
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         St)
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         (atomic_peg-e1-3
                                                                          x)))))))))))))
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (if
                                                               (the
                                                                boolean
                                                                (check_2?
                                                                 x))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ((x#0
                                                                    (pvs-funcall
                                                                     (pvs-funcall
                                                                      scaf
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos))
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      (atomic_peg-e-3
                                                                       x)))))
                                                                  (declare
                                                                   (type
                                                                    nil
                                                                    x#0))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (if
                                                                    (the
                                                                     boolean
                                                                     (fail_3?
                                                                      x#0))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (let
                                                                      ((A38738
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (A38737
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((N38735
                                                                         (make-fail_3))
                                                                        (E38734
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let
                                                                        ((E38736
                                                                          E38734))
                                                                        (nd-rec-tup-update
                                                                         E38734
                                                                         2
                                                                         (pvs-function-update
                                                                          (mkcopy-pvs-closure-hash
                                                                           (svref
                                                                            E38736
                                                                            2))
                                                                          A38737
                                                                          (pvs-outer-array-update
                                                                           (pvs-funcall
                                                                            (svref
                                                                             E38736
                                                                             2)
                                                                            A38737)
                                                                           A38738
                                                                           N38735
                                                                           (the
                                                                            (integer
                                                                             0)
                                                                            num_non_terminals))))))))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (if
                                                                      (the
                                                                       boolean
                                                                       (loop_2?
                                                                        x#0))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (let
                                                                        ((A38743
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           cur))
                                                                         (A38742
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           pos)))
                                                                        (let
                                                                         ((N38740
                                                                           (make-loop_2))
                                                                          (E38739
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            St)))
                                                                         (let
                                                                          ((E38741
                                                                            E38739))
                                                                          (nd-rec-tup-update
                                                                           E38739
                                                                           2
                                                                           (pvs-function-update
                                                                            (mkcopy-pvs-closure-hash
                                                                             (svref
                                                                              E38741
                                                                              2))
                                                                            A38742
                                                                            (pvs-outer-array-update
                                                                             (pvs-funcall
                                                                              (svref
                                                                               E38741
                                                                               2)
                                                                              A38742)
                                                                             A38743
                                                                             N38740
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              num_non_terminals))))))))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (if
                                                                        (the
                                                                         boolean
                                                                         (good_2?
                                                                          x#0))
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         (let
                                                                          ((A38748
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             cur))
                                                                           (A38747
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             pos)))
                                                                          (let
                                                                           ((N38745
                                                                             (make-good_2
                                                                              0))
                                                                            (E38744
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              St)))
                                                                           (let
                                                                            ((E38746
                                                                              E38744))
                                                                            (nd-rec-tup-update
                                                                             E38744
                                                                             2
                                                                             (pvs-function-update
                                                                              (mkcopy-pvs-closure-hash
                                                                               (svref
                                                                                E38746
                                                                                2))
                                                                              A38747
                                                                              (pvs-outer-array-update
                                                                               (pvs-funcall
                                                                                (svref
                                                                                 E38746
                                                                                 2)
                                                                                A38747)
                                                                               A38748
                                                                               N38745
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                num_non_terminals))))))))
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         (scaf__putstack_0
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           num_non_terminals)
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           len)
                                                                          G
                                                                          s38570
                                                                          (the
                                                                           (simple-array
                                                                            t)
                                                                           St)
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           (atomic_peg-e-3
                                                                            x)))))))))))))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ((x#0
                                                                    (pvs-funcall
                                                                     (pvs-funcall
                                                                      scaf
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos))
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      (atomic_peg-e-3
                                                                       x)))))
                                                                  (declare
                                                                   (type
                                                                    nil
                                                                    x#0))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (if
                                                                    (the
                                                                     boolean
                                                                     (fail_3?
                                                                      x#0))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (let
                                                                      ((A38753
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (A38752
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((N38750
                                                                         (make-good_2
                                                                          0))
                                                                        (E38749
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let
                                                                        ((E38751
                                                                          E38749))
                                                                        (nd-rec-tup-update
                                                                         E38749
                                                                         2
                                                                         (pvs-function-update
                                                                          (mkcopy-pvs-closure-hash
                                                                           (svref
                                                                            E38751
                                                                            2))
                                                                          A38752
                                                                          (pvs-outer-array-update
                                                                           (pvs-funcall
                                                                            (svref
                                                                             E38751
                                                                             2)
                                                                            A38752)
                                                                           A38753
                                                                           N38750
                                                                           (the
                                                                            (integer
                                                                             0)
                                                                            num_non_terminals))))))))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (if
                                                                      (the
                                                                       boolean
                                                                       (loop_2?
                                                                        x#0))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (let
                                                                        ((A38758
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           cur))
                                                                         (A38757
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           pos)))
                                                                        (let
                                                                         ((N38755
                                                                           (make-loop_2))
                                                                          (E38754
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            St)))
                                                                         (let
                                                                          ((E38756
                                                                            E38754))
                                                                          (nd-rec-tup-update
                                                                           E38754
                                                                           2
                                                                           (pvs-function-update
                                                                            (mkcopy-pvs-closure-hash
                                                                             (svref
                                                                              E38756
                                                                              2))
                                                                            A38757
                                                                            (pvs-outer-array-update
                                                                             (pvs-funcall
                                                                              (svref
                                                                               E38756
                                                                               2)
                                                                              A38757)
                                                                             A38758
                                                                             N38755
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              num_non_terminals))))))))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (if
                                                                        (the
                                                                         boolean
                                                                         (good_2?
                                                                          x#0))
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         (let
                                                                          ((A38763
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             cur))
                                                                           (A38762
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             pos)))
                                                                          (let
                                                                           ((N38760
                                                                             (make-fail_3))
                                                                            (E38759
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              St)))
                                                                           (let
                                                                            ((E38761
                                                                              E38759))
                                                                            (nd-rec-tup-update
                                                                             E38759
                                                                             2
                                                                             (pvs-function-update
                                                                              (mkcopy-pvs-closure-hash
                                                                               (svref
                                                                                E38761
                                                                                2))
                                                                              A38762
                                                                              (pvs-outer-array-update
                                                                               (pvs-funcall
                                                                                (svref
                                                                                 E38761
                                                                                 2)
                                                                                A38762)
                                                                               A38763
                                                                               N38760
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                num_non_terminals))))))))
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         (scaf__putstack_0
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           num_non_terminals)
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           len)
                                                                          G
                                                                          s38570
                                                                          (the
                                                                           (simple-array
                                                                            t)
                                                                           St)
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           (atomic_peg-e-3
                                                                            x)))))))))))))))))))))))))))))))))))))))))))))))))))
(defun scaf!step_0 (num_non_terminals len G s38570 St)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (simple-array t) St))
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (simple-array t) St))
  (the (simple-array t)
       (let ((pos
              (the (integer 0 *)
                   (project 1 (the (simple-array t) St)))))
         (declare (type (integer 0 *) pos))
         (the (simple-array t)
              (let ((root
                     (the (integer 0 *)
                          (project 2 (the (simple-array t) St)))))
                (declare (type (integer 0 *) root))
                (the (simple-array t)
                     (let ((scaf
                            (project 3 (the (simple-array t) St))))
                       (declare (type nil scaf))
                       (the (simple-array t)
                            (let ((stack
                                   (the
                                    list
                                    (project
                                     4
                                     (the (simple-array t) St)))))
                              (declare (type list stack))
                              (the (simple-array t)
                                   (if
                                    (the
                                     boolean
                                     (pvs__AND
                                      (the
                                       boolean
                                       (= (the (integer 0 *) pos) 0))
                                      (the
                                       boolean
                                       (=
                                        (the (integer 0 *) root)
                                        (the
                                         (integer 0)
                                         num_non_terminals)))))
                                    (the (simple-array t) St)
                                    (the
                                     (simple-array t)
                                     (if
                                      (the
                                       boolean
                                       (=
                                        (the (integer 0 *) root)
                                        (the
                                         (integer 0)
                                         num_non_terminals)))
                                      (the
                                       (simple-array t)
                                       (let
                                        ((RHS39020 (the list nil))
                                         (E39021
                                          (let
                                           ((RHS39015 0)
                                            (E39016
                                             (let
                                              ((RHS39010
                                                (pvs__-
                                                 (the
                                                  (integer 0 *)
                                                  pos)
                                                 1))
                                               (E39011
                                                (the
                                                 (simple-array t)
                                                 St)))
                                              (let*
                                               ((E39012 E39011)
                                                (R39014 RHS39010))
                                               (rec-tup-update
                                                E39012
                                                0
                                                R39014)
                                               E39012)
                                              E39011)))
                                           (let*
                                            ((E39017 E39016)
                                             (R39019 RHS39015))
                                            (rec-tup-update
                                             E39017
                                             1
                                             R39019)
                                            E39017)
                                           E39016)))
                                        (let*
                                         ((E39022 E39021)
                                          (R39024 RHS39020))
                                         (rec-tup-update
                                          E39022
                                          3
                                          R39024)
                                         E39022)
                                        E39021))
                                      (the
                                       (simple-array t)
                                       (if
                                        (the
                                         boolean
                                         (pvs_NOT
                                          (the
                                           boolean
                                           (pending_2?
                                            (pvs-funcall
                                             (pvs-funcall
                                              scaf
                                              (the (integer 0 *) pos))
                                             (the
                                              (integer 0 *)
                                              root))))))
                                        (the
                                         (simple-array t)
                                         (let
                                          ((RHS39030 (the list nil))
                                           (E39031
                                            (let
                                             ((RHS39025
                                               (pvs__+
                                                (the
                                                 (integer 0 *)
                                                 root)
                                                1))
                                              (E39026
                                               (the
                                                (simple-array t)
                                                St)))
                                             (let*
                                              ((E39027 E39026)
                                               (R39029 RHS39025))
                                              (rec-tup-update
                                               E39027
                                               1
                                               R39029)
                                              E39027)
                                             E39026)))
                                          (let*
                                           ((E39032 E39031)
                                            (R39034 RHS39030))
                                           (rec-tup-update
                                            E39032
                                            3
                                            R39034)
                                           E39032)
                                          E39031))
                                        (the
                                         (simple-array t)
                                         (if
                                          (the
                                           boolean
                                           (pvs_null?
                                            (the list stack)))
                                          (the
                                           (simple-array t)
                                           (let
                                            ((RHS39035
                                              (the
                                               list
                                               (pvs__cons
                                                (the
                                                 (integer 0 *)
                                                 root)
                                                (the list nil))))
                                             (E39036
                                              (the
                                               (simple-array t)
                                               St)))
                                            (let*
                                             ((E39037 E39036)
                                              (R39039 RHS39035))
                                             (rec-tup-update
                                              E39037
                                              3
                                              R39039)
                                             E39037)
                                            E39036))
                                          (the
                                           (simple-array t)
                                           (let
                                            ((cur
                                              (the
                                               (integer 0 *)
                                               (pvs_car
                                                (the list stack)))))
                                            (declare
                                             (type (integer 0 *) cur))
                                            (the
                                             (simple-array t)
                                             (let
                                              ((rest
                                                (the
                                                 list
                                                 (pvs_cdr
                                                  (the list stack)))))
                                              (declare
                                               (type list rest))
                                              (the
                                               (simple-array t)
                                               (the
                                                (simple-array t)
                                                (let
                                                 ((x
                                                   (pvs-funcall
                                                    G
                                                    (the
                                                     (integer 0 *)
                                                     cur))))
                                                 (declare (type nil x))
                                                 (the
                                                  (simple-array t)
                                                  (if
                                                   (the
                                                    boolean
                                                    (epsilon_2? x))
                                                   (the
                                                    (simple-array t)
                                                    (let
                                                     ((RHS39048
                                                       (the list rest))
                                                      (E39049
                                                       (let
                                                        ((A39047
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           cur))
                                                         (LHS39045
                                                          (the
                                                           (integer
                                                            0
                                                            *)
                                                           pos)))
                                                        (let
                                                         ((RHS39040
                                                           (make-good_2
                                                            0))
                                                          (E39041
                                                           (the
                                                            (simple-array
                                                             t)
                                                            St)))
                                                         (let*
                                                          ((E39042
                                                            E39041)
                                                           (R39044
                                                            (let
                                                             ((E39046
                                                               (make-closure-hash
                                                                (svref
                                                                 E39042
                                                                 2))))
                                                             (pvs-function-update
                                                              E39046
                                                              LHS39045
                                                              (pvs-outer-array-update
                                                               (pvs-closure-hash-lookup
                                                                E39046
                                                                LHS39045)
                                                               A39047
                                                               RHS39040
                                                               (the
                                                                (integer
                                                                 0)
                                                                num_non_terminals))))))
                                                          (rec-tup-update
                                                           E39042
                                                           2
                                                           R39044)
                                                          E39042)
                                                         E39041))))
                                                     (let*
                                                      ((E39050 E39049)
                                                       (R39052
                                                        RHS39048))
                                                      (rec-tup-update
                                                       E39050
                                                       3
                                                       R39052)
                                                      E39050)
                                                     E39049))
                                                   (the
                                                    (simple-array t)
                                                    (if
                                                     (the
                                                      boolean
                                                      (failure_2? x))
                                                     (the
                                                      (simple-array t)
                                                      (let
                                                       ((RHS39061
                                                         (the
                                                          list
                                                          rest))
                                                        (E39062
                                                         (let
                                                          ((A39060
                                                            (the
                                                             (integer
                                                              0
                                                              *)
                                                             cur))
                                                           (LHS39058
                                                            (the
                                                             (integer
                                                              0
                                                              *)
                                                             pos)))
                                                          (let
                                                           ((RHS39053
                                                             (make-fail_3))
                                                            (E39054
                                                             (the
                                                              (simple-array
                                                               t)
                                                              St)))
                                                           (let*
                                                            ((E39055
                                                              E39054)
                                                             (R39057
                                                              (let
                                                               ((E39059
                                                                 (make-closure-hash
                                                                  (svref
                                                                   E39055
                                                                   2))))
                                                               (pvs-function-update
                                                                E39059
                                                                LHS39058
                                                                (pvs-outer-array-update
                                                                 (pvs-closure-hash-lookup
                                                                  E39059
                                                                  LHS39058)
                                                                 A39060
                                                                 RHS39053
                                                                 (the
                                                                  (integer
                                                                   0)
                                                                  num_non_terminals))))))
                                                            (rec-tup-update
                                                             E39055
                                                             2
                                                             R39057)
                                                            E39055)
                                                           E39054))))
                                                       (let*
                                                        ((E39063
                                                          E39062)
                                                         (R39065
                                                          RHS39061))
                                                        (rec-tup-update
                                                         E39063
                                                         3
                                                         R39065)
                                                        E39063)
                                                       E39062))
                                                     (the
                                                      (simple-array t)
                                                      (if
                                                       (the
                                                        boolean
                                                        (any_2? x))
                                                       (the
                                                        (simple-array
                                                         t)
                                                        (let
                                                         ((v
                                                           (if
                                                            (the
                                                             boolean
                                                             (=
                                                              (the
                                                               (integer
                                                                0
                                                                *)
                                                               pos)
                                                              (the
                                                               (integer
                                                                0)
                                                               len)))
                                                            (make-fail_3)
                                                            (make-good_2
                                                             1))))
                                                         (declare
                                                          (type nil v))
                                                         (the
                                                          (simple-array
                                                           t)
                                                          (let
                                                           ((RHS39074
                                                             (the
                                                              list
                                                              rest))
                                                            (E39075
                                                             (let
                                                              ((A39073
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 cur))
                                                               (LHS39071
                                                                (the
                                                                 (integer
                                                                  0
                                                                  *)
                                                                 pos)))
                                                              (let
                                                               ((RHS39066
                                                                 v)
                                                                (E39067
                                                                 (the
                                                                  (simple-array
                                                                   t)
                                                                  St)))
                                                               (let*
                                                                ((E39068
                                                                  E39067)
                                                                 (R39070
                                                                  (let
                                                                   ((E39072
                                                                     (make-closure-hash
                                                                      (svref
                                                                       E39068
                                                                       2))))
                                                                   (pvs-function-update
                                                                    E39072
                                                                    LHS39071
                                                                    (pvs-outer-array-update
                                                                     (pvs-closure-hash-lookup
                                                                      E39072
                                                                      LHS39071)
                                                                     A39073
                                                                     RHS39066
                                                                     (the
                                                                      (integer
                                                                       0)
                                                                      num_non_terminals))))))
                                                                (rec-tup-update
                                                                 E39068
                                                                 2
                                                                 R39070)
                                                                E39068)
                                                               E39067))))
                                                           (let*
                                                            ((E39076
                                                              E39075)
                                                             (R39078
                                                              RHS39074))
                                                            (rec-tup-update
                                                             E39076
                                                             3
                                                             R39078)
                                                            E39076)
                                                           E39075))))
                                                       (the
                                                        (simple-array
                                                         t)
                                                        (if
                                                         (the
                                                          boolean
                                                          (terminal_2?
                                                           x))
                                                         (the
                                                          (simple-array
                                                           t)
                                                          (let
                                                           ((v
                                                             (if
                                                              (the
                                                               boolean
                                                               (pvs__OR
                                                                (the
                                                                 boolean
                                                                 (=
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos)
                                                                  (the
                                                                   (integer
                                                                    0)
                                                                   len)))
                                                                (the
                                                                 boolean
                                                                 (pvs__/=
                                                                  (terminal_2-a
                                                                   x)
                                                                  (pvs-funcall
                                                                   s38570
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    pos))))))
                                                              (make-fail_3)
                                                              (make-good_2
                                                               1))))
                                                           (declare
                                                            (type
                                                             nil
                                                             v))
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (let
                                                             ((RHS39087
                                                               (the
                                                                list
                                                                rest))
                                                              (E39088
                                                               (let
                                                                ((A39086
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   cur))
                                                                 (LHS39084
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos)))
                                                                (let
                                                                 ((RHS39079
                                                                   v)
                                                                  (E39080
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    St)))
                                                                 (let*
                                                                  ((E39081
                                                                    E39080)
                                                                   (R39083
                                                                    (let
                                                                     ((E39085
                                                                       (make-closure-hash
                                                                        (svref
                                                                         E39081
                                                                         2))))
                                                                     (pvs-function-update
                                                                      E39085
                                                                      LHS39084
                                                                      (pvs-outer-array-update
                                                                       (pvs-closure-hash-lookup
                                                                        E39085
                                                                        LHS39084)
                                                                       A39086
                                                                       RHS39079
                                                                       (the
                                                                        (integer
                                                                         0)
                                                                        num_non_terminals))))))
                                                                  (rec-tup-update
                                                                   E39081
                                                                   2
                                                                   R39083)
                                                                  E39081)
                                                                 E39080))))
                                                             (let*
                                                              ((E39089
                                                                E39088)
                                                               (R39091
                                                                RHS39087))
                                                              (rec-tup-update
                                                               E39089
                                                               3
                                                               R39091)
                                                              E39089)
                                                             E39088))))
                                                         (the
                                                          (simple-array
                                                           t)
                                                          (if
                                                           (the
                                                            boolean
                                                            (concat_2?
                                                             x))
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (the
                                                             (simple-array
                                                              t)
                                                             (let
                                                              ((x#0
                                                                (pvs-funcall
                                                                 (pvs-funcall
                                                                  (project
                                                                   3
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    St))
                                                                  (the
                                                                   (integer
                                                                    0
                                                                    *)
                                                                   pos))
                                                                 (the
                                                                  (integer
                                                                   0
                                                                   *)
                                                                  (atomic_peg-e1-3
                                                                   x)))))
                                                              (declare
                                                               (type
                                                                nil
                                                                x#0))
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (if
                                                                (the
                                                                 boolean
                                                                 (fail_3?
                                                                  x#0))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ((A39099
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     cur))
                                                                   (LHS39097
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos)))
                                                                  (let
                                                                   ((RHS39092
                                                                     (make-fail_3))
                                                                    (E39093
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      St)))
                                                                   (let*
                                                                    ((E39094
                                                                      E39093)
                                                                     (R39096
                                                                      (let
                                                                       ((E39098
                                                                         (make-closure-hash
                                                                          (svref
                                                                           E39094
                                                                           2))))
                                                                       (pvs-function-update
                                                                        E39098
                                                                        LHS39097
                                                                        (pvs-outer-array-update
                                                                         (pvs-closure-hash-lookup
                                                                          E39098
                                                                          LHS39097)
                                                                         A39099
                                                                         RHS39092
                                                                         (the
                                                                          (integer
                                                                           0)
                                                                          num_non_terminals))))))
                                                                    (rec-tup-update
                                                                     E39094
                                                                     2
                                                                     R39096)
                                                                    E39094)
                                                                   E39093)))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (if
                                                                  (the
                                                                   boolean
                                                                   (loop_2?
                                                                    x#0))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (let
                                                                    ((A39107
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       cur))
                                                                     (LHS39105
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos)))
                                                                    (let
                                                                     ((RHS39100
                                                                       (make-loop_2))
                                                                      (E39101
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        St)))
                                                                     (let*
                                                                      ((E39102
                                                                        E39101)
                                                                       (R39104
                                                                        (let
                                                                         ((E39106
                                                                           (make-closure-hash
                                                                            (svref
                                                                             E39102
                                                                             2))))
                                                                         (pvs-function-update
                                                                          E39106
                                                                          LHS39105
                                                                          (pvs-outer-array-update
                                                                           (pvs-closure-hash-lookup
                                                                            E39106
                                                                            LHS39105)
                                                                           A39107
                                                                           RHS39100
                                                                           (the
                                                                            (integer
                                                                             0)
                                                                            num_non_terminals))))))
                                                                      (rec-tup-update
                                                                       E39102
                                                                       2
                                                                       R39104)
                                                                      E39102)
                                                                     E39101)))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (if
                                                                    (the
                                                                     boolean
                                                                     (good_2?
                                                                      x#0))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      (let
                                                                       ((x1
                                                                         (pvs-funcall
                                                                          (pvs-funcall
                                                                           (project
                                                                            3
                                                                            (the
                                                                             (simple-array
                                                                              t)
                                                                             St))
                                                                           (pvs__+
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             pos)
                                                                            (the
                                                                             (integer
                                                                              0)
                                                                             (good_2-span
                                                                              x#0))))
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           (atomic_peg-e2-3
                                                                            x)))))
                                                                       (declare
                                                                        (type
                                                                         nil
                                                                         x1))
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        (if
                                                                         (the
                                                                          boolean
                                                                          (fail_3?
                                                                           x1))
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          (let
                                                                           ((A39115
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              cur))
                                                                            (LHS39113
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              pos)))
                                                                           (let
                                                                            ((RHS39108
                                                                              (make-fail_3))
                                                                             (E39109
                                                                              (the
                                                                               (simple-array
                                                                                t)
                                                                               St)))
                                                                            (let*
                                                                             ((E39110
                                                                               E39109)
                                                                              (R39112
                                                                               (let
                                                                                ((E39114
                                                                                  (make-closure-hash
                                                                                   (svref
                                                                                    E39110
                                                                                    2))))
                                                                                (pvs-function-update
                                                                                 E39114
                                                                                 LHS39113
                                                                                 (pvs-outer-array-update
                                                                                  (pvs-closure-hash-lookup
                                                                                   E39114
                                                                                   LHS39113)
                                                                                  A39115
                                                                                  RHS39108
                                                                                  (the
                                                                                   (integer
                                                                                    0)
                                                                                   num_non_terminals))))))
                                                                             (rec-tup-update
                                                                              E39110
                                                                              2
                                                                              R39112)
                                                                             E39110)
                                                                            E39109)))
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          (if
                                                                           (the
                                                                            boolean
                                                                            (loop_2?
                                                                             x1))
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            (let
                                                                             ((A39123
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                cur))
                                                                              (LHS39121
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                pos)))
                                                                             (let
                                                                              ((RHS39116
                                                                                (make-loop_2))
                                                                               (E39117
                                                                                (the
                                                                                 (simple-array
                                                                                  t)
                                                                                 St)))
                                                                              (let*
                                                                               ((E39118
                                                                                 E39117)
                                                                                (R39120
                                                                                 (let
                                                                                  ((E39122
                                                                                    (make-closure-hash
                                                                                     (svref
                                                                                      E39118
                                                                                      2))))
                                                                                  (pvs-function-update
                                                                                   E39122
                                                                                   LHS39121
                                                                                   (pvs-outer-array-update
                                                                                    (pvs-closure-hash-lookup
                                                                                     E39122
                                                                                     LHS39121)
                                                                                    A39123
                                                                                    RHS39116
                                                                                    (the
                                                                                     (integer
                                                                                      0)
                                                                                     num_non_terminals))))))
                                                                               (rec-tup-update
                                                                                E39118
                                                                                2
                                                                                R39120)
                                                                               E39118)
                                                                              E39117)))
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            (if
                                                                             (the
                                                                              boolean
                                                                              (good_2?
                                                                               x1))
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              (let
                                                                               ((A39131
                                                                                 (the
                                                                                  (integer
                                                                                   0
                                                                                   *)
                                                                                  cur))
                                                                                (LHS39129
                                                                                 (the
                                                                                  (integer
                                                                                   0
                                                                                   *)
                                                                                  pos)))
                                                                               (let
                                                                                ((RHS39124
                                                                                  (make-good_2
                                                                                   (pvs__+
                                                                                    (the
                                                                                     (integer
                                                                                      0)
                                                                                     (good_2-span
                                                                                      x#0))
                                                                                    (the
                                                                                     (integer
                                                                                      0)
                                                                                     (good_2-span
                                                                                      x1)))))
                                                                                 (E39125
                                                                                  (the
                                                                                   (simple-array
                                                                                    t)
                                                                                   St)))
                                                                                (let*
                                                                                 ((E39126
                                                                                   E39125)
                                                                                  (R39128
                                                                                   (let
                                                                                    ((E39130
                                                                                      (make-closure-hash
                                                                                       (svref
                                                                                        E39126
                                                                                        2))))
                                                                                    (pvs-function-update
                                                                                     E39130
                                                                                     LHS39129
                                                                                     (pvs-outer-array-update
                                                                                      (pvs-closure-hash-lookup
                                                                                       E39130
                                                                                       LHS39129)
                                                                                      A39131
                                                                                      RHS39124
                                                                                      (the
                                                                                       (integer
                                                                                        0)
                                                                                       num_non_terminals))))))
                                                                                 (rec-tup-update
                                                                                  E39126
                                                                                  2
                                                                                  R39128)
                                                                                 E39126)
                                                                                E39125)))
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              (scaf!putstack_0
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                num_non_terminals)
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                len)
                                                                               G
                                                                               s38570
                                                                               (the
                                                                                (simple-array
                                                                                 t)
                                                                                St)
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                (atomic_peg-e2-3
                                                                                 x)))))))))))))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (scaf!putstack_0
                                                                      (the
                                                                       (integer
                                                                        0)
                                                                       num_non_terminals)
                                                                      (the
                                                                       (integer
                                                                        0)
                                                                       len)
                                                                      G
                                                                      s38570
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       St)
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       (atomic_peg-e1-3
                                                                        x)))))))))))))
                                                           (the
                                                            (simple-array
                                                             t)
                                                            (if
                                                             (the
                                                              boolean
                                                              (choice_2?
                                                               x))
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (the
                                                               (simple-array
                                                                t)
                                                               (let
                                                                ((x#0
                                                                  (pvs-funcall
                                                                   (pvs-funcall
                                                                    scaf
                                                                    (the
                                                                     (integer
                                                                      0
                                                                      *)
                                                                     pos))
                                                                   (the
                                                                    (integer
                                                                     0
                                                                     *)
                                                                    (atomic_peg-e1-3
                                                                     x)))))
                                                                (declare
                                                                 (type
                                                                  nil
                                                                  x#0))
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (if
                                                                  (the
                                                                   boolean
                                                                   (fail_3?
                                                                    x#0))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (the
                                                                    (simple-array
                                                                     t)
                                                                    (let
                                                                     ((x#1
                                                                       (pvs-funcall
                                                                        (pvs-funcall
                                                                         scaf
                                                                         (the
                                                                          (integer
                                                                           0
                                                                           *)
                                                                          pos))
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         (atomic_peg-e2-3
                                                                          x)))))
                                                                     (declare
                                                                      (type
                                                                       nil
                                                                       x#1))
                                                                     (the
                                                                      (simple-array
                                                                       t)
                                                                      (if
                                                                       (the
                                                                        boolean
                                                                        (fail_3?
                                                                         x#1))
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        (let
                                                                         ((A39139
                                                                           (the
                                                                            (integer
                                                                             0
                                                                             *)
                                                                            cur))
                                                                          (LHS39137
                                                                           (the
                                                                            (integer
                                                                             0
                                                                             *)
                                                                            pos)))
                                                                         (let
                                                                          ((RHS39132
                                                                            (make-fail_3))
                                                                           (E39133
                                                                            (the
                                                                             (simple-array
                                                                              t)
                                                                             St)))
                                                                          (let*
                                                                           ((E39134
                                                                             E39133)
                                                                            (R39136
                                                                             (let
                                                                              ((E39138
                                                                                (make-closure-hash
                                                                                 (svref
                                                                                  E39134
                                                                                  2))))
                                                                              (pvs-function-update
                                                                               E39138
                                                                               LHS39137
                                                                               (pvs-outer-array-update
                                                                                (pvs-closure-hash-lookup
                                                                                 E39138
                                                                                 LHS39137)
                                                                                A39139
                                                                                RHS39132
                                                                                (the
                                                                                 (integer
                                                                                  0)
                                                                                 num_non_terminals))))))
                                                                           (rec-tup-update
                                                                            E39134
                                                                            2
                                                                            R39136)
                                                                           E39134)
                                                                          E39133)))
                                                                       (the
                                                                        (simple-array
                                                                         t)
                                                                        (if
                                                                         (the
                                                                          boolean
                                                                          (loop_2?
                                                                           x#1))
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          (let
                                                                           ((A39147
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              cur))
                                                                            (LHS39145
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              pos)))
                                                                           (let
                                                                            ((RHS39140
                                                                              (make-loop_2))
                                                                             (E39141
                                                                              (the
                                                                               (simple-array
                                                                                t)
                                                                               St)))
                                                                            (let*
                                                                             ((E39142
                                                                               E39141)
                                                                              (R39144
                                                                               (let
                                                                                ((E39146
                                                                                  (make-closure-hash
                                                                                   (svref
                                                                                    E39142
                                                                                    2))))
                                                                                (pvs-function-update
                                                                                 E39146
                                                                                 LHS39145
                                                                                 (pvs-outer-array-update
                                                                                  (pvs-closure-hash-lookup
                                                                                   E39146
                                                                                   LHS39145)
                                                                                  A39147
                                                                                  RHS39140
                                                                                  (the
                                                                                   (integer
                                                                                    0)
                                                                                   num_non_terminals))))))
                                                                             (rec-tup-update
                                                                              E39142
                                                                              2
                                                                              R39144)
                                                                             E39142)
                                                                            E39141)))
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          (if
                                                                           (the
                                                                            boolean
                                                                            (good_2?
                                                                             x#1))
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            (let
                                                                             ((A39155
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                cur))
                                                                              (LHS39153
                                                                               (the
                                                                                (integer
                                                                                 0
                                                                                 *)
                                                                                pos)))
                                                                             (let
                                                                              ((RHS39148
                                                                                (make-good_2
                                                                                 (the
                                                                                  (integer
                                                                                   0)
                                                                                  (good_2-span
                                                                                   x#1))))
                                                                               (E39149
                                                                                (the
                                                                                 (simple-array
                                                                                  t)
                                                                                 St)))
                                                                              (let*
                                                                               ((E39150
                                                                                 E39149)
                                                                                (R39152
                                                                                 (let
                                                                                  ((E39154
                                                                                    (make-closure-hash
                                                                                     (svref
                                                                                      E39150
                                                                                      2))))
                                                                                  (pvs-function-update
                                                                                   E39154
                                                                                   LHS39153
                                                                                   (pvs-outer-array-update
                                                                                    (pvs-closure-hash-lookup
                                                                                     E39154
                                                                                     LHS39153)
                                                                                    A39155
                                                                                    RHS39148
                                                                                    (the
                                                                                     (integer
                                                                                      0)
                                                                                     num_non_terminals))))))
                                                                               (rec-tup-update
                                                                                E39150
                                                                                2
                                                                                R39152)
                                                                               E39150)
                                                                              E39149)))
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            (scaf!putstack_0
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              num_non_terminals)
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              len)
                                                                             G
                                                                             s38570
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              St)
                                                                             (the
                                                                              (integer
                                                                               0
                                                                               *)
                                                                              (atomic_peg-e2-3
                                                                               x)))))))))))))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (if
                                                                    (the
                                                                     boolean
                                                                     (loop_2?
                                                                      x#0))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (let
                                                                      ((A39163
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (LHS39161
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((RHS39156
                                                                         (make-loop_2))
                                                                        (E39157
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let*
                                                                        ((E39158
                                                                          E39157)
                                                                         (R39160
                                                                          (let
                                                                           ((E39162
                                                                             (make-closure-hash
                                                                              (svref
                                                                               E39158
                                                                               2))))
                                                                           (pvs-function-update
                                                                            E39162
                                                                            LHS39161
                                                                            (pvs-outer-array-update
                                                                             (pvs-closure-hash-lookup
                                                                              E39162
                                                                              LHS39161)
                                                                             A39163
                                                                             RHS39156
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              num_non_terminals))))))
                                                                        (rec-tup-update
                                                                         E39158
                                                                         2
                                                                         R39160)
                                                                        E39158)
                                                                       E39157)))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (if
                                                                      (the
                                                                       boolean
                                                                       (good_2?
                                                                        x#0))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (let
                                                                        ((A39171
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           cur))
                                                                         (LHS39169
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           pos)))
                                                                        (let
                                                                         ((RHS39164
                                                                           (make-good_2
                                                                            (the
                                                                             (integer
                                                                              0)
                                                                             (good_2-span
                                                                              x#0))))
                                                                          (E39165
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            St)))
                                                                         (let*
                                                                          ((E39166
                                                                            E39165)
                                                                           (R39168
                                                                            (let
                                                                             ((E39170
                                                                               (make-closure-hash
                                                                                (svref
                                                                                 E39166
                                                                                 2))))
                                                                             (pvs-function-update
                                                                              E39170
                                                                              LHS39169
                                                                              (pvs-outer-array-update
                                                                               (pvs-closure-hash-lookup
                                                                                E39170
                                                                                LHS39169)
                                                                               A39171
                                                                               RHS39164
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                num_non_terminals))))))
                                                                          (rec-tup-update
                                                                           E39166
                                                                           2
                                                                           R39168)
                                                                          E39166)
                                                                         E39165)))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (scaf!putstack_0
                                                                        (the
                                                                         (integer
                                                                          0)
                                                                         num_non_terminals)
                                                                        (the
                                                                         (integer
                                                                          0)
                                                                         len)
                                                                        G
                                                                        s38570
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         St)
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         (atomic_peg-e1-3
                                                                          x)))))))))))))
                                                             (the
                                                              (simple-array
                                                               t)
                                                              (if
                                                               (the
                                                                boolean
                                                                (check_2?
                                                                 x))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ((x#0
                                                                    (pvs-funcall
                                                                     (pvs-funcall
                                                                      scaf
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos))
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      (atomic_peg-e-3
                                                                       x)))))
                                                                  (declare
                                                                   (type
                                                                    nil
                                                                    x#0))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (if
                                                                    (the
                                                                     boolean
                                                                     (fail_3?
                                                                      x#0))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (let
                                                                      ((A39179
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (LHS39177
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((RHS39172
                                                                         (make-fail_3))
                                                                        (E39173
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let*
                                                                        ((E39174
                                                                          E39173)
                                                                         (R39176
                                                                          (let
                                                                           ((E39178
                                                                             (make-closure-hash
                                                                              (svref
                                                                               E39174
                                                                               2))))
                                                                           (pvs-function-update
                                                                            E39178
                                                                            LHS39177
                                                                            (pvs-outer-array-update
                                                                             (pvs-closure-hash-lookup
                                                                              E39178
                                                                              LHS39177)
                                                                             A39179
                                                                             RHS39172
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              num_non_terminals))))))
                                                                        (rec-tup-update
                                                                         E39174
                                                                         2
                                                                         R39176)
                                                                        E39174)
                                                                       E39173)))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (if
                                                                      (the
                                                                       boolean
                                                                       (loop_2?
                                                                        x#0))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (let
                                                                        ((A39187
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           cur))
                                                                         (LHS39185
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           pos)))
                                                                        (let
                                                                         ((RHS39180
                                                                           (make-loop_2))
                                                                          (E39181
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            St)))
                                                                         (let*
                                                                          ((E39182
                                                                            E39181)
                                                                           (R39184
                                                                            (let
                                                                             ((E39186
                                                                               (make-closure-hash
                                                                                (svref
                                                                                 E39182
                                                                                 2))))
                                                                             (pvs-function-update
                                                                              E39186
                                                                              LHS39185
                                                                              (pvs-outer-array-update
                                                                               (pvs-closure-hash-lookup
                                                                                E39186
                                                                                LHS39185)
                                                                               A39187
                                                                               RHS39180
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                num_non_terminals))))))
                                                                          (rec-tup-update
                                                                           E39182
                                                                           2
                                                                           R39184)
                                                                          E39182)
                                                                         E39181)))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (if
                                                                        (the
                                                                         boolean
                                                                         (good_2?
                                                                          x#0))
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         (let
                                                                          ((A39195
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             cur))
                                                                           (LHS39193
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             pos)))
                                                                          (let
                                                                           ((RHS39188
                                                                             (make-good_2
                                                                              0))
                                                                            (E39189
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              St)))
                                                                           (let*
                                                                            ((E39190
                                                                              E39189)
                                                                             (R39192
                                                                              (let
                                                                               ((E39194
                                                                                 (make-closure-hash
                                                                                  (svref
                                                                                   E39190
                                                                                   2))))
                                                                               (pvs-function-update
                                                                                E39194
                                                                                LHS39193
                                                                                (pvs-outer-array-update
                                                                                 (pvs-closure-hash-lookup
                                                                                  E39194
                                                                                  LHS39193)
                                                                                 A39195
                                                                                 RHS39188
                                                                                 (the
                                                                                  (integer
                                                                                   0)
                                                                                  num_non_terminals))))))
                                                                            (rec-tup-update
                                                                             E39190
                                                                             2
                                                                             R39192)
                                                                            E39190)
                                                                           E39189)))
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         (scaf!putstack_0
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           num_non_terminals)
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           len)
                                                                          G
                                                                          s38570
                                                                          (the
                                                                           (simple-array
                                                                            t)
                                                                           St)
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           (atomic_peg-e-3
                                                                            x)))))))))))))
                                                               (the
                                                                (simple-array
                                                                 t)
                                                                (the
                                                                 (simple-array
                                                                  t)
                                                                 (let
                                                                  ((x#0
                                                                    (pvs-funcall
                                                                     (pvs-funcall
                                                                      scaf
                                                                      (the
                                                                       (integer
                                                                        0
                                                                        *)
                                                                       pos))
                                                                     (the
                                                                      (integer
                                                                       0
                                                                       *)
                                                                      (atomic_peg-e-3
                                                                       x)))))
                                                                  (declare
                                                                   (type
                                                                    nil
                                                                    x#0))
                                                                  (the
                                                                   (simple-array
                                                                    t)
                                                                   (if
                                                                    (the
                                                                     boolean
                                                                     (fail_3?
                                                                      x#0))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (let
                                                                      ((A39203
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         cur))
                                                                       (LHS39201
                                                                        (the
                                                                         (integer
                                                                          0
                                                                          *)
                                                                         pos)))
                                                                      (let
                                                                       ((RHS39196
                                                                         (make-good_2
                                                                          0))
                                                                        (E39197
                                                                         (the
                                                                          (simple-array
                                                                           t)
                                                                          St)))
                                                                       (let*
                                                                        ((E39198
                                                                          E39197)
                                                                         (R39200
                                                                          (let
                                                                           ((E39202
                                                                             (make-closure-hash
                                                                              (svref
                                                                               E39198
                                                                               2))))
                                                                           (pvs-function-update
                                                                            E39202
                                                                            LHS39201
                                                                            (pvs-outer-array-update
                                                                             (pvs-closure-hash-lookup
                                                                              E39202
                                                                              LHS39201)
                                                                             A39203
                                                                             RHS39196
                                                                             (the
                                                                              (integer
                                                                               0)
                                                                              num_non_terminals))))))
                                                                        (rec-tup-update
                                                                         E39198
                                                                         2
                                                                         R39200)
                                                                        E39198)
                                                                       E39197)))
                                                                    (the
                                                                     (simple-array
                                                                      t)
                                                                     (if
                                                                      (the
                                                                       boolean
                                                                       (loop_2?
                                                                        x#0))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (let
                                                                        ((A39211
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           cur))
                                                                         (LHS39209
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           pos)))
                                                                        (let
                                                                         ((RHS39204
                                                                           (make-loop_2))
                                                                          (E39205
                                                                           (the
                                                                            (simple-array
                                                                             t)
                                                                            St)))
                                                                         (let*
                                                                          ((E39206
                                                                            E39205)
                                                                           (R39208
                                                                            (let
                                                                             ((E39210
                                                                               (make-closure-hash
                                                                                (svref
                                                                                 E39206
                                                                                 2))))
                                                                             (pvs-function-update
                                                                              E39210
                                                                              LHS39209
                                                                              (pvs-outer-array-update
                                                                               (pvs-closure-hash-lookup
                                                                                E39210
                                                                                LHS39209)
                                                                               A39211
                                                                               RHS39204
                                                                               (the
                                                                                (integer
                                                                                 0)
                                                                                num_non_terminals))))))
                                                                          (rec-tup-update
                                                                           E39206
                                                                           2
                                                                           R39208)
                                                                          E39206)
                                                                         E39205)))
                                                                      (the
                                                                       (simple-array
                                                                        t)
                                                                       (if
                                                                        (the
                                                                         boolean
                                                                         (good_2?
                                                                          x#0))
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         (let
                                                                          ((A39219
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             cur))
                                                                           (LHS39217
                                                                            (the
                                                                             (integer
                                                                              0
                                                                              *)
                                                                             pos)))
                                                                          (let
                                                                           ((RHS39212
                                                                             (make-fail_3))
                                                                            (E39213
                                                                             (the
                                                                              (simple-array
                                                                               t)
                                                                              St)))
                                                                           (let*
                                                                            ((E39214
                                                                              E39213)
                                                                             (R39216
                                                                              (let
                                                                               ((E39218
                                                                                 (make-closure-hash
                                                                                  (svref
                                                                                   E39214
                                                                                   2))))
                                                                               (pvs-function-update
                                                                                E39218
                                                                                LHS39217
                                                                                (pvs-outer-array-update
                                                                                 (pvs-closure-hash-lookup
                                                                                  E39218
                                                                                  LHS39217)
                                                                                 A39219
                                                                                 RHS39212
                                                                                 (the
                                                                                  (integer
                                                                                   0)
                                                                                  num_non_terminals))))))
                                                                            (rec-tup-update
                                                                             E39214
                                                                             2
                                                                             R39216)
                                                                            E39214)
                                                                           E39213)))
                                                                        (the
                                                                         (simple-array
                                                                          t)
                                                                         (scaf!putstack_0
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           num_non_terminals)
                                                                          (the
                                                                           (integer
                                                                            0)
                                                                           len)
                                                                          G
                                                                          s38570
                                                                          (the
                                                                           (simple-array
                                                                            t)
                                                                           St)
                                                                          (the
                                                                           (integer
                                                                            0
                                                                            *)
                                                                           (atomic_peg-e-3
                                                                            x)))))))))))))))))))))))))))))))))))))))))))))))))))
(defun cmember_0 ()
  #'(lambda (l)
      #'(lambda (a)
          (the boolean
               (pvs__member (the (integer 0 *) a) (the list l))))))
(defun _cmember_0 (l a)
  (declare (type list l) (type (integer 0 *) a))
  (the boolean (pvs__member (the (integer 0 *) a) (the list l))))
(defun cmember!_0 (l a)
  (declare (type list l) (type (integer 0 *) a))
  (the boolean (pvs__member (the (integer 0 *) a) (the list l))))
(defun scaf_cmember_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (l)
      #'(lambda (a)
          (the boolean
               (pvs__member (the (integer 0 *) a) (the list l))))))
(defun scaf__cmember_0 (num_non_terminals l a)
  (declare (type (integer 0) num_non_terminals) (type list l)
   (type (integer 0 *) a))
  (the boolean (pvs__member (the (integer 0 *) a) (the list l))))
(defun scaf!cmember_0 (num_non_terminals l a)
  (declare (type (integer 0) num_non_terminals) (type list l)
   (type (integer 0 *) a))
  (declare (type (integer 0) num_non_terminals) (type list l)
   (type (integer 0 *) a))
  (the boolean (pvs__member (the (integer 0 *) a) (the list l))))
(defun size_1 ()
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (St)
            (_lex4 (the (integer 0 *)
                        (project 1 (the (simple-array t) St)))
                   (pvs__- (the (integer 0) (funcall 'undefined40238))
                           (the (integer 0 *)
                                (project 2 (the (simple-array t) St))))
                   (the (integer 0 *)
                        (_count (the
                                 (integer 0)
                                 (funcall 'undefined40239))
                                #'pending_2?
                                (pvs-funcall
                                 (project 3 (the (simple-array t) St))
                                 (the
                                  (integer 0 *)
                                  (project
                                   1
                                   (the (simple-array t) St))))))
                   (pvs__- (the (integer 0) (funcall 'undefined40240))
                           (the (integer 0 *)
                                (_count
                                 (the
                                  (integer 0)
                                  (funcall 'undefined40241))
                                 (id_0)
                                 (pvs-funcall
                                  (cmember_0)
                                  (the
                                   list
                                   (project
                                    4
                                    (the (simple-array t) St))))))))))))
(defun _size_0 (len G s40225 St)
  (declare (type (integer 0) len) (type (simple-array t) St))
  (_lex4 (the (integer 0 *) (project 1 (the (simple-array t) St)))
         (pvs__- (the (integer 0) (funcall 'undefined40226))
                 (the (integer 0 *)
                      (project 2 (the (simple-array t) St))))
         (the (integer 0 *)
              (_count (the (integer 0) (funcall 'undefined40227))
                      #'pending_2?
                      (pvs-funcall (project
                                    3
                                    (the (simple-array t) St))
                                   (the
                                    (integer 0 *)
                                    (project
                                     1
                                     (the (simple-array t) St))))))
         (pvs__- (the (integer 0) (funcall 'undefined40228))
                 (the (integer 0 *)
                      (_count (the (integer 0)
                                   (funcall 'undefined40229))
                              (id_0)
                              (pvs-funcall (cmember_0)
                                           (the
                                            list
                                            (project
                                             4
                                             (the
                                              (simple-array t)
                                              St)))))))))
(defun size!_0 (len G s40225 St)
  (declare (type (integer 0) len) (type (simple-array t) St))
  (lex4! (the (integer 0 *) (project 1 (the (simple-array t) St)))
         (pvs__- (the (integer 0) (funcall 'undefined40232))
                 (the (integer 0 *)
                      (project 2 (the (simple-array t) St))))
         (the (integer 0 *)
              (count! (the (integer 0) (funcall 'undefined40233))
                      #'pending_2?
                      (pvs-funcall (project
                                    3
                                    (the (simple-array t) St))
                                   (the
                                    (integer 0 *)
                                    (project
                                     1
                                     (the (simple-array t) St))))))
         (pvs__- (the (integer 0) (funcall 'undefined40234))
                 (the (integer 0 *)
                      (count! (the (integer 0)
                                   (funcall 'undefined40235))
                              (id_0)
                              (pvs-funcall (cmember_0)
                                           (the
                                            list
                                            (project
                                             4
                                             (the
                                              (simple-array t)
                                              St)))))))))
(defun scaf_size_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (St)
            (_lex4 (the (integer 0 *)
                        (project 1 (the (simple-array t) St)))
                   (pvs__- (the (integer 0) num_non_terminals)
                           (the (integer 0 *)
                                (project 2 (the (simple-array t) St))))
                   (the (integer 0 *)
                        (_count (the (integer 0) num_non_terminals)
                                #'pending_2?
                                (pvs-funcall
                                 (project 3 (the (simple-array t) St))
                                 (the
                                  (integer 0 *)
                                  (project
                                   1
                                   (the (simple-array t) St))))))
                   (pvs__- (the (integer 0) num_non_terminals)
                           (the (integer 0 *)
                                (_count
                                 (the (integer 0) num_non_terminals)
                                 (id_0)
                                 (pvs-funcall
                                  (scaf_cmember_0
                                   (the (integer 0) num_non_terminals))
                                  (the
                                   list
                                   (project
                                    4
                                    (the (simple-array t) St))))))))))))
(defun scaf__size_0 (num_non_terminals len G s40218 St)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (simple-array t) St))
  (_lex4 (the (integer 0 *) (project 1 (the (simple-array t) St)))
         (pvs__- (the (integer 0) num_non_terminals)
                 (the (integer 0 *)
                      (project 2 (the (simple-array t) St))))
         (the (integer 0 *)
              (_count (the (integer 0) num_non_terminals) #'pending_2?
                      (pvs-funcall (project
                                    3
                                    (the (simple-array t) St))
                                   (the
                                    (integer 0 *)
                                    (project
                                     1
                                     (the (simple-array t) St))))))
         (pvs__- (the (integer 0) num_non_terminals)
                 (the (integer 0 *)
                      (_count (the (integer 0) num_non_terminals)
                              (id_0)
                              (pvs-funcall (scaf_cmember_0
                                            (the
                                             (integer 0)
                                             num_non_terminals))
                                           (the
                                            list
                                            (project
                                             4
                                             (the
                                              (simple-array t)
                                              St)))))))))
(defun scaf!size_0 (num_non_terminals len G s40218 St)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (simple-array t) St))
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (simple-array t) St))
  (lex4! (the (integer 0 *) (project 1 (the (simple-array t) St)))
         (pvs__- (the (integer 0) num_non_terminals)
                 (the (integer 0 *)
                      (project 2 (the (simple-array t) St))))
         (the (integer 0 *)
              (count! (the (integer 0) num_non_terminals) #'pending_2?
                      (pvs-funcall (project
                                    3
                                    (the (simple-array t) St))
                                   (the
                                    (integer 0 *)
                                    (project
                                     1
                                     (the (simple-array t) St))))))
         (pvs__- (the (integer 0) num_non_terminals)
                 (the (integer 0 *)
                      (count! (the (integer 0) num_non_terminals)
                              (id_0)
                              (pvs-funcall (scaf_cmember_0
                                            (the
                                             (integer 0)
                                             num_non_terminals))
                                           (the
                                            list
                                            (project
                                             4
                                             (the
                                              (simple-array t)
                                              St)))))))))
(defun scaf_parse_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0)))
        (declare (type (integer 0) len))
        #'(lambda (St)
            (the (simple-array t)
                 (if (the boolean
                          (pvs__AND (the
                                     boolean
                                     (=
                                      (the
                                       (integer 0 *)
                                       (project
                                        1
                                        (the (simple-array t) St)))
                                      0))
                                    (the
                                     boolean
                                     (=
                                      (the
                                       (integer 0 *)
                                       (project
                                        2
                                        (the (simple-array t) St)))
                                      (the
                                       (integer 0)
                                       num_non_terminals)))))
                     (the (simple-array t) St)
                   (the (simple-array t)
                        (scaf__parse_0 (the
                                        (integer 0)
                                        num_non_terminals)
                                       (the (integer 0) len) G s265358
                                       (the
                                        (simple-array t)
                                        (scaf__step_0
                                         (the
                                          (integer 0)
                                          num_non_terminals)
                                         (the (integer 0) len)
                                         G
                                         s265358
                                         (the
                                          (simple-array t)
                                          St)))))))))))
(defun scaf__parse_0 (num_non_terminals len G s39406 St)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (simple-array t) St))
  (the (simple-array t)
       (if (the boolean
                (pvs__AND (the boolean
                               (=
                                (the
                                 (integer 0 *)
                                 (project 1 (the (simple-array t) St)))
                                0))
                          (the boolean
                               (=
                                (the
                                 (integer 0 *)
                                 (project 2 (the (simple-array t) St)))
                                (the (integer 0) num_non_terminals)))))
           (the (simple-array t) St)
         (the (simple-array t)
              (scaf__parse_0 (the (integer 0) num_non_terminals)
                             (the (integer 0) len) G s39406
                             (the (simple-array t)
                                  (scaf__step_0
                                   (the (integer 0) num_non_terminals)
                                   (the (integer 0) len)
                                   G
                                   s39406
                                   (the (simple-array t) St))))))))
(defun scaf!parse_0 (num_non_terminals len G s39406 St)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (simple-array t) St))
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (simple-array t) St))
  (the (simple-array t)
       (if (the boolean
                (pvs__AND (the boolean
                               (=
                                (the
                                 (integer 0 *)
                                 (project 1 (the (simple-array t) St)))
                                0))
                          (the boolean
                               (=
                                (the
                                 (integer 0 *)
                                 (project 2 (the (simple-array t) St)))
                                (the (integer 0) num_non_terminals)))))
           (the (simple-array t) St)
         (the (simple-array t)
              (scaf!parse_0 (the (integer 0) num_non_terminals)
                            (the (integer 0) len) G s39406
                            (the (simple-array t)
                                 (scaf__step_0
                                  (the (integer 0) num_non_terminals)
                                  (the (integer 0) len)
                                  G
                                  s39406
                                  (the (simple-array t) St))))))))
(defun scaf_doparse_0 (num_non_terminals)
  (declare (type (integer 0) num_non_terminals))
  #'(lambda (lamvar#0)
      (let ((len (project 1 lamvar#0))
            (G (project 2 lamvar#0))
            (s265358 (project 3 lamvar#0))
            (n (project 4 lamvar#0)))
        (declare (type (integer 0) len) (type (integer 0 *) n))
        (let ((St
               (the (simple-array t)
                    (pvs2cl_record (the (integer 0) len) 0
                                   #'(lambda
                                      (i)
                                      #'(lambda
                                         (n#0)
                                         (make-pending_2)))
                                   (the list nil)))))
          (declare (type (simple-array t) St))
          (pvs-funcall (pvs-funcall (project
                                     3
                                     (the
                                      (simple-array t)
                                      (scaf__parse_0
                                       (the
                                        (integer 0)
                                        num_non_terminals)
                                       (the (integer 0) len)
                                       G
                                       s265358
                                       (the (simple-array t) St))))
                                    0)
                       (the (integer 0 *) n))))))
(defun scaf__doparse_0 (num_non_terminals len G s39405 n)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) n))
  (let ((St
         (the (simple-array t)
              (pvs2cl_record (the (integer 0) len) 0
                             #'(lambda
                                (i)
                                #'(lambda (n#0) (make-pending_2)))
                             (the list nil)))))
    (declare (type (simple-array t) St))
    (pvs-funcall (pvs-funcall (project 3
                                       (the
                                        (simple-array t)
                                        (scaf__parse_0
                                         (the
                                          (integer 0)
                                          num_non_terminals)
                                         (the (integer 0) len)
                                         G
                                         s39405
                                         (the (simple-array t) St))))
                              0)
                 (the (integer 0 *) n))))
(defun scaf!doparse_0 (num_non_terminals len G s39405 n)
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) n))
  (declare (type (integer 0) num_non_terminals) (type (integer 0) len)
   (type (integer 0 *) n))
  (let ((St
         (the (simple-array t)
              (pvs2cl_record (the (integer 0) len) 0
                             #'(lambda
                                (i)
                                #'(lambda (n#0) (make-pending_2)))
                             (the list nil)))))
    (declare (type (simple-array t) St))
    (pvs-funcall (pvs-funcall (project 3
                                       (the
                                        (simple-array t)
                                        (scaf!parse_0
                                         (the
                                          (integer 0)
                                          num_non_terminals)
                                         (the (integer 0) len)
                                         G
                                         s39405
                                         (the (simple-array t) St))))
                              0)
                 (the (integer 0 *) n))))