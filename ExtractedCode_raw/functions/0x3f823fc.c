// rea decompile_all
// name: FUN_03f823fc
// address: 0x3f823fc
// body: available
// range: 0x3f823fc-0x3f8257f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8257c to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f823fc(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  
  uVar7 = FUN_03faf580();
  *param_1 = uVar7;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar8 = FUN_03f967b4("IL2CPP Threadpool worker");
  FUN_03faf6bc(uVar7,uVar8);
  lVar4 = DAT_09534880;
  uVar7 = 0;
  do {
    iVar6 = (int)uVar7;
    uVar7 = FUN_0404bd00(uVar7,iVar6 + 1,lVar4 + 0xa0);
    iVar5 = (int)uVar7;
    lVar3 = DAT_09534880;
    if (iVar5 == iVar6) break;
  } while (iVar5 != 2);
  while (DAT_09534880 = lVar3, iVar5 != 0) {
    FUN_03fe02a8(lVar4 + 0xa0,2,0xffffffff);
    iVar5 = FUN_0404be70(2,lVar4 + 0xa0);
    lVar3 = DAT_09534880;
  }
  puVar12 = *(undefined8 **)(lVar3 + 0x78);
  if (puVar12 < *(undefined8 **)(lVar3 + 0x80)) {
    puVar14 = puVar12 + 1;
    *puVar12 = *param_1;
    *(undefined8 **)(lVar3 + 0x78) = puVar14;
  }
  else {
    lVar13 = (long)puVar12 - *(long *)(lVar3 + 0x70) >> 3;
    uVar1 = lVar13 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5fa4c(lVar3 + 0x70);
    }
    uVar10 = (long)*(undefined8 **)(lVar3 + 0x80) - *(long *)(lVar3 + 0x70);
    uVar11 = (long)uVar10 >> 2;
    if (uVar11 <= uVar1) {
      uVar11 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar11 = 0x1fffffffffffffff;
    }
    if (uVar11 == 0) {
      auVar15 = ZEXT816(0);
    }
    else {
      auVar15 = FUN_03f695c0();
    }
    puVar12 = (undefined8 *)(auVar15._0_8_ + lVar13 * 8);
    puVar14 = puVar12 + 1;
    *puVar12 = *param_1;
    puVar2 = *(undefined8 **)(lVar3 + 0x70);
    puVar9 = *(undefined8 **)(lVar3 + 0x78);
    if (puVar9 != puVar2) {
      do {
        puVar9 = puVar9 + -1;
        puVar12 = puVar12 + -1;
        *puVar12 = *puVar9;
      } while (puVar9 != puVar2);
      puVar9 = *(undefined8 **)(lVar3 + 0x70);
    }
    *(undefined8 **)(lVar3 + 0x70) = puVar12;
    *(undefined8 **)(lVar3 + 0x78) = puVar14;
    *(long *)(lVar3 + 0x80) = auVar15._0_8_ + auVar15._8_8_ * 8;
    if (puVar9 != (undefined8 *)0x0) {
      operator_delete(puVar9);
    }
  }
  *(undefined8 **)(lVar3 + 0x78) = puVar14;
  iVar6 = FUN_0404bea0(0,lVar4 + 0xa0);
  if (iVar6 == 2) {
    FUN_03fe0300(lVar4 + 0xa0,1,0);
  }
  return;
}

