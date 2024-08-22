# RTTI (Run time type Identification)

<center>
<table>
C1
<tr>
<td width="33%">
a,b

f1() <br/>
f2()
</td>
</tr>
</table>

&darr;

<table>
C2
<tr>
<td width="33%">
c

f3(), f2()
</td>
</tr>
</table>

``` cpp
c1 x;
c2 y;
c1 *p;

p = &x;
p = &y;
```
<table>
x &darr;p
<tr>
<td>
a,b

f1() f2()
</td>
</tr>
</table>

x.a | p -> a \
x.b | p -> b \
x.f1() | p -> f1() <br/>
x.f2() | p -> f2() <br/>
y.a | p -> a \
y.b | p -> b 
</center>

---

``` cpp
int x;
double y;
int *p;
p = &x; // Valid
p = &y; // Not good practice because pointers are type specific. Here pointer p is interger pointer
```
### Static Binding

Static binding means Function binding at the time of compilation

You can use the keyword ```static``` to make a function into a static function

<b>If the pointer is of type base class and the object is of derived class then we can only access object members of base class</b>

for the above example p -> f1() will give the f2 of c1 => static

### Dynamic Binding

Virtual functions can be only used with Dynamic Binding

You can use the keyword ```virtual``` to make a function into a virutal function

for the above example p -> f1() will give the f2 of c2 => dynamic
