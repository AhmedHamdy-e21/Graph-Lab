﻿/ /   m a i n . c p p   :   D e f i n e s   t h e   e n t r y   p o i n t   f o r   t h e   c o n s o l e   a p p l i c a t i o n . 
 
 / / 
 
 
 
 # i n c l u d e   " M a t r i x G r a p h . h " 
 
 # i n c l u d e   < v e c t o r > 
 
 # i n c l u d e   < i o s t r e a m > 
 
 u s i n g   n a m e s p a c e   s t d ; 
 
  
 i n t   m a i n ( ) 
 
 { 
 
 	 M a t r i x G r a p h < c h a r >   g r a p h ;   / /   c h a r   i s   t h e   t y p e   o f   v e r t e x   n a m e s 
 
 
 
 	 c o u t   < <   g r a p h . I s E m p t y ( ) < < e n d l ; 
 
 	 c o u t   < <   " \ n \ n A d d i n g   v e r t e x   = = = = = = = = = = = = = = = "   < <   e n d l ; 
 
 	 g r a p h . A d d V e r t e x ( ' A ' ) ; 
 
 	 g r a p h . P r i n t G r a p h ( ) ; 
 
 
 
 	 c o u t   < <   " \ n \ n A d d i n g   v e r t e x   = = = = = = = = = = = = = = = "   < <   e n d l ; 
 
 	 g r a p h . A d d V e r t e x ( ' B ' ) ; 
 
 	 g r a p h . P r i n t G r a p h ( ) ; 
 
 
 
 	 c o u t   < <   " \ n \ n A d d i n g   d u p l i c a t e   v e r t e x   = = = = = = = = = = = = = = = "   < <   e n d l ; 
 
 	 g r a p h . A d d V e r t e x ( ' A ' ) ; 
 
 	 g r a p h . P r i n t G r a p h ( ) ; 
 
 
 
 	 c o u t   < <   " \ n \ n A d d i n g   v e r t i c e s   = = = = = = = = = = = = = = = "   < <   e n d l ; 
 
 	 g r a p h . A d d V e r t e x ( ' C ' ) ; 
 
 	 g r a p h . A d d V e r t e x ( ' D ' ) ; 
 
 	 g r a p h . A d d V e r t e x ( ' F ' ) ; 
 
 	 g r a p h . A d d V e r t e x ( ' E ' ) ; 
 
 	 g r a p h . P r i n t G r a p h ( ) ; 
 
 
 
 	 c o u t   < <   " \ n \ n A d d i n g   e d g e s   = = = = = = = = = = = = = = = "   < <   e n d l ; 
 
 	 g r a p h . A d d E d g e ( ' A ' , ' B ' ,   3 ) ; 
 
 	 g r a p h . A d d E d g e ( ' B ' ,   ' C ' ,   2 ) ; 
 
 	 g r a p h . A d d E d g e ( ' B ' ,   ' D ' ,   4 ) ; 
 
 	 g r a p h . A d d E d g e ( ' C ' ,   ' E ' ,   5 ) ; 
 
 	 g r a p h . A d d E d g e ( ' D ' ,   ' C ' ,   5 ) ; 
 
 	 g r a p h . A d d E d g e ( ' E ' ,   ' D ' ,   2 ) ; 
 
 	 g r a p h . A d d E d g e ( ' E ' ,   ' F ' ) ; 
 
 	 g r a p h . A d d E d g e ( ' F ' ,   ' A ' ) ; 
 
 	 g r a p h . P r i n t G r a p h ( ) ; 
 
 
 
 	 c o u t   < <   " \ n \ n R e m o v i n g   e d g e   = = = = = = = = = = = = = = = "   < <   e n d l ; 
 
 	 g r a p h . R e m o v e E d g e ( ' F ' , ' A ' ) ; 
 
 	 g r a p h . P r i n t G r a p h ( ) ; 
 
 
 
 	 c o u t   < <   " \ n \ n R e m o v i n g   v e r t e x   = = = = = = = = = = = = = = = "   < <   e n d l ; 
 
 	 g r a p h . R e m o v e V e r t e x ( ' F ' ) ; 
 
 	 g r a p h . P r i n t G r a p h ( ) ; 
 
 
 
 	 c o u t   < <   " \ n \ n D i s p l a y i n g   n e i g h b o r s   = = = = = = = = = = = = = = = "   < <   e n d l ; 
 
 	 g r a p h . D i s p l a y N e i g h b o r s ( ' B ' ) ; 
 
 
 
 
 
 
 
         r e t u r n   0 ; 
 
 } 
 
 
 
 
