// rea decompile_all
// name: std::__ndk1::ios_base::iword
// address: 0x3fecca4
// body: available
// range: 0x3fecca4-0x3fecdcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::ios_base::iword(int) */

void * std::__ndk1::ios_base::iword(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  void *extraout_x0;
  int in_w1;
  undefined4 in_w2;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  
  uVar11 = (ulong)(uint)param_1;
  uVar8 = (long)in_w1 + 1;
  if (uVar8 <= *(ulong *)(uVar11 + 0x68)) {
    pvVar4 = *(void **)(uVar11 + 0x58);
    uVar10 = *(ulong *)(uVar11 + 0x60);
LAB_03fecd60:
    if (uVar10 <= uVar8) {
      uVar10 = uVar8;
    }
    *(ulong *)(uVar11 + 0x60) = uVar10;
    return (void *)((long)pvVar4 + (long)in_w1 * 8);
  }
  uVar7 = *(ulong *)(uVar11 + 0x68) * 2;
  if (uVar7 < uVar8 || uVar7 - uVar8 == 0) {
    uVar7 = uVar8;
  }
  if (0xffffffffffffffe < uVar8) {
    uVar7 = 0x1fffffffffffffff;
  }
  pvVar4 = realloc(*(void **)(uVar11 + 0x58),uVar7 * 8);
  if (pvVar4 != (void *)0x0) {
    uVar10 = *(ulong *)(uVar11 + 0x60);
    *(void **)(uVar11 + 0x58) = pvVar4;
    if ((long)uVar10 < (long)uVar7) {
      pvVar1 = (void *)(uVar7 * 8 + (long)pvVar4);
      pvVar2 = (void *)((long)pvVar4 + uVar10 * 8);
      pvVar5 = (void *)((long)pvVar2 + 8);
      if (pvVar5 <= pvVar1) {
        pvVar5 = pvVar1;
      }
      memset(pvVar2,0,((long)pvVar5 + uVar10 * -8 + ~(ulong)pvVar4 & 0xfffffffffffffff8) + 8);
    }
    *(ulong *)(uVar11 + 0x68) = uVar7;
    goto LAB_03fecd60;
  }
  uVar3 = *(uint *)(uVar11 + 0x20) | 1;
  *(uint *)(uVar11 + 0x20) = uVar3;
  if ((*(uint *)(uVar11 + 0x24) & uVar3) == 0) {
    uRam000000000974a160 = 0;
    return (void *)0x974a160;
  }
  auVar13 = FUN_03fed0cc("ios_base::clear");
  lVar9 = auVar13._0_8_;
  uVar8 = (long)auVar13._8_4_ + 1;
  if (uVar8 <= *(ulong *)(lVar9 + 0x80)) {
    pvVar4 = *(void **)(lVar9 + 0x70);
    uVar11 = *(ulong *)(lVar9 + 0x78);
LAB_03fece88:
    if (uVar11 <= uVar8) {
      uVar11 = uVar8;
    }
    *(ulong *)(lVar9 + 0x78) = uVar11;
    return (void *)((long)pvVar4 + (long)auVar13._8_4_ * 8);
  }
  uVar10 = *(long *)(lVar9 + 0x68) * 2;
  if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
    uVar10 = uVar8;
  }
  if (0xffffffffffffffe < uVar8) {
    uVar10 = 0x1fffffffffffffff;
  }
  pvVar4 = realloc(*(void **)(lVar9 + 0x70),uVar10 * 8);
  if (pvVar4 != (void *)0x0) {
    uVar11 = *(ulong *)(lVar9 + 0x78);
    *(void **)(lVar9 + 0x70) = pvVar4;
    if ((long)uVar11 < (long)uVar10) {
      pvVar1 = (void *)(uVar10 * 8 + (long)pvVar4);
      pvVar2 = (void *)((long)pvVar4 + uVar11 * 8);
      pvVar5 = (void *)((long)pvVar2 + 8);
      if (pvVar5 <= pvVar1) {
        pvVar5 = pvVar1;
      }
      memset(pvVar2,0,((long)pvVar5 + uVar11 * -8 + ~(ulong)pvVar4 & 0xfffffffffffffff8) + 8);
    }
    *(ulong *)(lVar9 + 0x80) = uVar10;
    goto LAB_03fece88;
  }
  uVar3 = *(uint *)(lVar9 + 0x20) | 1;
  *(uint *)(lVar9 + 0x20) = uVar3;
  if ((*(uint *)(lVar9 + 0x24) & uVar3) == 0) {
    uRam000000000974a168 = 0;
    return (void *)0x974a168;
  }
  auVar12 = FUN_03fed0cc("ios_base::clear");
  pvVar5 = auVar12._0_8_;
  lVar9 = *(long *)((long)pvVar5 + 0x48);
  uVar8 = lVar9 + 1;
  pvVar4 = pvVar5;
  if (*(ulong *)((long)pvVar5 + 0x50) < uVar8) {
    uVar11 = *(ulong *)((long)pvVar5 + 0x50) * 2;
    if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
      uVar11 = uVar8;
    }
    if (0xffffffffffffffe < uVar8) {
      uVar11 = 0x1fffffffffffffff;
    }
    pvVar4 = realloc(*(void **)((long)pvVar5 + 0x38),uVar11 << 3);
    if (pvVar4 == (void *)0x0) {
      uVar3 = *(uint *)((long)pvVar5 + 0x20) | 1;
      *(uint *)((long)pvVar5 + 0x20) = uVar3;
      if ((*(uint *)((long)pvVar5 + 0x24) & uVar3) != 0) goto LAB_03fecfc8;
    }
    *(void **)((long)pvVar5 + 0x38) = pvVar4;
    pvVar4 = realloc(*(void **)((long)pvVar5 + 0x40),uVar11 << 2);
    if (pvVar4 == (void *)0x0) {
      uVar3 = *(uint *)((long)pvVar5 + 0x20) | 1;
      *(uint *)((long)pvVar5 + 0x20) = uVar3;
      if ((*(uint *)((long)pvVar5 + 0x24) & uVar3) != 0) {
LAB_03fecfc8:
        puVar6 = (undefined8 *)FUN_03fed0cc("ios_base::clear");
        *puVar6 = &PTR__ios_base_08fa9f08;
        if (puVar6[9] != 0) {
          lVar9 = puVar6[9] + -1;
          do {
            (**(code **)(puVar6[7] + lVar9 * 8))(0,puVar6,*(undefined4 *)(puVar6[8] + lVar9 * 4));
            lVar9 = lVar9 + -1;
          } while (lVar9 != -1);
        }
        locale::~locale((locale *)(puVar6 + 6));
        free((void *)puVar6[7]);
        free((void *)puVar6[8]);
        free((void *)puVar6[0xb]);
        free((void *)puVar6[0xe]);
        return extraout_x0;
      }
    }
    lVar9 = *(long *)((long)pvVar5 + 0x48);
    *(void **)((long)pvVar5 + 0x40) = pvVar4;
    *(ulong *)((long)pvVar5 + 0x50) = uVar11;
    uVar8 = lVar9 + 1;
  }
  *(long *)(*(long *)((long)pvVar5 + 0x38) + lVar9 * 8) = auVar12._8_8_;
  *(undefined4 *)(*(long *)((long)pvVar5 + 0x40) + lVar9 * 4) = in_w2;
  *(ulong *)((long)pvVar5 + 0x48) = uVar8;
  return pvVar4;
}

