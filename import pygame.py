import pygame
import sys

# Initialize Pygame
pygame.init()

# Set up the game window
width = 800
height = 600
window = pygame.display.set_mode((width, height))
pygame.display.set_caption("Bouncing Ball")

# Ball properties
ball_radius = 20
ball_color = (255, 0, 0)
ball_pos = [width // 2, height // 2]
ball_velocity = [5, 5]

# Game loop
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()

    # Update ball position
    ball_pos[0] += ball_velocity[0]
    ball_pos[1] += ball_velocity[1]

    # Check collision with window boundaries
    if ball_pos[0] <= ball_radius or ball_pos[0] >= width - ball_radius:
        ball_velocity[0] *= -1
    if ball_pos[1] <= ball_radius or ball_pos[1] >= height - ball_radius:
        ball_velocity[1] *= -1

    # Clear the window
    window.fill((0, 0, 0))

    # Draw the ball
    pygame.draw.circle(window, ball_color, ball_pos, ball_radius)

    # Update the display
    pygame.display.update()
