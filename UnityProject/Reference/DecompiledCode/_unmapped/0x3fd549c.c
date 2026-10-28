// rea decompile_all
// name: FUN_03fd549c
// address: 0x3fd549c
// body: available
// range: 0x3fd549c-0x3fd566b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fd549c(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  uVar13 = param_2 + 0x3fU >> 6;
  if ((DAT_097480e0 != 0) && (iVar5 = FUN_0404be40(1,&DAT_097480e8), iVar5 != 0)) {
    FUN_03fcbfa4();
  }
  lVar12 = DAT_097488f0;
  if (DAT_097488e8 <= DAT_097488f0 + uVar13) {
    do {
      uVar9 = DAT_097488e8;
      if (DAT_097488e8 == 0) {
        DAT_09748788 = &LAB_03fd548c;
        if (DAT_097480e0 != 0) {
          DAT_097480e8 = 0;
        }
        uVar11 = 100;
      }
      else {
        if (DAT_097480e0 != 0) {
          DAT_097480e8 = 0;
        }
        if ((DAT_097488e8 >> 0x37 & 0xff) != 0) {
          return -1;
        }
        uVar11 = DAT_097488e8 << 1;
      }
      pvVar6 = (void *)FUN_03fd3310(uVar11 << 4,0);
      if (pvVar6 == (void *)0x0) {
        return -1;
      }
      if ((DAT_097480e0 != 0) && (iVar5 = FUN_0404be40(1,&DAT_097480e8), iVar5 != 0)) {
        FUN_03fcbfa4();
      }
      lVar12 = DAT_097488f0;
      pvVar3 = DAT_097488e0;
      uVar4 = DAT_097488e8;
      if ((uVar9 == DAT_097488e8) && (pvVar3 = pvVar6, uVar4 = uVar11, DAT_097488f0 != 0)) {
        memcpy(pvVar6,DAT_097488e0,DAT_097488f0 << 4);
      }
      DAT_097488e8 = uVar4;
      DAT_097488e0 = pvVar3;
    } while (DAT_097488e8 <= lVar12 + uVar13);
  }
  pvVar6 = DAT_097488e0;
  lVar2 = uVar13 - 1;
  if (lVar2 != 0) {
    puVar7 = (undefined4 *)((long)DAT_097488e0 + lVar12 * 0x10 + 8);
    puVar8 = param_1;
    lVar10 = lVar2;
    do {
      lVar10 = lVar10 + -1;
      *(undefined8 *)(puVar7 + -2) = *puVar8;
      *puVar7 = 1;
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 1;
    } while (lVar10 != 0);
  }
  uVar9 = param_1[lVar2];
  puVar1 = (ulong *)((long)pvVar6 + (lVar2 + lVar12) * 0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = uVar9 & 0xffffffffffffffffU >> (-param_2 & 0x3fU);
  if (DAT_097480e0 != 0) {
    DAT_097480e8 = 0;
  }
  DAT_097488f0 = DAT_097488f0 + uVar13;
  return lVar12;
}

