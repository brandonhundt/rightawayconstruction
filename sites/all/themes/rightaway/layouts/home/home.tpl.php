<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a three column 23%-33%-33% panel display layout, with
 * additional areas for the top and the bottom.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['top']: Content in the top row.
 *   - $content['left']: Content in the left column.
 *   - $content['middle']: Content in the middle column.
 *   - $content['right']: Content in the right column.
 *   - $content['bottom']: Content in the bottom row.
 */
?>  
<main role="main" class="l-main">
  <a id="main-content"></a>
  <?php if ($content['top']): ?>
    <section id="homepage-hero">  
      <?php print $content['top']; ?>
    </section>  
  <?php endif ?>
  <?php !empty($css_id) ? print '<div id="' . $css_id . '">' : ''; ?>
  <?php if ($content['tabs']): ?>
    <div class="row">
      <div class="large-12 columns">
        <?php print $content['tabs']; ?>
      </div>
    </div>
  <?php endif ?>
  <?php if ($content['left']): ?> 
    <section class="l-left"> 
      <div class="row">
        <?php print $content['left']; ?>
      </div>
    </section>  
  <?php endif ?> 
  <?php if ($content['middle']): ?> 
    <section class="l-middle">
      <div class="row">
        <?php print $content['middle']; ?>
      </div>
    </section>  
  <?php endif ?>
  <?php if ($content['right']): ?>  
    <section class="l-right"> 
      <div class="row">
        <?php print $content['right']; ?>
      </div>
    </section>  
  <?php endif ?>   
  <?php if ($content['bottom']): ?>
    <section class="l-bottom"> 
      <div class="row">
        <div class="large-12 columns">
          <?php print $content['bottom']; ?>
        </div>
      </div>
    </section> 
  <?php endif ?>
  <?php !empty($css_id) ? print '</div>' : ''; ?>
<!--/.main region -->
</main>
<!--/.main-->
