#include <iostream>
#include <cassert>

int main() {
    std::cout << "Running tests..." << std::endl;

    assert(true);

    const char *testMessage = R""""(
Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum ultrices sagittis eros sit amet fringilla. Morbi eu malesuada magna. Sed ultrices tristique diam. Cras luctus faucibus lacinia. Nulla facilisi. Aenean eu purus ligula. Proin volutpat bibendum lectus, at rhoncus purus. Fusce non sagittis elit. Proin vel massa id est sollicitudin gravida sed vitae leo. Ut sodales aliquam sapien id efficitur. Sed in dapibus lectus. Aliquam vel mollis ex. Pellentesque venenatis nunc in ipsum pharetra, vitae facilisis mi mollis. Maecenas eget ligula convallis, sollicitudin metus eget, porttitor eros. In at pretium tellus. Vivamus nec tellus non nisl lobortis fringilla.
Vivamus eget neque luctus libero volutpat tempor eget et nisi. Maecenas sit amet imperdiet sem. Pellentesque ac nunc efficitur, viverra elit gravida, placerat nisl. Donec nec mi in odio eleifend venenatis. Nulla ultrices egestas sem, sit amet malesuada ante elementum vitae. Maecenas ullamcorper, elit non congue hendrerit, tellus dui dictum nibh, venenatis aliquet diam velit et nibh. Nunc quis pellentesque augue, et tempor felis. Nulla eleifend magna ut cursus vehicula. Sed ut lorem arcu. Vestibulum dictum erat vitae viverra placerat. Sed posuere ex ac ligula sollicitudin, sed auctor eros laoreet. Proin at semper est, id viverra mauris. Integer sed dolor interdum, lacinia eros eget, pellentesque tellus.
In eu sollicitudin metus. Sed convallis lectus turpis, posuere laoreet mauris imperdiet non. Ut congue ultricies diam, a interdum lectus. Aliquam erat volutpat. Integer iaculis augue ac felis sodales eleifend. Nunc hendrerit scelerisque urna vel porta. Proin sollicitudin urna at gravida mollis. Aliquam ac iaculis augue. Nulla convallis vitae lectus a vulputate.
Donec consequat metus sit amet eleifend suscipit. Quisque eu feugiat nibh. Donec a turpis augue. Sed quis diam sit amet odio facilisis facilisis eu id turpis. Etiam ultricies auctor risus, eget consectetur enim laoreet quis. Sed pretium ultricies ex. Suspendisse ornare rutrum nibh. Morbi ut pharetra felis, eu mollis risus. Vestibulum sed lorem non magna molestie sagittis at ullamcorper tortor. Etiam bibendum aliquam condimentum. Etiam tempor tellus vitae lorem feugiat, nec blandit libero volutpat. Donec lectus arcu, semper ut volutpat id, lacinia id purus.
Interdum et malesuada fames ac ante ipsum primis in faucibus. Sed consectetur elit id purus congue iaculis. Suspendisse eget viverra sem. In id mattis nunc. Nam blandit imperdiet sapien a mattis. In hac habitasse platea dictumst. Sed porta ornare elit, vel tristique lectus finibus in.
)"""";

    std::cout << testMessage << std::endl;
    return 0;
}
