from cs50 import get_string

input = get_string("Text: \n")

def main():
    letter = count_letter(input)
    word = count_word(input)
    sentence = count_sentence(input)

    index = Coleman_Liau_index(letter, word, sentence)

    if index >= 16:
        print('Grade 16+')
    elif index < 1:
        print('Before Grade 1')
    else:
        print('Grade %s', index)


def count_letter(input):

    count = 0

    for i in range(len(input)):
        if (input[i] >='A' and input[i] <= 'Z') or (input[i] >='a' and input[i] <='z'):
            count +=1
    return count


def count_word(input):

    count = 1

    for i in range(len(input)):
        if (input[i] == ' '):
            count +=1
    return count

def count_sentence(input):

    sentence_len = len(input.split('\.\?\!'))

    return sentence_len

def Coleman_Liau_index(x, y, z):

    L = 100*(y/x)
    S = 100*(y/z)

    grade = 0.0588 * L - 0.296 * S - 15.8
    return grade


if __name__ == "__main__":
    main()
