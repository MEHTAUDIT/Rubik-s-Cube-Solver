import { createContext } from "react";

const CubeContext = createContext(
    {
        FACE:[],
        COLOR:[],
        MOVE:[],
        cube:[],
        getColorLetter:()=>{},
        cubeInit:()=>{},
        getColor:()=>{},
        getIndex:()=>{}
    }
);

export default CubeContext;
