// rea decompile_all
// name: System.Convert$$TryDecodeFromUtf16
// address: 0x7521cc4
// body: available
// range: 0x7521cc4-0x752204b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7522044 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7522048 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Convert__TryDecodeFromUtf16
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               uint *param_5,int *param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  ushort *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  
  if ((DAT_095217a2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_091d3028);
    FUN_03f5c2a4(&DAT_091d3030);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091ba928);
    DAT_095217a2 = 1;
  }
  lVar9 = FUN_04c072b4(param_1,param_2,DAT_091d3030);
  lVar10 = FUN_04c072b0(param_3,param_4,DAT_091d3028);
  uVar16 = (uint)param_2;
  if (uVar16 == 0) {
    uVar20 = 0;
    iVar18 = 0;
    bVar8 = true;
    goto LAB_07521f6c;
  }
  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar11 = **(long **)(DAT_09182b88 + 0xb8);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(lVar11 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar2 = uVar16 & 0xfffffffc;
  iVar17 = (int)param_4;
  if (iVar17 < ((int)uVar16 >> 2) * 3) {
    iVar13 = (iVar17 / 3) * 4;
  }
  else {
    iVar13 = uVar2 - 4;
  }
  lVar11 = lVar11 + 0x20;
  if (iVar13 < 1) {
    lVar19 = 0;
    uVar20 = 0;
  }
  else {
    lVar19 = 0;
    uVar20 = 0;
    puVar15 = (ushort *)(lVar9 + 4);
    do {
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((0xff < (ushort)(puVar15[-1] | puVar15[-2] | *puVar15 | puVar15[1])) ||
         (uVar7 = (int)*(char *)(lVar11 + (ulong)puVar15[-1]) << 0xc |
                  (int)*(char *)(lVar11 + (ulong)puVar15[-2]) << 0x12 |
                  (int)*(char *)(lVar11 + (ulong)puVar15[1]) |
                  (int)*(char *)(lVar11 + (ulong)*puVar15) << 6, (int)uVar7 < 0)) goto LAB_07521f64;
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar20 = uVar20 + 4;
      puVar1 = (undefined1 *)(lVar10 + lVar19);
      lVar19 = lVar19 + 3;
      puVar15 = puVar15 + 4;
      *puVar1 = (char)(uVar7 >> 0x10);
      puVar1[1] = (char)(uVar7 >> 8);
      puVar1[2] = (char)uVar7;
    } while ((int)uVar20 < iVar13);
  }
  iVar18 = (int)lVar19;
  if ((iVar13 == uVar2 - 4) && (uVar20 != uVar2)) {
    uVar3 = *(ushort *)(lVar9 + (long)(int)(uVar2 - 4) * 2);
    uVar4 = *(ushort *)(lVar9 + (long)(int)(uVar2 - 3) * 2);
    uVar5 = *(ushort *)(lVar9 + (long)(int)(uVar2 - 2) * 2);
    uVar6 = *(ushort *)(lVar9 + (long)(int)(uVar2 - 1) * 2);
    if ((ushort)(uVar4 | uVar3 | uVar5 | uVar6) < 0x100) {
      uVar7 = (int)*(char *)(lVar11 + (ulong)uVar4) << 0xc |
              (int)*(char *)(lVar11 + (ulong)uVar3) << 0x12;
      if (uVar6 == 0x3d) {
        if (uVar5 == 0x3d) {
          bVar8 = false;
          if (((int)uVar7 < 0) || (iVar17 + -1 < iVar18)) goto LAB_07521f6c;
          puVar12 = (undefined1 *)(lVar10 + iVar18);
          uVar14 = uVar7 >> 0x10;
          iVar17 = 1;
        }
        else {
          bVar8 = false;
          uVar7 = uVar7 | (int)*(char *)(lVar11 + (ulong)(uint)uVar5) << 6;
          if ((int)uVar7 < 0) goto LAB_07521f68;
          if (iVar17 + -2 < iVar18) goto LAB_07521f6c;
          uVar14 = uVar7 >> 8;
          puVar12 = (undefined1 *)(lVar10 + (iVar18 + 1));
          *(char *)(lVar10 + iVar18) = (char)(uVar7 >> 0x10);
          iVar17 = 2;
        }
      }
      else {
        bVar8 = false;
        uVar14 = (int)*(char *)(lVar11 + (ulong)uVar6) | (int)*(char *)(lVar11 + (ulong)uVar5) << 6;
        uVar7 = uVar14 | uVar7;
        if ((int)uVar7 < 0) goto LAB_07521f68;
        if (iVar17 + -3 < iVar18) goto LAB_07521f6c;
        puVar1 = (undefined1 *)(lVar10 + iVar18);
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        *puVar1 = (char)(uVar7 >> 0x10);
        puVar12 = puVar1 + 2;
        puVar1[1] = (char)(uVar7 >> 8);
        iVar17 = 3;
      }
      bVar8 = uVar2 == uVar16;
      *puVar12 = (char)uVar14;
      iVar18 = iVar18 + iVar17;
      uVar20 = uVar20 + 4;
      goto LAB_07521f6c;
    }
LAB_07521f64:
    iVar18 = (int)lVar19;
  }
LAB_07521f68:
  bVar8 = false;
LAB_07521f6c:
  *param_5 = uVar20;
  *param_6 = iVar18;
  return bVar8;
}

