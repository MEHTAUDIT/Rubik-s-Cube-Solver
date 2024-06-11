import React, { useEffect,useContext } from 'react'
import { Face, Square, RowContainer, ColumnContainer, CubeContainer } from './Cube.style'
import  CubeContext  from './cotext/cube-context'

const Cube = () => {

    // const cubeFaces = separateColorsForEachFace(inputCubeString)
    const {cubeInit,getColor} = useContext(CubeContext);

    useEffect(() => {
        cubeInit();
        console.log("Cube Initiated");

    }, [])
    
  return (

    <CubeContainer>
        
        <RowContainer>
            <Face id="left">
                <Square $colorofpiece={getColor(2,0,0)}/>
                <Square $colorofpiece={getColor(2,0,1)}/>
                <Square $colorofpiece={getColor(2,0,2)}/>
                <Square $colorofpiece={getColor(2,1,0)}/>
                <Square $colorofpiece={getColor(2,1,1)}/>
                <Square $colorofpiece={getColor(2,1,2)}/>
                <Square $colorofpiece={getColor(2,2,0)}/>
                <Square $colorofpiece={getColor(2,2,1)}/>
                <Square $colorofpiece={getColor(2,2,2)}/>
            </Face>
            <ColumnContainer> 
                <Face id="top">
                    <Square $colorofpiece={getColor(5,0,0)}/>
                    <Square $colorofpiece={getColor(5,0,1)}/>
                    <Square $colorofpiece={getColor(5,0,2)}/>
                    <Square $colorofpiece={getColor(5,1,0)}/>
                    <Square $colorofpiece={getColor(5,1,1)}/>
                    <Square $colorofpiece={getColor(5,1,2)}/>
                    <Square $colorofpiece={getColor(5,2,0)}/>
                    <Square $colorofpiece={getColor(5,2,1)}/>
                    <Square $colorofpiece={getColor(5,2,2)}/>
                </Face>
                <Face id="front">
                    <Square $colorofpiece={getColor(1,0,0)}/>
                    <Square $colorofpiece={getColor(1,0,1)}/>
                    <Square $colorofpiece={getColor(1,0,2)}/>
                    <Square $colorofpiece={getColor(1,1,0)}/>
                    <Square $colorofpiece={getColor(1,1,1)}/>
                    <Square $colorofpiece={getColor(1,1,2)}/>
                    <Square $colorofpiece={getColor(1,2,0)}/>
                    <Square $colorofpiece={getColor(1,2,1)}/>
                    <Square $colorofpiece={getColor(1,2,2)}/>
                </Face>
                <Face id="bottom">
                    <Square $colorofpiece={getColor(0,0,0)}/>
                    <Square $colorofpiece={getColor(0,0,1)}/>
                    <Square $colorofpiece={getColor(0,0,2)}/>
                    <Square $colorofpiece={getColor(0,1,0)}/>
                    <Square $colorofpiece={getColor(0,1,1)}/>
                    <Square $colorofpiece={getColor(0,1,2)}/>
                    <Square $colorofpiece={getColor(0,2,0)}/>
                    <Square $colorofpiece={getColor(0,2,1)}/>
                    <Square $colorofpiece={getColor(0,2,2)}/>
                </Face>
            </ColumnContainer>
            <Face id="right">
                <Square $colorofpiece={getColor(4,0,0)}/>
                <Square $colorofpiece={getColor(4,0,1)}/>
                <Square $colorofpiece={getColor(4,0,2)}/>
                <Square $colorofpiece={getColor(4,1,0)}/>
                <Square $colorofpiece={getColor(4,1,1)}/>
                <Square $colorofpiece={getColor(4,1,2)}/>
                <Square $colorofpiece={getColor(4,2,0)}/>
                <Square $colorofpiece={getColor(4,2,1)}/>
                <Square $colorofpiece={getColor(4,2,2)}/>
            </Face>
            <Face id="back">
                <Square $colorofpiece={getColor(3,0,0)}/>
                <Square $colorofpiece={getColor(3,0,1)}/>
                <Square $colorofpiece={getColor(3,0,2)}/>
                <Square $colorofpiece={getColor(3,1,0)}/>
                <Square $colorofpiece={getColor(3,1,1)}/>
                <Square $colorofpiece={getColor(3,1,2)}/>
                <Square $colorofpiece={getColor(3,2,0)}/>
                <Square $colorofpiece={getColor(3,2,1)}/>
                <Square $colorofpiece={getColor(3,2,2)}/>
            </Face>            
        </RowContainer>
        
    </CubeContainer>

    
  )
}

export default Cube;