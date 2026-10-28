// rea decompile_all
// name: FUN_03fc1f80
// address: 0x3fc1f80
// body: available
// range: 0x3fc1f80-0x3fc2337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03fc1f80(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *__dest;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  undefined8 *puVar12;
  byte local_98 [16];
  void *local_88;
  void *local_80;
  void *local_78;
  char *local_70;
  int local_64;
  
  uVar2 = FUN_03faa9cc(0x9535b90,&DAT_09535b94);
  if ((uVar2 & 1) != 0) {
    FUN_03f776ac(*(undefined8 *)(puRam0000000009535b80 + 2),*puRam0000000009535b80);
    FUN_03f77a60(*(undefined4 *)(DAT_09535b88 + 4));
    FUN_03f77a78(*(undefined4 *)(DAT_09535b88 + 8));
    FUN_03fc2380(&DAT_09535920,(long)(int)puRam0000000009535b80[4]);
    if (0 < (int)puRam0000000009535b80[4]) {
      lVar4 = 0;
      lVar11 = 0;
      do {
        FUN_03fc23d0(&DAT_09535920,*(long *)(puRam0000000009535b80 + 6) + lVar4);
        lVar11 = lVar11 + 1;
        lVar4 = lVar4 + 8;
      } while (lVar11 < (int)puRam0000000009535b80[4]);
    }
    pvVar5 = *(void **)(DAT_09535b78 + 0x60);
    uVar1 = *(uint *)(DAT_09535b78 + 0x58);
    uVar7 = (ulong)uVar1;
    if ((DAT_09535b40 != '\0') && (DAT_09535b30 != (void *)0x0)) {
      operator_delete__(DAT_09535b30);
    }
    lVar11 = 0;
    if (uVar1 != 0) {
      lVar11 = LZCOUNT(uVar7) * -2 + 0x7e;
    }
    FUN_03fc6cfc(pvVar5,(void *)((long)pvVar5 + uVar7 * 0x38),&local_80,lVar11,1);
    DAT_09535b40 = '\0';
    pvVar6 = *(void **)(DAT_09535b78 + 0x70);
    uVar1 = *(uint *)(DAT_09535b78 + 0x68);
    uVar8 = (ulong)uVar1;
    DAT_09535b30 = pvVar5;
    DAT_09535b38 = uVar7;
    if ((DAT_09535b58 != '\0') && (DAT_09535b48 != (void *)0x0)) {
      operator_delete__(DAT_09535b48);
    }
    lVar11 = 0;
    if (uVar1 != 0) {
      lVar11 = LZCOUNT(uVar8) * -2 + 0x7e;
    }
    FUN_03fc8128(pvVar6,(void *)((long)pvVar6 + uVar8 * 0x10),&local_80,lVar11,1);
    DAT_09535b58 = '\0';
    DAT_09535b48 = pvVar6;
    DAT_09535b50 = uVar8;
    pvRam0000000009535b98 = calloc((long)iRam0000000009535b90,0x48);
    DAT_09535ba0 = calloc((long)DAT_09535b94,0x58);
    if (0 < iRam0000000009535b90) {
      uVar7 = 0;
      do {
        pvVar6 = pvRam0000000009535b98;
        puVar9 = (undefined8 *)((long)pvRam0000000009535b98 + uVar7 * 0x48);
        FUN_03fab40c(puVar9,uVar7 & 0xffffffff,&local_64);
        pvVar5 = (void *)0x0;
        if (local_64 != -1) {
          pvVar5 = (void *)((long)DAT_09535ba0 + (long)local_64 * 0x58);
        }
        puVar9[2] = pvVar5;
        FUN_03f6321c(local_98,*puVar9);
        FUN_03f92498(&local_80,local_98);
        if ((local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        pvVar5 = (void *)((ulong)local_80 >> 1 & 0x7f);
        if (((ulong)local_80 & 1) != 0) {
          pvVar5 = local_78;
        }
        __dest = calloc((long)pvVar5 + 1,1);
        *(char **)((long)pvVar6 + uVar7 * 0x48 + 8) = __dest;
        pcVar10 = (char *)((ulong)&local_80 | 1);
        if (((ulong)local_80 & 1) != 0) {
          pcVar10 = local_70;
        }
        strcpy(__dest,pcVar10);
        uVar8 = (ulong)*(uint *)(DAT_09535b78 + 0x78);
        if (*(uint *)(DAT_09535b78 + 0x78) != 0) {
          pcVar10 = (char *)*puVar9;
          puVar9 = *(undefined8 **)(DAT_09535b78 + 0x80);
          do {
            puVar12 = (undefined8 *)*puVar9;
            iVar3 = strcmp(pcVar10,(char *)*puVar12);
            if (iVar3 == 0) {
              *(undefined8 **)((long)pvVar6 + uVar7 * 0x48 + 0x38) = puVar12;
            }
            uVar8 = uVar8 - 1;
            puVar9 = puVar9 + 1;
          } while (uVar8 != 0);
        }
        *(undefined1 *)((long)pvVar6 + uVar7 * 0x48 + 0x44) = 0;
        if (((ulong)local_80 & 1) != 0) {
          operator_delete(local_70);
        }
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)iRam0000000009535b90);
      if (0 < iRam0000000009535b90) {
        lVar11 = 0;
        uVar7 = 0;
        do {
          pvVar6 = DAT_09535ba0;
          FUN_03fab4dc((long)DAT_09535ba0 + lVar11,uVar7 & 0xffffffff,&local_80);
          pvVar5 = (void *)0x0;
          if ((int)local_80 != -1) {
            pvVar5 = (void *)((long)pvRam0000000009535b98 + (long)(int)local_80 * 0x48);
          }
          *(void **)((long)pvVar6 + lVar11) = pvVar5;
          FUN_03f989dc((long)pvVar6 + lVar11);
          uVar7 = uVar7 + 1;
          lVar11 = lVar11 + 0x58;
        } while ((long)uVar7 < (long)iRam0000000009535b90);
      }
    }
    FUN_03fc2444();
    local_80 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = (char *)0x0;
    FUN_03facadc(&local_80);
    FUN_03f943e8(&local_80);
    if (local_80 != (void *)0x0) {
      local_78 = local_80;
      operator_delete(local_80);
    }
  }
  return uVar2 & 1;
}

