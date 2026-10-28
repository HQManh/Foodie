// rea decompile_all
// name: System.Type$$FilterAttributeImpl
// address: 0x75cfff4
// body: available
// range: 0x75cfff4-0x75d021f inclusive
// range: 0x75d02ac-0x75d02f3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75d0208 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75d020c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75d0214 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75d021c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75d02f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Type__FilterAttributeImpl(long *param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  
  if ((DAT_09521e05 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_09184518);
    FUN_03f5c2a4(&DAT_09188228);
    DAT_09521e05 = 1;
  }
  if (param_2 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_091870c0);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_091fb878);
    System_Reflection_InvalidFilterCriteriaException___ctor(uVar6,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091dc088);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar3 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  if (iVar3 != 8) {
    if (iVar3 == 4) {
      if (*(long *)(*param_2 + 0x40) != *(long *)(DAT_09535420 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_2);
      }
      puVar5 = (uint *)thunk_FUN_03f99594(param_2);
      lVar8 = *param_1;
      if ((*(byte *)(lVar8 + 0x130) < *(byte *)(DAT_09184518 + 0x130)) ||
         (*(long *)(*(long *)(lVar8 + 200) + (ulong)*(byte *)(DAT_09184518 + 0x130) * 8 + -8) !=
          DAT_09184518)) goto LAB_075d0204;
      uVar1 = *puVar5;
      uVar4 = (**(code **)(lVar8 + 600))(param_1,*(undefined8 *)(lVar8 + 0x260));
      if (((uVar1 & 7) != 0) && ((uVar4 & 7) != (uVar1 & 7))) {
        return 0;
      }
      if (((uVar1 >> 4 & 1) != 0) && ((uVar4 >> 4 & 1) == 0)) {
        return 0;
      }
      if (((uVar1 >> 5 & 1) != 0) && ((uVar4 >> 5 & 1) == 0)) {
        return 0;
      }
      if (((uVar1 >> 6 & 1) != 0) && ((uVar4 >> 6 & 1) == 0)) {
        return 0;
      }
      if (((uVar1 >> 7 & 1) != 0) && ((uVar4 >> 7 & 1) == 0)) {
        return 0;
      }
      uVar4 = uVar4 >> 0xd;
      uVar1 = uVar1 & 0x2000;
      goto LAB_075d01fc;
    }
    if (iVar3 != 1) {
      return 0;
    }
  }
  if (*(long *)(*param_2 + 0x40) != *(long *)(DAT_09535420 + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_2);
  }
  puVar5 = (uint *)thunk_FUN_03f99594(param_2);
  uVar1 = *puVar5;
  iVar3 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
  lVar8 = *param_1;
  if (iVar3 == 8) {
    plVar9 = &DAT_09188228;
  }
  else {
    plVar9 = &DAT_09182ac0;
  }
  bVar2 = *(byte *)(*plVar9 + 0x130);
  if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *plVar9)) {
LAB_075d0204:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_1);
  }
  uVar4 = (**(code **)(lVar8 + 0x268))(param_1,*(undefined8 *)(lVar8 + 0x270));
  if (((((((uVar1 & 7) != 0) && ((uVar4 & 7) != (uVar1 & 7))) ||
        (((uVar1 >> 4 & 1) != 0 && ((uVar4 >> 4 & 1) == 0)))) ||
       (((uVar1 >> 5 & 1) != 0 && ((uVar4 >> 5 & 1) == 0)))) ||
      (((uVar1 >> 6 & 1) != 0 && ((uVar4 >> 6 & 1) == 0)))) ||
     (((uVar1 >> 10 & 1) != 0 && ((uVar4 >> 10 & 1) == 0)))) {
    return 0;
  }
  uVar4 = uVar4 >> 0xb;
  uVar1 = uVar1 & 0x800;
LAB_075d01fc:
  if (uVar1 == 0) {
    return 1;
  }
  return uVar4 & 1;
}

