BTREE delete_node(BTREE root, int x) {
    BTREE p, q;

    if (root == NULL) {
        return NULL; // Ağaç boşsa
    }

    if (root->data == x) {
        // CASE 1: Yaprak düğüm
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        }

        // CASE 2: Tek çocuklu düğüm
        if (root->left == NULL) {
            p = root->right;
            free(root);
            return p;
        } else if (root->right == NULL) {
            p = root->left;
            free(root);
            return p;
        }

        // CASE 3: İki çocuklu düğüm
        p = root->right; 
        q = NULL;

        // Sağ alt ağaçta en küçük değeri bul
        while (p->left != NULL) {
            q = p;
            p = p->left;
        }

        // En küçük düğümün sol çocuğunu güncelle
        if (q != NULL) {
            q->left = p->right; // Min düğümün sağ çocuğunu ebeveynine bağla
        } else {
            root->right = p->right; // Eğer q yoksa, root->right doğrudan bağlanır
        }

        // Kök düğümün değerini güncelle
        root->data = p->data;

        // Min düğümü serbest bırak
        free(p);
        return root;
    }

    // Silinecek düğümü aramak için sol veya sağ alt ağaca git
    if (x < root->data) {
        root->left = delete_node(root->left, x);
    } else {
        root->right = delete_node(root->right, x);
    }

    return root;
}
