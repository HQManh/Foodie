// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ObjectWriter$$WriteRectangle
// address: 0x74c6258
// body: available
// range: 0x74c6258-0x74c649f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c6498 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74c649c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteRectangle
               (undefined8 param_1,undefined8 param_2,uint param_3,long param_4,long param_5,
               undefined8 param_6,long param_7)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  undefined4 *puVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  
  uVar15 = (ulong)param_3;
  if ((DAT_095214ac & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    DAT_095214ac = 1;
  }
  lVar6 = FUN_03f5c394(DAT_091801b8,uVar15);
  if ((param_7 == 0) || ((int)param_3 < 1)) {
    bVar4 = false;
    lVar7 = 0;
  }
  else {
    bVar4 = false;
    uVar11 = (ulong)param_3;
    piVar13 = (int *)(param_7 + 0x20);
    do {
      if (*(uint *)(param_7 + 0x18) <= param_3 - 1) {
LAB_074c6498:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar11 = uVar11 - 1;
      bVar4 = (bool)(*piVar13 != 0 | bVar4);
      piVar13 = piVar13 + 1;
    } while (uVar11 != 0);
    if (bVar4) {
      lVar7 = FUN_03f5c394(DAT_091801b8,uVar15);
      bVar4 = true;
    }
    else {
      bVar4 = false;
      lVar7 = 0;
    }
  }
  uVar16 = param_3 - 1;
  lVar1 = lVar6 + 0x20;
  while( true ) {
    lVar9 = lVar6;
    if ((bVar4) && (lVar9 = lVar7, 0 < (int)param_3)) {
      if (lVar6 == 0) break;
      uVar2 = *(uint *)(lVar6 + 0x18);
      uVar11 = 0;
      do {
        if (uVar2 == uVar11) goto LAB_074c6498;
        if (param_7 == 0) goto LAB_074c649c;
        if (*(uint *)(param_7 + 0x18) <= uVar11) goto LAB_074c6498;
        if (lVar7 == 0) goto LAB_074c649c;
        if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_074c6498;
        *(int *)(lVar7 + 0x20 + uVar11 * 4) =
             *(int *)(param_7 + 0x20 + uVar11 * 4) + *(int *)(lVar1 + uVar11 * 4);
        uVar11 = uVar11 + 1;
      } while (uVar15 != uVar11);
    }
    if (param_5 == 0) break;
    uVar8 = System_Array__GetValue(param_5,lVar9,0);
    System_Runtime_Serialization_Formatters_Binary_ObjectWriter__WriteArrayMember
              (param_1,param_2,param_6,uVar8);
    if ((int)uVar16 < 0) {
      return;
    }
    if (lVar6 == 0) break;
    uVar2 = *(uint *)(lVar6 + 0x18);
    iVar10 = 0;
    uVar11 = uVar15;
    while( true ) {
      if (uVar2 <= uVar16) goto LAB_074c6498;
      if (param_4 == 0) goto LAB_074c649c;
      uVar14 = (ulong)(uVar16 + iVar10);
      if (*(uint *)(param_4 + 0x18) <= uVar16 + iVar10) goto LAB_074c6498;
      iVar3 = *(int *)(lVar6 + uVar14 * 4 + 0x20);
      if (iVar3 < *(int *)(param_4 + uVar14 * 4 + 0x20) + -1) break;
      iVar10 = iVar10 + -1;
      uVar11 = (ulong)((int)uVar11 - 1);
      if ((int)(uVar16 + iVar10 + 1) < 1) {
        return;
      }
    }
    *(int *)(lVar1 + uVar14 * 4) = iVar3 + 1;
    if (((int)(uVar16 + iVar10) < (int)uVar16) && ((int)(uVar16 + iVar10 + 1) < (int)param_3)) {
      puVar12 = (undefined4 *)(lVar1 + (long)(int)uVar11 * 4);
      do {
        if (uVar2 <= param_3 + iVar10) goto LAB_074c6498;
        bVar5 = iVar10 != -1;
        iVar10 = iVar10 + 1;
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      } while (bVar5);
    }
  }
LAB_074c649c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

