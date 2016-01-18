/* Remove `equivalent(entry.key(), qk.key)` and set to a variable */
if (!entry.used && equivalent(entry.key(), qk.key) && (curcontext & entry.contexts))
