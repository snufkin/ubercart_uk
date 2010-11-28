<?php

/**
 * Implementation of hook_strongarm().
 */
function uc_uk_ubercart_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_address_format_124';
  $strongarm->value = '!company
!first_name !last_name
!street1
!street2
!city, !postal_code
!zone_name, !country_name';

  $export['uc_address_format_124'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_address_format_826';
  $strongarm->value = '!first_name !last_name
!company
!street1
!street2
!city
!postal_code
!country_name_if';

  $export['uc_address_format_826'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_address_format_840';
  $strongarm->value = '!company
!first_name !last_name
!street1
!street2
!city, !zone_code !postal_code
!country_name_if';

  $export['uc_address_format_840'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_currency_code';
  $strongarm->value = 'GBP';

  $export['uc_currency_code'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_currency_dec';
  $strongarm->value = '.';

  $export['uc_currency_dec'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_currency_prec';
  $strongarm->value = '2';

  $export['uc_currency_prec'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_currency_sign';
  $strongarm->value = '£';

  $export['uc_currency_sign'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_currency_thou';
  $strongarm->value = ',';

  $export['uc_currency_thou'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_date_format_default';
  $strongarm->value = 'd/m/Y';

  $export['uc_date_format_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_length_format_cm';
  $strongarm->value = '!value cm';

  $export['uc_length_format_cm'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_length_format_ft';
  $strongarm->value = '!value ft';

  $export['uc_length_format_ft'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_length_format_in';
  $strongarm->value = '!value in';

  $export['uc_length_format_in'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_length_format_mm';
  $strongarm->value = '!value mm';

  $export['uc_length_format_mm'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_length_unit';
  $strongarm->value = 'in';

  $export['uc_length_unit'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_sign_after_amount';
  $strongarm->value = 0;

  $export['uc_sign_after_amount'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_weight_format_g';
  $strongarm->value = '!value g';

  $export['uc_weight_format_g'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_weight_format_kg';
  $strongarm->value = '!value kg';

  $export['uc_weight_format_kg'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_weight_format_lb';
  $strongarm->value = '!value lb';

  $export['uc_weight_format_lb'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_weight_format_oz';
  $strongarm->value = '!value oz';

  $export['uc_weight_format_oz'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_weight_unit';
  $strongarm->value = 'lb';

  $export['uc_weight_unit'] = $strongarm;
  return $export;
}
