#include <stdio.h>
#include <math.h>

typedef long long ll;

int main() {
    ll n, m, a;
    
    scanf("%lld %lld %lld", &n, &m, &a);
    
    printf("%lld\n", (ll)ceil((double) n / a) * (ll)ceil((double) m / a) );
    
    return 0;
}