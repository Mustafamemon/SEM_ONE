void main()
{
char sent[]="She sells seashells on the seashore";

int i;

for(i=0;sent[i]!=0;i++)
{
if(sent[i]==97||sent[i]==101||sent[i]==105||sent[i]==111||sent[i]==117)
{
for(;sent[i+1]!=0;i++)
sent[i]=sent[i+1];

sent[i]='\r';

i=-1;
}
}
 printf("\n%s",sent);
} 
