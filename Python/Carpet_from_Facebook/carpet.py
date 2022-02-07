carpet = lambda n: '\n'.join(["🟥⬜🟥" * n,"⬜🟨⬜" * n, "🟥⬜🟥" * n] * n)
if __name__ == "__main__":
    print(carpet(3))

