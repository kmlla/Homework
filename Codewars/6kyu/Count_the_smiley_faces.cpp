int countSmileys(std::vector<std::string> arr)
{
  int count = 0;
  for (unsigned long i = 0; i < arr.size(); ++i)
    {
      if (arr[i] == ":D" || arr[i] == ":)" || arr[i] == ":-D" || arr[i] == ":-)" || arr[i] == ":~D" || arr[i] == ":~)" || arr[i] == ";D" || arr[i] == ";)" || arr[i] == ";-D" || arr[i] == ";-)" || arr[i] == ";~D" || arr[i] == ";~)" )
          count += 1;
    }
  return count;
}
