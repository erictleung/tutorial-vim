if (q.is_valid())
{
    while (q.it != q.strip.end())
    {
        char_t ch = *q.it;
        if (!ch.isspace())
    /* Indent the code block below */
    {
        return q.calc_pos();
    }

        ++q.it;
    }
}
