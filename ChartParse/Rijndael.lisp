(in-package :pvs)

(defun get_3 ()
  (mk-pvs-array-closure (the (integer 0 *) 16)
                        #'(lambda (A)
                            #'(lambda (lamvar#0)
                                (let
                                 ((i (project 1 lamvar#0))
                                  (j (project 2 lamvar#0)))
                                 (declare
                                  (type fixnum i)
                                  (type fixnum j))
                                 (the
                                  (integer 0 *)
                                  (pvs-funcall
                                   A
                                   (pvs__+
                                    (the fixnum i)
                                    (pvs__*
                                     (the (integer 0 *) 4)
                                     (the fixnum j))))))))))
(defun _get_2 (A i j)
  (declare (type fixnum i) (type fixnum j))
  (the (integer 0 *)
       (pvs-funcall A
                    (pvs__+ (the fixnum i)
                            (pvs__* (the (integer 0 *) 4)
                                    (the fixnum j))))))
(defun get!_2 (A i j)
  (declare (type fixnum i) (type fixnum j))
  (the (integer 0 *)
       (pvs-funcall A
                    (pvs__+ (the fixnum i)
                            (pvs__* (the (integer 0 *) 4)
                                    (the fixnum j))))))
(defun SboxHex_0 ()
  (the (simple-array t)
       (_mk_bytestring (the string
                            "637c777bf26b6fc53001672bfed7ab76ca82c97dfa5947f0add4a2af9ca472c0b7fd9326363ff7cc34a5e5f171d8311504c723c31896059a071280e2eb27b27509832c1a1b6e5aa0523bd6b329e32f8453d100ed20fcb15b6acbbe394a4c58cfd0efaafb434d338545f9027f503c9fa851a3408f929d38f5bcb6da2110fff3d2cd0c13ec5f974417c4a77e3d645d197360814fdc222a908846eeb814de5e0bdbe0323a0a4906245cc2d3ac629195e479e7c8376d8dd54ea96c56f4ea657aae08ba78252e1ca6b4c6e8dd741f4bbd8b8a703eb5664803f60e613557b986c11d9ee1f8981169d98e949b1e87e9ce5528df8ca1890dbfe6426841992d0fb054bb16"))))
(defun _SboxHex_0 ()
  (the (simple-array t)
       (_mk_bytestring (the string
                            "637c777bf26b6fc53001672bfed7ab76ca82c97dfa5947f0add4a2af9ca472c0b7fd9326363ff7cc34a5e5f171d8311504c723c31896059a071280e2eb27b27509832c1a1b6e5aa0523bd6b329e32f8453d100ed20fcb15b6acbbe394a4c58cfd0efaafb434d338545f9027f503c9fa851a3408f929d38f5bcb6da2110fff3d2cd0c13ec5f974417c4a77e3d645d197360814fdc222a908846eeb814de5e0bdbe0323a0a4906245cc2d3ac629195e479e7c8376d8dd54ea96c56f4ea657aae08ba78252e1ca6b4c6e8dd741f4bbd8b8a703eb5664803f60e613557b986c11d9ee1f8981169d98e949b1e87e9ce5528df8ca1890dbfe6426841992d0fb054bb16"))))
(defun SboxHex!_0 ()
  (the (simple-array t)
       (mk_bytestring! (the string
                            "637c777bf26b6fc53001672bfed7ab76ca82c97dfa5947f0add4a2af9ca472c0b7fd9326363ff7cc34a5e5f171d8311504c723c31896059a071280e2eb27b27509832c1a1b6e5aa0523bd6b329e32f8453d100ed20fcb15b6acbbe394a4c58cfd0efaafb434d338545f9027f503c9fa851a3408f929d38f5bcb6da2110fff3d2cd0c13ec5f974417c4a77e3d645d197360814fdc222a908846eeb814de5e0bdbe0323a0a4906245cc2d3ac629195e479e7c8376d8dd54ea96c56f4ea657aae08ba78252e1ca6b4c6e8dd741f4bbd8b8a703eb5664803f60e613557b986c11d9ee1f8981169d98e949b1e87e9ce5528df8ca1890dbfe6426841992d0fb054bb16"))))
(defun Sbox_0 ()
  (let ((X
         (the (simple-array t)
              (_hex2bytestring (the (simple-array t) (_SboxHex_0))))))
    (declare (type (simple-array t) X))
    (let ((argval (the (simple-array t) X)))
      (if (stringp argval)
          (coerce (the (simple-array t) X) 'vector)
        (project 2 (the (simple-array t) X))))))
(defun _Sbox_0 ()
  (let ((X
         (the (simple-array t)
              (_hex2bytestring (the (simple-array t) (_SboxHex_0))))))
    (declare (type (simple-array t) X))
    (let ((argval (the (simple-array t) X)))
      (if (stringp argval)
          (coerce (the (simple-array t) X) 'vector)
        (project 2 (the (simple-array t) X))))))
(defun Sbox!_0 ()
  (let ((X
         (the (simple-array t)
              (hex2bytestring! (the (simple-array t) (SboxHex!_0))))))
    (declare (type (simple-array t) X))
    (let ((argval (the (simple-array t) X)))
      (if (stringp argval)
          (coerce (the (simple-array t) X) 'vector)
        (project 2 (the (simple-array t) X))))))
(defun byteSubst ()
  (mk-pvs-array-closure (the (integer 0 *) 16)
                        #'(lambda (A)
                            #'(lambda (i)
                                (the
                                 (integer 0 *)
                                 (pvs-funcall
                                  (_Sbox_0)
                                  (the
                                   (integer 0 *)
                                   (pvs-funcall A (the fixnum i)))))))))
(defun _byteSubst (A i)
  (declare (type fixnum i))
  (the (integer 0 *)
       (pvs-funcall (_Sbox_0)
                    (the (integer 0 *)
                         (pvs-funcall A (the fixnum i))))))
(defun byteSubst! (A i)
  (declare (type fixnum i))
  (the (integer 0 *)
       (pvs-funcall (Sbox!_0)
                    (the (integer 0 *)
                         (pvs-funcall A (the fixnum i))))))
(defun shiftRow_0 ()
  (mk-pvs-array-closure (the (integer 0 *) 16)
                        #'(lambda (A)
                            #'(lambda (k)
                                (the
                                 (integer 0 *)
                                 (let
                                  ((i
                                    (the
                                     fixnum
                                     (pvs__nrem
                                      (the fixnum k)
                                      (the (integer 0 *) 4)))))
                                  (declare (type fixnum i))
                                  (the
                                   (integer 0 *)
                                   (let
                                    ((j
                                      (the
                                       integer
                                       (pvs__ndiv
                                        (the fixnum k)
                                        (the (integer 0 *) 4)))))
                                    (declare (type integer j))
                                    (the
                                     (integer 0 *)
                                     (let
                                      ((l
                                        (the
                                         fixnum
                                         (pvs__nrem
                                          (pvs__+
                                           (the integer j)
                                           (the fixnum i))
                                          (the (integer 0 *) 4)))))
                                      (declare (type fixnum l))
                                      (the
                                       (integer 0 *)
                                       (_get_2
                                        A
                                        (the fixnum i)
                                        (the fixnum l)))))))))))))
(defun _shiftRow_0 (A k)
  (declare (type fixnum k))
  (the (integer 0 *)
       (let ((i
              (the fixnum
                   (pvs__nrem (the fixnum k) (the (integer 0 *) 4)))))
         (declare (type fixnum i))
         (the (integer 0 *)
              (let ((j
                     (the integer
                          (pvs__ndiv (the fixnum k)
                                     (the (integer 0 *) 4)))))
                (declare (type integer j))
                (the (integer 0 *)
                     (let ((l
                            (the fixnum
                                 (pvs__nrem
                                  (pvs__+
                                   (the integer j)
                                   (the fixnum i))
                                  (the (integer 0 *) 4)))))
                       (declare (type fixnum l))
                       (the (integer 0 *)
                            (_get_2 A (the fixnum i)
                                    (the fixnum l))))))))))
(defun shiftRow!_0 (A k)
  (declare (type fixnum k))
  (the (integer 0 *)
       (let ((i
              (the fixnum
                   (pvs__nrem (the fixnum k) (the (integer 0 *) 4)))))
         (declare (type fixnum i))
         (the (integer 0 *)
              (let ((j
                     (the integer
                          (pvs__ndiv (the fixnum k)
                                     (the (integer 0 *) 4)))))
                (declare (type integer j))
                (the (integer 0 *)
                     (let ((l
                            (the fixnum
                                 (pvs__nrem
                                  (pvs__+
                                   (the integer j)
                                   (the fixnum i))
                                  (the (integer 0 *) 4)))))
                       (declare (type fixnum l))
                       (the (integer 0 *)
                            (get!_2 A (the fixnum i)
                                    (the fixnum l))))))))))
(defun T2_2 ()
  #'(lambda (b)
      (if (the boolean
               (pvs__< (the (integer 0 *) b) (the (integer 0 *) 128)))
          (pvs__* (the (integer 0 *) 2) (the (integer 0 *) b))
        (the (integer 0 *)
             (pvs__u8xor (the (integer 0 *)
                              (_u8plus (the (integer 0 *) b)
                                       (the (integer 0 *) b)))
                         (the (integer 0 *) 27))))))
(defun _T2_2 (b)
  (declare (type (integer 0 *) b))
  (if (the boolean
           (pvs__< (the (integer 0 *) b) (the (integer 0 *) 128)))
      (pvs__* (the (integer 0 *) 2) (the (integer 0 *) b))
    (the (integer 0 *)
         (pvs__u8xor (the (integer 0 *)
                          (_u8plus (the (integer 0 *) b)
                                   (the (integer 0 *) b)))
                     (the (integer 0 *) 27)))))
(defun T2!_2 (b)
  (declare (type (integer 0 *) b))
  (if (the boolean
           (pvs__< (the (integer 0 *) b) (the (integer 0 *) 128)))
      (pvs__* (the (integer 0 *) 2) (the (integer 0 *) b))
    (the (integer 0 *)
         (pvs__u8xor (the (integer 0 *)
                          (u8plus! (the (integer 0 *) b)
                                   (the (integer 0 *) b)))
                     (the (integer 0 *) 27)))))
(defun T3_0 ()
  #'(lambda (b)
      (the (integer 0 *)
           (pvs__u8xor (the (integer 0 *)
                            (_T2_2 (the (integer 0 *) b)))
                       (the (integer 0 *) b)))))
(defun _T3_0 (b)
  (declare (type (integer 0 *) b))
  (the (integer 0 *)
       (pvs__u8xor (the (integer 0 *) (_T2_2 (the (integer 0 *) b)))
                   (the (integer 0 *) b))))
(defun T3!_0 (b)
  (declare (type (integer 0 *) b))
  (the (integer 0 *)
       (pvs__u8xor (the (integer 0 *) (T2!_2 (the (integer 0 *) b)))
                   (the (integer 0 *) b))))
(defun mixColumn_3 ()
  (mk-pvs-array-closure (the (integer 0 *) 16)
                        #'(lambda (A)
                            #'(lambda (k)
                                (the
                                 (integer 0 *)
                                 (let
                                  ((i
                                    (the
                                     fixnum
                                     (pvs__nrem
                                      (the fixnum k)
                                      (the (integer 0 *) 4)))))
                                  (declare (type fixnum i))
                                  (the
                                   (integer 0 *)
                                   (let
                                    ((j
                                      (the
                                       integer
                                       (pvs__ndiv
                                        (the fixnum k)
                                        (the (integer 0 *) 4)))))
                                    (declare (type integer j))
                                    (the
                                     (integer 0 *)
                                     (if
                                      (the
                                       boolean
                                       (=
                                        (the fixnum i)
                                        (the (integer 0 *) 0)))
                                      (the
                                       (integer 0 *)
                                       (pvs__u8xor
                                        (the
                                         (integer 0 *)
                                         (pvs__u8xor
                                          (the
                                           (integer 0 *)
                                           (pvs__u8xor
                                            (the
                                             (integer 0 *)
                                             (_T2_2
                                              (the
                                               (integer 0 *)
                                               (_get_2
                                                A
                                                (the (integer 0 *) 0)
                                                (the integer j)))))
                                            (the
                                             (integer 0 *)
                                             (_T3_0
                                              (the
                                               (integer 0 *)
                                               (_get_2
                                                A
                                                (the (integer 0 *) 1)
                                                (the integer j)))))))
                                          (the
                                           (integer 0 *)
                                           (_get_2
                                            A
                                            (the (integer 0 *) 2)
                                            (the integer j)))))
                                        (the
                                         (integer 0 *)
                                         (_get_2
                                          A
                                          (the (integer 0 *) 3)
                                          (the integer j)))))
                                      (the
                                       (integer 0 *)
                                       (if
                                        (the
                                         boolean
                                         (=
                                          (the fixnum i)
                                          (the (integer 0 *) 1)))
                                        (the
                                         (integer 0 *)
                                         (pvs__u8xor
                                          (the
                                           (integer 0 *)
                                           (pvs__u8xor
                                            (the
                                             (integer 0 *)
                                             (pvs__u8xor
                                              (the
                                               (integer 0 *)
                                               (_get_2
                                                A
                                                (the (integer 0 *) 0)
                                                (the integer j)))
                                              (the
                                               (integer 0 *)
                                               (_T2_2
                                                (the
                                                 (integer 0 *)
                                                 (_get_2
                                                  A
                                                  (the (integer 0 *) 1)
                                                  (the integer j)))))))
                                            (the
                                             (integer 0 *)
                                             (_T3_0
                                              (the
                                               (integer 0 *)
                                               (_get_2
                                                A
                                                (the (integer 0 *) 2)
                                                (the integer j)))))))
                                          (the
                                           (integer 0 *)
                                           (_get_2
                                            A
                                            (the (integer 0 *) 3)
                                            (the integer j)))))
                                        (the
                                         (integer 0 *)
                                         (if
                                          (the
                                           boolean
                                           (=
                                            (the fixnum i)
                                            (the (integer 0 *) 2)))
                                          (the
                                           (integer 0 *)
                                           (pvs__u8xor
                                            (the
                                             (integer 0 *)
                                             (pvs__u8xor
                                              (the
                                               (integer 0 *)
                                               (pvs__u8xor
                                                (the
                                                 (integer 0 *)
                                                 (_get_2
                                                  A
                                                  (the (integer 0 *) 0)
                                                  (the integer j)))
                                                (the
                                                 (integer 0 *)
                                                 (_get_2
                                                  A
                                                  (the (integer 0 *) 1)
                                                  (the integer j)))))
                                              (the
                                               (integer 0 *)
                                               (_T2_2
                                                (the
                                                 (integer 0 *)
                                                 (_get_2
                                                  A
                                                  (the (integer 0 *) 2)
                                                  (the integer j)))))))
                                            (the
                                             (integer 0 *)
                                             (_T3_0
                                              (the
                                               (integer 0 *)
                                               (_get_2
                                                A
                                                (the (integer 0 *) 3)
                                                (the integer j)))))))
                                          (the
                                           (integer 0 *)
                                           (if
                                            (the
                                             boolean
                                             (pvs_NOT
                                              (the
                                               boolean
                                               (pvs__OR
                                                (the
                                                 boolean
                                                 (=
                                                  (the fixnum i)
                                                  (the
                                                   (integer 0 *)
                                                   2)))
                                                (the
                                                 boolean
                                                 (pvs__OR
                                                  (the
                                                   boolean
                                                   (=
                                                    (the fixnum i)
                                                    (the
                                                     (integer 0 *)
                                                     1)))
                                                  (the
                                                   boolean
                                                   (=
                                                    (the fixnum i)
                                                    (the
                                                     (integer 0 *)
                                                     0)))))))))
                                            (the
                                             (integer 0 *)
                                             (pvs__u8xor
                                              (the
                                               (integer 0 *)
                                               (pvs__u8xor
                                                (the
                                                 (integer 0 *)
                                                 (pvs__u8xor
                                                  (the
                                                   (integer 0 *)
                                                   (_T3_0
                                                    (the
                                                     (integer 0 *)
                                                     (_get_2
                                                      A
                                                      (the
                                                       (integer 0 *)
                                                       0)
                                                      (the
                                                       integer
                                                       j)))))
                                                  (the
                                                   (integer 0 *)
                                                   (_get_2
                                                    A
                                                    (the
                                                     (integer 0 *)
                                                     1)
                                                    (the integer j)))))
                                                (the
                                                 (integer 0 *)
                                                 (_get_2
                                                  A
                                                  (the (integer 0 *) 2)
                                                  (the integer j)))))
                                              (the
                                               (integer 0 *)
                                               (_T2_2
                                                (the
                                                 (integer 0 *)
                                                 (_get_2
                                                  A
                                                  (the (integer 0 *) 3)
                                                  (the integer j)))))))
                                            (the
                                             (integer 0 *)
                                             (pvs__u8xor
                                              (the
                                               (integer 0 *)
                                               (pvs__u8xor
                                                (the
                                                 (integer 0 *)
                                                 (pvs__u8xor
                                                  (the
                                                   (integer 0 *)
                                                   (_T3_0
                                                    (the
                                                     (integer 0 *)
                                                     (_get_2
                                                      A
                                                      (the
                                                       (integer 0 *)
                                                       0)
                                                      (the
                                                       integer
                                                       j)))))
                                                  (the
                                                   (integer 0 *)
                                                   (_get_2
                                                    A
                                                    (the
                                                     (integer 0 *)
                                                     1)
                                                    (the integer j)))))
                                                (the
                                                 (integer 0 *)
                                                 (_get_2
                                                  A
                                                  (the (integer 0 *) 2)
                                                  (the integer j)))))
                                              (the
                                               (integer 0 *)
                                               (_T2_2
                                                (the
                                                 (integer 0 *)
                                                 (_get_2
                                                  A
                                                  (the (integer 0 *) 3)
                                                  (the
                                                   integer
                                                   j)))))))))))))))))))))))
(defun _mixColumn_3 (A k)
  (declare (type fixnum k))
  (the (integer 0 *)
       (let ((i
              (the fixnum
                   (pvs__nrem (the fixnum k) (the (integer 0 *) 4)))))
         (declare (type fixnum i))
         (the (integer 0 *)
              (let ((j
                     (the integer
                          (pvs__ndiv (the fixnum k)
                                     (the (integer 0 *) 4)))))
                (declare (type integer j))
                (the (integer 0 *)
                     (if (the boolean
                              (= (the fixnum i) (the (integer 0 *) 0)))
                         (the (integer 0 *)
                              (pvs__u8xor (the
                                           (integer 0 *)
                                           (pvs__u8xor
                                            (the
                                             (integer 0 *)
                                             (pvs__u8xor
                                              (the
                                               (integer 0 *)
                                               (_T2_2
                                                (the
                                                 (integer 0 *)
                                                 (_get_2
                                                  A
                                                  (the (integer 0 *) 0)
                                                  (the integer j)))))
                                              (the
                                               (integer 0 *)
                                               (_T3_0
                                                (the
                                                 (integer 0 *)
                                                 (_get_2
                                                  A
                                                  (the (integer 0 *) 1)
                                                  (the integer j)))))))
                                            (the
                                             (integer 0 *)
                                             (_get_2
                                              A
                                              (the (integer 0 *) 2)
                                              (the integer j)))))
                                          (the
                                           (integer 0 *)
                                           (_get_2
                                            A
                                            (the (integer 0 *) 3)
                                            (the integer j)))))
                       (the (integer 0 *)
                            (if (the
                                 boolean
                                 (=
                                  (the fixnum i)
                                  (the (integer 0 *) 1)))
                                (the
                                 (integer 0 *)
                                 (pvs__u8xor
                                  (the
                                   (integer 0 *)
                                   (pvs__u8xor
                                    (the
                                     (integer 0 *)
                                     (pvs__u8xor
                                      (the
                                       (integer 0 *)
                                       (_get_2
                                        A
                                        (the (integer 0 *) 0)
                                        (the integer j)))
                                      (the
                                       (integer 0 *)
                                       (_T2_2
                                        (the
                                         (integer 0 *)
                                         (_get_2
                                          A
                                          (the (integer 0 *) 1)
                                          (the integer j)))))))
                                    (the
                                     (integer 0 *)
                                     (_T3_0
                                      (the
                                       (integer 0 *)
                                       (_get_2
                                        A
                                        (the (integer 0 *) 2)
                                        (the integer j)))))))
                                  (the
                                   (integer 0 *)
                                   (_get_2
                                    A
                                    (the (integer 0 *) 3)
                                    (the integer j)))))
                              (the (integer 0 *)
                                   (if
                                    (the
                                     boolean
                                     (=
                                      (the fixnum i)
                                      (the (integer 0 *) 2)))
                                    (the
                                     (integer 0 *)
                                     (pvs__u8xor
                                      (the
                                       (integer 0 *)
                                       (pvs__u8xor
                                        (the
                                         (integer 0 *)
                                         (pvs__u8xor
                                          (the
                                           (integer 0 *)
                                           (_get_2
                                            A
                                            (the (integer 0 *) 0)
                                            (the integer j)))
                                          (the
                                           (integer 0 *)
                                           (_get_2
                                            A
                                            (the (integer 0 *) 1)
                                            (the integer j)))))
                                        (the
                                         (integer 0 *)
                                         (_T2_2
                                          (the
                                           (integer 0 *)
                                           (_get_2
                                            A
                                            (the (integer 0 *) 2)
                                            (the integer j)))))))
                                      (the
                                       (integer 0 *)
                                       (_T3_0
                                        (the
                                         (integer 0 *)
                                         (_get_2
                                          A
                                          (the (integer 0 *) 3)
                                          (the integer j)))))))
                                    (the
                                     (integer 0 *)
                                     (if
                                      (the
                                       boolean
                                       (pvs_NOT
                                        (the
                                         boolean
                                         (pvs__OR
                                          (the
                                           boolean
                                           (=
                                            (the fixnum i)
                                            (the (integer 0 *) 2)))
                                          (the
                                           boolean
                                           (pvs__OR
                                            (the
                                             boolean
                                             (=
                                              (the fixnum i)
                                              (the (integer 0 *) 1)))
                                            (the
                                             boolean
                                             (=
                                              (the fixnum i)
                                              (the
                                               (integer 0 *)
                                               0)))))))))
                                      (the
                                       (integer 0 *)
                                       (pvs__u8xor
                                        (the
                                         (integer 0 *)
                                         (pvs__u8xor
                                          (the
                                           (integer 0 *)
                                           (pvs__u8xor
                                            (the
                                             (integer 0 *)
                                             (_T3_0
                                              (the
                                               (integer 0 *)
                                               (_get_2
                                                A
                                                (the (integer 0 *) 0)
                                                (the integer j)))))
                                            (the
                                             (integer 0 *)
                                             (_get_2
                                              A
                                              (the (integer 0 *) 1)
                                              (the integer j)))))
                                          (the
                                           (integer 0 *)
                                           (_get_2
                                            A
                                            (the (integer 0 *) 2)
                                            (the integer j)))))
                                        (the
                                         (integer 0 *)
                                         (_T2_2
                                          (the
                                           (integer 0 *)
                                           (_get_2
                                            A
                                            (the (integer 0 *) 3)
                                            (the integer j)))))))
                                      (the
                                       (integer 0 *)
                                       (pvs__u8xor
                                        (the
                                         (integer 0 *)
                                         (pvs__u8xor
                                          (the
                                           (integer 0 *)
                                           (pvs__u8xor
                                            (the
                                             (integer 0 *)
                                             (_T3_0
                                              (the
                                               (integer 0 *)
                                               (_get_2
                                                A
                                                (the (integer 0 *) 0)
                                                (the integer j)))))
                                            (the
                                             (integer 0 *)
                                             (_get_2
                                              A
                                              (the (integer 0 *) 1)
                                              (the integer j)))))
                                          (the
                                           (integer 0 *)
                                           (_get_2
                                            A
                                            (the (integer 0 *) 2)
                                            (the integer j)))))
                                        (the
                                         (integer 0 *)
                                         (_T2_2
                                          (the
                                           (integer 0 *)
                                           (_get_2
                                            A
                                            (the (integer 0 *) 3)
                                            (the
                                             integer
                                             j))))))))))))))))))))
(defun mixColumn!_3 (A k)
  (declare (type fixnum k))
  (the (integer 0 *)
       (let ((i
              (the fixnum
                   (pvs__nrem (the fixnum k) (the (integer 0 *) 4)))))
         (declare (type fixnum i))
         (the (integer 0 *)
              (let ((j
                     (the integer
                          (pvs__ndiv (the fixnum k)
                                     (the (integer 0 *) 4)))))
                (declare (type integer j))
                (the (integer 0 *)
                     (if (the boolean
                              (= (the fixnum i) (the (integer 0 *) 0)))
                         (the (integer 0 *)
                              (pvs__u8xor (the
                                           (integer 0 *)
                                           (pvs__u8xor
                                            (the
                                             (integer 0 *)
                                             (pvs__u8xor
                                              (the
                                               (integer 0 *)
                                               (T2!_2
                                                (the
                                                 (integer 0 *)
                                                 (get!_2
                                                  A
                                                  (the (integer 0 *) 0)
                                                  (the integer j)))))
                                              (the
                                               (integer 0 *)
                                               (T3!_0
                                                (the
                                                 (integer 0 *)
                                                 (get!_2
                                                  A
                                                  (the (integer 0 *) 1)
                                                  (the integer j)))))))
                                            (the
                                             (integer 0 *)
                                             (get!_2
                                              A
                                              (the (integer 0 *) 2)
                                              (the integer j)))))
                                          (the
                                           (integer 0 *)
                                           (get!_2
                                            A
                                            (the (integer 0 *) 3)
                                            (the integer j)))))
                       (the (integer 0 *)
                            (if (the
                                 boolean
                                 (=
                                  (the fixnum i)
                                  (the (integer 0 *) 1)))
                                (the
                                 (integer 0 *)
                                 (pvs__u8xor
                                  (the
                                   (integer 0 *)
                                   (pvs__u8xor
                                    (the
                                     (integer 0 *)
                                     (pvs__u8xor
                                      (the
                                       (integer 0 *)
                                       (get!_2
                                        A
                                        (the (integer 0 *) 0)
                                        (the integer j)))
                                      (the
                                       (integer 0 *)
                                       (T2!_2
                                        (the
                                         (integer 0 *)
                                         (get!_2
                                          A
                                          (the (integer 0 *) 1)
                                          (the integer j)))))))
                                    (the
                                     (integer 0 *)
                                     (T3!_0
                                      (the
                                       (integer 0 *)
                                       (get!_2
                                        A
                                        (the (integer 0 *) 2)
                                        (the integer j)))))))
                                  (the
                                   (integer 0 *)
                                   (get!_2
                                    A
                                    (the (integer 0 *) 3)
                                    (the integer j)))))
                              (the (integer 0 *)
                                   (if
                                    (the
                                     boolean
                                     (=
                                      (the fixnum i)
                                      (the (integer 0 *) 2)))
                                    (the
                                     (integer 0 *)
                                     (pvs__u8xor
                                      (the
                                       (integer 0 *)
                                       (pvs__u8xor
                                        (the
                                         (integer 0 *)
                                         (pvs__u8xor
                                          (the
                                           (integer 0 *)
                                           (get!_2
                                            A
                                            (the (integer 0 *) 0)
                                            (the integer j)))
                                          (the
                                           (integer 0 *)
                                           (get!_2
                                            A
                                            (the (integer 0 *) 1)
                                            (the integer j)))))
                                        (the
                                         (integer 0 *)
                                         (T2!_2
                                          (the
                                           (integer 0 *)
                                           (get!_2
                                            A
                                            (the (integer 0 *) 2)
                                            (the integer j)))))))
                                      (the
                                       (integer 0 *)
                                       (T3!_0
                                        (the
                                         (integer 0 *)
                                         (get!_2
                                          A
                                          (the (integer 0 *) 3)
                                          (the integer j)))))))
                                    (the
                                     (integer 0 *)
                                     (if
                                      (the
                                       boolean
                                       (pvs_NOT
                                        (the
                                         boolean
                                         (pvs__OR
                                          (the
                                           boolean
                                           (=
                                            (the fixnum i)
                                            (the (integer 0 *) 2)))
                                          (the
                                           boolean
                                           (pvs__OR
                                            (the
                                             boolean
                                             (=
                                              (the fixnum i)
                                              (the (integer 0 *) 1)))
                                            (the
                                             boolean
                                             (=
                                              (the fixnum i)
                                              (the
                                               (integer 0 *)
                                               0)))))))))
                                      (the
                                       (integer 0 *)
                                       (pvs__u8xor
                                        (the
                                         (integer 0 *)
                                         (pvs__u8xor
                                          (the
                                           (integer 0 *)
                                           (pvs__u8xor
                                            (the
                                             (integer 0 *)
                                             (T3!_0
                                              (the
                                               (integer 0 *)
                                               (get!_2
                                                A
                                                (the (integer 0 *) 0)
                                                (the integer j)))))
                                            (the
                                             (integer 0 *)
                                             (get!_2
                                              A
                                              (the (integer 0 *) 1)
                                              (the integer j)))))
                                          (the
                                           (integer 0 *)
                                           (get!_2
                                            A
                                            (the (integer 0 *) 2)
                                            (the integer j)))))
                                        (the
                                         (integer 0 *)
                                         (T2!_2
                                          (the
                                           (integer 0 *)
                                           (get!_2
                                            A
                                            (the (integer 0 *) 3)
                                            (the integer j)))))))
                                      (the
                                       (integer 0 *)
                                       (pvs__u8xor
                                        (the
                                         (integer 0 *)
                                         (pvs__u8xor
                                          (the
                                           (integer 0 *)
                                           (pvs__u8xor
                                            (the
                                             (integer 0 *)
                                             (T3!_0
                                              (the
                                               (integer 0 *)
                                               (get!_2
                                                A
                                                (the (integer 0 *) 0)
                                                (the integer j)))))
                                            (the
                                             (integer 0 *)
                                             (get!_2
                                              A
                                              (the (integer 0 *) 1)
                                              (the integer j)))))
                                          (the
                                           (integer 0 *)
                                           (get!_2
                                            A
                                            (the (integer 0 *) 2)
                                            (the integer j)))))
                                        (the
                                         (integer 0 *)
                                         (T2!_2
                                          (the
                                           (integer 0 *)
                                           (get!_2
                                            A
                                            (the (integer 0 *) 3)
                                            (the
                                             integer
                                             j))))))))))))))))))))
(defun roundkeyXOR_1 ()
  #'(lambda (lamvar#0)
      (let ((A (project 1 lamvar#0)) (K (project 2 lamvar#0)))
        (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
                     (the (simple-array t) (pvs2cl_tuple A K))))))
(defun _roundkeyXOR_1 (A K)
  (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
               (the (simple-array t) (pvs2cl_tuple A K))))
(defun roundkeyXOR!_1 (A K)
  (pvs-funcall (bytevectors_byvXOR (the (integer 0 *) 16))
               (the (simple-array t) (pvs2cl_tuple A K))))
(defun roundConst_1 ()
  #'(lambda (r)
      (the (integer 0)
           (if (the boolean
                    (pvs__<= (the fixnum r) (the (integer 0 *) 1)))
               (the fixnum r)
             (the (integer 0 *)
                  (_T2_2 (the (integer 0 *)
                              (_roundConst_1 (pvs__-
                                              (the fixnum r)
                                              (the
                                               (integer 0 *)
                                               1))))))))))
(defun _roundConst_1 (r)
  (declare (type fixnum r))
  (the (integer 0)
       (if (the boolean (pvs__<= (the fixnum r) (the (integer 0 *) 1)))
           (the fixnum r)
         (the (integer 0 *)
              (_T2_2 (the (integer 0 *)
                          (_roundConst_1 (pvs__-
                                          (the fixnum r)
                                          (the (integer 0 *) 1)))))))))
(defun roundConst!_1 (r)
  (declare (type fixnum r))
  (the (integer 0)
       (if (the boolean (pvs__<= (the fixnum r) (the (integer 0 *) 1)))
           (the fixnum r)
         (the (integer 0 *)
              (T2!_2 (the (integer 0 *)
                          (roundConst!_1 (pvs__-
                                          (the fixnum r)
                                          (the (integer 0 *) 1)))))))))
(defun nextRoundKey_2 ()
  #'(lambda (lamvar#0)
      (let ((K (project 1 lamvar#0)) (rconst (project 2 lamvar#0)))
        (declare (type (integer 0 *) rconst))
        (let ((roundConst (T2_2)))
          (declare (type nil roundConst))
          (let ((K0
                 #'(lambda (i)
                     (the (integer 0 *)
                          (if (the boolean
                                   (=
                                    (the fixnum i)
                                    (the (integer 0 *) 0)))
                              (the (integer 0 *)
                                   (pvs__u8xor
                                    (the
                                     (integer 0 *)
                                     (pvs__u8xor
                                      (the
                                       (integer 0 *)
                                       (_get_2
                                        K
                                        (the (integer 0 *) 0)
                                        (the (integer 0 *) 0)))
                                      (the
                                       (integer 0 *)
                                       (pvs-funcall
                                        (_Sbox_0)
                                        (the
                                         (integer 0 *)
                                         (_get_2
                                          K
                                          (the (integer 0 *) 1)
                                          (the (integer 0 *) 3)))))))
                                    (the (integer 0 *) rconst)))
                            (the (integer 0 *)
                                 (pvs__u8xor
                                  (the
                                   (integer 0 *)
                                   (_get_2
                                    K
                                    (the fixnum i)
                                    (the (integer 0 *) 0)))
                                  (the
                                   (integer 0 *)
                                   (pvs-funcall
                                    (_Sbox_0)
                                    (the
                                     (integer 0 *)
                                     (_get_2
                                      K
                                      (the
                                       fixnum
                                       (pvs__nrem
                                        (pvs__+
                                         (the fixnum i)
                                         (the (integer 0 *) 1))
                                        (the (integer 0 *) 4)))
                                      (the (integer 0 *) 3))))))))))))
            (declare (type nil K0))
            (let ((K1
                   #'(lambda (i)
                       (the (integer 0 *)
                            (pvs__u8xor (the
                                         (integer 0 *)
                                         (_get_2
                                          K
                                          (the fixnum i)
                                          (the (integer 0 *) 1)))
                                        (the
                                         (integer 0 *)
                                         (pvs-funcall
                                          K0
                                          (the fixnum i))))))))
              (declare (type nil K1))
              (let ((K2
                     #'(lambda (i)
                         (the (integer 0 *)
                              (pvs__u8xor (the
                                           (integer 0 *)
                                           (_get_2
                                            K
                                            (the fixnum i)
                                            (the (integer 0 *) 2)))
                                          (the
                                           (integer 0 *)
                                           (pvs-funcall
                                            K1
                                            (the fixnum i))))))))
                (declare (type nil K2))
                (let ((K3
                       #'(lambda (i)
                           (the (integer 0 *)
                                (pvs__u8xor
                                 (the
                                  (integer 0 *)
                                  (_get_2
                                   K
                                   (the fixnum i)
                                   (the (integer 0 *) 3)))
                                 (the
                                  (integer 0 *)
                                  (pvs-funcall K2 (the fixnum i))))))))
                  (declare (type nil K3))
                  #'(lambda (i)
                      (the (integer 0 *)
                           (if (the
                                boolean
                                (pvs__<
                                 (the fixnum i)
                                 (the (integer 0 *) 4)))
                               (the
                                (integer 0 *)
                                (pvs-funcall K0 (the fixnum i)))
                             (the (integer 0 *)
                                  (if
                                   (the
                                    boolean
                                    (pvs__<
                                     (the fixnum i)
                                     (the (integer 0 *) 8)))
                                   (the
                                    (integer 0 *)
                                    (pvs-funcall
                                     K1
                                     (pvs__-
                                      (the fixnum i)
                                      (the (integer 0 *) 4))))
                                   (the
                                    (integer 0 *)
                                    (if
                                     (the
                                      boolean
                                      (pvs__<
                                       (the fixnum i)
                                       (the (integer 0 *) 12)))
                                     (the
                                      (integer 0 *)
                                      (pvs-funcall
                                       K2
                                       (pvs__-
                                        (the fixnum i)
                                        (the (integer 0 *) 8))))
                                     (the
                                      (integer 0 *)
                                      (pvs-funcall
                                       K3
                                       (pvs__-
                                        (the fixnum i)
                                        (the
                                         (integer 0 *)
                                         12)))))))))))))))))))
(defun _nextRoundKey_2 (K rconst)
  (declare (type (integer 0 *) rconst))
  (let ((roundConst (T2_2)))
    (declare (type nil roundConst))
    (let ((K0
           #'(lambda (i)
               (the (integer 0 *)
                    (if (the boolean
                             (= (the fixnum i) (the (integer 0 *) 0)))
                        (the (integer 0 *)
                             (pvs__u8xor (the
                                          (integer 0 *)
                                          (pvs__u8xor
                                           (the
                                            (integer 0 *)
                                            (_get_2
                                             K
                                             (the (integer 0 *) 0)
                                             (the (integer 0 *) 0)))
                                           (the
                                            (integer 0 *)
                                            (pvs-funcall
                                             (_Sbox_0)
                                             (the
                                              (integer 0 *)
                                              (_get_2
                                               K
                                               (the (integer 0 *) 1)
                                               (the
                                                (integer 0 *)
                                                3)))))))
                                         (the (integer 0 *) rconst)))
                      (the (integer 0 *)
                           (pvs__u8xor (the
                                        (integer 0 *)
                                        (_get_2
                                         K
                                         (the fixnum i)
                                         (the (integer 0 *) 0)))
                                       (the
                                        (integer 0 *)
                                        (pvs-funcall
                                         (_Sbox_0)
                                         (the
                                          (integer 0 *)
                                          (_get_2
                                           K
                                           (the
                                            fixnum
                                            (pvs__nrem
                                             (pvs__+
                                              (the fixnum i)
                                              (the (integer 0 *) 1))
                                             (the (integer 0 *) 4)))
                                           (the
                                            (integer 0 *)
                                            3))))))))))))
      (declare (type nil K0))
      (let ((K1
             #'(lambda (i)
                 (the (integer 0 *)
                      (pvs__u8xor (the
                                   (integer 0 *)
                                   (_get_2
                                    K
                                    (the fixnum i)
                                    (the (integer 0 *) 1)))
                                  (the
                                   (integer 0 *)
                                   (pvs-funcall
                                    K0
                                    (the fixnum i))))))))
        (declare (type nil K1))
        (let ((K2
               #'(lambda (i)
                   (the (integer 0 *)
                        (pvs__u8xor (the
                                     (integer 0 *)
                                     (_get_2
                                      K
                                      (the fixnum i)
                                      (the (integer 0 *) 2)))
                                    (the
                                     (integer 0 *)
                                     (pvs-funcall
                                      K1
                                      (the fixnum i))))))))
          (declare (type nil K2))
          (let ((K3
                 #'(lambda (i)
                     (the (integer 0 *)
                          (pvs__u8xor (the
                                       (integer 0 *)
                                       (_get_2
                                        K
                                        (the fixnum i)
                                        (the (integer 0 *) 3)))
                                      (the
                                       (integer 0 *)
                                       (pvs-funcall
                                        K2
                                        (the fixnum i))))))))
            (declare (type nil K3))
            #'(lambda (i)
                (the (integer 0 *)
                     (if (the boolean
                              (pvs__< (the fixnum i)
                                      (the (integer 0 *) 4)))
                         (the (integer 0 *)
                              (pvs-funcall K0 (the fixnum i)))
                       (the (integer 0 *)
                            (if (the
                                 boolean
                                 (pvs__<
                                  (the fixnum i)
                                  (the (integer 0 *) 8)))
                                (the
                                 (integer 0 *)
                                 (pvs-funcall
                                  K1
                                  (pvs__-
                                   (the fixnum i)
                                   (the (integer 0 *) 4))))
                              (the (integer 0 *)
                                   (if
                                    (the
                                     boolean
                                     (pvs__<
                                      (the fixnum i)
                                      (the (integer 0 *) 12)))
                                    (the
                                     (integer 0 *)
                                     (pvs-funcall
                                      K2
                                      (pvs__-
                                       (the fixnum i)
                                       (the (integer 0 *) 8))))
                                    (the
                                     (integer 0 *)
                                     (pvs-funcall
                                      K3
                                      (pvs__-
                                       (the fixnum i)
                                       (the
                                        (integer 0 *)
                                        12)))))))))))))))))
(defun nextRoundKey!_2 (K rconst)
  (declare (type (integer 0 *) rconst))
  (let ((roundConst (T2_2)))
    (declare (type nil roundConst))
    (let ((K0
           #'(lambda (i)
               (the (integer 0 *)
                    (if (the boolean
                             (= (the fixnum i) (the (integer 0 *) 0)))
                        (the (integer 0 *)
                             (pvs__u8xor (the
                                          (integer 0 *)
                                          (pvs__u8xor
                                           (the
                                            (integer 0 *)
                                            (_get_2
                                             K
                                             (the (integer 0 *) 0)
                                             (the (integer 0 *) 0)))
                                           (the
                                            (integer 0 *)
                                            (pvs-funcall
                                             (_Sbox_0)
                                             (the
                                              (integer 0 *)
                                              (_get_2
                                               K
                                               (the (integer 0 *) 1)
                                               (the
                                                (integer 0 *)
                                                3)))))))
                                         (the (integer 0 *) rconst)))
                      (the (integer 0 *)
                           (pvs__u8xor (the
                                        (integer 0 *)
                                        (_get_2
                                         K
                                         (the fixnum i)
                                         (the (integer 0 *) 0)))
                                       (the
                                        (integer 0 *)
                                        (pvs-funcall
                                         (_Sbox_0)
                                         (the
                                          (integer 0 *)
                                          (_get_2
                                           K
                                           (the
                                            fixnum
                                            (pvs__nrem
                                             (pvs__+
                                              (the fixnum i)
                                              (the (integer 0 *) 1))
                                             (the (integer 0 *) 4)))
                                           (the
                                            (integer 0 *)
                                            3))))))))))))
      (declare (type nil K0))
      (let ((K1
             #'(lambda (i)
                 (the (integer 0 *)
                      (pvs__u8xor (the
                                   (integer 0 *)
                                   (_get_2
                                    K
                                    (the fixnum i)
                                    (the (integer 0 *) 1)))
                                  (the
                                   (integer 0 *)
                                   (pvs-funcall
                                    K0
                                    (the fixnum i))))))))
        (declare (type nil K1))
        (let ((K2
               #'(lambda (i)
                   (the (integer 0 *)
                        (pvs__u8xor (the
                                     (integer 0 *)
                                     (_get_2
                                      K
                                      (the fixnum i)
                                      (the (integer 0 *) 2)))
                                    (the
                                     (integer 0 *)
                                     (pvs-funcall
                                      K1
                                      (the fixnum i))))))))
          (declare (type nil K2))
          (let ((K3
                 #'(lambda (i)
                     (the (integer 0 *)
                          (pvs__u8xor (the
                                       (integer 0 *)
                                       (_get_2
                                        K
                                        (the fixnum i)
                                        (the (integer 0 *) 3)))
                                      (the
                                       (integer 0 *)
                                       (pvs-funcall
                                        K2
                                        (the fixnum i))))))))
            (declare (type nil K3))
            #'(lambda (i)
                (the (integer 0 *)
                     (if (the boolean
                              (pvs__< (the fixnum i)
                                      (the (integer 0 *) 4)))
                         (the (integer 0 *)
                              (pvs-funcall K0 (the fixnum i)))
                       (the (integer 0 *)
                            (if (the
                                 boolean
                                 (pvs__<
                                  (the fixnum i)
                                  (the (integer 0 *) 8)))
                                (the
                                 (integer 0 *)
                                 (pvs-funcall
                                  K1
                                  (pvs__-
                                   (the fixnum i)
                                   (the (integer 0 *) 4))))
                              (the (integer 0 *)
                                   (if
                                    (the
                                     boolean
                                     (pvs__<
                                      (the fixnum i)
                                      (the (integer 0 *) 12)))
                                    (the
                                     (integer 0 *)
                                     (pvs-funcall
                                      K2
                                      (pvs__-
                                       (the fixnum i)
                                       (the (integer 0 *) 8))))
                                    (the
                                     (integer 0 *)
                                     (pvs-funcall
                                      K3
                                      (pvs__-
                                       (the fixnum i)
                                       (the
                                        (integer 0 *)
                                        12)))))))))))))))))
(defun Rijndael_step_0 ()
  #'(lambda (lamvar#0)
      (let ((A (project 1 lamvar#0)) (K (project 2 lamvar#0)))
        (let ((A1 (pvs-funcall (byteSubst) A)))
          (declare (type nil A1))
          (let ((A2 (pvs-funcall (shiftRow_0) A1)))
            (declare (type nil A2))
            (let ((A3 (pvs-funcall (mixColumn_3) A2)))
              (declare (type nil A3))
              (_roundkeyXOR_1 A3 K)))))))
(defun _Rijndael_step_0 (A K)
  (let ((A1 (pvs-funcall (byteSubst) A)))
    (declare (type nil A1))
    (let ((A2 (pvs-funcall (shiftRow_0) A1)))
      (declare (type nil A2))
      (let ((A3 (pvs-funcall (mixColumn_3) A2)))
        (declare (type nil A3))
        (_roundkeyXOR_1 A3 K)))))
(defun Rijndael_step!_0 (A K)
  (let ((A1 (pvs-funcall (byteSubst) A)))
    (declare (type nil A1))
    (let ((A2 (pvs-funcall (shiftRow_0) A1)))
      (declare (type nil A2))
      (let ((A3 (pvs-funcall (mixColumn_3) A2)))
        (declare (type nil A3))
        (roundkeyXOR!_1 A3 K)))))
(defun Rijndael_rec ()
  #'(lambda (lamvar#0)
      (let ((A (project 1 lamvar#0))
            (K (project 2 lamvar#0))
            (i (project 3 lamvar#0)))
        (declare (type fixnum i))
        (if (the boolean
                 (pvs__>= (the fixnum i) (the (integer 0 *) 10)))
            (_roundkeyXOR_1 (pvs-funcall (shiftRow_0)
                                         (pvs-funcall (byteSubst) A))
                            K)
          (if (the boolean (= (the fixnum i) (the (integer 0 *) 0)))
              (_Rijndael_rec (_roundkeyXOR_1 A K)
                             (_nextRoundKey_2 K
                                              (the
                                               (integer 0 *)
                                               (_roundConst_1
                                                (pvs__+
                                                 (the fixnum i)
                                                 (the
                                                  (integer 0 *)
                                                  1)))))
                             (pvs__+ (the fixnum i)
                                     (the (integer 0 *) 1)))
            (let ((A4 (_Rijndael_step_0 A K)))
              (declare (type nil A4))
              (let ((newKey
                     (_nextRoundKey_2 K
                                      (pvs__+
                                       (the fixnum i)
                                       (the (integer 0 *) 1)))))
                (declare (type nil newKey))
                (_Rijndael_rec A4 newKey
                               (pvs__+
                                (the fixnum i)
                                (the (integer 0 *) 1))))))))))
(defun _Rijndael_rec (A K i)
  (declare (type fixnum i))
  (if (the boolean (pvs__>= (the fixnum i) (the (integer 0 *) 10)))
      (_roundkeyXOR_1 (pvs-funcall (shiftRow_0)
                                   (pvs-funcall (byteSubst) A))
                      K)
    (if (the boolean (= (the fixnum i) (the (integer 0 *) 0)))
        (_Rijndael_rec (_roundkeyXOR_1 A K)
                       (_nextRoundKey_2 K
                                        (the
                                         (integer 0 *)
                                         (_roundConst_1
                                          (pvs__+
                                           (the fixnum i)
                                           (the (integer 0 *) 1)))))
                       (pvs__+ (the fixnum i) (the (integer 0 *) 1)))
      (let ((A4 (_Rijndael_step_0 A K)))
        (declare (type nil A4))
        (let ((newKey
               (_nextRoundKey_2 K
                                (pvs__+
                                 (the fixnum i)
                                 (the (integer 0 *) 1)))))
          (declare (type nil newKey))
          (_Rijndael_rec A4 newKey
                         (pvs__+ (the fixnum i)
                                 (the (integer 0 *) 1))))))))
(defun Rijndael_rec! (A K i)
  (declare (type fixnum i))
  (if (the boolean (pvs__>= (the fixnum i) (the (integer 0 *) 10)))
      (roundkeyXOR!_1 (pvs-funcall (shiftRow_0)
                                   (pvs-funcall (byteSubst) A))
                      K)
    (if (the boolean (= (the fixnum i) (the (integer 0 *) 0)))
        (Rijndael_rec! (roundkeyXOR!_1 A K)
                       (nextRoundKey!_2 K
                                        (the
                                         (integer 0 *)
                                         (roundConst!_1
                                          (pvs__+
                                           (the fixnum i)
                                           (the (integer 0 *) 1)))))
                       (pvs__+ (the fixnum i) (the (integer 0 *) 1)))
      (let ((A4 (Rijndael_step!_0 A K)))
        (declare (type nil A4))
        (let ((newKey
               (nextRoundKey!_2 K
                                (pvs__+
                                 (the fixnum i)
                                 (the (integer 0 *) 1)))))
          (declare (type nil newKey))
          (Rijndael_rec! A4 newKey
                         (pvs__+ (the fixnum i)
                                 (the (integer 0 *) 1))))))))
(defun Rijndael ()
  #'(lambda (lamvar#0)
      (let ((A (project 1 lamvar#0)) (K (project 2 lamvar#0)))
        (_Rijndael_rec A K (the (integer 0 *) 0)))))
(defun _Rijndael (A K) (_Rijndael_rec A K (the (integer 0 *) 0)))
(defun Rijndael! (A K) (Rijndael_rec! A K (the (integer 0 *) 0)))
(defun hex16_4 ()
  (mk-pvs-array-closure (the (integer 0 *) 16)
                        #'(lambda (X)
                            (the (simple-array t)
                                 (_bytestring2hexstring
                                  (the
                                   (simple-array t)
                                   (pvs2cl_finseq
                                    (the (integer 0 *) 16)
                                    X)))))))
(defun _hex16_4 (X)
  (the (simple-array t)
       (_bytestring2hexstring
         (the (simple-array t)
              (pvs2cl_finseq (the (integer 0 *) 16) X)))))
(defun hex16!_4 (X)
  (the (simple-array t)
       (bytestring2hexstring!
         (the (simple-array t)
              (pvs2cl_finseq (the (integer 0 *) 16) X)))))
(defun test0RD_1 ()
  (the (simple-array t)
       (let ((Input
              (the (simple-array t)
                   (_hex2bytestring (the
                                     (simple-array t)
                                     (_mk_bytestring
                                      (the
                                       string
                                       "3243f6a8885a308d313198a2e0370734")))))))
         (declare (type (simple-array t) Input))
         (the (simple-array t)
              (let ((Cipher
                     (the (simple-array t)
                          (_hex2bytestring (the
                                            (simple-array t)
                                            (_mk_bytestring
                                             (the
                                              string
                                              "2b7e151628aed2a6abf7158809cf4f3c")))))))
                (declare (type (simple-array t) Cipher))
                (the (simple-array t)
                     (let ((Output
                            (_roundkeyXOR_1 (let
                                             ((argval
                                               (the
                                                (simple-array t)
                                                Input)))
                                             (if
                                              (stringp argval)
                                              (coerce
                                               (the
                                                (simple-array t)
                                                Input)
                                               'vector)
                                              (project
                                               2
                                               (the
                                                (simple-array t)
                                                Input))))
                                            (let
                                             ((argval
                                               (the
                                                (simple-array t)
                                                Cipher)))
                                             (if
                                              (stringp argval)
                                              (coerce
                                               (the
                                                (simple-array t)
                                                Cipher)
                                               'vector)
                                              (project
                                               2
                                               (the
                                                (simple-array t)
                                                Cipher)))))))
                       (declare (type nil Output))
                       (the (simple-array t)
                            (let ((Outputbytestring
                                   (the
                                    (simple-array t)
                                    (pvs2cl_finseq
                                     (the (integer 0 *) 16)
                                     Output))))
                              (declare
                               (type
                                (simple-array t)
                                Outputbytestring))
                              (the (simple-array t)
                                   (_bytestring2hexstring
                                    (the
                                     (simple-array t)
                                     Outputbytestring))))))))))))
(defun _test0RD_1 ()
  (the (simple-array t)
       (let ((Input
              (the (simple-array t)
                   (_hex2bytestring (the
                                     (simple-array t)
                                     (_mk_bytestring
                                      (the
                                       string
                                       "3243f6a8885a308d313198a2e0370734")))))))
         (declare (type (simple-array t) Input))
         (the (simple-array t)
              (let ((Cipher
                     (the (simple-array t)
                          (_hex2bytestring (the
                                            (simple-array t)
                                            (_mk_bytestring
                                             (the
                                              string
                                              "2b7e151628aed2a6abf7158809cf4f3c")))))))
                (declare (type (simple-array t) Cipher))
                (the (simple-array t)
                     (let ((Output
                            (_roundkeyXOR_1 (let
                                             ((argval
                                               (the
                                                (simple-array t)
                                                Input)))
                                             (if
                                              (stringp argval)
                                              (coerce
                                               (the
                                                (simple-array t)
                                                Input)
                                               'vector)
                                              (project
                                               2
                                               (the
                                                (simple-array t)
                                                Input))))
                                            (let
                                             ((argval
                                               (the
                                                (simple-array t)
                                                Cipher)))
                                             (if
                                              (stringp argval)
                                              (coerce
                                               (the
                                                (simple-array t)
                                                Cipher)
                                               'vector)
                                              (project
                                               2
                                               (the
                                                (simple-array t)
                                                Cipher)))))))
                       (declare (type nil Output))
                       (the (simple-array t)
                            (let ((Outputbytestring
                                   (the
                                    (simple-array t)
                                    (pvs2cl_finseq
                                     (the (integer 0 *) 16)
                                     Output))))
                              (declare
                               (type
                                (simple-array t)
                                Outputbytestring))
                              (the (simple-array t)
                                   (_bytestring2hexstring
                                    (the
                                     (simple-array t)
                                     Outputbytestring))))))))))))
(defun test0RD!_1 ()
  (the (simple-array t)
       (let ((Input
              (the (simple-array t)
                   (hex2bytestring! (the
                                     (simple-array t)
                                     (mk_bytestring!
                                      (the
                                       string
                                       "3243f6a8885a308d313198a2e0370734")))))))
         (declare (type (simple-array t) Input))
         (the (simple-array t)
              (let ((Cipher
                     (the (simple-array t)
                          (hex2bytestring! (the
                                            (simple-array t)
                                            (mk_bytestring!
                                             (the
                                              string
                                              "2b7e151628aed2a6abf7158809cf4f3c")))))))
                (declare (type (simple-array t) Cipher))
                (the (simple-array t)
                     (let ((Output
                            (roundkeyXOR!_1 (let
                                             ((argval
                                               (the
                                                (simple-array t)
                                                Input)))
                                             (if
                                              (stringp argval)
                                              (coerce
                                               (the
                                                (simple-array t)
                                                Input)
                                               'vector)
                                              (project
                                               2
                                               (the
                                                (simple-array t)
                                                Input))))
                                            (let
                                             ((argval
                                               (the
                                                (simple-array t)
                                                Cipher)))
                                             (if
                                              (stringp argval)
                                              (coerce
                                               (the
                                                (simple-array t)
                                                Cipher)
                                               'vector)
                                              (project
                                               2
                                               (the
                                                (simple-array t)
                                                Cipher)))))))
                       (declare (type nil Output))
                       (the (simple-array t)
                            (let ((Outputbytestring
                                   (the
                                    (simple-array t)
                                    (pvs2cl_finseq
                                     (the (integer 0 *) 16)
                                     Output))))
                              (declare
                               (type
                                (simple-array t)
                                Outputbytestring))
                              (the (simple-array t)
                                   (bytestring2hexstring!
                                    (the
                                     (simple-array t)
                                     Outputbytestring))))))))))))
(defun testRijndael1 ()
  (the (simple-array t)
       (let ((Input
              (the (simple-array t)
                   (_hex2bytestring (the
                                     (simple-array t)
                                     (_mk_bytestring
                                      (the
                                       string
                                       "3243f6a8885a308d313198a2e0370734")))))))
         (declare (type (simple-array t) Input))
         (the (simple-array t)
              (let ((Cipher
                     (the (simple-array t)
                          (_hex2bytestring (the
                                            (simple-array t)
                                            (_mk_bytestring
                                             (the
                                              string
                                              "2b7e151628aed2a6abf7158809cf4f3c")))))))
                (declare (type (simple-array t) Cipher))
                (the (simple-array t)
                     (let ((Output
                            (_Rijndael (let
                                        ((argval
                                          (the
                                           (simple-array t)
                                           Input)))
                                        (if
                                         (stringp argval)
                                         (coerce
                                          (the (simple-array t) Input)
                                          'vector)
                                         (project
                                          2
                                          (the
                                           (simple-array t)
                                           Input))))
                                       (let
                                        ((argval
                                          (the
                                           (simple-array t)
                                           Cipher)))
                                        (if
                                         (stringp argval)
                                         (coerce
                                          (the (simple-array t) Cipher)
                                          'vector)
                                         (project
                                          2
                                          (the
                                           (simple-array t)
                                           Cipher)))))))
                       (declare (type nil Output))
                       (the (simple-array t)
                            (let ((Outputbytestring
                                   (the
                                    (simple-array t)
                                    (pvs2cl_finseq
                                     (the (integer 0 *) 16)
                                     Output))))
                              (declare
                               (type
                                (simple-array t)
                                Outputbytestring))
                              (the (simple-array t)
                                   (_bytestring2hexstring
                                    (the
                                     (simple-array t)
                                     Outputbytestring))))))))))))
(defun _testRijndael1 ()
  (the (simple-array t)
       (let ((Input
              (the (simple-array t)
                   (_hex2bytestring (the
                                     (simple-array t)
                                     (_mk_bytestring
                                      (the
                                       string
                                       "3243f6a8885a308d313198a2e0370734")))))))
         (declare (type (simple-array t) Input))
         (the (simple-array t)
              (let ((Cipher
                     (the (simple-array t)
                          (_hex2bytestring (the
                                            (simple-array t)
                                            (_mk_bytestring
                                             (the
                                              string
                                              "2b7e151628aed2a6abf7158809cf4f3c")))))))
                (declare (type (simple-array t) Cipher))
                (the (simple-array t)
                     (let ((Output
                            (_Rijndael (let
                                        ((argval
                                          (the
                                           (simple-array t)
                                           Input)))
                                        (if
                                         (stringp argval)
                                         (coerce
                                          (the (simple-array t) Input)
                                          'vector)
                                         (project
                                          2
                                          (the
                                           (simple-array t)
                                           Input))))
                                       (let
                                        ((argval
                                          (the
                                           (simple-array t)
                                           Cipher)))
                                        (if
                                         (stringp argval)
                                         (coerce
                                          (the (simple-array t) Cipher)
                                          'vector)
                                         (project
                                          2
                                          (the
                                           (simple-array t)
                                           Cipher)))))))
                       (declare (type nil Output))
                       (the (simple-array t)
                            (let ((Outputbytestring
                                   (the
                                    (simple-array t)
                                    (pvs2cl_finseq
                                     (the (integer 0 *) 16)
                                     Output))))
                              (declare
                               (type
                                (simple-array t)
                                Outputbytestring))
                              (the (simple-array t)
                                   (_bytestring2hexstring
                                    (the
                                     (simple-array t)
                                     Outputbytestring))))))))))))
(defun testRijndael1! ()
  (the (simple-array t)
       (let ((Input
              (the (simple-array t)
                   (hex2bytestring! (the
                                     (simple-array t)
                                     (mk_bytestring!
                                      (the
                                       string
                                       "3243f6a8885a308d313198a2e0370734")))))))
         (declare (type (simple-array t) Input))
         (the (simple-array t)
              (let ((Cipher
                     (the (simple-array t)
                          (hex2bytestring! (the
                                            (simple-array t)
                                            (mk_bytestring!
                                             (the
                                              string
                                              "2b7e151628aed2a6abf7158809cf4f3c")))))))
                (declare (type (simple-array t) Cipher))
                (the (simple-array t)
                     (let ((Output
                            (Rijndael! (let
                                        ((argval
                                          (the
                                           (simple-array t)
                                           Input)))
                                        (if
                                         (stringp argval)
                                         (coerce
                                          (the (simple-array t) Input)
                                          'vector)
                                         (project
                                          2
                                          (the
                                           (simple-array t)
                                           Input))))
                                       (let
                                        ((argval
                                          (the
                                           (simple-array t)
                                           Cipher)))
                                        (if
                                         (stringp argval)
                                         (coerce
                                          (the (simple-array t) Cipher)
                                          'vector)
                                         (project
                                          2
                                          (the
                                           (simple-array t)
                                           Cipher)))))))
                       (declare (type nil Output))
                       (the (simple-array t)
                            (let ((Outputbytestring
                                   (the
                                    (simple-array t)
                                    (pvs2cl_finseq
                                     (the (integer 0 *) 16)
                                     Output))))
                              (declare
                               (type
                                (simple-array t)
                                Outputbytestring))
                              (the (simple-array t)
                                   (bytestring2hexstring!
                                    (the
                                     (simple-array t)
                                     Outputbytestring))))))))))))