<?php

namespace Drupal\foo_captcha\Form;

use Drupal\Core\Form\ConfigFormBase;
use Drupal\Core\Form\FormStateInterface;
use Symfony\Component\DependencyInjection\ContainerInterface;

/**
 * Foo CAPTCHA settings form
 */
class FooCaptchaSettingsForm extends ConfigFormBase {

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
    return 'foo_captcha_settings';
  }

  /**
   * {@inheritdoc}
   */
  protected function getEditableConfigNames() {
    return array('foo_captcha.settings');
  }

  /**
   * {@inheritdoc}
   */
  public function buildForm(array $form, FormStateInterface $form_state) {
    $form = array();
    $form['foo_captcha_ignore_spaces'] = array(
      '#type' => 'checkbox',
      '#title' => t('Ignore spaces in the response'),
      '#default_value' => \Drupal::config('foo_captcha.settings')->get('foo_captcha_ignore_spaces'),
    );

    return parent::buildForm($form, $form_state);
  }

  /**
   * {@inheritdoc}
   */
  public function submitForm(array &$form, FormStateInterface $form_state) {
    $this->config('foo_captcha.settings')
      ->set('foo_captcha_ignore_spaces', $form_state->getValue('foo_captcha_ignore_spaces'))
      ->save();
    
    parent::SubmitForm($form, $form_state);
  }
}
