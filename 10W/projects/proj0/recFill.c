// Recursive Fill
// Code from Tobias Hollerer, Jonathan Balkind, Eric Goodman, Phill Conrad
// See the wikipedia article on "Flood Fill" for information on
// how this works.

// To use this, specify any point inside the area you want to fill,
// plus the color you want to fill it with.   The edgeColor is the color
// of the boundary around the area you are filling (which could be the same
// as your fill color, or it could be different.)

void recFill(struct Drawing *d, struct Point p, int fillColor, int edgeColor)
{
  int thisPixel = getPixel(d, p.x, p.y);
  if ((thisPixel == fillColor) || (thisPixel == edgeColor))
    return;
  else
    {
      setPixel(d, p.x, p.y, fillColor);
      recFill(d, makePoint(p.x+1, p.y), fillColor, edgeColor);
      recFill(d, makePoint(p.x, p.y+1), fillColor, edgeColor);
      recFill(d, makePoint(p.x-1, p.y), fillColor, edgeColor);
      recFill(d, makePoint(p.x, p.y-1), fillColor, edgeColor);
    }
}
      
