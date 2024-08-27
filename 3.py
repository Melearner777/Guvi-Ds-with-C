/*Character Frequency Swap
Question: Write a C program that reads a string from the user and swaps the most frequent character with the least frequent character in the string.

Description: The program should take a string input from the user, determine the most and least frequent characters (case insensitive), and swap their occurrences in the string.
Private Testcase Input 1:
abracadabra
Private Testcase Output 1:
cbrcacdcbrc*/


def find_frequent_chars(s):
    frequency = {}
    
    for ch in s:
        lower_ch = ch.lower()
        if lower_ch.isalpha():
            if lower_ch in frequency:
                frequency[lower_ch] += 1
            else:
                frequency[lower_ch] = 1

    most_freq = max(frequency, key=frequency.get)
    least_freq = min(frequency, key=frequency.get)

    return most_freq, least_freq

def swap_chars(s, most_freq, least_freq):
    result = []
    
    for ch in s:
        if ch.lower() == most_freq:
            if ch.islower():
                result.append(least_freq)
            else:
                result.append(least_freq.upper())
        elif ch.lower() == least_freq:
            if ch.islower():
                result.append(most_freq)
            else:
                result.append(most_freq.upper())
        else:
            result.append(ch)
    
    return ''.join(result)

def main():
    # Read the input string
    s = input()

    # Find the most and least frequent characters
    most_freq, least_freq = find_frequent_chars(s)

    # Swap the most and least frequent characters in the string
    modified_string = swap_chars(s, most_freq, least_freq)

    # Print the modified string
    print(modified_string)

if __name__ == "__main__":
    main()
