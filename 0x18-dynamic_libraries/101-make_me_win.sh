#!/bin/bash
mv gm original_gm
echo '#!/bin/bash\n./original_gm 9 8 10 24 75 9' > gm
chmod +x gm
