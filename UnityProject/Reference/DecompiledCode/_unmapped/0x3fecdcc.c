// rea decompile_all
// name: std::__ndk1::ios_base::pword
// address: 0x3fecdcc
// body: available
// range: 0x3fecdcc-0x3fecef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::ios_base::pword(int) */

void * std::__ndk1::ios_base::pword(int param_1)

{
  void *pvVar1;
  void *__s;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *extraout_x0;
  int in_w1;
  undefined4 in_w2;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  uVar8 = (ulong)(uint)param_1;
  uVar7 = (long)in_w1 + 1;
  if (uVar7 <= *(ulong *)(uVar8 + 0x80)) {
    pvVar3 = *(void **)(uVar8 + 0x70);
    uVar10 = *(ulong *)(uVar8 + 0x78);
LAB_03fece88:
    if (uVar10 <= uVar7) {
      uVar10 = uVar7;
    }
    *(ulong *)(uVar8 + 0x78) = uVar10;
    return (void *)((long)pvVar3 + (long)in_w1 * 8);
  }
  uVar6 = *(long *)(uVar8 + 0x68) * 2;
  if (uVar6 < uVar7 || uVar6 - uVar7 == 0) {
    uVar6 = uVar7;
  }
  if (0xffffffffffffffe < uVar7) {
    uVar6 = 0x1fffffffffffffff;
  }
  pvVar3 = realloc(*(void **)(uVar8 + 0x70),uVar6 * 8);
  if (pvVar3 != (void *)0x0) {
    uVar10 = *(ulong *)(uVar8 + 0x78);
    *(void **)(uVar8 + 0x70) = pvVar3;
    if ((long)uVar10 < (long)uVar6) {
      pvVar1 = (void *)(uVar6 * 8 + (long)pvVar3);
      __s = (void *)((long)pvVar3 + uVar10 * 8);
      pvVar4 = (void *)((long)__s + 8);
      if (pvVar4 <= pvVar1) {
        pvVar4 = pvVar1;
      }
      memset(__s,0,((long)pvVar4 + uVar10 * -8 + ~(ulong)pvVar3 & 0xfffffffffffffff8) + 8);
    }
    *(ulong *)(uVar8 + 0x80) = uVar6;
    goto LAB_03fece88;
  }
  uVar2 = *(uint *)(uVar8 + 0x20) | 1;
  *(uint *)(uVar8 + 0x20) = uVar2;
  if ((*(uint *)(uVar8 + 0x24) & uVar2) == 0) {
    uRam000000000974a168 = 0;
    return (void *)0x974a168;
  }
  auVar11 = FUN_03fed0cc("ios_base::clear");
  pvVar4 = auVar11._0_8_;
  lVar9 = *(long *)((long)pvVar4 + 0x48);
  uVar7 = lVar9 + 1;
  pvVar3 = pvVar4;
  if (*(ulong *)((long)pvVar4 + 0x50) < uVar7) {
    uVar8 = *(ulong *)((long)pvVar4 + 0x50) * 2;
    if (uVar8 < uVar7 || uVar8 - uVar7 == 0) {
      uVar8 = uVar7;
    }
    if (0xffffffffffffffe < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    pvVar3 = realloc(*(void **)((long)pvVar4 + 0x38),uVar8 << 3);
    if (pvVar3 == (void *)0x0) {
      uVar2 = *(uint *)((long)pvVar4 + 0x20) | 1;
      *(uint *)((long)pvVar4 + 0x20) = uVar2;
      if ((*(uint *)((long)pvVar4 + 0x24) & uVar2) != 0) goto LAB_03fecfc8;
    }
    *(void **)((long)pvVar4 + 0x38) = pvVar3;
    pvVar3 = realloc(*(void **)((long)pvVar4 + 0x40),uVar8 << 2);
    if (pvVar3 == (void *)0x0) {
      uVar2 = *(uint *)((long)pvVar4 + 0x20) | 1;
      *(uint *)((long)pvVar4 + 0x20) = uVar2;
      if ((*(uint *)((long)pvVar4 + 0x24) & uVar2) != 0) {
LAB_03fecfc8:
        puVar5 = (undefined8 *)FUN_03fed0cc("ios_base::clear");
        *puVar5 = &PTR__ios_base_08fa9f08;
        if (puVar5[9] != 0) {
          lVar9 = puVar5[9] + -1;
          do {
            (**(code **)(puVar5[7] + lVar9 * 8))(0,puVar5,*(undefined4 *)(puVar5[8] + lVar9 * 4));
            lVar9 = lVar9 + -1;
          } while (lVar9 != -1);
        }
        locale::~locale((locale *)(puVar5 + 6));
        free((void *)puVar5[7]);
        free((void *)puVar5[8]);
        free((void *)puVar5[0xb]);
        free((void *)puVar5[0xe]);
        return extraout_x0;
      }
    }
    lVar9 = *(long *)((long)pvVar4 + 0x48);
    *(void **)((long)pvVar4 + 0x40) = pvVar3;
    *(ulong *)((long)pvVar4 + 0x50) = uVar8;
    uVar7 = lVar9 + 1;
  }
  *(long *)(*(long *)((long)pvVar4 + 0x38) + lVar9 * 8) = auVar11._8_8_;
  *(undefined4 *)(*(long *)((long)pvVar4 + 0x40) + lVar9 * 4) = in_w2;
  *(ulong *)((long)pvVar4 + 0x48) = uVar7;
  return pvVar3;
}

