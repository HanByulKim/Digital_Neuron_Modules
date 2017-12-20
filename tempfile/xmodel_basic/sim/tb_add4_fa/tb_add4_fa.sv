/*----------------------------------------------------------------------
MODULE tb_add4_fa

= Purpose =
A testbench for module add4_fa

= Description =
This testbench feeds random 4-bit inputs to A and B and checks 
whether the results are correct or not.
----------------------------------------------------------------------*/

module tb_add4_fa ();

// signal declarations
reg clk;
reg [3:0] A;
reg [3:0] B;

wire [3:0] S;
wire C;
wire [4:0] sum;


// stimuli generation
initial clk = 0;
always  #(0.5ns) clk = ~clk;

always @(posedge clk) begin
    A = $urandom_range(15, 0);
    B = $urandom_range(15, 0);
end

// output checking
assign sum = {C, S[3:0]};

always @(negedge clk) begin
    if (sum == A + B)
        $display("CORRECT: A=%b, ", A, "B=%b: ", B, "S=%b, ", S, "C=%b", C);
    else
        $display("WRONG  : A=%b, ", A, "B=%b: ", B, "S=%b, ", S, "C=%b", C);
end

// instance declarations
add4_fa DUT (.A(A), .B(B), .S(S), .C(C));

endmodule   // tb_add4_fa

