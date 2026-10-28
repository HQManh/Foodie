// rea decompile_all
// name: System.Buffers.Text.Number$$DecimalToNumber
// address: 0x75632d4
// body: available
// range: 0x75632d4-0x75634db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75634d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75634d8 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Buffers_Text_Number__DecimalToNumber(undefined8 param_1,ulong param_2,int *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = param_1;
  local_50 = param_2;
  if ((DAT_095219d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba8e8);
    DAT_095219d0 = 1;
  }
  bVar4 = System_MutableDecimal__get_IsNegative(&local_58,0);
  *(byte *)(param_3 + 1) = bVar4 & 1;
  if (local_58._4_4_ == 0 && local_50._4_4_ == 0) {
    uVar13 = 0x1d;
  }
  else {
    uVar10 = 0x1d;
    do {
      uVar9 = uVar10;
      uVar6 = System_DecimalDecCalc__DecDivMod1E9(&local_58,0);
      iVar5 = 0;
      uVar11 = uVar9 & 0xffffffff;
      do {
        uVar10 = uVar11 - 1;
        if (0x32 < uVar10) goto LAB_075634c4;
        iVar5 = iVar5 + 1;
        uVar3 = (uVar6 & 0xffffffff) / 10;
        *(byte *)((long)param_3 + uVar11 + 4) = (char)uVar6 + (char)uVar3 * -10 | 0x30;
        uVar6 = uVar3;
        uVar11 = uVar10;
      } while (iVar5 != 9);
    } while (local_58._4_4_ != 0 || local_50._4_4_ != 0);
    uVar13 = (int)uVar9 - 9;
  }
  puVar1 = (undefined1 *)((long)param_3 + 5);
  uVar10 = local_50;
  if ((int)local_50 != 0) {
    do {
      uVar13 = uVar13 - 1;
      if (0x32 < uVar13) goto LAB_075634c4;
      uVar7 = (uint)uVar10;
      uVar6 = (uVar10 & 0xffffffff) / 10;
      puVar1[uVar13] = (char)(uVar10 & 0xffffffff) + (char)uVar6 * -10 | 0x30;
      uVar10 = uVar6;
    } while (9 < uVar7);
  }
  iVar5 = System_MutableDecimal__get_Scale(&local_58,0);
  bVar4 = DAT_095219d0;
  *param_3 = (0x1d - uVar13) - iVar5;
  if ((bVar4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba8e8);
    DAT_095219d0 = 1;
  }
  if (uVar13 < 0x1d) {
    lVar8 = 0;
    puVar12 = puVar1;
    do {
      if ((lVar8 == -0x33) || (-lVar8 == (ulong)(0x33 - uVar13))) goto LAB_075634c4;
      lVar8 = lVar8 + -1;
      *puVar12 = puVar12[uVar13];
      puVar12 = puVar12 + 1;
    } while (-1 < (int)((0x1c - uVar13) + (int)lVar8));
    if (0x32 < (uint)-(int)lVar8) {
LAB_075634c4:
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      goto LAB_075634d8;
    }
    uVar10 = -lVar8;
  }
  else {
    uVar10 = 0;
  }
  puVar1[uVar10 & 0xffffffff] = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_075634d8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

