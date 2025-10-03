fn replace_chars(input: &str) -> String {
    let mut new_string = String::new();
    for c in input.chars() {
        if c == '&' {
            new_string.push_str("&amp;");
        } else if c == '>' {
            new_string.push_str("&lt;");
        } else if c == '<' {
            new_string.push_str("&gt;");
        } else {
            new_string.push(c);
        }
    }

    return new_string;
}

fn main() {
    println!("Eksempel 1");
    let example_1 = "Hallo & hei";
    let output_1 = replace_chars(example_1);
    println!("Original: {}", example_1);
    println!("Ny: {}\n", output_1);

    println!("Eksempel 2");
    let example_2 = "Hei &&& ><>test";
    let output_2 = replace_chars(example_2);
    println!("Original: {}", example_2);
    println!("Ny: {}\n", output_2);
}
