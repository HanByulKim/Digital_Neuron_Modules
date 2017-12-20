module tb_full_adder_2 ();

    // signal declarations
    wire A, B, Cin, Sout, Cout;
    
    // instance declarations
    full_adder       DUT (.A(A), .B(B), .Cin(Cin), .Sout(Sout), .Cout(Cout));
    stm_full_adder_2 stm (.A(A), .B(B), .Cin(Cin));
    mon_full_adder_2 mon (.Sout(Sout), .Cout(Cout));

endmodule

