<?php

namespace Drupal\math_captcha\Form;

use Drupal\Core\Form\ConfigFormBase;
use Drupal\Core\Form\FormStateInterface;

/**
 * Math CAPTCHA settings form.
 */
class MathCaptchaSettingsForm extends ConfigFormBase {

  /**
   * {@inheritdoc}
   */
  public function getFormId() {
    return 'math_captcha_settings';
  }

  /**
   * {@inheritdoc}
   */
  protected function getEditableConfigNames() {
    return ['math_captcha.settings'];
  }

  /**
   * {@inheritdoc}
   */
  public function buildForm(array $form, FormStateInterface $form_state) {
    $config = $this->config('math_captcha.settings');

    $form = [];
    $enabled_challenges = _math_captcha_enabled_challenges();
    $form['math_captcha_enabled_challenges'] = [
      '#type' => 'checkboxes',
      '#title' => $this->t('Enabled math challenges'),
      '#options' => [
        'addition' => $this->t('Addition: x + y = z'),
        'subtraction' => $this->t('Subtraction: x - y = z'),
        'multiplication' => $this->t('Multiplication: x * y = z'),
      ],
      '#default_value' => $enabled_challenges,
      '#description' => $this->t('Select the math challenges you want to enable.'),
    ];

    $form['math_captcha_textual_numbers'] = [
      '#type' => 'checkbox',
      '#title' => $this->t('Textual representation of numbers'),
      '#default_value' => $config->get('math_captcha_textual_numbers'),
      '#description' => $this->t('When enabled, the numbers in the challenge will get a textual representation if available. E.g. "four" instead of "4".'),
    ];

    $form['math_captcha_textual_operators'] = [
      '#type' => 'checkbox',
      '#title' => $this->t'Textual representation of operators'),
      '#default_value' => $config->get('math_captcha_textual_operators'),
      '#description' => $this->t'When enabled, the operators in the challenge will get a textual representation if available. E.g. "plus" instead of "+".'),
    ];
    // Addition challenge
    $form['math_captcha_addition'] = [
      '#type' => 'fieldset',
      '#title' => $this->t'Addition challenge: x + y = z'),
    ];
    $form['math_captcha_addition']['math_captcha_addition_argmax'] = [
      '#type' => 'textfield',
      '#title' => $this->t'Maximum value for x and y'),
      '#default_value' => $config->get('math_captcha_addition_argmax'),
      '#maxlength' => 3,
      '#size' => 3,
    ];
    $form['math_captcha_addition']['math_captcha_addition_allow_negative'] = [
      '#type' => 'checkbox',
      '#title' => $this->t'Allow negative values.'),
      '#default_value' => $config->get('math_captcha_addition_allow_negative'),
    ];
    // Subtraction challenge
    $form['math_captcha_subtraction'] = [
      '#type' => 'fieldset',
      '#title' => $this->t'Subtraction challenge: x - y = z'),
    ];
    $form['math_captcha_subtraction']['math_captcha_subtraction_argmax'] = [
      '#type' => 'textfield',
      '#title' => $this->t'Maximum value for x and y'),
      '#default_value' => $config->get('math_captcha_subtraction_argmax'),
      '#maxlength' => 3,
      '#size' => 3,
    ];
    $form['math_captcha_subtraction']['math_captcha_subtraction_allow_negative'] = [
      '#type' => 'checkbox',
      '#title' => $this->t'Allow negative values.'),
      '#default_value' => $config->get('math_captcha_subtraction_allow_negative'),
    ];
    // Multiplication challenge
    $form['math_captcha_multiplication'] = [
      '#type' => 'fieldset',
      '#title' => $this->t'Multiplication challenge: x * y = z'),
    ];
    $form['math_captcha_multiplication']['math_captcha_multiplication_argmax'] = [
      '#type' => 'textfield',
      '#title' => $this->t'Maximum value for x and y'),
      '#default_value' => $config->get('math_captcha_multiplication_argmax'),
      '#maxlength' => 3,
      '#size' => 3,
    ];
    $form['math_captcha_multiplication']['math_captcha_multiplication_allow_negative'] = [
      '#type' => 'checkbox',
      '#title' => $this->t'Allow negative values.'),
      '#default_value' => $config->get('math_captcha_multiplication_allow_negative'),
    ];

    return parent::buildForm($form, $form_state);
  }

  /**
   * {@inheritdoc}
   */
  public function submitForm(array &$form, FormStateInterface $form_state) {
    $this->config('foo_captcha.settings')
      ->set('foo_captcha_ignore_spaces', $form_state->getValue('foo_captcha_ignore_spaces'))
      ->save();

    if (count(array_filter($form_state['values']['math_captcha_enabled_challenges'])) < 1) {
      form_set_error('math_captcha_enabled_challenges', $this->t'You should select at least one type of math challenges.'));
    }
    // Check argmax's
    $argmaxs = ['math_captcha_addition_argmax', 'math_captcha_subtraction_argmax', 'math_captcha_multiplication_argmax');
    foreach ($argmaxs as $argmax) {
      if (!ctype_digit($form_state['values'][$argmax])) {
        form_set_error($argmax, $this->t'Maximum value should be an integer.'));
      }
      else {
        $form_state['values'][$argmax] = intval($form_state['values'][$argmax]);
        if ($form_state['values'][$argmax] < 2) {
          form_set_error($argmax, $this->t'Maximum value should be an integer and at least 2'));
        }
      }
    }

    parent::SubmitForm($form, $form_state);
  }

}
