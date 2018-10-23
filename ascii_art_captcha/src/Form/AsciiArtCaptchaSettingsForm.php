<?php

namespace Drupal\ascii_art_captcha\Form;
use Drupal\Core\Form\ConfigFormBase;
use Drupal\Core\Form\FormStateInterface;

/**
 * Displays the pants settings form.
 */
class AsciiArtCaptchaSettingsForm extends ConfigFormBase {

  /**
   * {@inheritdoc}
   */
  protected function getEditableConfigNames() {
    // TODO: Implement getEditableConfigNames() method.
  }

  /**
   * {@inheritdoc}
   */
  public function getFormId() {
    return 'ascii_art_captcha_settings';
  }

  /**
   * {@inheritdoc}
   */
  public function buildForm(array $form, FormStateInterface $form_state) {
    $config = $this->config('image_captcha.settings');
    // Add CSS and JS for theming and added usability on admin form.

    return parent::buildForm($form, $form_state);
  }

  /**
   * {@inheritdoc}
   */
  public function validateForm(array &$form, FormStateInterface $form_state) {

    parent::validateForm($form, $form_state);
  }

  /**
   * {@inheritdoc}
   */
  public function submitForm(array &$form, FormStateInterface $form_state) {

    parent::SubmitForm($form, $form_state);
  }

}
