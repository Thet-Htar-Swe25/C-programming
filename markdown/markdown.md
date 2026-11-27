# 1. Heading and Paragraph

## 1.1 Heading

- 1st way to make heading > "#(space)(text) , ##, ###, ..."   
Eg . **# Heading 1**

- 2nd way to make heading > " Write any heading and put "====" under that heading for heading lvl 1 and " --- " for heading lvl 2

Heading level 1
**================**

Heading level 2  
**----------------**  

<h3>1.1.1 **HTML syntax of Heading**</h3>  

- <**h1**>Heading level<**/h1**>  
- <**h2**>Heading level<**/h2**>

## 1.2 Paragraph  
- Skip the line for paragraph in normal markdown

### 1.2.1 HTML syntax of paragraph  

- <**p**>"text"<**/p**>


# 2. Skipping Line 

## 2.1 For normal markdown 
- by using two space at the end of the sentence (or)
- by using this ( \ ) at the end of the sentence  

## 2.2 HTML syntax
- <p><<strong>p</strong>> The first line <<strong>br /</strong>><br />
- This is the second line.<<strong>/p</strong>></p>


# 3. Emphasis
- **Bold Text**  
can be written as ** text **\
__(or)__ can be also written as __ text __  (two underscores/star)   
- <strong>HTML</strong> - syntax is <**strong**>"text"</**strong**> ( without space around the letters) 


- *Italic*  
can be written as * text *  
_(or)_ can be written as _ text _ (one underscore/star)  
- <em>HTML</em> - syntax is <**em**>"text"<**/em**> ( winthout space around the letters)  


- ***Bold and Italic*** (three undescore / star in total)  
can be written as *** text ***  
___(or)___ written as ___ text ___   
__*(or)*__ wirtten as __ * text * __  
**_(or)_** written as ** _ text _ **  

- <strong><em>HTML</em></strong> syntax is  
<**strong**><**em**>"text"<**/em**><**/strong**> ( without spaces aroudn letters)  

# 4. Blockquotes
> This quote is from other website.  

- You can write the blockquote with a >    

<blockquote>
<p>HTML syntax is -</p>
</blockquote>  

- <**blockquote**>  
<**p**>"text"<**/p**>  
<**/blockquote**>  

### 4.1 Blockquotes with multiple Paragraphs  

> "First quote"
>
> "Second quote"

- as long as you want the sentence to describe as quote use this ( > ) even for the skipped lines.  

- For HTML syntax :

<blockquote>
<p><<strong>blockquote</strong>></p>
<p><<strong>p</strong>>"text"<<strong>/p</strong>></p>
<p><<strong>p</strong>>"text"<<strong>/p</strong>></p>
<p><<strong>/blockquote</strong>></p>
</blockquote>

### 4.2 Nested Blockquotes  

> This is the first quote
>
>>This is the nested one

- use >> this if you want to put other quote under a quote.

- For HTML syntax :

<blockquote>
<p><<strong>blockquote</strong>></p>
<p><<strong>p</strong>>"text"<<strong>/p</strong>></p>
<blockquote>
<p><<strong>blockquote</strong>>
<p><<strong>p</strong>"text"<<strong>/p</strong>></p>
<p><<strong>/blockquote</strong>></p>
</blockquote>
<p><<strong>/blockquote</strong>></p>
</blockquote>

### 4.3 Blockquote with other elements  
- The way I used above. 