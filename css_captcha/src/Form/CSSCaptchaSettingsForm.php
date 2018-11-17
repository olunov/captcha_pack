<?php

namespace Drupal\css_captcha\Form;

use Drupal\Core\Form\ConfigFormBase;
use Drupal\Core\Form\FormStateInterface;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * CSS CAPTCHA settings form.
 */
class CSSCaptchaSettingsForm extends ConfigFormBase {

  /**
   * {@inheritdoc}
   */
  public static function create(ContainerInterface $container) {
    return new static(
      $container->get('config.factory')
    );
  }

  /**
   * {@inheritdoc}
   */
  public function getFormId() {
    return 'css_captcha_settings';
  }

  /**
   * {@inheritdoc}
   */
  protected function getEditableConfigNames() {
    return ['css_captcha.settings'];
  }

  /**
   * {@inheritdoc}
   */
  public function buildForm(array $form, FormStateInterface $form_state) {
    $form = [];
    $config = $this->config('css_captcha.settings');
    $form['css_captcha_allowed_characters'] = [
      '#type' => 'textfield',
      '#title' => $this->t('Characters to use in the code'),
      '#default_value' => $config->get('css_captcha_allowed_characters'),
    ];
    $form['css_captcha_code_length'] = [
      '#type' => 'select',
      '#title' => $this->t('Code length'),
      '#options' => array_combine([4, 5, 6, 7, 8, 9, 10], [4, 5, 6, 7, 8, 9, 10]),
      '#default_value' => $config->get('css_captcha_code_length'),
    ];

    return parent::buildForm($form, $form_state);
  }

  /**
   * {@inheritdoc}
   */
  public function submitForm(array &$form, FormStateInterface $form_state) {
    $this->config('css_captcha.settings')
      ->set('css_captcha_allowed_characters', $form_state->getValue('css_captcha_allowed_characters'))
      ->set('css_captcha_code_length', $form_state->getValue('css_captcha_code_length'))
      ->save();

    parent::SubmitForm($form, $form_state);
  }

  /**
   * {@inheritdoc}
   */
  public function validateForm(array &$form, FormStateInterface $form_state) {
    if (preg_match('/\s/', $form_state->getValue('css_captcha_allowed_characters'))) {
      $form_state->setErrorByName('css_captcha_allowed_characters', $this->t('The list of characters to use should not contain spaces.'));
    }

    parent::validateForm($form, $form_state);
  }

}
