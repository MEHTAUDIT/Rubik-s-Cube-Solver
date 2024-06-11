import CubeContext from "./cube-context";

const CubeProvider = ({children}) => {
    
    let cube = [];

    let FACE=["UP","LEFT","FRONT","RIGHT","BACK","DOWN"];
    let COLOR=["WHITE","GREEN","RED","BLUE","ORANGE","YELLOW"];
    let MOVE=["L","LPRIME","L2","R","RPRIME","R2","U","UPRIME","U2","D","DPRIME","D2","F","FPRIME","F2","B","BPRIME","B2"];

    function getColorLetter(color)
    {
        if(color==="BLUE")
        {
            return 'B';
        }
        else if(color==="GREEN")
        {
            return 'G';
        }
        else if(color==="RED")
        {
            return 'R';
        }
        else if(color==="YELLOW")
        {
            return 'Y';
        }
        else if(color==="WHITE")
        {
            return 'W';
        }
        else if(color==="ORANGE")
        {
            return 'O';
        }
        else
        {
            return ' ';
        }
    }

    function getIndex(ind,row,col)
    {
        return (ind * 9) + (row * 3) + col;
    }

    function getColor(face,row,col)
    {
        let color= cube[getIndex(face,row,col)];

        if(color==='W')
        {
            return 'WHITE';
        }
        else if(color==='G')
        {
            return 'GREEN';
        }
        else if(color==='R')
        {
            return 'RED';
        }
        else if(color==='Y')
        {
            return 'YELLOW';
        }
        else if(color==='B')
        {
            return 'BLUE';
        }
        else if(color==='O')
        {
            return 'ORANGE';
        }
        else
        {
            return ' ';
        }
    }

    function cubeInit()
    {
        console.log("Inside Cube Initiated");

        for(let i=0;i<6;i++)
        {
            for(let j=0;j<3;j++)
            {
                for(let k=0;k<3;k++)
                {
                    cube[i*9+j*3+k]=getColorLetter(COLOR[i]);
                }
            }
        }

        console.log(cube);
    }

    const values={
        FACE,
        COLOR,
        MOVE,
        cube,
        getColorLetter,
        cubeInit,
        getColor,
        getIndex
    }

    return (
        <CubeContext.Provider value={values}>
            {children}
        </CubeContext.Provider>
    );
}

export default CubeProvider;