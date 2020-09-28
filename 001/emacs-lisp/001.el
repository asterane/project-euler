;; Problem 1
;; Multiples of 3 and 5

(progn
  (defvar sum 0)
  (defvar count 0)
  (while (< count 1000)
    (when (or (= 0 (% count 3)) (= 0 (% count 5)))
      (setq sum (+ sum count))
      )
    (setq count (+ 1 count))
    )
  (print sum)
  )
