# PVSParse/Parsley: Verified Parsing, Theorem Proving, and Code Generation

## Introduction

...


## Motivating Example

```
{
  "type": "Feature",
  "id": "3954b93f-9a9e-46f2-9e5c-5dd095d2352f", // uuid v4 (random) uuid comes from here https://www.npmjs.com/package/uuid
  "geometry": { // this whole object is geojson
    "type": "Point",
    "coordinates": [
      0,
      0
    ]
  },
  "properties": { // the fact that properties exists is geojson
    "kind": "Point", // this is a user defined type when writing something custom
    "visibility": true,
    "showLabel": true,
    "opacity": 1,
    "fill": {
      "color": "#000000",
      "opacity": 0.2
    },
    "stroke": {
      "weight": 1,
      "color": "#000000",
      "opacity": 1
    },
    "labelStyleProps": {
      "offset": [
        0,
        0
      ],
      "fill": {
        "color": "#0D1B2A",
        "opacity": 1
      },
      "orientation": "horizontal",
      "visibility": true,
      "richTextCharStlying": [] // typo in the schema but is how its currently represented
    },
    "name": "Something",
    "data": {} // this is the custom part that is bound to the "kind" above
  }
  // the expectation is there are no foreign members outside the above defined.
  // afaik theres no issue with foreign members existing, aside from reduced interop per the spec.
}
```