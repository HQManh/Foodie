// rea decompile_all
// name: Coffee.UIEffects.ImageProxy$$ModifyExpandSize
// address: 0x43f689c
// body: available
// range: 0x43f689c-0x43f6a57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f6a54 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
Coffee_UIEffects_ImageProxy__ModifyExpandSize
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,long *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_28 = param_4;
  uStack_24 = param_3;
  local_18 = param_2;
  uStack_14 = param_1;
  if ((DAT_09517e15 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186ac0);
    DAT_09517e15 = 1;
  }
  if (param_6 != (long *)0x0) {
    if (*(byte *)(*param_6 + 0x130) < *(byte *)(DAT_09186ac0 + 0x130)) {
      return uStack_14;
    }
    if (*(long *)(*(long *)(*param_6 + 200) + (ulong)*(byte *)(DAT_09186ac0 + 0x130) * 8 + -8) !=
        DAT_09186ac0) {
      return uStack_14;
    }
    if ((int)param_6[0x1d] != 3) {
      return uStack_14;
    }
    if ((int)param_6[0x1e] != 4) {
      return uStack_14;
    }
    fVar7 = *(float *)((long)param_6 + 0xf4);
    if (0.5 < fVar7) {
      return uStack_14;
    }
    iVar2 = *(int *)((long)param_6 + 0xfc);
    uVar1 = iVar2 + (uint)*(byte *)(param_6 + 0x1f) * 2;
    uVar3 = -uVar1;
    uVar1 = uVar1 & 3;
    if (-1 < (int)uVar3) {
      uVar1 = -(uVar3 & 3);
    }
    if ((int)uVar1 < 2) {
      if (uVar1 == 0) {
        puVar6 = &uStack_14;
      }
      else {
        if (uVar1 != 1) goto LAB_043f6a10;
        puVar6 = &local_18;
      }
    }
    else if (uVar1 == 2) {
      puVar6 = &uStack_24;
    }
    else {
      if (uVar1 != 3) goto LAB_043f6a10;
      puVar6 = &local_28;
    }
    *puVar6 = 0;
    if (fVar7 <= 0.25) {
      uVar1 = iVar2 + 3;
      uVar3 = -uVar1;
      uVar1 = uVar1 & 3;
      if (-1 < (int)uVar3) {
        uVar1 = -(uVar3 & 3);
      }
      if ((int)uVar1 < 2) {
        if (uVar1 == 0) {
          puVar6 = &uStack_14;
        }
        else {
          if (uVar1 != 1) {
LAB_043f6a10:
            thunk_FUN_03fc39d4(&DAT_09186b90);
            uVar4 = thunk_FUN_03f9944c();
            uVar5 = thunk_FUN_03fc39d4(&DAT_09205468);
            System_IndexOutOfRangeException___ctor(uVar4,uVar5,0);
            uVar5 = thunk_FUN_03fc39d4(&DAT_091dec10);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar4,uVar5);
          }
          puVar6 = &local_18;
        }
      }
      else if (uVar1 == 2) {
        puVar6 = &uStack_24;
      }
      else {
        if (uVar1 != 3) goto LAB_043f6a10;
        puVar6 = &local_28;
      }
      *puVar6 = 0;
    }
  }
  return uStack_14;
}

