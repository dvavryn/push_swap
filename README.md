# push_swap

A 42 school project implementing an efficient sorting algorithm using two stacks and a limited set of operations.

## Operations

| Operation | Description |
|-----------|-------------|
| `sa` / `sb` / `ss` | Swap top two elements of stack a / b / both |
| `pa` / `pb` | Push top of b to a / top of a to b |
| `ra` / `rb` / `rr` | Rotate stack a / b / both up |
| `rra` / `rrb` / `rrr` | Reverse rotate stack a / b / both |

## Usage

```bash
make
./push_swap 3 1 4 1 5 9 2 6
```

Outputs the sequence of operations to sort the numbers in ascending order on stack A.

To verify:
```bash
ARG="3 1 4 1 5 9 2 6"
./push_swap $ARG | ./checker $ARG
```

## Algorithm

- Small sets (≤ 5): hardcoded optimal solutions
- Larger sets: chunk-based greedy algorithm minimizing total moves

## Requirements

- libft (included)
