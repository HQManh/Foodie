// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamConeDisplay$$PlaceDecor
// address: 0x414b2c0
// body: available
// range: 0x414b2c0-0x414b3d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414b3bc to 0x866b604 UnityEngine.Transform$$set_localPosition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x414b3d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414b3d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IceCreamConeDisplay__PlaceDecor
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  if ((DAT_09516443 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516443 = 1;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_4 + 0x48);
  if (lVar5 == 0) goto LAB_0414b3d0;
  if (*(long *)(lVar5 + 0x18) == 0) {
    return;
  }
  if (*(char *)(param_4 + 0x5c) == '\0') {
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_0414b3d0;
    uVar7 = UnityEngine_Transform__get_localPosition(*(long *)(param_4 + 0x40),0);
    lVar5 = *(long *)(param_4 + 0x48);
    *(undefined4 *)(param_4 + 0x50) = uVar7;
    *(undefined4 *)(param_4 + 0x54) = param_2;
    *(undefined4 *)(param_4 + 0x58) = param_3;
    *(undefined1 *)(param_4 + 0x5c) = 1;
    if (lVar5 == 0) goto LAB_0414b3d0;
  }
  uVar2 = param_5 - 1;
  uVar3 = *(uint *)(lVar5 + 0x18) - 1;
  uVar1 = uVar2;
  if ((int)uVar3 <= (int)uVar2) {
    uVar1 = uVar3;
  }
  uVar3 = 0;
  if (-1 < (int)uVar2) {
    uVar3 = uVar1;
  }
  if (*(uint *)(lVar5 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  if (*(long *)(param_4 + 0x40) != 0) {
    uVar6 = *(undefined8 *)(lVar5 + (long)(int)uVar3 * 8 + 0x20);
    fVar8 = (float)((ulong)*(undefined8 *)(param_4 + 0x50) >> 0x20) + (float)((ulong)uVar6 >> 0x20);
    UnityEngine_Transform__set_localPosition
              (CONCAT44(fVar8,(float)*(undefined8 *)(param_4 + 0x50) + (float)uVar6),fVar8,
               *(float *)(param_4 + 0x58) + 0.0,*(long *)(param_4 + 0x40),0);
    return;
  }
LAB_0414b3d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

