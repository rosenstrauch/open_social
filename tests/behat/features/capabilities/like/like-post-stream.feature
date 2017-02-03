@api @like @stability @DS-2971
Feature: Like post stream
  Benefit: In order to like a post in the stream
  Role: As a LU
  Goal/desire: I want to be able to like a post in the stream

  Scenario: Like a post in the stream
    Given users:
      | name     | mail               | status | field_profile_first_name | field_profile_last_name |
      | user_1   | mail_1@example.com | 1      | Albert                   | Einstein                |
      | user_2   | mail_2@example.com | 1      | Isaac                    | Newton                  |

    Given I am logged in as "user_1"
    And I am on the profile of "Isaac Newton"
    And I fill in "What's on your mind?" with "This is a post by Albert Einstein for Isaac Newton."
    And I press "Post"
    Then I should see the success message "Your post has been posted."

    Given I am logged in as "user_2"
    And I am on "/user"
    Then I should see "What's on your mind?"
    And I click the xth "0" element with the css ".vote-like a"
    And I wait for AJAX to finish

    Given I am logged in as "user_1"
    And I click the xth "0" element with the css ".notification-bell a"
    Then I should see "Notification centre"
    And I should see "Isaac Newton likes your content"


