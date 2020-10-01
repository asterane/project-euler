;; Problem 2
;; Even Fibonacci numbers

(progn
  (defvar sum 2)
  (defvar prev 2)
  (defvar curr 8)
  (defvar temp)

  (while (< curr 4000000)
    (setq sum (+ sum curr))
    (setq temp curr)
    (setq curr (+ (* 4 temp) prev))
    (setq prev temp)
    )

  (print sum)
  )
